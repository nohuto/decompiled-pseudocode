/*
 * XREFs of _SafeAllocBlob @ 0x1800E7470
 * Callers:
 *     RtlpMuiRegCreateLanguages @ 0x1801492D8 (RtlpMuiRegCreateLanguages.c)
 *     RtlpMuiRegCreateStringPool @ 0x180149338 (RtlpMuiRegCreateStringPool.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SafeAllocBlob(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned __int64 v6; // r10
  unsigned int v8; // edx
  unsigned __int64 v9; // rcx
  unsigned int v10; // eax

  v6 = a3 * (unsigned __int64)a2;
  if ( v6 > 0xFFFFFFFF )
    return 0LL;
  v8 = v6 + a1;
  if ( (unsigned int)v6 + a1 < a1 )
    return 0LL;
  v9 = a5 * (unsigned __int64)a4;
  if ( v9 > 0xFFFFFFFF )
    return 0LL;
  v10 = v8 + v9;
  if ( v8 + (unsigned int)v9 < v8 )
    return 0LL;
  if ( a6 )
    *a6 = v10;
  if ( v10 )
    return RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v10);
  else
    return 0LL;
}
