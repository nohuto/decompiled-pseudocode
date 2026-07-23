/*
 * XREFs of MiValidateMemoryRangeEntries @ 0x1409F8F28
 * Callers:
 *     MmOutSwapVirtualAddresses @ 0x1403C64C8 (MmOutSwapVirtualAddresses.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiValidateMemoryRangeEntries(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // r9
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx

  v3 = a1;
  if ( a3 )
    *a3 = 0LL;
  v4 = 0LL;
  v5 = (unsigned __int64)&a1[2 * a2];
  while ( (unsigned __int64)v3 < v5 )
  {
    v6 = v3[1];
    if ( !v6
      || (unsigned __int64)(v6 + *v3 - 1LL) < *v3
      || (unsigned __int64)(v6 + *v3 - 1LL) > 0x7FFFFFFEFFFFLL
      || v4 + ((v6 + (unsigned __int64)(*(_DWORD *)v3 & 0xFFF) + 4095) >> 12) < v4 )
    {
      return 0LL;
    }
    v4 += (v6 + (unsigned __int64)(*(_DWORD *)v3 & 0xFFF) + 4095) >> 12;
    v3 += 2;
  }
  if ( a3 )
    *a3 = v4;
  return 1LL;
}
