/*
 * XREFs of ??1CDCompVirtualDesktopThumbnailData@@UEAA@XZ @ 0x180009368
 * Callers:
 *     ??_GCDCompVirtualDesktopThumbnailData@@UEAAPEAXI@Z @ 0x180009030 (--_GCDCompVirtualDesktopThumbnailData@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180050D7C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CDCompVirtualDesktopThumbnailData::~CDCompVirtualDesktopThumbnailData(
        CDCompVirtualDesktopThumbnailData *this)
{
  CBaseObject *v2; // rcx

  *(_QWORD *)this = &CDCompVirtualDesktopThumbnailData::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 16);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 16) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 168);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 136);
}
