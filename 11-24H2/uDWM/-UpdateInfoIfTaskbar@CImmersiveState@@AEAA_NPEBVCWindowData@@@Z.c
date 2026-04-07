/*
 * XREFs of ?UpdateInfoIfTaskbar@CImmersiveState@@AEAA_NPEBVCWindowData@@@Z @ 0x18001DBF8
 * Callers:
 *     ?Initialize@CImmersiveState@@AEAAJ_K@Z @ 0x18001C4E8 (-Initialize@CImmersiveState@@AEAAJ_K@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180025C28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     wcscmp_0 @ 0x1800F6354 (wcscmp_0.c)
 */

char __fastcall CImmersiveState::UpdateInfoIfTaskbar(CImmersiveState *this, HWND *a2)
{
  char v4; // di
  HMONITOR v6; // rbx
  bool v7; // al
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  LONG left; // eax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  LONG right; // eax
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // edx
  int v17; // eax
  __int64 v18; // rcx
  HMONITOR v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rax
  __int128 v22; // [rsp+30h] [rbp-D0h] BYREF
  HMONITOR v23; // [rsp+40h] [rbp-C0h]
  struct tagMONITORINFO mi; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR ClassName[264]; // [rsp+70h] [rbp-90h] BYREF

  v4 = 0;
  if ( GetClassNameW(a2[5], ClassName, 260)
    && (!wcscmp_0(ClassName, L"Shell_SecondaryTrayWnd") || !wcscmp_0(ClassName, L"Shell_TrayWnd")) )
  {
    v4 = 1;
    v6 = MonitorFromWindow(a2[5], 0);
    if ( v6 )
    {
      if ( !wcscmp_0(ClassName, L"Shell_TrayWnd") )
        *((_QWORD *)this + 8) = v6;
      v7 = 0;
      v8 = 0LL;
      if ( *((_DWORD *)this + 10) )
      {
        while ( !v7 )
        {
          v18 = 3 * v8;
          v8 = (unsigned int)(v8 + 1);
          v19 = *(HMONITOR *)(*((_QWORD *)this + 2) + 8 * v18 + 16);
          v7 = v6 == v19;
          if ( (unsigned int)v8 >= *((_DWORD *)this + 10) )
          {
            if ( v6 == v19 )
              return v4;
            goto LABEL_9;
          }
        }
      }
      else
      {
LABEL_9:
        mi.cbSize = 40;
        memset(&mi.rcMonitor, 0, 36);
        if ( GetMonitorInfoW(v6, &mi) )
        {
          v9 = (unsigned __int64)a2[6];
          left = v9;
          v23 = v6;
          if ( mi.rcWork.left < (int)v9 )
            left = mi.rcWork.left;
          v11 = HIDWORD(v9);
          LODWORD(v22) = left;
          if ( mi.rcWork.top < (int)v11 )
            LODWORD(v11) = mi.rcWork.top;
          DWORD1(v22) = v11;
          v12 = (unsigned __int64)a2[7];
          right = v12;
          if ( mi.rcWork.right > (int)v12 )
            right = mi.rcWork.right;
          DWORD2(v22) = right;
          v14 = HIDWORD(v12);
          if ( mi.rcWork.bottom > (int)v14 )
            LODWORD(v14) = mi.rcWork.bottom;
          v15 = *((unsigned int *)this + 10);
          HIDWORD(v22) = v14;
          v16 = v15 + 1;
          if ( (int)v15 + 1 < (unsigned int)v15 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB3u, 0LL);
          }
          else if ( v16 <= *((_DWORD *)this + 9) )
          {
            v20 = 3 * v15;
            v21 = *((_QWORD *)this + 2);
            *(_OWORD *)(v21 + 8 * v20) = v22;
            *(_QWORD *)(v21 + 8 * v20 + 16) = v23;
            *((_DWORD *)this + 10) = v16;
          }
          else
          {
            v17 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 16, 24LL, 1LL, &v22);
            if ( v17 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xBEu, 0LL);
          }
        }
      }
    }
  }
  return v4;
}
