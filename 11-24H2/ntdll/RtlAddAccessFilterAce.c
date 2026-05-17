/*
 * XREFs of RtlAddAccessFilterAce @ 0x18013ACD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlValidSid @ 0x180039220 (RtlValidSid.c)
 *     RtlValidAcl @ 0x180039260 (RtlValidAcl.c)
 *     RtlIsValidProcessTrustLabelSid @ 0x1800C8840 (RtlIsValidProcessTrustLabelSid.c)
 *     RtlCopySid @ 0x1800C8B90 (RtlCopySid.c)
 *     RtlFirstFreeAce @ 0x1800DE900 (RtlFirstFreeAce.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlAddAccessFilterAce(
        unsigned __int8 *a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        char a5,
        int a6,
        _DWORD *Src,
        unsigned __int16 a8)
{
  __int64 result; // rax
  int v13; // ecx
  unsigned __int8 v14; // r15
  unsigned int v15; // ecx
  unsigned int v16; // r8d
  __int64 v17; // rsi
  void *v18; // rdx
  char v19; // [rsp+20h] [rbp-20h]
  __int64 v20; // [rsp+28h] [rbp-18h] BYREF
  int v21; // [rsp+30h] [rbp-10h]
  unsigned __int16 v22; // [rsp+34h] [rbp-Ch]

  v19 = a3;
  v20 = 0LL;
  v21 = 0;
  v22 = 256;
  if ( !a1 || !RtlValidAcl((__int64)a1) )
    return 3221225591LL;
  if ( !Src || (unsigned __int16)(a8 - 6) > 0xFFF8u || *Src != 2020897377 || a5 != 21 )
    return 3221225485LL;
  if ( !RtlValidSid((_BYTE *)a4) )
    return 3221225592LL;
  if ( (a3 & 0x40) != 0 )
  {
    if ( !RtlIsValidProcessTrustLabelSid(a4) )
      return 3221225485LL;
  }
  else
  {
    v13 = *(_DWORD *)(a4 + 2) - v21;
    if ( !v13 )
      v13 = *(unsigned __int16 *)(a4 + 6) - v22;
    if ( v13 || *(_BYTE *)(a4 + 1) != 1 || *(_DWORD *)(a4 + 8) )
      return 3221225485LL;
  }
  if ( *a1 > 4u || a2 > 4 )
    return 3221225561LL;
  v14 = *a1;
  if ( *a1 <= a2 )
    v14 = a2;
  if ( (a3 & 0xFFFFFFA0) != 0 || (a6 & 0xFF000000) != 0 )
    return 3221225485LL;
  if ( !RtlFirstFreeAce((__int64)a1, &v20) )
    return 3221225591LL;
  v15 = (a8 + 3) & 0xFFFFFFFC;
  v16 = v15 + 4 * (*(unsigned __int8 *)(a4 + 1) + 4);
  if ( v16 < v15 )
    return 3221225621LL;
  if ( v16 > 0xFFFF )
    return 3221225485LL;
  v17 = v20;
  if ( !v20 || v20 + (unsigned __int64)v16 > (unsigned __int64)&a1[*((unsigned __int16 *)a1 + 1)] )
    return 3221225625LL;
  v18 = (void *)(v20 + 8);
  *(_WORD *)(v20 + 2) = v16;
  *(_BYTE *)(v17 + 1) = v19;
  *(_BYTE *)v17 = 21;
  *(_DWORD *)(v17 + 4) = a6;
  RtlCopySid(4 * *(unsigned __int8 *)(a4 + 1) + 8, v18, (unsigned __int8 *)a4);
  memmove((void *)(v17 + 4 * (*(unsigned __int8 *)(a4 + 1) + 4LL)), Src, a8);
  ++*((_WORD *)a1 + 2);
  result = 0LL;
  *a1 = v14;
  return result;
}
