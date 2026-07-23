/*
 * XREFs of MiIsRegularMemory @ 0x140C53BB8
 * Callers:
 *     MxMarkValidMappings @ 0x140C525D0 (MxMarkValidMappings.c)
 *     MxCreatePfnsForPtes @ 0x140C549C0 (MxCreatePfnsForPtes.c)
 * Callees:
 *     MiFindDescriptorByPfn @ 0x140C51290 (MiFindDescriptorByPfn.c)
 */

__int64 __fastcall MiIsRegularMemory(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rcx
  unsigned __int64 DescriptorByPfn; // rax
  __int64 v7; // r11
  unsigned __int64 v8; // rax
  __int64 v9; // rcx

  result = MxPfnMemoryDescriptorCache;
  if ( !MxPfnMemoryDescriptorCache
    || (v4 = *(_QWORD *)(MxPfnMemoryDescriptorCache + 32), a2 < v4)
    || a2 >= *(_QWORD *)(MxPfnMemoryDescriptorCache + 40) + v4 )
  {
    if ( MxNonPfnMemoryDescriptorCache )
    {
      v5 = *(_QWORD *)(MxNonPfnMemoryDescriptorCache + 32);
      if ( a2 >= v5 && a2 < *(_QWORD *)(MxNonPfnMemoryDescriptorCache + 40) + v5 )
        return 0LL;
    }
    DescriptorByPfn = MiFindDescriptorByPfn(a1, a2);
    v7 = DescriptorByPfn;
    if ( !DescriptorByPfn )
      return 0LL;
    v8 = *(_DWORD *)(DescriptorByPfn + 24) & 0x1FFFFFFF;
    if ( (unsigned int)v8 <= 0x2C )
    {
      v9 = 0x15C5C0C00048LL;
      if ( _bittest64(&v9, v8) )
      {
        MxNonPfnMemoryDescriptorCache = v7;
        return 0LL;
      }
    }
    MxPfnMemoryDescriptorCache = v7;
    return v7;
  }
  return result;
}
