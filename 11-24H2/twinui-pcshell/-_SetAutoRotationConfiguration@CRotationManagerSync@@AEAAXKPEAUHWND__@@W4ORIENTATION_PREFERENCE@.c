/*
 * XREFs of ?_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@@@Z @ 0x180089D40
 * Callers:
 *     ?ReconcileModernOrientationPreferences@CRotationManagerSync@@UEAAXXZ @ 0x18008A590 (-ReconcileModernOrientationPreferences@CRotationManagerSync@@UEAAXXZ.c)
 *     _lambda_f6f69901abcf4556c2ac2b4f02b3e468_::operator() @ 0x18008B694 (_lambda_f6f69901abcf4556c2ac2b4f02b3e468_--operator().c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18008A004 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?StoreShellPreference@ROTATION_INFORMATION@CRotationManagerSync@@QEAAXW4ORIENTATION_PREFERENCE@@W4STORE_OPTION@12@@Z @ 0x1802F39C0 (-StoreShellPreference@ROTATION_INFORMATION@CRotationManagerSync@@QEAAXW4ORIENTATION_PREFERENCE@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRotationManagerSync::_SetAutoRotationConfiguration(
        CRotationManagerSync *this,
        unsigned int a2,
        HWND a3,
        __int64 a4)
{
  int v7; // edx
  char *v8; // rcx
  PSRWLOCK v9; // rax
  _BYTE *v10; // [rsp+20h] [rbp-48h]
  _BYTE v11[16]; // [rsp+30h] [rbp-38h] BYREF

  if ( a2 == HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr) )
  {
    if ( *((_DWORD *)this + 30) )
    {
      *((_DWORD *)this + 28) = a4;
    }
    else if ( (_DWORD)a4 != *((_DWORD *)this + 25) || !*((_BYTE *)this + 104) )
    {
      CRotationManagerSync::ROTATION_INFORMATION::StoreShellPreference((char *)this + 96, (unsigned int)a4);
    }
  }
  if ( a2 )
  {
    v7 = *((_DWORD *)this + 30);
    v8 = (char *)this + 96;
    if ( v7 )
      v8 = (char *)this + 108;
    if ( a2 != *(_DWORD *)v8 )
    {
      if ( !v7 )
      {
        if ( *((_BYTE *)this + 128) )
        {
          *((_DWORD *)this + 33) = a2;
        }
        else
        {
          if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
          {
            v10 = v11;
            McGenEventWrite_EventWriteTransfer(
              &MICROSOFT_TWINUI_PUBLISHER_Context,
              &ImmersiveShell_AppManager_SetActiveProcess_Start,
              a3,
              1LL);
          }
          (*(void (__fastcall **)(PVOID, _QWORD, HWND, __int64, _BYTE *))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[16].Ptr
                                                                        + 32LL))(
            CApplicationManagerUtility::g_pIAMGlobals[16].Ptr,
            a2,
            a3,
            a4,
            v10);
          if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
          {
            v10 = v11;
            McGenEventWrite_EventWriteTransfer(
              &MICROSOFT_TWINUI_PUBLISHER_Context,
              &ImmersiveShell_AppManager_SetActiveProcess_Stop,
              a3,
              1LL);
          }
        }
      }
      *(_DWORD *)((char *)this + (*((_DWORD *)this + 30) != 0 ? 0xC : 0) + 96) = a2;
    }
  }
  if ( a3 )
  {
    v9 = CApplicationManagerUtility::g_pIAMGlobals;
    *((_QWORD *)this + 19) = a3;
    (*(void (__fastcall **)(PVOID, HWND, HWND, __int64, _BYTE *))(*(_QWORD *)v9[16].Ptr + 24LL))(
      v9[16].Ptr,
      a3,
      a3,
      a4,
      v10);
  }
}
