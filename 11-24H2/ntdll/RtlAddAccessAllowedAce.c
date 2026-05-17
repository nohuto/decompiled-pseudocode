/*
 * XREFs of RtlAddAccessAllowedAce @ 0x180038BA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlValidSid @ 0x180039220 (RtlValidSid.c)
 *     RtlValidAcl @ 0x180039260 (RtlValidAcl.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlAddAccessAllowedAce(char *a1, unsigned int a2, int a3, unsigned __int8 *a4)
{
  unsigned __int8 v8; // al
  unsigned __int8 v9; // di
  unsigned __int64 v10; // rcx
  unsigned int i; // edx
  unsigned __int64 v12; // r8
  unsigned __int16 v13; // dx
  __int64 result; // rax

  if ( !(unsigned __int8)RtlValidSid(a4) )
    return 3221225592LL;
  if ( (unsigned __int8)*a1 > 4u || a2 > 4 )
    return 3221225561LL;
  v8 = a2;
  v9 = *a1;
  if ( (unsigned __int8)*a1 <= v8 )
    v9 = v8;
  if ( !(unsigned __int8)RtlValidAcl(a1) )
    return 3221225591LL;
  v10 = (unsigned __int64)(a1 + 8);
  for ( i = 0; i < *((unsigned __int16 *)a1 + 2); ++i )
  {
    if ( v10 >= (unsigned __int64)&a1[*((unsigned __int16 *)a1 + 1)] )
      return 3221225591LL;
    v10 += *(unsigned __int16 *)(v10 + 2);
  }
  v12 = (unsigned __int64)&a1[*((unsigned __int16 *)a1 + 1)];
  if ( v10 > v12 )
    v10 = 0LL;
  v13 = 4 * (a4[1] + 4);
  if ( !v10 || v10 + v13 > v12 )
    return 3221225625LL;
  *(_WORD *)(v10 + 2) = v13;
  *(_WORD *)v10 = 0;
  *(_DWORD *)(v10 + 4) = a3;
  memmove((void *)(v10 + 8), a4, 4LL * a4[1] + 8);
  ++*((_WORD *)a1 + 2);
  result = 0LL;
  *a1 = v9;
  return result;
}
