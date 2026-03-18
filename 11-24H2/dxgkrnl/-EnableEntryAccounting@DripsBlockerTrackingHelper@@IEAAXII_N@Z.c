/*
 * XREFs of ?EnableEntryAccounting@DripsBlockerTrackingHelper@@IEAAXII_N@Z @ 0x1402E7858
 * Callers:
 *     ?EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z @ 0x1401CB690 (-EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z.c)
 *     ?EnableAccountingForProcess@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1402E658C (-EnableAccountingForProcess@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z.c)
 *     ?FinalizeTracking@DripsBlockerTrackingHelper@@QEAAXXZ @ 0x1403F0F5C (-FinalizeTracking@DripsBlockerTrackingHelper@@QEAAXXZ.c)
 * Callees:
 *     ?AddActiveTime@DripsBlockerTrackingHelper@@IEAAXII@Z @ 0x1402E7990 (-AddActiveTime@DripsBlockerTrackingHelper@@IEAAXII@Z.c)
 */

void __fastcall DripsBlockerTrackingHelper::EnableEntryAccounting(
        DripsBlockerTrackingHelper *this,
        unsigned int a2,
        unsigned int a3,
        char a4)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rdi

  v5 = 4720LL * a2;
  v6 = a3;
  if ( a4 )
  {
    v8 = v5 + 72LL * a3;
    if ( !*((_BYTE *)this + v8 + 112) && !*((_BYTE *)this + 302104) )
    {
      *(LARGE_INTEGER *)((char *)this + v8 + 120) = KeQueryPerformanceCounter(0LL);
      *((_BYTE *)this + v8 + 112) = 1;
    }
  }
  else
  {
    v7 = v5 + 72LL * a3;
    if ( *((_BYTE *)this + v7 + 112) == 1 )
    {
      DripsBlockerTrackingHelper::AddActiveTime(this, a2, a3);
      *((_BYTE *)this + v7 + 112) = 0;
      *(_DWORD *)((char *)this + 72 * v6 + v5 + 144) = 0;
    }
  }
}
