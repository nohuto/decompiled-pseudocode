/*
 * XREFs of NtGdiSelectBitmap @ 0x1C0064470
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C0264948 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C026632C (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C02C1418 (--1MDCOBJ@@QEAA@XZ.c)
 */

HBITMAP __fastcall NtGdiSelectBitmap(__int64 a1, HBITMAP a2)
{
  HBITMAP v2; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  bool v6; // zf
  struct UMPDOBJ *v7; // rax
  DC *v8; // rdx
  int v9; // ebx
  struct _DC_ATTR *UserAttr; // rax
  __int64 v12; // rcx
  unsigned int v13; // eax
  HBITMAP v14; // rax
  DC *v15; // r9
  HBITMAP v16; // rdi
  struct _DC_ATTR *v17; // rax
  __int64 v18; // rbx
  DC *v19; // [rsp+30h] [rbp-10h] BYREF
  __int64 v20; // [rsp+38h] [rbp-8h]
  int v21; // [rsp+60h] [rbp+20h] BYREF

  v2 = a2;
  LOBYTE(a2) = 1;
  v20 = 0LL;
  v19 = (DC *)HmgLockEx(a1, a2, 0LL);
  if ( v19 )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( !ThreadWin32Thread
      || (v4 = *ThreadWin32Thread) == 0
      || (v5 = *(_QWORD *)(v4 + 40), v6 = v5 == v4 + 40, v7 = (struct UMPDOBJ *)(v5 - 40), v6) )
    {
      v7 = 0LL;
    }
    v8 = v19;
    if ( *((_WORD *)v19 + 6) == 1 )
    {
      *((_QWORD *)v19 + 271) = v7;
      *((_DWORD *)v19 + 544) = 0xFFFF;
      v8 = v19;
    }
    else if ( *((struct UMPDOBJ **)v19 + 271) != v7 )
    {
      XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v19, v7);
      goto LABEL_17;
    }
    if ( HIDWORD(v20) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)v8 + 6) + 40LL) & 0x8000) == 0 )
      {
LABEL_12:
        _InterlockedDecrement((volatile signed __int32 *)v8 + 3);
LABEL_13:
        v19 = 0LL;
LABEL_14:
        MDCOBJ::~MDCOBJ((MDCOBJ *)&v19);
        return 0LL;
      }
      v9 = *((_DWORD *)v8 + 528);
      if ( v9 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v8 = v19;
        goto LABEL_12;
      }
    }
    else
    {
      if ( !*((_DWORD *)v8 + 528) )
        goto LABEL_24;
      *((_DWORD *)v8 + 528) = 0;
    }
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
  v8 = v19;
LABEL_24:
  if ( !v8 )
    goto LABEL_14;
  if ( (*((_DWORD *)v8 + 11) & 2) == 0 )
  {
    if ( HIDWORD(v20) )
    {
LABEL_30:
      *((_DWORD *)v8 + 11) |= 2u;
      v8 = v19;
      LODWORD(v20) = 1;
      goto LABEL_31;
    }
    UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v19);
    if ( !UserAttr || DC::SaveAttributes(v19, UserAttr) )
    {
      v8 = v19;
      goto LABEL_30;
    }
LABEL_17:
    _InterlockedDecrement((volatile signed __int32 *)v19 + 3);
    goto LABEL_13;
  }
LABEL_31:
  if ( (*((_DWORD *)v8 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v8);
    v8 = v19;
  }
  if ( !v8 )
    goto LABEL_14;
  if ( *((unsigned __int16 *)v8 + 6) > 1u )
  {
    v12 = *((_QWORD *)v8 + 6);
    if ( v12 )
      v13 = *(_DWORD *)(v12 + 40);
    else
      v13 = 0;
    TraceLoggingWriteUnsupportedGdiUsage(1LL, v13, *((unsigned __int16 *)v8 + 6));
    goto LABEL_14;
  }
  v14 = hbmSelectBitmapInternal((struct XDCOBJ *)&v19, v2, 0, 0, 0);
  v15 = v19;
  v16 = v14;
  if ( v19 )
  {
    if ( (_DWORD)v20 && (*((_DWORD *)v19 + 11) & 2) != 0 )
    {
      if ( !HIDWORD(v20) )
      {
        v17 = XDCOBJ::GetUserAttr((XDCOBJ *)&v19);
        if ( v17 )
          DC::RestoreAttributes(v19, v17);
        v15 = v19;
      }
      *((_DWORD *)v15 + 11) &= ~2u;
      v15 = v19;
      LODWORD(v20) = 0;
    }
    v21 = 0;
    v18 = *(_QWORD *)v15;
    HmgDecrementExclusiveReferenceCountEx(v15, HIDWORD(v20), &v21);
    if ( v21 )
      GrepDeleteDC(v18, 0x2000000LL);
  }
  return v16;
}
