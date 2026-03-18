/*
 * XREFs of MiFreeCloneDescriptor @ 0x140A71A4C
 * Callers:
 *     MiCloneVads @ 0x1402CC944 (MiCloneVads.c)
 *     MiCloneProcessAddressSpace @ 0x140AB962C (MiCloneProcessAddressSpace.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403C5970 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiUnlockPagedAddress @ 0x140459E94 (MiUnlockPagedAddress.c)
 *     MiDecrementCloneHeaderCount @ 0x1404F2AD4 (MiDecrementCloneHeaderCount.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeCloneDescriptor(ULONG_PTR BugCheckParameter1, _QWORD *P)
{
  _QWORD *v2; // rbp
  ULONG_PTR v3; // rbx
  ULONG_PTR v4; // rdi
  void *v7; // r14

  v2 = (_QWORD *)P[7];
  v3 = 0LL;
  v4 = P[8];
  v7 = (void *)v2[2];
  if ( v4 )
  {
    do
    {
      MiUnlockPagedAddress((unsigned __int64)v7 + v3);
      v3 += 4096LL;
    }
    while ( v3 < v4 );
  }
  PsReturnProcessNonPagedPoolQuota(BugCheckParameter1, v4);
  MiDecrementCloneHeaderCount(v2[3]);
  ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(v7, 0);
  ExFreePoolWithTag(P, 0);
}
