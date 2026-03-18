/*
 * XREFs of ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1400218E4
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x14001C294 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1402FEE34 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 * Callees:
 *     ??$GrepReleaseLockValidate@$02@@YAXXZ @ 0x14001F228 (--$GrepReleaseLockValidate@$02@@YAXXZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x140020810 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ??0?$SEMOBJSHARED@$02@@QEAA@XZ @ 0x140021B3C (--0-$SEMOBJSHARED@$02@@QEAA@XZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x140148174 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bDisposeTrgDco(DEVLOCKBLTOBJ *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rdx
  int v5; // eax
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rcx
  XDCOBJ *v11; // rdi
  __int64 v12; // rax
  struct _DC_ATTR *UserAttr; // rax
  DC *v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rsi
  _QWORD *v19; // rax
  HSEMAPHORE v20; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 15);
  if ( v2 && *((_BYTE *)this + 193) )
  {
    v3 = *(_QWORD *)(v2 + 48);
    if ( (*((_DWORD *)this + 28) & 0x10) != 0 )
    {
      *(_DWORD *)(v2 + 36) &= ~0x4000u;
      DC::pSurface(*((DC **)this + 15), *(struct SURFACE **)(v3 + 2544));
    }
    v4 = *((_QWORD *)this + 15);
    if ( v4
      && (*((_DWORD *)this + 28) & 0x1000) != 0
      && (!*((_QWORD *)this + 25)
       || !*((_BYTE *)this + 273)
       || !*((_BYTE *)this + 193)
       || **((_QWORD **)this + 25) != *(_QWORD *)v4) )
    {
      v5 = *(_DWORD *)(v4 + 36);
      if ( (v5 & 0x200) != 0 )
      {
        if ( (v5 & 0x4000) == 0 )
        {
          CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged();
          v7 = CurrentThreadNonPaged ? *CurrentThreadNonPaged : 0LL;
          v8 = v7 + 8;
          v9 = -v7;
          if ( (v8 & -(__int64)(v9 != 0)) != 0 )
            *(_DWORD *)((v8 & -(__int64)(v9 != 0)) + 0x158) &= ~1u;
        }
        v10 = (_QWORD *)*((_QWORD *)this + 15);
        if ( v10 && *((_BYTE *)this + 193) && !*((_QWORD *)this + 36)
          || (v19 = (_QWORD *)*((_QWORD *)this + 25)) != 0LL
          && *((_BYTE *)this + 273)
          && *v10 == *v19
          && !*((_QWORD *)this + 39) )
        {
          SEMOBJSHARED<3>::SEMOBJSHARED<3>(&v20);
          DC::vClearRendering(*((DC **)this + 15));
          EtwTraceGreLockReleaseSemaphore(L"DCVisRgn", v20);
          GrepReleaseLockValidate<3>();
          GreReleaseSemaphoreSharedInternal(v20);
        }
      }
    }
    v11 = (DEVLOCKBLTOBJ *)((char *)this + 120);
    v12 = *((_QWORD *)this + 15);
    if ( v12 && *((_BYTE *)this + 192) )
    {
      *(_DWORD *)(v12 + 40) &= ~2u;
      *((_BYTE *)this + 192) = 0;
    }
    if ( *(_QWORD *)v11 )
    {
      if ( *((_DWORD *)this + 32) && (*(_DWORD *)(*(_QWORD *)v11 + 44LL) & 2) != 0 )
      {
        if ( (*((_DWORD *)this + 38) & 2) == 0 )
        {
          UserAttr = XDCOBJ::GetUserAttr(v11);
          if ( UserAttr )
            DC::RestoreAttributes(*(DC **)v11, UserAttr);
        }
        *(_DWORD *)(*(_QWORD *)v11 + 44LL) &= ~2u;
        *((_DWORD *)this + 32) = 0;
      }
      v14 = *(DC **)v11;
      v15 = *((unsigned int *)this + 38);
      v16 = *((_QWORD *)this + 17);
      LODWORD(v20) = 0;
      v17 = *(_QWORD *)v14;
      HmgDecrementExclusiveReferenceCountExFastOpt(v16, v14, v15, &v20);
      if ( (_DWORD)v20 )
        GrepDeleteDC(v17, 0x2000000LL);
    }
    *((_QWORD *)this + 15) = 0LL;
  }
  return 1LL;
}
