/*
 * XREFs of NtGdiOffsetClipRgn @ 0x1C02A9630
 * Callers:
 *     <none>
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0076170 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C00BB358 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00BB868 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00BE394 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C00FF350 (-bTightenRao@DC@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011C6C4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C011C834 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C0264948 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall NtGdiOffsetClipRgn(HDC a1, LONG a2, LONG a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rax
  unsigned int v7; // ecx
  __int64 v8; // rcx
  struct REGION *v10; // rax
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // [rsp+30h] [rbp-89h] BYREF
  __int64 v16; // [rsp+38h] [rbp-81h] BYREF
  __int64 v17; // [rsp+40h] [rbp-79h] BYREF
  DC *v18[2]; // [rsp+48h] [rbp-71h] BYREF
  _BYTE v19[32]; // [rsp+58h] [rbp-61h] BYREF
  _QWORD v20[3]; // [rsp+78h] [rbp-41h] BYREF
  _BYTE v21[32]; // [rsp+90h] [rbp-29h] BYREF
  _QWORD v22[2]; // [rsp+B0h] [rbp-9h] BYREF
  _BYTE v23[64]; // [rsp+C0h] [rbp+7h] BYREF
  struct _POINTL v24; // [rsp+138h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v18, a1);
  v5 = 0;
  if ( !v18[0] )
  {
LABEL_2:
    EngSetLastError(6u);
LABEL_25:
    DCOBJ::~DCOBJ((DCOBJ *)v18);
    return 0LL;
  }
  if ( *((_WORD *)v18[0] + 6) > 1u )
  {
    v6 = *((_QWORD *)v18[0] + 6);
    if ( v6 )
      v7 = *(_DWORD *)(v6 + 40);
    else
      v7 = 0;
    TraceLoggingWriteUnsupportedGdiUsage(13, v7, *((unsigned __int16 *)v18[0] + 6), 0LL, 0LL);
    goto LABEL_2;
  }
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v22);
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v21, (struct XDCOBJ *)v18, 1);
  if ( (v21[24] & 1) == 0 )
  {
LABEL_14:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v21);
    DCOBJ::~DCOBJ((DCOBJ *)v18);
    return v5;
  }
  v8 = *((_QWORD *)v18[0] + 20);
  if ( !v8 )
  {
    v5 = 2;
    goto LABEL_14;
  }
  if ( *(_DWORD *)(v8 + 76) > 1u )
  {
    v16 = *((_QWORD *)v18[0] + 20);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v15, *(_DWORD *)(v8 + 48));
    if ( !v15 )
    {
      EngSetLastError(8u);
      goto LABEL_14;
    }
    RGNOBJ::vCopy((RGNOBJ *)&v15, (struct RGNOBJ *)&v16);
    v8 = v15;
    ++*(_DWORD *)(v15 + 76);
    --*(_DWORD *)(v16 + 76);
    *((_QWORD *)v18[0] + 20) = v8;
  }
  v17 = v8;
  v24.x = a2;
  v24.y = a3;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v20, (struct XDCOBJ *)v18, -2147483132);
  if ( (*(_DWORD *)(v20[0] + 32LL) & 2) == 0
    && !EXFORMOBJ::bXform((EXFORMOBJ *)v20, (struct _VECTORL *)&v24, (struct _VECTORL *)&v24, 1uLL)
    || !RGNOBJ::bOffset((RGNOBJ *)&v17, &v24) )
  {
    EngSetLastError(0x3EBu);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v21);
    goto LABEL_25;
  }
  DC::bTightenRao(v18[0]);
  v10 = DC::prgnVisSnap(v18[0]);
  DC::vUpdate_VisRect(v18[0], v10);
  v11 = RGNOBJ::iComplexity((RGNOBJ *)&v17);
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v21, v12, v13, v14);
  if ( v22[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v22);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v23);
  if ( v18[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v18);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v19);
  return v11;
}
