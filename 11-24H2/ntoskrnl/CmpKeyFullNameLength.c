/*
 * XREFs of CmpKeyFullNameLength @ 0x14087F750
 * Callers:
 *     CmpDoWritethroughReparse @ 0x14087F420 (CmpDoWritethroughReparse.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x14088067C (CmpConstructNameFromKcbNameBlocks.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpKeyFullNameLength(__int64 a1)
{
  unsigned int v1; // edx
  __int64 *v2; // r8
  __int64 v3; // rax
  int v4; // ecx
  unsigned int v5; // edx

  v1 = 0;
  if ( a1 )
  {
    do
    {
      while ( 1 )
      {
        v2 = (__int64 *)(a1 + 72);
        if ( (*(_DWORD *)(a1 + 184) & 0x40000) == 0 || !*v2 )
          break;
        a1 = *v2;
      }
      v3 = *(_QWORD *)(a1 + 80);
      v4 = *(unsigned __int16 *)(v3 + 24);
      if ( (*(_DWORD *)v3 & 1) != 0 )
        v5 = v1 + 2 * v4;
      else
        v5 = v4 + v1;
      a1 = *v2;
      v1 = v5 + 2;
    }
    while ( *v2 );
  }
  return v1;
}
