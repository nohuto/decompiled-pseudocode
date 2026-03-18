/*
 * XREFs of MiInitializeSystemSpaceMap @ 0x140C42EB0
 * Callers:
 *     MiInitSystem @ 0x140C3C930 (MiInitSystem.c)
 * Callees:
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     MiInitializePteInfo @ 0x140C48A90 (MiInitializePteInfo.c)
 */

__int64 MiInitializeSystemSpaceMap()
{
  __int64 result; // rax
  void *v1; // rbx
  unsigned int v2; // edi

  result = MiAllocatePool(0x40uLL, 144LL * (unsigned int)(unsigned __int16)KeNumberNodes, 538996045);
  v1 = (void *)result;
  if ( result )
  {
    qword_140E35D00 = 0LL;
    P = 0LL;
    v2 = MiInitializePteInfo((unsigned int)&unk_140E35AE0, 17, 0, 4, qword_140E38968, qword_140E38970, 16, result);
    if ( !v2 )
      ExFreePoolWithTag(v1, 0);
    return v2;
  }
  return result;
}
