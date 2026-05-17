/*
 * XREFs of RtlAddAccessAllowedAceEx @ 0x18005E800
 * Callers:
 *     <none>
 * Callees:
 *     RtlValidSid @ 0x18005FCD0 (RtlValidSid.c)
 *     RtlValidAcl @ 0x18005FD10 (RtlValidAcl.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlAddAccessAllowedAceEx(char *a1, unsigned int a2, int a3, int a4, unsigned __int8 *Src)
{
  unsigned __int8 v9; // al
  unsigned __int8 v10; // di
  unsigned __int64 v11; // rcx
  unsigned int i; // edx
  unsigned __int64 v13; // rdx
  unsigned __int16 v14; // r8
  __int64 result; // rax

  if ( !(unsigned __int8)RtlValidSid(Src) )
    return 3221225592LL;
  if ( (unsigned __int8)*a1 > 4u || a2 > 4 )
    return 3221225561LL;
  v9 = a2;
  v10 = *a1;
  if ( (unsigned __int8)*a1 <= v9 )
    v10 = v9;
  if ( (a3 & 0xFFFFFFE0) != 0 && (a3 & 0xFFFFFFC0) != 0 )
    return 3221225485LL;
  if ( !(unsigned __int8)RtlValidAcl(a1) )
    return 3221225591LL;
  v11 = (unsigned __int64)(a1 + 8);
  for ( i = 0; i < *((unsigned __int16 *)a1 + 2); ++i )
  {
    if ( v11 >= (unsigned __int64)&a1[*((unsigned __int16 *)a1 + 1)] )
      return 3221225591LL;
    v11 += *(unsigned __int16 *)(v11 + 2);
  }
  v13 = (unsigned __int64)&a1[*((unsigned __int16 *)a1 + 1)];
  if ( v11 > v13 )
    v11 = 0LL;
  v14 = 4 * (Src[1] + 4);
  if ( !v11 || v11 + v14 > v13 )
    return 3221225625LL;
  *(_WORD *)(v11 + 2) = v14;
  *(_BYTE *)(v11 + 1) = a3;
  *(_BYTE *)v11 = 0;
  *(_DWORD *)(v11 + 4) = a4;
  memmove((void *)(v11 + 8), Src, 4LL * Src[1] + 8);
  ++*((_WORD *)a1 + 2);
  result = 0LL;
  *a1 = v10;
  return result;
}
