/*
 * XREFs of MiCreateKernelStackNode @ 0x1404F7358
 * Callers:
 *     MiOutPageSingleKernelStack @ 0x140215F40 (MiOutPageSingleKernelStack.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     RtlAvlInsertNodeEx @ 0x1402903E0 (RtlAvlInsertNodeEx.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiCreateKernelStackNode(_WORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  bool v5; // bl
  _QWORD *v6; // rdi
  KIRQL v7; // al
  _QWORD *v8; // rdx
  unsigned __int8 v9; // si
  unsigned __int64 v10; // rcx
  _QWORD *v11; // rax

  result = MiAllocatePool(0x40uLL, 0x30uLL, 1934321997);
  v5 = 0;
  v6 = (_QWORD *)result;
  if ( !result )
    return result;
  *(_QWORD *)(result + 24) = *a2 - 1LL;
  *(_QWORD *)(result + 32) = a2[1];
  *(_WORD *)(result + 40) = *a1;
  v7 = ExAcquireSpinLockExclusive(&dword_140E36018);
  v8 = (_QWORD *)qword_140E36010;
  v9 = v7;
  if ( !qword_140E36010 )
    goto LABEL_11;
  v10 = v6[3];
  while ( v10 <= v8[3] && v10 < v8[4] )
  {
    v11 = (_QWORD *)*v8;
    if ( !*v8 )
      goto LABEL_11;
LABEL_9:
    v8 = v11;
  }
  v11 = (_QWORD *)v8[1];
  if ( v11 )
    goto LABEL_9;
  v5 = 1;
LABEL_11:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140E36010, (unsigned __int64)v8, v5, v6);
  MiReleaseSpinLockExclusive(&dword_140E36018, v9);
  return (__int64)v6;
}
