/*
 * XREFs of ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x140336620
 * Callers:
 *     ?OnHostReady@UmfdHostLifeTimeManager@@SAXXZ @ 0x14025E048 (-OnHostReady@UmfdHostLifeTimeManager@@SAXXZ.c)
 * Callees:
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x14005EDEC (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400BB04C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400BBE78 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x1401D5290 (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 *     ?TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x140220F04 (-TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 *     ?HFFToPPFF@PFTOBJ@@QEAAPEAVPFF@@_K@Z @ 0x14030DCA8 (-HFFToPPFF@PFTOBJ@@QEAAPEAVPFF@@_K@Z.c)
 *     ?TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x140336748 (-TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 */

void __fastcall UmfdHostLifeTimeManager::TryResurrectPffApcRoutine(void *a1, _BYTE *a2, struct PFF *a3)
{
  _QWORD *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v10[3]; // [rsp+40h] [rbp-18h] BYREF
  HSEMAPHORE v11; // [rsp+68h] [rbp+10h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  if ( a2 )
  {
    v5 = (_QWORD *)(*(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96) + 4872LL);
    SEMOBJ<17>::SEMOBJ<17>(&v11, (__int64)v5);
    v5[2416] = KeGetCurrentThread();
    if ( a3
      || v5[1943] && (v9 = v5[1943], (a3 = PFTOBJ::HFFToPPFF((PFTOBJ *)&v9)) != 0LL)
      || v5[1942] && (v10[0] = v5[1942], (a3 = PFTOBJ::HFFToPPFF((PFTOBJ *)v10)) != 0LL) )
    {
      if ( a2[24] )
      {
        if ( UmfdHostLifeTimeManager::EnsureUmfdHost(v7, v6, v8) )
        {
          if ( UmfdHostLifeTimeManager::TryResurrectHff((__int64)a2, a3) )
          {
            v12 = *((_QWORD *)a3 + 12);
            if ( (unsigned int)PDEVOBJ::QueryFontFile((PDEVOBJ *)&v12, (__int64)a2, 2u, 0, 0LL) == *((_DWORD *)a3 + 54)
              && UmfdHostLifeTimeManager::TryResurrectUmfdAllocations((unsigned __int64)a2, a3) )
            {
              a2[24] = 0;
            }
          }
        }
      }
    }
    v5[2416] = 0LL;
    SEMOBJ<17>::vUnlock(&v11);
  }
}
