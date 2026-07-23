/*
 * XREFs of KiSendSoftwareInterruptAffinity @ 0x1402852DC
 * Callers:
 *     KiAbDeferredProcessingWorker @ 0x140283660 (KiAbDeferredProcessingWorker.c)
 *     KiExecuteAllDpcs @ 0x1402858E0 (KiExecuteAllDpcs.c)
 *     KiReadyDeferredReadyList @ 0x1402A7E10 (KiReadyDeferredReadyList.c)
 *     KiProcessDeferredReadyList @ 0x1402C5F60 (KiProcessDeferredReadyList.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403BD660 (KiSearchForNewThreadsOnTarget.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x1402C8970 (HalpInterruptSendIpi.c)
 */

__int64 __fastcall KiSendSoftwareInterruptAffinity(unsigned __int16 *a1, char a2)
{
  unsigned int v3; // r9d
  struct _KPRCB *CurrentPrcb; // rax
  __int64 result; // rax
  unsigned __int16 v6; // dx
  unsigned __int16 i; // cx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+30h] [rbp-18h]

  v3 = 31;
  if ( a2 != 1 )
    v3 = 47;
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 0LL;
  ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
  result = 0LL;
  v9 = 0;
  if ( a1 )
  {
    v6 = *a1;
    for ( i = 0; i < v6; ++i )
    {
      result = i;
      if ( *(_QWORD *)&a1[4 * i + 4] )
      {
        LODWORD(v8) = 2;
        *((_QWORD *)&v8 + 1) = a1;
        return HalpInterruptSendIpi(&v8, v3);
      }
    }
  }
  return result;
}
