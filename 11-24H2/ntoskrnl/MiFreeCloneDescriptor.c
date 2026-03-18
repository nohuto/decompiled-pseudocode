/*
 * XREFs of MiFreeCloneDescriptor @ 0x140A73E2C
 * Callers:
 *     MiCloneVads @ 0x1402C4DAC (MiCloneVads.c)
 *     MiCloneProcessAddressSpace @ 0x140ABD72C (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiUnlockPagedAddress @ 0x1403F85B4 (MiUnlockPagedAddress.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14041B3B0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiDecrementCloneHeaderCount @ 0x1404F52D0 (MiDecrementCloneHeaderCount.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
