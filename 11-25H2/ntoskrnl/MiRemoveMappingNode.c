/*
 * XREFs of MiRemoveMappingNode @ 0x1404A326C
 * Callers:
 *     MmFreeMappingAddress @ 0x140A5BDC0 (MmFreeMappingAddress.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402A8F20 (RtlAvlRemoveNode.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
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
  v4 = ExAcquireSpinLockExclusive(&dword_140E35C68);
  v5 = (_QWORD *)qword_140E35C70;
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
  RtlAvlRemoveNode((unsigned __int64 *)&qword_140E35C70, (__int64)v5);
  MiReleaseSpinLockExclusive(&dword_140E35C68, v7);
  return v5;
}
