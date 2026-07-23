/*
 * XREFs of MiRemoveMappingNode @ 0x14049DACC
 * Callers:
 *     MmFreeMappingAddress @ 0x140A55EC0 (MmFreeMappingAddress.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

_QWORD *__fastcall MiRemoveMappingNode(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v3; // rsi
  KIRQL v4; // al
  _QWORD *v5; // rbx
  ULONG_PTR v6; // r8
  unsigned __int8 v7; // bp
  ULONG_PTR v9; // rcx

  v3 = (unsigned int)BugCheckParameter3;
  v4 = ExAcquireSpinLockExclusive(&dword_140E35FE8);
  v5 = (_QWORD *)qword_140E35FF0;
  v6 = BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL;
  v7 = v4;
  while ( v5 )
  {
    v9 = v5[3];
    if ( v6 < v9 )
    {
      v5 = (_QWORD *)*v5;
    }
    else
    {
      if ( v6 < v9 + (v5[4] << 12) )
        break;
      v5 = (_QWORD *)v5[1];
    }
  }
  if ( !v5 )
    KeBugCheckEx(0xDAu, 0x106uLL, BugCheckParameter2, v3, 0LL);
  RtlAvlRemoveNode((unsigned __int64 *)&qword_140E35FF0, (__int64)v5);
  MiReleaseSpinLockExclusive(&dword_140E35FE8, v7);
  return v5;
}
