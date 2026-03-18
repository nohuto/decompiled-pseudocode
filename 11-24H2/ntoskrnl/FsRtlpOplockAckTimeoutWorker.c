/*
 * XREFs of FsRtlpOplockAckTimeoutWorker @ 0x140581220
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14024A9C0 (ExFreeToNPagedLookasideList.c)
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x14031CF70 (ExReleaseFastMutexUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     _tlgWriteAgg @ 0x1403D06F8 (_tlgWriteAgg.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403DB130 (ExAcquireFastMutexUnsafe.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     FsRtlpOplockCleanup @ 0x1404E3BFC (FsRtlpOplockCleanup.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void __fastcall FsRtlpOplockAckTimeoutWorker(PVOID Entry)
{
  struct _KTHREAD *CurrentThread; // rax
  char v3; // di
  __int64 v4; // rcx
  __int64 v5; // r8
  char v6; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v7; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v8; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v9; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v10[48]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v11; // [rsp+80h] [rbp-80h]
  _BYTE v12[32]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v13; // [rsp+C0h] [rbp-40h]
  int v14; // [rsp+C8h] [rbp-38h]
  int v15; // [rsp+CCh] [rbp-34h]
  char *v16; // [rsp+D0h] [rbp-30h]
  int v17; // [rsp+D8h] [rbp-28h]
  int v18; // [rsp+DCh] [rbp-24h]
  __int64 *v19; // [rsp+E0h] [rbp-20h]
  int v20; // [rsp+E8h] [rbp-18h]
  int v21; // [rsp+ECh] [rbp-14h]
  __int64 *v22; // [rsp+F0h] [rbp-10h]
  int v23; // [rsp+F8h] [rbp-8h]
  int v24; // [rsp+FCh] [rbp-4h]

  memset_0(v10, 0, 0x48uLL);
  v11 = *((_QWORD *)Entry + 21);
  v10[0] = 18;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(*((_QWORD *)Entry + 20) + 152LL));
  v3 = *((_BYTE *)Entry + 181);
  if ( !v3 )
    FsRtlpOplockCleanup(*((_QWORD *)Entry + 20), (__int64)v10, 1);
  ObfDereferenceObjectWithTag(*((PVOID *)Entry + 21), 0x746C6644u);
  v4 = *((_QWORD *)Entry + 20);
  *((_QWORD *)Entry + 21) = 0LL;
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v4 + 152));
  KeLeaveCriticalRegion();
  if ( (unsigned int)dword_140E06C30 > 5 && tlgKeywordOn((__int64)&dword_140E06C30, 0x400000000000LL) )
  {
    v15 = 0;
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v13 = &v7;
    v16 = &v6;
    v8 = g_OplockAckTimeoutMs;
    v19 = &v8;
    v22 = &v9;
    v14 = 8;
    v20 = 8;
    v23 = 8;
    v7 = 1LL;
    v6 = v3;
    v17 = 1;
    v9 = 0x1000000LL;
    tlgWriteAgg((__int64)&dword_140E06C30, (unsigned __int8 *)&word_140043946, v5, 6u, (__int64)v12);
  }
  ExFreeToNPagedLookasideList(&g_OplockAckTimeoutLookaside, Entry);
}
