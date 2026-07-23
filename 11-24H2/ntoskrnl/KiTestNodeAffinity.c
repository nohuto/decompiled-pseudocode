/*
 * XREFs of KiTestNodeAffinity @ 0x1403188B4
 * Callers:
 *     KiUpdateNodeAffinitizedFlag @ 0x14031887C (KiUpdateNodeAffinitizedFlag.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiTestNodeAffinity(struct _KAFFINITY_EX *a1)
{
  unsigned __int16 Count; // r8
  struct _KAFFINITY_EX *v2; // r10
  unsigned __int16 i; // dx
  unsigned __int16 j; // dx
  unsigned __int64 k; // r8
  unsigned __int64 v7; // rax
  __int64 v8; // r10

  Count = KeActiveProcessors.Count;
  if ( a1->Count >= KeActiveProcessors.Count )
  {
    v2 = a1;
  }
  else
  {
    v2 = &KeActiveProcessors;
    Count = a1->Count;
  }
  for ( i = 0; ; ++i )
  {
    if ( i >= Count )
    {
      while ( i < v2->Count )
      {
        if ( v2->Bitmap[i] )
          goto LABEL_11;
        ++i;
      }
      return 1LL;
    }
    if ( a1->Bitmap[i] != KeActiveProcessors.Bitmap[i] )
      break;
  }
LABEL_11:
  if ( (unsigned __int16)KeNumberNodes > 1u )
  {
    for ( j = 0; j < a1->Count; ++j )
    {
      for ( k = a1->Bitmap[j]; k; k &= ~v8 )
      {
        _BitScanReverse64(&v7, k);
        v8 = *(_QWORD *)(*(_QWORD *)(KiProcessorBlock[*((unsigned int *)qword_140F22998 + 64 * j + (unsigned int)v7)]
                                   + 192)
                       + 128LL);
        if ( (k & v8) != v8 )
          return 0LL;
      }
    }
    return 1LL;
  }
  return 0LL;
}
