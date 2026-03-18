/*
 * XREFs of MiInitializeSystemSpaceMap @ 0x140C54128
 * Callers:
 *     MiInitSystem @ 0x140C4DC40 (MiInitSystem.c)
 * Callees:
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     MiInitializePteInfo @ 0x140C59DC0 (MiInitializePteInfo.c)
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
    qword_140E35F40 = 0LL;
    P = 0LL;
    v2 = MiInitializePteInfo((unsigned int)&unk_140E35D20, 17, 0, 4, qword_140E38BA8, qword_140E38BB0, 16, result);
    if ( !v2 )
      ExFreePoolWithTag(v1, 0);
    return v2;
  }
  return result;
}
