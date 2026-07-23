/*
 * XREFs of MiCloneProcessAddressSpace @ 0x140AB879C
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14091A9E8 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MiCreateCloneChain @ 0x140267008 (MiCreateCloneChain.c)
 *     MiCloneVads @ 0x140268194 (MiCloneVads.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     MiIsStoreProcess @ 0x140343630 (MiIsStoreProcess.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14040EEF0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiWriteCloneFlags @ 0x14047A758 (MiWriteCloneFlags.c)
 *     MiLockDownWorkingSet @ 0x1404C3800 (MiLockDownWorkingSet.c)
 *     MiInsertClone @ 0x1404C392C (MiInsertClone.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiDeleteInsertedCloneVads @ 0x1408009A4 (MiDeleteInsertedCloneVads.c)
 *     MiUnlockVadRange @ 0x1408D9210 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1408D92F0 (MiLockVadRange.c)
 *     MiAllocateChildVads @ 0x140A47718 (MiAllocateChildVads.c)
 *     MiBuildNewCloneDescriptor @ 0x140A4C34C (MiBuildNewCloneDescriptor.c)
 *     MiFreeCloneDescriptor @ 0x140A6D78C (MiFreeCloneDescriptor.c)
 *     MiMapChildLargePageVads @ 0x140AAFFF4 (MiMapChildLargePageVads.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCloneProcessAddressSpace(_KPROCESS *BugCheckParameter1, _KPROCESS *a2, int a3)
{
  char v3; // r12
  int v6; // ebx
  int v7; // r13d
  _QWORD *v8; // r15
  _KPROCESS *Process; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // r12d
  int v14; // esi
  _QWORD *v15; // r12
  _QWORD *v16; // rdi
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  int v21; // [rsp+30h] [rbp-49h] BYREF
  PVOID P; // [rsp+38h] [rbp-41h] BYREF
  int v23; // [rsp+40h] [rbp-39h]
  __int64 v24; // [rsp+48h] [rbp-31h] BYREF
  __int64 v25; // [rsp+50h] [rbp-29h]
  volatile _KAFFINITY_EX *ActiveProcessors; // [rsp+58h] [rbp-21h]
  _KPROCESS *v27; // [rsp+60h] [rbp-19h]
  _OWORD v28[3]; // [rsp+68h] [rbp-11h] BYREF

  v23 = a3;
  memset(v28, 0, sizeof(v28));
  v3 = a3;
  v6 = 1;
  v7 = 0;
  v24 = 0LL;
  P = 0LL;
  v8 = 0LL;
  v21 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v27 = Process;
  if ( MiIsStoreProcess((__int64)BugCheckParameter1) )
    return 3221225659LL;
  MiLockDownWorkingSet(a2, 1);
  if ( Process != BugCheckParameter1 )
  {
    v7 = 1;
    KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v28);
  }
  v13 = v3 & 1;
  ActiveProcessors = BugCheckParameter1[2].ActiveProcessors;
  if ( ActiveProcessors[4].Bitmap[0] && !v13 )
  {
    v14 = -1073741637;
    goto LABEL_11;
  }
  v25 = MiLockVadRange((__int64)BugCheckParameter1, 0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL, 1);
  if ( !v25 )
  {
    v14 = -1073741558;
LABEL_10:
    MiUnlockVadRange((__int64)BugCheckParameter1, 0xFFFFFFFFFFFFFFFFuLL, v25, 1);
    goto LABEL_11;
  }
  v14 = MiCreateCloneChain((__int64)a2, &P);
  if ( v14 < 0 )
    goto LABEL_10;
  v14 = MiAllocateChildVads((ULONG_PTR)a2, &v24);
  if ( v14 < 0 )
    goto LABEL_10;
  if ( v13 )
  {
    v17 = MiBuildNewCloneDescriptor((ULONG_PTR)a2, 2LL, ActiveProcessors[4].Bitmap[0]);
    v8 = v17;
    if ( !v17 )
    {
      v14 = -1073741670;
      goto LABEL_10;
    }
    memset_0((void *)v17[3], 0, 32LL * v17[5]);
    MiWriteCloneFlags(v8[3], 4LL);
    MiWriteCloneFlags(v8[3] + 32LL, 1LL);
  }
  v14 = MiCloneVads(BugCheckParameter1, (ULONG_PTR)a2, (__int64)P, (__int64)v8, v23, &v21);
  if ( v14 < 0 )
    goto LABEL_10;
  P = 0LL;
  v14 = MiMapChildLargePageVads((ULONG_PTR)a2, v24);
  MiUnlockVadRange((__int64)BugCheckParameter1, 0xFFFFFFFFFFFFFFFFuLL, v25, 1);
  if ( v7 )
  {
    KiUnstackDetachProcess((__int64)v28, 0, v11, v12);
    v7 = 0;
  }
  if ( v27 != a2 )
  {
    v7 = 1;
    KiStackAttachProcess(a2, 0, (__int64)v28);
  }
  if ( v8 )
  {
    v18 = 0LL;
    v19 = 0LL;
    if ( !v8[5] )
      goto LABEL_38;
    v20 = 0LL;
    do
    {
      v19 = (unsigned int)(v19 + 1);
      v18 += *(_QWORD *)(32 * v20 + v8[3] + 24);
      v20 = (unsigned int)v19;
    }
    while ( (unsigned __int64)(unsigned int)v19 < v8[5] );
    if ( v18 )
    {
      v8[6] = v18;
      MiInsertClone((__int64)a2, v8, 0);
    }
    else
    {
LABEL_38:
      MiFreeCloneDescriptor((ULONG_PTR)a2, v8, v19, v12);
    }
    v8 = 0LL;
  }
  if ( v14 >= 0 )
  {
    MiLockDownWorkingSet(a2, 0);
    v6 = 0;
    if ( v7 )
    {
      KiUnstackDetachProcess((__int64)v28, 0, v11, v12);
      v7 = 0;
    }
    if ( !v21 )
      return (unsigned int)v14;
    v14 = -1073741670;
  }
LABEL_11:
  v15 = P;
  if ( P )
  {
    do
    {
      v16 = (_QWORD *)*v15;
      PsReturnProcessNonPagedPoolQuota((ULONG_PTR)a2, v15[8]);
      ExFreePoolWithTag(v15, 0);
      v15 = v16;
    }
    while ( v16 );
  }
  if ( v8 )
    MiFreeCloneDescriptor((ULONG_PTR)a2, v8, v11, v12);
  if ( v7 )
    KiUnstackDetachProcess((__int64)v28, 0, v11, v12);
  if ( v6 )
    MiLockDownWorkingSet(a2, 0);
  MiDeleteInsertedCloneVads((ULONG_PTR)a2);
  return (unsigned int)v14;
}
