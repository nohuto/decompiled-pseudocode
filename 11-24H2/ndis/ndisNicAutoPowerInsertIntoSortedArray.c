/*
 * XREFs of ndisNicAutoPowerInsertIntoSortedArray @ 0x1400C2E0C
 * Callers:
 *     ?ndisTraceNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140070AA0 (-ndisTraceNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     memmove @ 0x1400E7200 (memmove.c)
 */

__int64 __fastcall ndisNicAutoPowerInsertIntoSortedArray(unsigned __int16 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v5; // r9d
  unsigned int i; // edx
  unsigned __int16 *v7; // rbx
  unsigned int v8; // ecx

  result = a1[1];
  v5 = result + (*a1 << 16);
  for ( i = 0; i < 8; ++i )
  {
    v7 = (unsigned __int16 *)(a3 + 16LL * i);
    result = v7[1];
    v8 = result + (*v7 << 16);
    if ( v5 > v8 )
    {
      result = 7LL;
      if ( v8 || i < 7 )
        result = (__int64)memmove((void *)(a3 + 16LL * (i + 1)), (const void *)(a3 + 16LL * i), 7 - i);
      *(_OWORD *)v7 = *(_OWORD *)a1;
      return result;
    }
  }
  return result;
}
