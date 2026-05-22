/*
 * XREFs of ?HitTestEdgyRegion@ShellEdgyRecognizer@@QEAA?AW4EdgyLocation@1@UtagPOINT@@@Z @ 0x180057E20
 * Callers:
 *     ?ProcessInput@ShellEdgyRecognizer@@QEAAXPEBUPointerInputInfo@@AEAV?$optional@ULastUpData@ShellEdgyRecognizer@@@std@@@Z @ 0x180057A1C (-ProcessInput@ShellEdgyRecognizer@@QEAAXPEBUPointerInputInfo@@AEAV-$optional@ULastUpData@ShellEd.c)
 *     ?DetectInOutIn@ShellEdgyRecognizer@@AEAA_NAEBV?$optional@ULastUpData@ShellEdgyRecognizer@@@std@@@Z @ 0x180057D9C (-DetectInOutIn@ShellEdgyRecognizer@@AEAA_NAEBV-$optional@ULastUpData@ShellEdgyRecognizer@@@std@@.c)
 * Callees:
 *     ?GetRectForLocation@ShellEdgyRecognizer@@AEAA?AUtagRECT@@U2@W4EdgyLocation@1@@Z @ 0x180057ED0 (-GetRectForLocation@ShellEdgyRecognizer@@AEAA-AUtagRECT@@U2@W4EdgyLocation@1@@Z.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 */

__int64 __fastcall ShellEdgyRecognizer::HitTestEdgyRegion(__int64 a1, POINT a2)
{
  RECT *v2; // rdi
  unsigned int left; // esi
  __int128 v7; // [rsp+20h] [rbp-58h] BYREF
  __m128i si128; // [rsp+30h] [rbp-48h] BYREF
  RECT rc; // [rsp+40h] [rbp-38h] BYREF

  v2 = (RECT *)&si128;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  while ( 1 )
  {
    if ( v2 == &rc )
      return 0LL;
    left = v2->left;
    if ( (v2->left & *(_DWORD *)(a1 + 128)) != 0 )
    {
      v7 = *(_OWORD *)(a1 + 80);
      ((void (__fastcall *)(__int64, RECT *, __int128 *, _QWORD))ShellEdgyRecognizer::GetRectForLocation)(
        a1,
        &rc,
        &v7,
        left);
      if ( PtInRect(&rc, a2) )
        break;
    }
    v2 = (RECT *)((char *)v2 + 4);
  }
  return left;
}
