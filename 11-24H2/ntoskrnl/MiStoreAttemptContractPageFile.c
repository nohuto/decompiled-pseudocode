/*
 * XREFs of MiStoreAttemptContractPageFile @ 0x1404770D4
 * Callers:
 *     MiStoreEvictThread @ 0x140476E20 (MiStoreEvictThread.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     KeInsertQueueApc @ 0x1402DF360 (KeInsertQueueApc.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     MiStoreCheckContractPageFile @ 0x1404771DC (MiStoreCheckContractPageFile.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall MiStoreAttemptContractPageFile(__int64 a1)
{
  struct _EX_RUNDOWN_REF *v2; // rsi
  unsigned __int64 Count; // rax
  __int16 Object; // [rsp+38h] [rbp-29h] BYREF
  char v5; // [rsp+3Ah] [rbp-27h]
  char v6; // [rsp+3Bh] [rbp-26h]
  int v7; // [rsp+3Ch] [rbp-25h]
  _QWORD v8[3]; // [rsp+40h] [rbp-21h] BYREF
  __int16 v9; // [rsp+58h] [rbp-9h] BYREF
  char v10; // [rsp+5Ah] [rbp-7h]
  unsigned __int64 v11; // [rsp+60h] [rbp-1h]
  __int64 (__fastcall *v12)(); // [rsp+78h] [rbp+17h]
  __int64 v13; // [rsp+80h] [rbp+1Fh]
  LONG (__fastcall *v14)(__int64, struct _KEVENT *); // [rsp+88h] [rbp+27h]
  __int64 v15; // [rsp+90h] [rbp+2Fh]
  __int16 v16; // [rsp+A8h] [rbp+47h]
  char v17; // [rsp+AAh] [rbp+49h]

  memset_0(&v9, 0, 0x58uLL);
  v2 = *(struct _EX_RUNDOWN_REF **)(a1 + 216);
  v6 = 0;
  if ( (unsigned int)MiStoreCheckContractPageFile(a1) )
  {
    if ( ExAcquireRundownProtection_0(v2 + 125) )
    {
      Object = 0;
      v7 = 0;
      v8[1] = v8;
      v5 = 6;
      v8[0] = v8;
      Count = v2[124].Count;
      v16 = 0;
      v13 = 0LL;
      v11 = Count;
      v12 = xHalTimerWatchdogStop;
      v14 = MiStoreContractVirtualPagefileApc;
      v9 = 18;
      v10 = 88;
      v15 = a1;
      v17 = 0;
      KeInsertQueueApc((__int64)&v9, (__int64)&Object, 0LL, 0);
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      ExReleaseRundownProtection_0(v2 + 125);
    }
  }
}
