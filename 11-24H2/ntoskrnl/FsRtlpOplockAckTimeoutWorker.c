/*
 * XREFs of FsRtlpOplockAckTimeoutWorker @ 0x14057E5E0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteAgg @ 0x140273698 (_tlgWriteAgg.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExFreeToNPagedLookasideList @ 0x1402E4C00 (ExFreeToNPagedLookasideList.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403CD970 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlpOplockCleanup @ 0x1403CDA80 (FsRtlpOplockCleanup.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall FsRtlpOplockAckTimeoutWorker(PVOID Entry)
{
  struct _KTHREAD *CurrentThread; // rax
  char v3; // di
  __int64 v4; // rcx
  __int64 v5; // r8
  char v6; // [rsp+30h] [rbp-39h] BYREF
  __int64 v7; // [rsp+38h] [rbp-31h] BYREF
  __int64 v8; // [rsp+40h] [rbp-29h] BYREF
  __int64 v9; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v10[32]; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v11; // [rsp+70h] [rbp+7h]
  int v12; // [rsp+78h] [rbp+Fh]
  int v13; // [rsp+7Ch] [rbp+13h]
  char *v14; // [rsp+80h] [rbp+17h]
  int v15; // [rsp+88h] [rbp+1Fh]
  int v16; // [rsp+8Ch] [rbp+23h]
  __int64 *v17; // [rsp+90h] [rbp+27h]
  int v18; // [rsp+98h] [rbp+2Fh]
  int v19; // [rsp+9Ch] [rbp+33h]
  __int64 *v20; // [rsp+A0h] [rbp+37h]
  int v21; // [rsp+A8h] [rbp+3Fh]
  int v22; // [rsp+ACh] [rbp+43h]

  memset_0(v10, 0, 0x48uLL);
  v14 = (char *)*((_QWORD *)Entry + 21);
  CurrentThread = KeGetCurrentThread();
  v10[0] = 18;
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
    v13 = 0;
    v16 = 0;
    v19 = 0;
    v22 = 0;
    v11 = &v7;
    v14 = &v6;
    v8 = g_OplockAckTimeoutMs;
    v17 = &v8;
    v20 = &v9;
    v12 = 8;
    v18 = 8;
    v21 = 8;
    v7 = 1LL;
    v6 = v3;
    v15 = 1;
    v9 = 0x1000000LL;
    tlgWriteAgg((__int64)&dword_140E06C30, (unsigned __int8 *)&word_140043D46, v5, 6u, (__int64)v10);
  }
  ExFreeToNPagedLookasideList(&g_OplockAckTimeoutLookaside, Entry);
}
