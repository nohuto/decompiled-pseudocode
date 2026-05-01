/*
 * XREFs of ??$CCv6s_HeapAllocArray@X@@YAJPEAXK_K1PEAPEAX@Z @ 0x180683260
 * Callers:
 *     _DSA_MergeSort @ 0x1806834E4 (_DSA_MergeSort.c)
 * Callees:
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x180148D24 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 */

__int64 __fastcall CCv6s_HeapAllocArray<void>(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        SIZE_T dwBytes)
{
  _QWORD *v5; // rbx
  __int64 result; // rax
  void *v7; // r10
  LPVOID v8; // rax

  v5 = (_QWORD *)dwBytes;
  dwBytes = 0LL;
  *v5 = 0LL;
  result = ULongLongMult(a3, a4, &dwBytes);
  if ( (int)result >= 0 )
  {
    v8 = HeapAlloc(v7, 8u, dwBytes);
    if ( v8 )
    {
      *v5 = v8;
      return 0LL;
    }
    else
    {
      return 2147942414LL;
    }
  }
  return result;
}
