/*
 * XREFs of SepModifyTokenPolicyCounter @ 0x14078FB10
 * Callers:
 *     SepDuplicateToken @ 0x1408527E0 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x140985C1C (SepFilterToken.c)
 *     NtSetInformationToken @ 0x140AD4280 (NtSetInformationToken.c)
 *     SepTokenDeleteMethod @ 0x140AD6F50 (SepTokenDeleteMethod.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepModifyTokenPolicyCounter(__int64 a1, char a2)
{
  __int64 *v2; // r9
  volatile signed __int32 *v3; // r10
  int v4; // ebx
  __int64 v5; // rdi
  unsigned int v6; // r8d
  char v7; // si
  unsigned __int16 v8; // r11
  __int64 result; // rax

  v2 = &AdtpPerCategoryCount;
  v3 = &SepTokenPolicyCounterByCategory;
  v4 = 0;
  v5 = 9LL;
  v6 = a2 != 0 ? 1 : -1;
  do
  {
    v7 = 0;
    v8 = 0;
    if ( *(_WORD *)v2 )
    {
      do
      {
        if ( ((*(_BYTE *)(((unsigned __int64)(v4 + (unsigned int)v8) >> 1) + a1) >> (4 * ((v8 + v4) & 1))) & 0xF) != 0 )
        {
          _InterlockedAdd(&SepTokenPolicyCounter[v4 + v8], v6);
          v7 = 1;
        }
        ++v8;
      }
      while ( v8 < *(_WORD *)v2 );
      if ( v7 )
        _InterlockedAdd(v3, v6);
    }
    result = *(unsigned __int16 *)v2;
    ++v3;
    v4 += result;
    v2 = (__int64 *)((char *)v2 + 2);
    --v5;
  }
  while ( v5 );
  return result;
}
