/*
 * XREFs of ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z @ 0x1800C2940
 * Callers:
 *     ?SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18010C60C (-SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOT.c)
 * Callees:
 *     ?IsWindowTab@@YA_NPEAVCWindowData@@@Z @ 0x18000B71C (-IsWindowTab@@YA_NPEAVCWindowData@@@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18001C934 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z @ 0x1800AC3D8 (-Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x1800ACC7C (McTemplateU0qp_EtwEventWriteTransfer.c)
 *     ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x1800C2788 (-AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 *     ?CanAcceptBitmap@CIconicBitmapRegistry@@AEAA_NPEAVCWindowData@@@Z @ 0x1800C2C38 (-CanAcceptBitmap@CIconicBitmapRegistry@@AEAA_NPEAVCWindowData@@@Z.c)
 *     ?DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z @ 0x18010FE48 (-DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z.c)
 */

__int64 __fastcall CIconicBitmapRegistry::BitmapReceived(
        CIconicBitmapRegistry *this,
        struct CWindowData *a2,
        int a3,
        unsigned int a4,
        unsigned int nNumber,
        void *a6,
        unsigned __int64 a7,
        char a8)
{
  __int64 v9; // r14
  unsigned int v11; // ebx
  unsigned __int64 v13; // rcx
  bool v14; // bp
  HWND ShellWindowForDesktop; // rax
  unsigned int v16; // r15d
  int v17; // esi
  unsigned int v18; // r12d
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // r10d
  bool v22; // r10
  __int64 v23; // rcx
  int v24; // ebx
  int v25; // ebp
  int v26; // eax
  CBaseObject *v27; // rsi
  char v28; // al
  CBaseObject *v29; // r8
  int nNumerator[2]; // [rsp+30h] [rbp-48h] BYREF
  CBaseObject *v32; // [rsp+38h] [rbp-40h] BYREF
  DWORD v33; // [rsp+88h] [rbp+10h] BYREF
  DWORD dwProcessId; // [rsp+98h] [rbp+20h] BYREF

  v9 = a4;
  v11 = 0;
  v32 = 0LL;
  if ( GetWindowThreadProcessId(*((HWND *)a2 + 5), &v33) && a3 == v33 )
  {
    v14 = 1;
  }
  else
  {
    v14 = 0;
    ShellWindowForDesktop = CWindowList::GetShellWindowForDesktop(
                              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                              *((_QWORD *)a2 + 17));
    if ( ShellWindowForDesktop )
    {
      dwProcessId = 0;
      GetWindowThreadProcessId(ShellWindowForDesktop, &dwProcessId);
      v14 = dwProcessId == a3;
    }
  }
  v16 = v9;
  v17 = nNumber;
  v18 = nNumber;
  if ( (*((_BYTE *)a2 + 674) & 2) != 0
    && (v13 = nNumber * v9, v13 <= 0xFFFFFFFF)
    && (v19 = 4LL * (unsigned int)v13, v19 <= 0xFFFFFFFF)
    && a7 >= (unsigned int)v19
    && v14 )
  {
    if ( !CIconicBitmapRegistry::CanAcceptBitmap(this, a2) )
    {
      if ( ((unsigned __int8)v21 & (unsigned __int8)Microsoft_Windows_Dwm_UdwmEnableBits) != 0 )
        McTemplateU0qp_EtwEventWriteTransfer(v20, (__int64)&UdwmManageIconicThumbnail_Info, v21, *((_QWORD *)a2 + 5));
      return v11;
    }
    if ( !IsWindowTab(a2) )
    {
      if ( !(unsigned int)DwmGetIdealIconicThumbnailSize(v22, (struct tagSIZE *)nNumerator) )
      {
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McTemplateU0qp_EtwEventWriteTransfer(v23, (__int64)&UdwmManageIconicThumbnail_Info, 1LL, *((_QWORD *)a2 + 5));
        v11 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180129038, 1LL, -2147467259, 0x297u);
        return v11;
      }
      v24 = nNumerator[0];
      v25 = nNumerator[1];
      if ( (int)v9 <= nNumerator[0] || (int)v9 * nNumerator[1] > v17 * nNumerator[0] )
      {
        if ( v17 > nNumerator[1] && (int)v9 * nNumerator[1] > v17 * nNumerator[0] )
        {
          v16 = MulDiv(v9, nNumerator[1], v17);
          v18 = v25;
        }
      }
      else
      {
        v18 = MulDiv(v17, nNumerator[0], v9);
        v16 = v24;
      }
    }
    v26 = CBitmapSource::Create(v9, v17, v16, v18, a6, &v32);
    v27 = v32;
    v11 = v26;
    if ( v26 >= 0 )
    {
      v28 = a8;
      v29 = v32;
      *((_BYTE *)a2 + 674) &= ~4u;
      *((_BYTE *)a2 + 674) |= 4 * (v28 & 1);
      CIconicBitmapRegistry::AcceptBitmap((char **)this, a2, v29);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180129038, 1LL, v26, 0x2A6u);
    }
    if ( v27 )
      CBaseObject::Release(v27);
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp_EtwEventWriteTransfer(v13, (__int64)&UdwmManageIconicThumbnail_Info, 1LL, *((_QWORD *)a2 + 5));
    v11 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180129038, 1LL, -2147024809, 0x285u);
  }
  return v11;
}
