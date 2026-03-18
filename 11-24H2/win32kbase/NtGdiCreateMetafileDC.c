/*
 * XREFs of NtGdiCreateMetafileDC @ 0x14000CE10
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateDisplayDC @ 0x14000E640 (GreCreateDisplayDC.c)
 *     UserGetDesktopDC @ 0x14000EDE0 (UserGetDesktopDC.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001D9D8 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001E1AC (--1APIDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiCreateMetafileDC(HDC a1)
{
  __int64 DisplayDC; // rbx
  _QWORD v3[15]; // [rsp+20h] [rbp-78h] BYREF

  DisplayDC = 0LL;
  if ( !a1 )
    return UserGetDesktopDC(2u);
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v3, a1);
  if ( v3[0] )
    DisplayDC = GreCreateDisplayDC(*(HDEV *)(v3[0] + 48LL), 2u);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v3);
  return DisplayDC;
}
