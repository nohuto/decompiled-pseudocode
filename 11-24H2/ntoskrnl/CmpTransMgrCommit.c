/*
 * XREFs of CmpTransMgrCommit @ 0x140A008C8
 * Callers:
 *     CmpLazyCommitWorker @ 0x1407DE690 (CmpLazyCommitWorker.c)
 *     CmpRmUnDoPhase @ 0x1407E10E8 (CmpRmUnDoPhase.c)
 *     CmKtmNotification @ 0x140A00E10 (CmKtmNotification.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     CmpCommitLightWeightTransaction @ 0x140A02A20 (CmpCommitLightWeightTransaction.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmpTransMgrCommit(__int64 a1, __int64 a2, _DWORD *a3)
{
  char v4; // si
  __int64 QuadPart; // rbx
  int v6; // edi
  LARGE_INTEGER Interval; // [rsp+30h] [rbp-39h] BYREF
  __int128 v9; // [rsp+38h] [rbp-31h] BYREF
  __int64 v10; // [rsp+48h] [rbp-21h]
  __int64 v11; // [rsp+50h] [rbp-19h]
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13[2]; // [rsp+88h] [rbp+1Fh] BYREF

  Interval.HighPart = -1;
  *a3 = 0;
  DWORD1(v9) = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  Interval.LowPart = -1000000;
  if ( (unsigned int)dword_140E09F58 > 5 && tlgKeywordOn((__int64)&dword_140E09F58, 1LL) )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09F58, (unsigned __int8 *)byte_14005621D, 0LL, 0LL, 2u, v13);
  CmpAttachToRegistryProcess(&ApcState);
  v4 = 1;
  v11 = 1LL;
  v10 = a2;
  QuadPart = Interval.QuadPart;
  v9 = 0LL;
  do
  {
    if ( v4 )
    {
      v4 = 0;
    }
    else
    {
      KeDelayExecutionThread(0, 0, &Interval);
      QuadPart *= 2LL;
      Interval.QuadPart = QuadPart;
      if ( QuadPart > -300000000 )
      {
        QuadPart = -300000000LL;
        Interval.QuadPart = -300000000LL;
      }
    }
    LODWORD(v9) = 0;
    v6 = CmpCommitLightWeightTransaction(&v9);
  }
  while ( v6 < 0 );
  CmpDetachFromRegistryProcess(&ApcState);
  if ( (unsigned int)dword_140E09F58 > 5 && tlgKeywordOn((__int64)&dword_140E09F58, 1LL) )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09F58, (unsigned __int8 *)byte_14005623F, 0LL, 0LL, 2u, v13);
  return (unsigned int)v6;
}
