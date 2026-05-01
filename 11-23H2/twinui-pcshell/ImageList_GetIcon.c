/*
 * XREFs of ImageList_GetIcon @ 0x180390F40
 * Callers:
 *     ?GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@PEAUHBITMAP__@@@Z @ 0x18063B250 (-GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@.c)
 * Callees:
 *     _GetProcFromComCtl32 @ 0x180391084 (_GetProcFromComCtl32.c)
 */

HICON __stdcall ImageList_GetIcon(HIMAGELIST himl, int i, UINT flags)
{
  HICON result; // rax

  result = (HICON)qword_18098C440;
  if ( qword_18098C440 == -1 )
  {
    GetProcFromComCtl32(&qword_18098C440, "ImageList_GetIcon");
    result = (HICON)qword_18098C440;
  }
  if ( result )
    return (HICON)((__int64 (__fastcall *)(HIMAGELIST, _QWORD, _QWORD))result)(himl, 0LL, 0LL);
  return result;
}
