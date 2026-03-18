/*
 * XREFs of NtGdiSetLinkedUFIs @ 0x1401E4C60
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     PALLOCNOZ @ 0x140125A4C (PALLOCNOZ.c)
 *     ?bSetLinkedUFIs@XDCOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@I@Z @ 0x1401E4DD4 (-bSetLinkedUFIs@XDCOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@I@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall NtGdiSetLinkedUFIs(HDC a1, void *Src, unsigned int a3)
{
  __int64 v3; // rdi
  _BYTE *v6; // rbx
  unsigned int v7; // r14d
  _QWORD v9[14]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v10[32]; // [rsp+B0h] [rbp-58h] BYREF

  v3 = a3;
  v6 = 0LL;
  v7 = 1;
  if ( !Src && a3 )
    return 0LL;
  if ( a3 > 4 )
  {
    if ( a3 <= 0x4E2000 )
      v6 = (_BYTE *)PALLOCNOZ(8 * a3, 1684629063LL);
    if ( v6 )
      goto LABEL_4;
    return 0LL;
  }
  v6 = v10;
LABEL_4:
  if ( Src )
  {
    if ( 8 * v3 && ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    memmove(v6, Src, 8 * v3);
  }
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v9, a1);
  if ( v9[0] )
    v7 = XDCOBJ::bSetLinkedUFIs((XDCOBJ *)v9, (struct _UNIVERSAL_FONT_ID *)v6, v3);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v9);
  if ( v6 != v10 )
    Win32FreePool(v6);
  return v7;
}
