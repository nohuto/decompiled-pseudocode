/*
 * XREFs of ?Create@KHistogram@@SAPEAV1@_K0K@Z @ 0x1401387F0
 * Callers:
 *     ndisAllocateHistogramEntry @ 0x1401388A8 (ndisAllocateHistogramEntry.c)
 * Callees:
 *     ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x14005DF50 (-RtlULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

struct KHistogram *__fastcall KHistogram::Create(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  size_t v6; // rbp
  __int64 Pool2; // rax
  __int64 v8; // rbx
  unsigned __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  if ( a3 < 2 )
    return 0LL;
  v10 = 0LL;
  if ( (unsigned int)RtlULongLongMult(a2, a3, &v10) )
    return 0LL;
  if ( a1 + v10 < a1 )
    return 0LL;
  v6 = 2LL * a3;
  if ( v6 > 0xFFFFFFFF )
    return 0LL;
  if ( (unsigned int)v6 >= 0xFFFFFFEC )
    return 0LL;
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(v6 + 20), 1953712203LL);
  v8 = Pool2;
  if ( !Pool2 )
    return 0LL;
  *(_QWORD *)Pool2 = a1;
  *(_QWORD *)(Pool2 + 8) = a2;
  *(_DWORD *)(Pool2 + 16) = a3;
  memset((void *)(Pool2 + 20), 0, v6);
  return (struct KHistogram *)v8;
}
