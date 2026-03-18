/*
 * XREFs of NtGdiCreateCompatibleBitmap @ 0x140013BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GrepCreateCompatibleBitmap@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKPEAU_LUID@@PEAG@Z @ 0x140013C4C (-GrepCreateCompatibleBitmap@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKPEAU_LUID@@PEAG@Z.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140018F7C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x14001980C (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 */

HBITMAP __fastcall NtGdiCreateCompatibleBitmap(HDC a1, int a2, int a3)
{
  HBITMAP CompatibleBitmap; // rbx
  _BYTE v7[136]; // [rsp+30h] [rbp-88h] BYREF

  OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v7, a1);
  CompatibleBitmap = GrepCreateCompatibleBitmap((struct OPTAPIDCOBJ *)v7, a2, a3 & 0xF0FFFFFF, 0, 0LL, 0LL);
  OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v7);
  return CompatibleBitmap;
}
