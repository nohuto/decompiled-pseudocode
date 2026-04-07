/*
 * XREFs of ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x180005770
 * Callers:
 *     ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180005140 (-UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRT.c)
 * Callees:
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x180005904 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 *     ?Create@CVirtualDesktopThumbnailCVI@@SAJPEAPEAV1@@Z @ 0x180005968 (-Create@CVirtualDesktopThumbnailCVI@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CVirtualDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800059F0 (-Create@CVirtualDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z @ 0x180005C00 (-Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x180005D28 (-SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z.c)
 *     ?Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z @ 0x18000626C (-Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDCompVirtualDesktopThumbnailData::EnsureThumbnailVisual(CDCompVirtualDesktopThumbnailData *this)
{
  __int64 v1; // rax
  unsigned int v3; // ebx
  CBaseObject *v4; // rsi
  int v5; // eax
  CBaseObject *v6; // rdi
  int updated; // eax
  int v8; // eax
  int v9; // eax
  CBaseObject *v10; // rcx
  __int128 v11; // xmm0
  int v12; // eax
  int v13; // eax
  CBaseObject *v14; // rcx
  CBaseObject *v15; // rdx
  int v16; // eax
  CBaseObject *v17; // rax
  CBaseObject *v19; // [rsp+80h] [rbp+48h] BYREF
  CBaseObject *v20; // [rsp+88h] [rbp+50h] BYREF
  CBaseObject *v21; // [rsp+90h] [rbp+58h] BYREF
  __int64 v22; // [rsp+98h] [rbp+60h]

  v1 = *((_QWORD *)this + 2);
  v19 = 0LL;
  v3 = 0;
  v21 = 0LL;
  v4 = 0LL;
  v20 = 0LL;
  if ( (*(_BYTE *)(v1 + 674) & 0x40) == 0 )
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x192u, 0LL);
    return v3;
  }
  if ( !*((_QWORD *)this + 14) )
  {
    v5 = CVirtualDesktopThumbnail::Create(&v19);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x19Au, 0LL);
    }
    else
    {
      v6 = v19;
      *((_QWORD *)v19 + 36) = this;
      *((_QWORD *)v6 + 35) = *(_QWORD *)(*((_QWORD *)this + 2) + 136LL);
      updated = CDesktopThumbnailBase::UpdateWindowClones(v6);
      v3 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x19Cu, 0LL);
        goto LABEL_15;
      }
      v8 = CVirtualDesktopThumbnailCVI::Create(&v21);
      v3 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x19Fu, 0LL);
        goto LABEL_15;
      }
      v9 = *((_DWORD *)this + 12) - *((_DWORD *)this + 10);
      v10 = v21;
      v11 = *(_OWORD *)((char *)this + 56);
      if ( v9 < 0 )
        v9 = 0;
      LODWORD(v22) = v9;
      v12 = *((_DWORD *)this + 13) - *((_DWORD *)this + 11);
      *(_OWORD *)((char *)v21 + 56) = v11;
      if ( v12 < 0 )
        v12 = 0;
      HIDWORD(v22) = v12;
      *((_QWORD *)v10 + 9) = v22;
      *((_QWORD *)v10 + 2) = v6;
      _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
      v13 = CDesktopThumbnailCVIVisual::Create(&v20);
      v3 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x1A3u, 0LL);
      }
      else
      {
        v4 = v20;
        v14 = v20;
        v15 = v21;
        *((_QWORD *)v20 + 40) = *((_QWORD *)this + 2);
        *((_BYTE *)v14 + 345) = 1;
        v16 = CDesktopThumbnailCVIVisual::SetVisual(v14, v15, (const struct tagRECT *)((char *)this + 56));
        v3 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x1A8u, 0LL);
          goto LABEL_14;
        }
        CDesktopThumbnailCVIVisual::Update(v4, (const struct tagRECT *)((char *)this + 40), 1.0);
        *((_QWORD *)this + 16) = v19;
        _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
        v17 = v20;
        *((_QWORD *)this + 14) = v20;
        _InterlockedIncrement((volatile signed __int32 *)v17 + 2);
      }
      v4 = v20;
    }
LABEL_14:
    v6 = v19;
LABEL_15:
    if ( v6 )
      CBaseObject::Release(v6);
    if ( v21 )
      CBaseObject::Release(v21);
    if ( v4 )
      CBaseObject::Release(v4);
  }
  return v3;
}
