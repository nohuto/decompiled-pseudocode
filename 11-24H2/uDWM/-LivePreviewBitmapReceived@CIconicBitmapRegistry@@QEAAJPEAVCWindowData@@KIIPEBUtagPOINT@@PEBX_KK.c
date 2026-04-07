/*
 * XREFs of ?LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK@Z @ 0x1800C561C
 * Callers:
 *     ?SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x1800F2FE0 (-SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBI.c)
 * Callees:
 *     ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z @ 0x1800039BC (-GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x180008798 (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 *     ?Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z @ 0x180009DA0 (-Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x18001D3F4 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18008CBC4 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x180097FD4 (McTemplateU0qp_EtwEventWriteTransfer.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x1800EC890 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 */

__int64 __fastcall CIconicBitmapRegistry::LivePreviewBitmapReceived(
        unsigned __int64 this,
        struct CWindowData *a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        const struct tagPOINT *a6,
        void *a7,
        unsigned __int64 a8,
        char a9)
{
  bool v10; // zf
  CIconicBitmapRegistry *v13; // r14
  CBaseObject *v14; // r15
  unsigned __int64 v15; // rax
  struct CWindowData *MDIOwner; // rbx
  int WindowRestoreRect; // eax
  __int64 v18; // rcx
  unsigned int v19; // edi
  unsigned int v20; // r8d
  __int64 v21; // rdx
  unsigned int v22; // r9d
  _DWORD *v23; // rdx
  unsigned int v24; // ecx
  int v25; // eax
  __int64 v26; // rax
  int v27; // eax
  int v28; // eax
  const struct tagPOINT *v29; // rax
  char v30; // bl
  char v31; // r8
  __int64 v32; // rcx
  CBaseObject *v34; // [rsp+30h] [rbp-20h] BYREF
  struct tagRECT v35; // [rsp+38h] [rbp-18h] BYREF
  DWORD dwProcessId; // [rsp+88h] [rbp+38h] BYREF

  v10 = (*((_BYTE *)a2 + 738) & 2) == 0;
  v34 = 0LL;
  v13 = (CIconicBitmapRegistry *)this;
  dwProcessId = 0;
  v14 = 0LL;
  if ( v10
    || (this = a5 * (unsigned __int64)a4, this > 0xFFFFFFFF)
    || (v15 = 4LL * (unsigned int)this, v15 > 0xFFFFFFFF)
    || a8 < (unsigned int)v15
    || !GetWindowThreadProcessId(*((HWND *)a2 + 5), &dwProcessId)
    || a3 != dwProcessId )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp_EtwEventWriteTransfer(this, (__int64)&UdwmManageIconicThumbnail_Info, 1LL, *((_QWORD *)a2 + 5));
    v19 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, (const int *const)"W", 1LL, -2147024809, 0x2D4u, 0LL);
    goto LABEL_46;
  }
  MDIOwner = CWindowData::GetMDIOwner((HWND *)a2);
  if ( !MDIOwner )
    MDIOwner = a2;
  v35 = 0LL;
  WindowRestoreRect = CWindowData::GetWindowRestoreRect(MDIOwner, &v35, 0);
  v19 = WindowRestoreRect;
  if ( WindowRestoreRect < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, (const int *const)"W", 1LL, WindowRestoreRect, 0x2DFu, 0LL);
    return v19;
  }
  v20 = v35.right - v35.left;
  v21 = *((_QWORD *)MDIOwner + 60);
  if ( v35.right - v35.left < 0 )
    v20 = 0;
  v22 = v35.bottom - v35.top;
  if ( v35.bottom - v35.top < 0 )
    v22 = 0;
  if ( v21 )
  {
    v23 = *(_DWORD **)(v21 + 32);
    v24 = 0;
    if ( v23[14] - v23[12] >= 0 )
      v24 = v23[14] - v23[12];
    if ( v20 <= v24 )
      v20 = v24;
    v25 = v23[15] - v23[13];
    v18 = 0LL;
    if ( v25 >= 0 )
      v18 = (unsigned int)v25;
    if ( v22 <= (unsigned int)v18 )
      v22 = v18;
  }
  if ( a4 > v20 || a5 > v22 )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp_EtwEventWriteTransfer(v18, (__int64)&UdwmManageIconicThumbnail_Info, 1LL, *((_QWORD *)a2 + 5));
    v19 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, (const int *const)"W", 1LL, -2147024809, 0x2EAu, 0LL);
  }
  else
  {
    v26 = *((_QWORD *)v13 + 12);
    if ( v26 && *(struct CWindowData **)(v26 + 72) == a2 )
    {
      v27 = CBitmapSource::Create(a4, a5, a4, a5, a7, &v34);
      v19 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, (const int *const)"W", 1LL, v27, 0x2F6u, 0LL);
        v14 = v34;
      }
      else
      {
        if ( *((_BYTE *)v13 + 89) )
        {
          v28 = CIconicBitmapRegistry::RequestBitmap(v13, (HWND *)0xFFFFFFFFFFFFFFFFLL, 0);
          v19 = v28;
          if ( v28 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, (const int *const)"W", 1LL, v28, 0x2FBu, 0LL);
        }
        v29 = a6;
        v30 = *((_BYTE *)v13 + 88);
        v31 = a9;
        *(_WORD *)((char *)v13 + 89) = 0;
        v14 = v34;
        *((_BYTE *)v13 + 88) = 1;
        *((struct tagPOINT *)v13 + 13) = *v29;
        CWindowIconic::SetBitmap(*((CWindowIconic **)v13 + 12), v14, v31 & 1, 1);
        if ( !v30 )
          CWindowIconic::OnRepresentationTypeUpdated(*((CWindowIconic **)v13 + 12));
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McTemplateU0qp_EtwEventWriteTransfer(v32, (__int64)&UdwmManageIconicThumbnail_Info, 0LL, *((_QWORD *)a2 + 5));
      }
LABEL_46:
      if ( v14 )
        CBaseObject::Release(v14);
      return v19;
    }
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp_EtwEventWriteTransfer(v18, (__int64)&UdwmManageIconicThumbnail_Info, 1LL, *((_QWORD *)a2 + 5));
  }
  return v19;
}
