/*
 * XREFs of ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z @ 0x180009648
 * Callers:
 *     ?SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18008C634 (-SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOT.c)
 * Callees:
 *     ?DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z @ 0x18000627C (-DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z.c)
 *     ?CanAcceptBitmap@CIconicBitmapRegistry@@AEAA_NPEAVCWindowData@@@Z @ 0x180007C48 (-CanAcceptBitmap@CIconicBitmapRegistry@@AEAA_NPEAVCWindowData@@@Z.c)
 *     ?IsWindowTab@@YA_NPEAVCWindowData@@@Z @ 0x180007DE8 (-IsWindowTab@@YA_NPEAVCWindowData@@@Z.c)
 *     ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x1800088D8 (-AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 *     ?Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z @ 0x180009DA0 (-Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18003E04C (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x180097FD4 (McTemplateU0qp_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CIconicBitmapRegistry::BitmapReceived(
        CIconicBitmapRegistry *this,
        struct CWindowData *a2,
        int a3,
        unsigned int a4,
        LONG nNumber,
        void *a6,
        unsigned __int64 a7,
        char a8)
{
  __int64 v9; // r15
  unsigned int v10; // ebx
  CBaseObject *v11; // rsi
  unsigned __int64 v13; // rcx
  bool v14; // r12
  HWND ShellWindowForDesktop; // rax
  unsigned int v16; // r13d
  LONG v17; // r14d
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // r10d
  char v21; // r10
  __int64 v22; // rcx
  LONG cx; // ebx
  LONG cy; // esi
  int v25; // eax
  char v26; // cl
  CBaseObject *v27; // r8
  CBaseObject *v29; // [rsp+30h] [rbp-10h] BYREF
  struct tagSIZE v31; // [rsp+88h] [rbp+48h] BYREF
  DWORD dwProcessId; // [rsp+98h] [rbp+58h] BYREF

  v9 = a4;
  v10 = 0;
  dwProcessId = 0;
  v11 = 0LL;
  v29 = 0LL;
  if ( GetWindowThreadProcessId(*((HWND *)a2 + 5), &dwProcessId) && a3 == dwProcessId )
  {
    v14 = 1;
  }
  else
  {
    v14 = 0;
    ShellWindowForDesktop = CWindowList::GetShellWindowForDesktop(
                              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                              *((_QWORD *)a2 + 17));
    if ( ShellWindowForDesktop )
    {
      v31.cx = 0;
      GetWindowThreadProcessId(ShellWindowForDesktop, (LPDWORD)&v31);
      v14 = v31.cx == a3;
    }
  }
  v16 = v9;
  v17 = nNumber;
  if ( (*((_BYTE *)a2 + 738) & 2) != 0
    && (v13 = (unsigned int)nNumber * v9, v13 <= 0xFFFFFFFF)
    && (v18 = 4LL * (unsigned int)v13, v18 <= 0xFFFFFFFF)
    && a7 >= (unsigned int)v18
    && v14 )
  {
    if ( !CIconicBitmapRegistry::CanAcceptBitmap(this, a2) )
    {
      if ( ((unsigned __int8)v20 & (unsigned __int8)Microsoft_Windows_Dwm_UdwmEnableBits) != 0 )
        McTemplateU0qp_EtwEventWriteTransfer(v19, &UdwmManageIconicThumbnail_Info, v20, *((_QWORD *)a2 + 5));
      return v10;
    }
    if ( !IsWindowTab(a2) )
    {
      v31 = 0LL;
      if ( !(unsigned int)DwmGetIdealIconicThumbnailSize(v21, &v31) )
      {
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McTemplateU0qp_EtwEventWriteTransfer(v22, &UdwmManageIconicThumbnail_Info, 1LL, *((_QWORD *)a2 + 5));
        v10 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, (const int *const)"W", 1u, -2147467259, 0x296u, 0LL);
        return v10;
      }
      cx = v31.cx;
      cy = v31.cy;
      if ( (int)v9 <= v31.cx || (int)v9 * v31.cy > v17 * v31.cx )
      {
        if ( v17 > v31.cy && (int)v9 * v31.cy > v17 * v31.cx )
        {
          v16 = MulDiv(v9, v31.cy, v17);
          nNumber = cy;
        }
      }
      else
      {
        nNumber = MulDiv(v17, v31.cx, v9);
        v16 = cx;
      }
    }
    v25 = CBitmapSource::Create(v9, v17, v16, nNumber, a6, &v29);
    v10 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, (const int *const)"W", 1u, v25, 0x2A5u, 0LL);
      v11 = v29;
    }
    else
    {
      v26 = a8;
      *((_BYTE *)a2 + 738) &= ~4u;
      v11 = v29;
      v27 = v29;
      *((_BYTE *)a2 + 738) |= 4 * (v26 & 1);
      CIconicBitmapRegistry::AcceptBitmap(this, a2, v27);
    }
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp_EtwEventWriteTransfer(v13, &UdwmManageIconicThumbnail_Info, 1LL, *((_QWORD *)a2 + 5));
    v10 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, (const int *const)"W", 1u, -2147024809, 0x284u, 0LL);
  }
  if ( v11 )
    CBaseObject::Release(v11);
  return v10;
}
