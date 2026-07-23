/*
 * XREFs of SeQuerySecurityAttributesTokenAccessInformation @ 0x1403B5CD0
 * Callers:
 *     <none>
 * Callees:
 *     SepTokenFromAccessInformation @ 0x1403B64E0 (SepTokenFromAccessInformation.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403B7650 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall SeQuerySecurityAttributesTokenAccessInformation(
        __int64 a1,
        int a2,
        int a3,
        void *a4,
        int a5,
        __int64 a6)
{
  int v10; // edx
  size_t Size; // [rsp+30h] [rbp-4F8h]
  int v13[296]; // [rsp+40h] [rbp-4E8h] BYREF

  memset_0(v13, 0, sizeof(v13));
  if ( a5 )
  {
    if ( a4 )
    {
LABEL_3:
      SepTokenFromAccessInformation(a1, v13);
      LODWORD(Size) = a5;
      return SepInternalQuerySecurityAttributesTokenEx((int)v13, v10, a2, a3, 0, a4, Size, a6);
    }
  }
  else if ( !a4 )
  {
    goto LABEL_3;
  }
  return 3221225485LL;
}
