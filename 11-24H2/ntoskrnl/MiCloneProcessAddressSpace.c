/*
 * XREFs of MiCloneProcessAddressSpace @ 0x140ABD72C
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x1408F8590 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MiCloneVads @ 0x1402C4DAC (MiCloneVads.c)
 *     MiIsStoreProcess @ 0x1402FB9C0 (MiIsStoreProcess.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     MiCreateCloneChain @ 0x1403CCE38 (MiCreateCloneChain.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14041B3B0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiWriteCloneFlags @ 0x14047F9C8 (MiWriteCloneFlags.c)
 *     MiLockDownWorkingSet @ 0x1404CA2DC (MiLockDownWorkingSet.c)
 *     MiInsertClone @ 0x1404CA408 (MiInsertClone.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MiDeleteInsertedCloneVads @ 0x140800264 (MiDeleteInsertedCloneVads.c)
 *     MiUnlockVadRange @ 0x1408E8A30 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1408E8B10 (MiLockVadRange.c)
 *     MiAllocateChildVads @ 0x1409C2580 (MiAllocateChildVads.c)
 *     MiBuildNewCloneDescriptor @ 0x140A54400 (MiBuildNewCloneDescriptor.c)
 *     MiFreeCloneDescriptor @ 0x140A73E2C (MiFreeCloneDescriptor.c)
 *     MiMapChildLargePageVads @ 0x140AB5D2C (MiMapChildLargePageVads.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCloneProcessAddressSpace(_KPROCESS *BugCheckParameter1, _KPROCESS *a2, int a3)
{
  char v3; // r12
  int v6; // ebx
  int v7; // r13d
  _QWORD *v8; // r15
  _KPROCESS *Process; // rsi
  int v11; // r12d
  int v12; // esi
  _QWORD *v13; // r12
  _QWORD *v14; // rdi
  _QWORD *v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // r8d
  __int64 v18; // rdx
  int v19; // [rsp+30h] [rbp-49h] BYREF
  PVOID P; // [rsp+38h] [rbp-41h] BYREF
  int v21; // [rsp+40h] [rbp-39h]
  __int64 v22; // [rsp+48h] [rbp-31h] BYREF
  __int64 v23; // [rsp+50h] [rbp-29h]
  volatile _KAFFINITY_EX *ActiveProcessors; // [rsp+58h] [rbp-21h]
  _KPROCESS *v25; // [rsp+60h] [rbp-19h]
  _OWORD v26[3]; // [rsp+68h] [rbp-11h] BYREF

  v21 = a3;
  memset(v26, 0, sizeof(v26));
  v3 = a3;
  v6 = 1;
  v7 = 0;
  v22 = 0LL;
  P = 0LL;
  v8 = 0LL;
  v19 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v25 = Process;
  if ( MiIsStoreProcess((__int64)BugCheckParameter1) )
    return 3221225659LL;
  MiLockDownWorkingSet(a2, 1);
  if ( Process != BugCheckParameter1 )
  {
    v7 = 1;
    KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v26);
  }
  v11 = v3 & 1;
  ActiveProcessors = BugCheckParameter1[2].ActiveProcessors;
  if ( ActiveProcessors[4].Bitmap[0] && !v11 )
  {
    v12 = -1073741637;
    goto LABEL_11;
  }
  v23 = MiLockVadRange((__int64)BugCheckParameter1, 0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL, 1);
  if ( !v23 )
  {
    v12 = -1073741558;
LABEL_10:
    MiUnlockVadRange((__int64)BugCheckParameter1, 0xFFFFFFFFFFFFFFFFuLL, v23, 1);
    goto LABEL_11;
  }
  v12 = MiCreateCloneChain((__int64)a2, &P);
  if ( v12 < 0 )
    goto LABEL_10;
  v12 = MiAllocateChildVads((ULONG_PTR)a2, &v22);
  if ( v12 < 0 )
    goto LABEL_10;
  if ( v11 )
  {
    v15 = MiBuildNewCloneDescriptor((ULONG_PTR)a2, 2LL, ActiveProcessors[4].Bitmap[0]);
    v8 = v15;
    if ( !v15 )
    {
      v12 = -1073741670;
      goto LABEL_10;
    }
    memset_0((void *)v15[3], 0, 32LL * v15[5]);
    MiWriteCloneFlags(v8[3], 4LL);
    MiWriteCloneFlags(v8[3] + 32LL, 1LL);
  }
  v12 = MiCloneVads(BugCheckParameter1, (ULONG_PTR)a2, (__int64)P, (__int64)v8, v21, &v19);
  if ( v12 < 0 )
    goto LABEL_10;
  P = 0LL;
  v12 = MiMapChildLargePageVads((ULONG_PTR)a2, v22);
  MiUnlockVadRange((__int64)BugCheckParameter1, 0xFFFFFFFFFFFFFFFFuLL, v23, 1);
  if ( v7 )
  {
    KiUnstackDetachProcess((__int64)v26, 0);
    v7 = 0;
  }
  if ( v25 != a2 )
  {
    v7 = 1;
    KiStackAttachProcess(a2, 0, (__int64)v26);
  }
  if ( v8 )
  {
    v16 = 0LL;
    v17 = 0;
    if ( !v8[5] )
      goto LABEL_38;
    v18 = 0LL;
    do
    {
      ++v17;
      v16 += *(_QWORD *)(32 * v18 + v8[3] + 24);
      v18 = v17;
    }
    while ( (unsigned __int64)v17 < v8[5] );
    if ( v16 )
    {
      v8[6] = v16;
      MiInsertClone((__int64)a2, v8, 0);
    }
    else
    {
LABEL_38:
      MiFreeCloneDescriptor((ULONG_PTR)a2, v8);
    }
    v8 = 0LL;
  }
  if ( v12 >= 0 )
  {
    MiLockDownWorkingSet(a2, 0);
    v6 = 0;
    if ( v7 )
    {
      KiUnstackDetachProcess((__int64)v26, 0);
      v7 = 0;
    }
    if ( !v19 )
      return (unsigned int)v12;
    v12 = -1073741670;
  }
LABEL_11:
  v13 = P;
  if ( P )
  {
    do
    {
      v14 = (_QWORD *)*v13;
      PsReturnProcessNonPagedPoolQuota((ULONG_PTR)a2, v13[8]);
      ExFreePoolWithTag(v13, 0);
      v13 = v14;
    }
    while ( v14 );
  }
  if ( v8 )
    MiFreeCloneDescriptor((ULONG_PTR)a2, v8);
  if ( v7 )
    KiUnstackDetachProcess((__int64)v26, 0);
  if ( v6 )
    MiLockDownWorkingSet(a2, 0);
  MiDeleteInsertedCloneVads((ULONG_PTR)a2);
  return (unsigned int)v12;
}
