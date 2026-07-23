/*
 * XREFs of MiInitializeSystemSpaceMap @ 0x140C562B8
 * Callers:
 *     MiInitSystem @ 0x140C4FDD0 (MiInitSystem.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     MiInitializePteInfo @ 0x140C5BF50 (MiInitializePteInfo.c)
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
    qword_140E36080 = 0LL;
    P = 0LL;
    v2 = MiInitializePteInfo((unsigned int)&unk_140E35E60, 17, 0, 4, qword_140E38CE8, qword_140E38CF0, 16, result);
    if ( !v2 )
      ExFreePoolWithTag(v1, 0);
    return v2;
  }
  return result;
}
