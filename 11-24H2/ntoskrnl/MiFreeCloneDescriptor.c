/*
 * XREFs of MiFreeCloneDescriptor @ 0x140A6D78C
 * Callers:
 *     MiCloneVads @ 0x140268194 (MiCloneVads.c)
 *     MiCloneProcessAddressSpace @ 0x140AB879C (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiUnlockPagedAddress @ 0x1403EE6C4 (MiUnlockPagedAddress.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14040EEF0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiDecrementCloneHeaderCount @ 0x1404F2BD0 (MiDecrementCloneHeaderCount.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeCloneDescriptor(ULONG_PTR BugCheckParameter1, _QWORD *P, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbp
  ULONG_PTR v5; // rbx
  ULONG_PTR v6; // rdi
  void *v9; // r14

  v4 = (_QWORD *)P[7];
  v5 = 0LL;
  v6 = P[8];
  v9 = (void *)v4[2];
  if ( v6 )
  {
    do
    {
      MiUnlockPagedAddress((unsigned __int64)v9 + v5, (__int64)P, a3, a4);
      v5 += 4096LL;
    }
    while ( v5 < v6 );
  }
  PsReturnProcessNonPagedPoolQuota(BugCheckParameter1, v6);
  MiDecrementCloneHeaderCount(v4[3]);
  ExFreePoolWithTag(v4, 0);
  ExFreePoolWithTag(v9, 0);
  ExFreePoolWithTag(P, 0);
}
