/*
 * XREFs of MiEmptyDeferredWorkingSetEntries @ 0x14020C4A0
 * Callers:
 *     MiMakeSystemCacheRangeValid @ 0x14020BFD0 (MiMakeSystemCacheRangeValid.c)
 *     MiCompleteRestrictedImageFault @ 0x140213BC4 (MiCompleteRestrictedImageFault.c)
 *     MiQueueCoreWorkingSetEntries @ 0x140243260 (MiQueueCoreWorkingSetEntries.c)
 *     MiResolveTransitionFault @ 0x140247040 (MiResolveTransitionFault.c)
 *     MiCompletePrivateZeroFault @ 0x14024A090 (MiCompletePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x14034D360 (MiCompleteProtoPteFault.c)
 * Callees:
 *     MiAddWorkingSetEntries @ 0x140242260 (MiAddWorkingSetEntries.c)
 */

__int64 __fastcall MiEmptyDeferredWorkingSetEntries(__int64 *a1)
{
  __int64 v2; // r10
  __int64 v3; // rdx
  __int64 v4; // rax
  unsigned int v5; // ecx
  unsigned __int64 v6; // rdx
  __int64 v7; // r9
  __int64 result; // rax

  v2 = *a1;
  v3 = a1[2] << 25 >> 16 << 25;
  v4 = *((unsigned __int16 *)a1 + 4);
  v5 = *((_BYTE *)a1 + 13) & 2;
  v6 = (v4 << 12) + (v3 >> 16);
  if ( v6 < 0xFFFFF68000000000uLL || v6 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v7 = v5 | 5;
  }
  else
  {
    v7 = v5 | 4;
    if ( (*(_DWORD *)(v2 + 184) & 0xF) != 0 )
      v7 = v5;
  }
  MiAddWorkingSetEntries(v2, v6, *((unsigned __int16 *)a1 + 5), v7);
  result = 0LL;
  *((_WORD *)a1 + 5) = 0;
  return result;
}
