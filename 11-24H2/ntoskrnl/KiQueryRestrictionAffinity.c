/*
 * XREFs of KiQueryRestrictionAffinity @ 0x14042C2F8
 * Callers:
 *     PpmEventTraceHeteroSets @ 0x14042BE28 (PpmEventTraceHeteroSets.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiQueryRestrictionAffinity(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r10
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r11
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rcx

  v3 = 0LL;
  result = a2;
  v7 = 16368LL * a2;
  v8 = 7LL;
  do
  {
    v9 = 2LL;
    do
    {
      v10 = *(unsigned __int16 *)(a1 + 136);
      if ( (unsigned __int16)v10 >= *(_WORD *)(v7 + KiHeteroConfig + 12704) )
        v11 = 0LL;
      else
        v11 = *(_QWORD *)(v7 + KiHeteroConfig + 8 * v10 + 12712);
      *(_QWORD *)(a3 + 8 * v3) = v11;
      v7 += 264LL;
      v3 = (unsigned int)(v3 + 1);
      --v9;
    }
    while ( v9 );
    --v8;
  }
  while ( v8 );
  return result;
}
