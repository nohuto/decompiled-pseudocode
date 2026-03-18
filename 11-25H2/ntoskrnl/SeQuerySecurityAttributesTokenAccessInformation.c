/*
 * XREFs of SeQuerySecurityAttributesTokenAccessInformation @ 0x140361040
 * Callers:
 *     <none>
 * Callees:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14035FF40 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepTokenFromAccessInformation @ 0x140361E80 (SepTokenFromAccessInformation.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall SeQuerySecurityAttributesTokenAccessInformation(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _OWORD *a4,
        int a5,
        _DWORD *a6)
{
  char v10; // dl
  size_t Size; // [rsp+30h] [rbp-4F8h]
  int v13[296]; // [rsp+40h] [rbp-4E8h] BYREF

  memset_0(v13, 0, 0x498uLL);
  if ( a5 )
  {
    if ( a4 )
    {
LABEL_3:
      SepTokenFromAccessInformation(a1, v13);
      LODWORD(Size) = a5;
      return SepInternalQuerySecurityAttributesTokenEx((__int64)v13, v10, a2, a3, 0, a4, Size, a6);
    }
  }
  else if ( !a4 )
  {
    goto LABEL_3;
  }
  return 3221225485LL;
}
