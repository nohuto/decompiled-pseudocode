/*
 * XREFs of RtlGetAce @ 0x180066C30
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800668AC (RtlpSysVolCheckOwnerAndSecurity.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetAce(__int64 a1, unsigned int a2, unsigned __int64 *a3)
{
  unsigned __int64 v4; // r9
  unsigned int i; // edx
  unsigned __int64 v6; // rax

  if ( (unsigned __int8)(*(_BYTE *)a1 - 2) > 2u || a2 >= *(unsigned __int16 *)(a1 + 4) )
    return 3221225485LL;
  v4 = a1 + 8;
  for ( i = 0; ; ++i )
  {
    *a3 = v4;
    v6 = a1 + *(unsigned __int16 *)(a1 + 2);
    if ( i >= a2 )
      break;
    if ( v4 >= v6 )
      return 3221225485LL;
    v4 += *(unsigned __int16 *)(v4 + 2);
  }
  if ( v4 >= v6 )
    return 3221225485LL;
  else
    return 0LL;
}
