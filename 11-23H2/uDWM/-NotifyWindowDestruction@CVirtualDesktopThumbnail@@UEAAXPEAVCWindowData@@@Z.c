/*
 * XREFs of ?NotifyWindowDestruction@CVirtualDesktopThumbnail@@UEAAXPEAVCWindowData@@@Z @ 0x180011BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x180011C20 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 */

void __fastcall CVirtualDesktopThumbnail::NotifyWindowDestruction(
        CVirtualDesktopThumbnail *this,
        const struct CTopLevelWindow **a2)
{
  const struct CTopLevelWindow **v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  DynArray<CWindowData *,0>::Remove(*((_QWORD *)this + 36) + 136LL, &v4);
  DynArray<CWindowData *,0>::Remove(*((_QWORD *)this + 36) + 168LL, &v4);
  CDesktopThumbnailBase::NotifyWindowDestruction(this, a2);
}
