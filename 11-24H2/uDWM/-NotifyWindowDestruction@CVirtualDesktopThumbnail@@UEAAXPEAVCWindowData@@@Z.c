/*
 * XREFs of ?NotifyWindowDestruction@CVirtualDesktopThumbnail@@UEAAXPEAVCWindowData@@@Z @ 0x18005AB90
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@?$DynArray@PEBVCStoryboard@@$0A@@@QEAAHAEBQEBVCStoryboard@@@Z @ 0x18004E3F0 (-Remove@-$DynArray@PEBVCStoryboard@@$0A@@@QEAAHAEBQEBVCStoryboard@@@Z.c)
 */

void __fastcall CVirtualDesktopThumbnail::NotifyWindowDestruction(
        CVirtualDesktopThumbnail *this,
        struct CWindowData *a2)
{
  __int64 v3; // r11
  CDesktopThumbnailBase *v4; // r11
  struct CWindowData *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  DynArray<CStoryboard const *,0>::Remove((__int64 *)(*((_QWORD *)this + 30) + 136LL), (__int64 *)&v5);
  DynArray<CStoryboard const *,0>::Remove((__int64 *)(*(_QWORD *)(v3 + 240) + 168LL), (__int64 *)&v5);
  CDesktopThumbnailBase::NotifyWindowDestruction(v4, a2);
}
