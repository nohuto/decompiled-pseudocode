/*
 * XREFs of ?GreSetDIBitsInternal@@YAHPEAUHDC__@@PEAUHBITMAP__@@IIAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@IIPEAX@Z @ 0x1C02DD460
 * Callers:
 *     ?GreCreateDIBitmapComp@@YAPEAUHBITMAP__@@PEAUHDC__@@HHKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAX@Z @ 0x1C02DD32C (-GreCreateDIBitmapComp@@YAPEAUHBITMAP__@@PEAUHDC__@@HHKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEA.c)
 *     GreSetDIBits @ 0x1C02DDD08 (GreSetDIBits.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C004CC34 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1C00BEBE0 (-GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIH.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetDIBitsInternal(
        HDC a1,
        HSURF a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        unsigned int *a6,
        unsigned int a7,
        unsigned int a8,
        __int64 a9)
{
  __int64 v9; // r15
  unsigned int v10; // r13d
  int v11; // r12d
  int v14; // esi
  struct Gre::Base::SESSION_GLOBALS *v15; // rbp
  HDC CompatibleDC; // rbx
  int v17; // ebp
  __int64 v18; // rbp
  _BYTE v20[32]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v21; // [rsp+A0h] [rbp-78h]
  _QWORD v22[2]; // [rsp+A8h] [rbp-70h] BYREF
  _BYTE v23[96]; // [rsp+B8h] [rbp-60h] BYREF
  int v25; // [rsp+130h] [rbp+18h]

  v9 = 0LL;
  v10 = 0;
  v11 = 0;
  if ( a6 && (*a6 < 0x28 || a6[4] - 4 > 1) )
  {
    v14 = a6[2];
    v25 = a6[1];
    if ( v14 < 0 )
      v14 = -v14;
    v15 = Gre::Base::Globals((Gre::Base *)a1);
    GreAcquireSemaphoreSharedInternal(*((_QWORD *)v15 + 10));
    EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDynamicModeChange", *((_QWORD *)v15 + 10));
    SURFREF::SURFREF((SURFREF *)v20, a2);
    if ( v21 && (*(_DWORD *)(v21 + 112) & 0x4000000) != 0 )
    {
      if ( *(_DWORD *)(v21 + 168) )
        CompatibleDC = *(HDC *)(v21 + 160);
      else
        CompatibleDC = 0LL;
      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
      GreReleaseSemaphoreInternal(*((_QWORD *)v15 + 10));
      if ( CompatibleDC || (CompatibleDC = (HDC)GreCreateCompatibleDC(a1), v11 = 1, CompatibleDC) )
      {
        v17 = 1;
        if ( !a1 || a1 == CompatibleDC )
          goto LABEL_21;
        DCOBJ::DCOBJ((DCOBJ *)v22, a1);
        if ( v22[0] )
        {
          v9 = GreSelectPalette(CompatibleDC, *(_QWORD *)(v22[0] + 80LL), 1LL);
        }
        else
        {
          EngSetLastError(6u);
          v17 = 0;
        }
        if ( v22[0] )
          XDCOBJ::vUnlockFast((XDCOBJ *)v22);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v23);
        if ( v17 )
        {
LABEL_21:
          v18 = GreSelectBitmap(CompatibleDC, a2);
          if ( v18 )
          {
            v10 = GreSetDIBitsToDeviceInternalImpl(CompatibleDC, 0, 0, v25, v14, 0, 0, 0, a4, a5, a6, a7, a8, 0, a9);
            if ( v9 )
              GreSelectPalette(CompatibleDC, v9, 1LL);
            GreSelectBitmap(CompatibleDC, v18);
          }
        }
        if ( v11 )
          GrepDeleteDC(CompatibleDC, 0x400000LL);
      }
    }
    else
    {
      EngSetLastError(6u);
      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
      GreReleaseSemaphoreInternal(*((_QWORD *)v15 + 10));
    }
    if ( v21 )
      DEC_SHARE_REF_CNT(v21);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v20);
  }
  else
  {
    EngSetLastError(0x57u);
  }
  return v10;
}
