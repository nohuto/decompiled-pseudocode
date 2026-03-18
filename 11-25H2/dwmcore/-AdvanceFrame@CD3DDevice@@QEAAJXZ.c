/*
 * XREFs of ?AdvanceFrame@CD3DDevice@@QEAAJXZ @ 0x180030658
 * Callers:
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x180030238 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18010A060 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?CompactAtlases@CAtlasManager@@QEAAXXZ @ 0x1801A1120 (-CompactAtlases@CAtlasManager@@QEAAXXZ.c)
 *     ?AgeRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ @ 0x1801CCD00 (-AgeRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ.c)
 *     ?ReclaimAtlasEntries@CAtlasManager@@QEAAXXZ @ 0x1801D73E0 (-ReclaimAtlasEntries@CAtlasManager@@QEAAXXZ.c)
 *     ?SignalRenderFence@CD3DDevice@@QEAAJ_K@Z @ 0x1801D83AC (-SignalRenderFence@CD3DDevice@@QEAAJ_K@Z.c)
 *     ?Trim@CD3DDevice@@QEAAXXZ @ 0x1801D8C2C (-Trim@CD3DDevice@@QEAAXXZ.c)
 *     ?DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ @ 0x1801D8DBC (-DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?CheckForDeviceLost@CD3DDevice@@AEAAXXZ @ 0x1801E2C40 (-CheckForDeviceLost@CD3DDevice@@AEAAXXZ.c)
 *     ?Flush@CD3DDevice@@QEAAXXZ @ 0x18021A420 (-Flush@CD3DDevice@@QEAAXXZ.c)
 *     ?RemoveStaleCheckMPOCaches@CD3DDevice@@AEAAXXZ @ 0x1802460F8 (-RemoveStaleCheckMPOCaches@CD3DDevice@@AEAAXXZ.c)
 */

__int64 __fastcall CD3DDevice::AdvanceFrame(CD3DDevice *this)
{
  unsigned __int64 CurrentFrameId; // rax
  CD3DDevice *v3; // rcx
  char v4; // di
  unsigned __int64 v5; // rsi

  CurrentFrameId = GetCurrentFrameId();
  v4 = *((_BYTE *)v3 + 1499);
  v5 = CurrentFrameId;
  CD3DDevice::SignalRenderFence(v3, CurrentFrameId);
  if ( *((_QWORD *)this + 183) != v5 )
  {
    *((_QWORD *)this + 183) = v5;
    CRenderTargetBitmapCache::AgeRenderTargetBitmaps((CD3DDevice *)((char *)this + 464));
    CAtlasManager::ReclaimAtlasEntries((CD3DDevice *)((char *)this + 512));
    CD3DDevice::RemoveStaleCheckMPOCaches(this);
    CD3DResourceManager::DestroyReleasedResources((CD3DDevice *)((char *)this + 1120));
    if ( *((_QWORD *)this + 185) != v5 )
    {
      CAtlasManager::CompactAtlases((CD3DDevice *)((char *)this + 512));
      v4 = 1;
    }
  }
  if ( *((_BYTE *)this + 1499) )
  {
    CD3DDevice::Flush(this);
LABEL_7:
    CD3DDevice::CheckForDeviceLost(this);
    goto LABEL_8;
  }
  if ( v4 )
    goto LABEL_7;
LABEL_8:
  if ( !*((_DWORD *)this + 278) && *((_BYTE *)this + 1500) )
    CD3DDevice::Trim(this);
  return *((_DWORD *)this + 278) != 0 ? 0x8898008D : 0;
}
