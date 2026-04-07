/*
 * XREFs of ?MonitorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003CF00
 * Callers:
 *     <none>
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18003CC40 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x18003EF90 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180047F08 (--0CWindowData@@QEAA@XZ.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18004B2C0 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x1800522D4 (-OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetDpi@CAcrylicSheet@@QEAAJH@Z @ 0x1800A324C (-SetDpi@CAcrylicSheet@@QEAAJH@Z.c)
 *     ?IsVailContainer@@YA_NXZ @ 0x18010DE28 (-IsVailContainer@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::MonitorChange(CAcrylicSheet **this, struct IDwmWindow *a2)
{
  int v4; // esi
  __int64 v5; // rbx
  unsigned int v6; // edi
  __int64 v7; // rdi
  int v8; // r15d
  int v9; // r14d
  double v10; // xmm6_8
  bool v11; // dl
  BOOL v12; // esi
  CTopLevelWindow *v13; // rcx
  int updated; // eax
  __int64 v15; // r8
  CWindowData *v17; // rax
  CWindowData *v18; // rax
  CAcrylicSheet *v19; // rcx
  unsigned int v20; // [rsp+20h] [rbp-B9h]
  int v21; // [rsp+30h] [rbp-A9h] BYREF
  int v22; // [rsp+38h] [rbp-A1h] BYREF
  int v23; // [rsp+40h] [rbp-99h] BYREF
  int v24; // [rsp+48h] [rbp-91h] BYREF
  int v25; // [rsp+50h] [rbp-89h] BYREF
  _QWORD v26[3]; // [rsp+58h] [rbp-81h] BYREF
  _BYTE v27[16]; // [rsp+70h] [rbp-69h] BYREF
  _QWORD *v28; // [rsp+80h] [rbp-59h]
  __int64 v29; // [rsp+88h] [rbp-51h]
  int *v30; // [rsp+90h] [rbp-49h]
  __int64 v31; // [rsp+98h] [rbp-41h]
  int *v32; // [rsp+A0h] [rbp-39h]
  __int64 v33; // [rsp+A8h] [rbp-31h]
  int *v34; // [rsp+B0h] [rbp-29h]
  __int64 v35; // [rsp+B8h] [rbp-21h]
  int *v36; // [rsp+C0h] [rbp-19h]
  __int64 v37; // [rsp+C8h] [rbp-11h]
  int *v38; // [rsp+D0h] [rbp-9h]
  __int64 v39; // [rsp+D8h] [rbp-1h]

  v26[1] = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( !v5 && (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
  {
    v17 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                           WPF::g_pProcessHeap,
                           864LL);
    v26[0] = v17;
    if ( !v17 || (v18 = CWindowData::CWindowData(v17), (v5 = (__int64)v18) == 0) )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x822u, 0LL);
LABEL_32:
      v6 = v4;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x17E4u, 0LL);
      goto LABEL_22;
    }
    *((_QWORD *)v18 + 3) = a2;
    (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v18);
    *(_QWORD *)(v5 + 40) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
    v4 = CWindowList::SyncWindowData((CWindowList *)this, a2, (struct CWindowData *)v5);
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x826u, 0LL);
      goto LABEL_32;
    }
  }
  v6 = v4;
  if ( !v5 )
    goto LABEL_22;
  v7 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 136LL))(a2);
  v8 = *(_DWORD *)(v7 + 12);
  v9 = *(_DWORD *)(v7 + 8);
  v10 = *(double *)v7;
  if ( *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 8) == 6 )
    IsVailContainer();
  v11 = *(double *)(v5 + 336) != v10 || *(_DWORD *)(v5 + 344) != v9 || *(_DWORD *)(v5 + 348) != v8;
  v12 = *(_DWORD *)(v5 + 352) != *(_DWORD *)(v7 + 16)
     || *(_DWORD *)(v5 + 356) != *(_DWORD *)(v7 + 20)
     || *(_DWORD *)(v5 + 360) != *(_DWORD *)(v7 + 24)
     || *(_DWORD *)(v5 + 364) != *(_DWORD *)(v7 + 28)
     || ((*(_BYTE *)(v7 + 36) ^ *(_BYTE *)(v5 + 372)) & 1) != 0
     || *(_DWORD *)(v5 + 368) != *(_DWORD *)(v7 + 32);
  *(_OWORD *)(v5 + 336) = *(_OWORD *)v7;
  *(_OWORD *)(v5 + 352) = *(_OWORD *)(v7 + 16);
  *(_OWORD *)(v5 + 368) = *(_OWORD *)(v7 + 32);
  *(_OWORD *)(v5 + 384) = *(_OWORD *)(v7 + 48);
  *(_QWORD *)(v5 + 400) = *(_QWORD *)(v7 + 64);
  *(_DWORD *)(v5 + 348) = v8;
  *(_DWORD *)(v5 + 344) = v9;
  *(double *)(v5 + 336) = v10;
  v13 = *(CTopLevelWindow **)(v5 + 440);
  if ( v13 )
  {
    if ( v11 )
    {
      CTopLevelWindow::OnSettingsUpdated(v13, 1u);
      v19 = this[68];
      if ( v19 )
      {
        if ( this[88] == (CAcrylicSheet *)v5 )
        {
          updated = CAcrylicSheet::SetDpi(v19, v8);
          v6 = updated;
          if ( updated < 0 )
          {
            v20 = 6168;
LABEL_41:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, v20, 0LL);
            goto LABEL_22;
          }
        }
      }
    }
  }
  updated = CWindowList::UpdateWindowScale((CWindowList *)this, (struct CWindowData *)v5, v12);
  v6 = updated;
  if ( updated < 0 )
  {
    v20 = 6172;
    goto LABEL_41;
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
  {
    v25 = *(_DWORD *)(v5 + 364);
    v24 = *(_DWORD *)(v5 + 360);
    v23 = *(_DWORD *)(v5 + 356);
    v22 = *(_DWORD *)(v5 + 352);
    v21 = *(_DWORD *)(v5 + 344);
    v26[0] = *(_QWORD *)(v5 + 40);
    v28 = v26;
    v29 = 8LL;
    v30 = &v21;
    v31 = 4LL;
    v32 = &v22;
    v33 = 4LL;
    v34 = &v23;
    v35 = 4LL;
    v36 = &v24;
    v37 = 4LL;
    v38 = &v25;
    v39 = 4LL;
    McGenEventWrite_EtwEventWriteTransfer(
      Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (__int64)&UdwmWindowDPI_Change,
      v15,
      7LL,
      (__int64)v27);
  }
  updated = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 58)
                                                       + 136LL))(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
              v5);
  v6 = updated;
  if ( updated < 0 )
  {
    v20 = 6184;
    goto LABEL_41;
  }
LABEL_22:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v6;
}
