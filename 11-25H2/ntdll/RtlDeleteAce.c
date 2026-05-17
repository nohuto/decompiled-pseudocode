/*
 * XREFs of RtlDeleteAce @ 0x1800F8E50
 * Callers:
 *     <none>
 * Callees:
 *     RtlValidAcl @ 0x18005FD10 (RtlValidAcl.c)
 *     RtlpDeleteData @ 0x1800F8EE8 (RtlpDeleteData.c)
 */

__int64 __fastcall RtlDeleteAce(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned int v4; // edx
  __int64 v5; // rcx
  unsigned int v6; // r9d
  unsigned __int64 i; // r8
  unsigned __int64 v8; // rax
  __int64 v9; // rdx

  v2 = a2;
  if ( !RtlValidAcl(a1) )
    return 3221225485LL;
  v4 = *(unsigned __int16 *)(a1 + 4);
  if ( (unsigned int)v2 >= v4 )
    return 3221225485LL;
  v5 = a1 + 8;
  v6 = 0;
  for ( i = a1 + 8; ; i += *(unsigned __int16 *)(i + 2) )
  {
    v8 = a1 + *(unsigned __int16 *)(a1 + 2);
    if ( v6 >= v4 )
      break;
    if ( i >= v8 )
      return 3221225485LL;
    ++v6;
  }
  if ( i > v8 )
    LODWORD(i) = 0;
  if ( (_DWORD)v2 )
  {
    v9 = v2;
    do
    {
      v5 += *(unsigned __int16 *)(v5 + 2);
      --v9;
    }
    while ( v9 );
  }
  RtlpDeleteData(v5, *(unsigned __int16 *)(v5 + 2), (unsigned int)(i - v5));
  --*(_WORD *)(a1 + 4);
  return 0LL;
}
