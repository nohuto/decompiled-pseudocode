/*
 * XREFs of ImageList_Create @ 0x180224860
 * Callers:
 *     ?GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@PEAUHBITMAP__@@@Z @ 0x180054A8C (-GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@.c)
 *     CreateBitmapFromIcon @ 0x1804A1AB0 (CreateBitmapFromIcon.c)
 * Callees:
 *     _GetProcFromComCtl32 @ 0x1802DE848 (_GetProcFromComCtl32.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

HIMAGELIST __stdcall ImageList_Create(int cx, int cy, UINT flags, int cInitial, int cGrow)
{
  HIMAGELIST result; // rax

  result = (HIMAGELIST)qword_1808C73C0;
  if ( qword_1808C73C0 == -1 )
  {
    GetProcFromComCtl32(&qword_1808C73C0, "ImageList_Create");
    result = (HIMAGELIST)qword_1808C73C0;
  }
  if ( result )
    return (HIMAGELIST)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))result)(
                         (unsigned int)cx,
                         (unsigned int)cy,
                         flags);
  return result;
}
