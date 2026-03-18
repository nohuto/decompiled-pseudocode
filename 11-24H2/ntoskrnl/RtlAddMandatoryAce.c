/*
 * XREFs of RtlAddMandatoryAce @ 0x14091D840
 * Callers:
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1407DCFBC (CmpGenerateAppHiveSecurityDescriptor.c)
 *     IopCreateSecurityDescriptorPerType @ 0x1409A3AF0 (IopCreateSecurityDescriptorPerType.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140A49740 (ObpVerifyAccessToBoundaryEntry.c)
 *     SepInitSystemDacls @ 0x140C36FC8 (SepInitSystemDacls.c)
 *     ExpKeyedEventInitialization @ 0x140C43A94 (ExpKeyedEventInitialization.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     RtlValidAcl @ 0x14091CB10 (RtlValidAcl.c)
 */

__int64 __fastcall RtlAddMandatoryAce(__int64 a1, unsigned int a2, int a3, unsigned __int8 *a4, char a5, int a6)
{
  char v7; // r14
  int v9; // ecx
  char v10; // si
  unsigned __int64 v11; // rcx
  unsigned int i; // edx
  unsigned __int64 v13; // r8
  unsigned __int16 v14; // dx
  __int64 result; // rax

  v7 = a3;
  if ( !a1 )
    return 3221225591LL;
  if ( a5 != 17 )
    return 3221225485LL;
  if ( (unsigned __int64)a4 <= 0x7FFFFFFF0000LL || (*a4 & 0xF) != 1 || a4[1] > 0xFu )
    return 3221225592LL;
  v9 = *(_DWORD *)(a4 + 2);
  if ( !v9 )
    v9 = *((unsigned __int16 *)a4 + 3) - 4096;
  if ( v9 )
    return 3221225485LL;
  if ( *(_BYTE *)a1 > 4u || a2 > 4 )
    return 3221225561LL;
  v10 = *(_BYTE *)a1;
  if ( *(_BYTE *)a1 <= (unsigned __int8)a2 )
    v10 = a2;
  if ( (a3 & 0xFFFFFFE0) != 0 || (a6 & 0xFFFFFFF8) != 0 )
    return 3221225485LL;
  if ( !RtlValidAcl(a1) )
    return 3221225591LL;
  v11 = a1 + 8;
  for ( i = 0; i < *(unsigned __int16 *)(a1 + 4); ++i )
  {
    if ( v11 >= a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
      return 3221225591LL;
    v11 += *(unsigned __int16 *)(v11 + 2);
  }
  v13 = a1 + *(unsigned __int16 *)(a1 + 2);
  if ( v11 > v13 )
    v11 = 0LL;
  v14 = 4 * (a4[1] + 4);
  if ( !v11 || v11 + v14 > v13 )
    return 3221225625LL;
  *(_WORD *)(v11 + 2) = v14;
  *(_BYTE *)(v11 + 1) = v7;
  *(_BYTE *)v11 = 17;
  *(_DWORD *)(v11 + 4) = a6;
  memmove((void *)(v11 + 8), a4, 4LL * a4[1] + 8);
  ++*(_WORD *)(a1 + 4);
  result = 0LL;
  *(_BYTE *)a1 = v10;
  return result;
}
