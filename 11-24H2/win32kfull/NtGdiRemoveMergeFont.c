/*
 * XREFs of NtGdiRemoveMergeFont @ 0x140327EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400BB34C (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1UAPIDCOBJ@@QEAA@XZ @ 0x1400BB3D8 (--1UAPIDCOBJ@@QEAA@XZ.c)
 *     ?bRemoveMergeFont@XDCOBJ@@QEAAHU_UNIVERSAL_FONT_ID@@@Z @ 0x140336918 (-bRemoveMergeFont@XDCOBJ@@QEAAHU_UNIVERSAL_FONT_ID@@@Z.c)
 */

__int64 __fastcall NtGdiRemoveMergeFont(HDC a1, char a2)
{
  unsigned int v4; // ebx
  _QWORD v5[11]; // [rsp+30h] [rbp-58h] BYREF

  UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v5, a1);
  if ( v5[0] )
  {
    if ( (*(_DWORD *)(v5[0] + 36LL) & 1) != 0 )
    {
      v4 = 0;
    }
    else
    {
      if ( (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v4 = XDCOBJ::bRemoveMergeFont(v5);
    }
    UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v5);
    return v4;
  }
  else
  {
    UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v5);
    return 0LL;
  }
}
