/*
 * XREFs of ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x18006D340
 * Callers:
 *     ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180093190 (-UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRT.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CVirtualDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x18006D5A0 (-Create@CVirtualDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CVirtualDesktopThumbnailCVI@@SAJPEAPEAV1@@Z @ 0x18006D684 (-Create@CVirtualDesktopThumbnailCVI@@SAJPEAPEAV1@@Z.c)
 *     ?SetRect@CVirtualDesktopThumbnailCVI@@QEAAJAEBUtagRECT@@AEBUtagSIZE@@@Z @ 0x18006D760 (-SetRect@CVirtualDesktopThumbnailCVI@@QEAAJAEBUtagRECT@@AEBUtagSIZE@@@Z.c)
 *     ?Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z @ 0x18006D77C (-Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x18006D878 (-SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z.c)
 *     ?Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z @ 0x1800951B0 (-Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z.c)
 *     ?SetDesktopId@CDesktopThumbnailBase@@QEAAJ_K@Z @ 0x180098AB8 (-SetDesktopId@CDesktopThumbnailBase@@QEAAJ_K@Z.c)
 *     ?SetVisual@CDesktopThumbnailCVI@@QEAAXPEAVCDesktopThumbnailBase@@@Z @ 0x18009B238 (-SetVisual@CDesktopThumbnailCVI@@QEAAXPEAVCDesktopThumbnailBase@@@Z.c)
 */

__int64 __fastcall CDCompVirtualDesktopThumbnailData::EnsureThumbnailVisual(CDCompVirtualDesktopThumbnailData *this)
{
  __int64 v1; // rax
  CVirtualDesktopThumbnailCVI *v3; // r14
  CMILRefCountBase *v4; // rdi
  unsigned int v5; // ebx
  int v6; // eax
  CDesktopThumbnailBase *v7; // r15
  int v8; // eax
  int v9; // eax
  LONG v10; // eax
  LONG v11; // eax
  int v12; // eax
  CDesktopThumbnailCVI *v13; // rcx
  int v14; // eax
  CMILRefCountBase *v15; // rcx
  int v16; // eax
  CMILRefCountBase *v18; // [rsp+70h] [rbp+40h] BYREF
  CVirtualDesktopThumbnailCVI *v19; // [rsp+78h] [rbp+48h] BYREF
  struct tagSIZE v20; // [rsp+80h] [rbp+50h] BYREF

  v1 = *((_QWORD *)this + 2);
  v20 = 0LL;
  v3 = 0LL;
  v19 = 0LL;
  v4 = 0LL;
  v18 = 0LL;
  if ( (*(_BYTE *)(v1 + 738) & 0x40) != 0 )
  {
    v5 = 0;
    if ( !*((_QWORD *)this + 14) )
    {
      v6 = CVirtualDesktopThumbnail::Create((struct CVirtualDesktopThumbnail **)&v20);
      v7 = (CDesktopThumbnailBase *)v20;
      v5 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x198u, 0LL);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)&v20 + 240LL) = this;
        v8 = CDesktopThumbnailBase::SetDesktopId(v7, *(_QWORD *)(*((_QWORD *)this + 2) + 136LL));
        v5 = v8;
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x19Au, 0LL);
        }
        else
        {
          v9 = CVirtualDesktopThumbnailCVI::Create(&v19);
          v5 = v9;
          if ( v9 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x19Du, 0LL);
            v3 = v19;
          }
          else
          {
            v10 = *((_DWORD *)this + 12) - *((_DWORD *)this + 10);
            v3 = v19;
            if ( v10 < 0 )
              v10 = 0;
            v20.cx = v10;
            v11 = *((_DWORD *)this + 13) - *((_DWORD *)this + 11);
            if ( v11 < 0 )
              v11 = 0;
            v20.cy = v11;
            v12 = CVirtualDesktopThumbnailCVI::SetRect(v19, (const struct tagRECT *)((char *)this + 56), &v20);
            v5 = v12;
            if ( v12 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x19Eu, 0LL);
            }
            else
            {
              CDesktopThumbnailCVI::SetVisual(v13, v7);
              v14 = CDesktopThumbnailCVIVisual::Create(&v18);
              v5 = v14;
              if ( v14 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x1A1u, 0LL);
                v4 = v18;
              }
              else
              {
                v4 = v18;
                v15 = v18;
                *((_QWORD *)v18 + 34) = *((_QWORD *)this + 2);
                *((_BYTE *)v15 + 297) = 1;
                v16 = CDesktopThumbnailCVIVisual::SetVisual(v15, v3, (RECT *)((char *)this + 56));
                v5 = v16;
                if ( v16 >= 0 )
                {
                  CDesktopThumbnailCVIVisual::Update(v4, (const struct tagRECT *)((char *)this + 40), 1.0);
                  *((_QWORD *)this + 16) = v7;
                  CMILRefCountBase::AddRef(v7);
                  *((_QWORD *)this + 14) = v4;
                  CMILRefCountBase::AddRef(v4);
                }
                else
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x1A6u, 0LL);
                }
              }
            }
          }
        }
      }
      if ( v7 )
        CBaseObject::Release(v7);
      if ( v3 )
        CBaseObject::Release(v3);
      if ( v4 )
        CBaseObject::Release(v4);
    }
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x190u, 0LL);
  }
  return v5;
}
