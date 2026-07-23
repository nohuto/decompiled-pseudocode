/*
 * XREFs of VmpProcessContextSetup @ 0x14079F700
 * Callers:
 *     VmCreateMemoryRange @ 0x14079EB10 (VmCreateMemoryRange.c)
 *     VmPreallocateForRangeCreate @ 0x140A55A60 (VmPreallocateForRangeCreate.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     VmpProcessContextCleanup @ 0x14079F6EC (VmpProcessContextCleanup.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VmpProcessContextSetup(__int64 a1)
{
  unsigned int v1; // ebx
  int v3; // r14d
  struct _EX_RUNDOWN_REF *Process; // rsi
  struct _EX_RUNDOWN_REF *v5; // rbp
  BOOLEAN v6; // al
  _QWORD *Pool2; // rax
  _QWORD *v8; // rdi
  PVOID v9; // rcx

  v1 = 0;
  v3 = 0;
  Process = (struct _EX_RUNDOWN_REF *)KeGetCurrentThread()->ApcState.Process;
  if ( Process[206].Count )
    goto LABEL_8;
  v5 = Process + 61;
  v6 = ExAcquireRundownProtection_0(Process + 61);
  v3 = v6;
  if ( v6 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL, 0xA0uLL, 0x63506D56u);
    v8 = Pool2;
    if ( !Pool2 )
    {
      v1 = -1073741670;
      goto LABEL_9;
    }
    memset_0(Pool2, 0, 0xA0uLL);
    v8[13] = a1;
    v8[2] = 0LL;
    v8[3] = 0LL;
    v8[4] = 0LL;
    v8[5] = 0LL;
    v8[6] = 0LL;
    v8[10] = 0LL;
    v8[11] = 0LL;
    v8[8] = 512LL;
    v8[16] = 0LL;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[206], (signed __int64)v8, 0LL) )
    {
      VmpProcessContextCleanup((__int64)v8);
      ExFreePoolWithTag(v9, 0);
    }
LABEL_8:
    v5 = Process + 61;
    if ( !v3 )
      return v1;
LABEL_9:
    ExReleaseRundownProtection_0(v5);
    return v1;
  }
  return (unsigned int)-1073741558;
}
