/*
 * XREFs of HamRegisterDesktopProcessWithAppContainerToken @ 0x18000D8B0
 * Callers:
 *     <none>
 * Callees:
 *     HamPopulateActivityPropertiesByClass @ 0x180009C30 (HamPopulateActivityPropertiesByClass.c)
 *     CempGetTokenHostInfo @ 0x18000CEF0 (CempGetTokenHostInfo.c)
 *     ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x18000DE84 (-AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValu.c)
 *     HamCreateAutoRestartActivityForDesktopBridge @ 0x18000DFD4 (HamCreateAutoRestartActivityForDesktopBridge.c)
 *     ?StartAsyncForProcess@HamActivityWrapper@@QEAAJPEAXPEAU_HAM_ACTIVITY_PROPERTIES@@W4_HAM_ACTIVITY_START_TYPE@@@Z @ 0x18001A2B4 (-StartAsyncForProcess@HamActivityWrapper@@QEAAJPEAXPEAU_HAM_ACTIVITY_PROPERTIES@@W4_HAM_ACTIVITY.c)
 *     ?WaitForStarted@HamActivityWrapper@@QEAAJK@Z @ 0x18001A33C (-WaitForStarted@HamActivityWrapper@@QEAAJK@Z.c)
 *     HampCltDelayCloseContextCreate @ 0x18001B6E0 (HampCltDelayCloseContextCreate.c)
 *     HampCltDelayCloseContextDestroy @ 0x18001B788 (HampCltDelayCloseContextDestroy.c)
 *     HamCloseActivityForDesktopBridge @ 0x18001BE2C (HamCloseActivityForDesktopBridge.c)
 *     memset_0 @ 0x18001C1CE (memset_0.c)
 *     __security_check_cookie @ 0x18001C200 (__security_check_cookie.c)
 */

__int64 __fastcall HamRegisterDesktopProcessWithAppContainerToken(HKEY ProcessHandle, int a2, __int64 a3)
{
  __int64 v6; // rsi
  __int64 v7; // rdx
  void *Pointer; // rbx
  int Policy_Internal; // eax
  int v10; // r14d
  int v11; // eax
  RPC_STATUS v12; // eax
  RPC_STATUS v13; // eax
  unsigned int v15; // ebx
  BYTE Data[4]; // [rsp+50h] [rbp-508h] BYREF
  int v17; // [rsp+54h] [rbp-504h] BYREF
  RPC_BINDING_HANDLE Binding; // [rsp+58h] [rbp-500h] BYREF
  DWORD cbData; // [rsp+60h] [rbp-4F8h] BYREF
  __int64 v20; // [rsp+68h] [rbp-4F0h] BYREF
  void *TokenHandle; // [rsp+70h] [rbp-4E8h] BYREF
  RPC_BINDING_HANDLE v22; // [rsp+78h] [rbp-4E0h] BYREF
  __int64 v23; // [rsp+80h] [rbp-4D8h] BYREF
  int v24; // [rsp+88h] [rbp-4D0h]
  __int64 v25; // [rsp+90h] [rbp-4C8h] BYREF
  HKEY hKey[2]; // [rsp+98h] [rbp-4C0h] BYREF
  RPC_BINDING_HANDLE_SECURITY_V1_W Security; // [rsp+A8h] [rbp-4B0h] BYREF
  __int64 v28; // [rsp+D0h] [rbp-488h] BYREF
  int v29; // [rsp+D8h] [rbp-480h]
  int v30; // [rsp+DCh] [rbp-47Ch]
  __int128 v31; // [rsp+E0h] [rbp-478h]
  __int128 v32; // [rsp+F0h] [rbp-468h]
  __int64 v33; // [rsp+100h] [rbp-458h]
  RPC_BINDING_HANDLE_OPTIONS_V1 Options; // [rsp+108h] [rbp-450h] BYREF
  RPC_BINDING_HANDLE_TEMPLATE_V1_W Template; // [rsp+118h] [rbp-440h] BYREF
  _BYTE v36[464]; // [rsp+150h] [rbp-408h] BYREF
  _BYTE v37[68]; // [rsp+320h] [rbp-238h] BYREF
  unsigned int v38; // [rsp+364h] [rbp-1F4h]
  int v39; // [rsp+368h] [rbp-1F0h]
  __int64 v40; // [rsp+370h] [rbp-1E8h]
  _BYTE v41[276]; // [rsp+380h] [rbp-1D8h] BYREF
  int v42; // [rsp+494h] [rbp-C4h]

  hKey[1] = ProcessHandle;
  v17 = 0;
  memset_0(v41, 0, 0x188uLL);
  memset_0(v36, 0, 0x228uLL);
  cbData = 0;
  *(_DWORD *)Data = 0;
  v6 = 0LL;
  v20 = 0LL;
  TokenHandle = 0LL;
  hKey[0] = 0LL;
  v25 = 0LL;
  v22 = 0LL;
  LODWORD(Pointer) = NtOpenProcessToken(ProcessHandle, 8u, &TokenHandle);
  if ( (int)Pointer >= 0 )
  {
    Binding = 0LL;
    v23 = 0LL;
    Policy_Internal = AppModelPolicy_GetPolicy_Internal(TokenHandle, v7, &v17, &v23, &Binding);
    LODWORD(Pointer) = Policy_Internal | 0x10000000;
    if ( Policy_Internal >= 0 )
    {
      if ( v17 == 0x10000 )
      {
        v10 = 0;
      }
      else
      {
        if ( v17 != 65537 )
        {
          LODWORD(Pointer) = -1073741585;
          goto LABEL_21;
        }
        v10 = 1;
      }
      v17 = v10;
      if ( (a2 & 0x80u) != 0 && v10 )
        a2 |= 0x100u;
      v11 = a2 | 0x200;
      if ( !v10 )
        v11 = a2;
      LODWORD(v23) = v11;
      Binding = 0LL;
      memset(&Template, 0, sizeof(Template));
      *(_QWORD *)&Options.ComTimeout = 5LL;
      v31 = 0LL;
      v32 = 0LL;
      v33 = 0LL;
      *(_QWORD *)(&Security.Version + 1) = 0LL;
      HIDWORD(Security.ServerPrincName) = 0;
      Security.AuthIdentity = 0LL;
      Template.Version = 1;
      Template.ProtocolSequence = 3;
      Options.Version = 1;
      Options.Flags = 1;
      v28 = 5LL;
      v29 = 1;
      v30 = 3;
      Security.Version = 1;
      Security.AuthnLevel = 6;
      Security.AuthnSvc = 10;
      Security.SecurityQos = (RPC_SECURITY_QOS *)&v28;
      v12 = RpcBindingCreateW(&Template, &Security, &Options, &Binding);
      LODWORD(Pointer) = v12;
      if ( v12 )
      {
        if ( v12 > 0 )
          LODWORD(Pointer) = (unsigned __int16)v12 | 0xC0070000;
      }
      else
      {
        v13 = RpcBindingBind(0LL, Binding, &unk_18001EC50);
        LODWORD(Pointer) = v13;
        if ( v13 )
        {
          if ( v13 > 0 )
            LODWORD(Pointer) = (unsigned __int16)v13 | 0xC0070000;
        }
        else
        {
          v22 = Binding;
          Binding = 0LL;
          LODWORD(Pointer) = 0;
        }
      }
      if ( Binding )
        RpcBindingFree(&Binding);
      if ( (int)Pointer >= 0 )
      {
        Binding = 0LL;
        Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 0x18u, 0LL, v22, ProcessHandle, v23, a3).Pointer;
        Binding = Pointer;
        v24 = (int)Pointer;
        if ( (int)Pointer >= 0 )
        {
          if ( !v10 )
          {
            LODWORD(Pointer) = HamCreateAutoRestartActivityForDesktopBridge(ProcessHandle, &v25);
            if ( (int)Pointer < 0 )
              goto LABEL_21;
            v25 = 0LL;
            goto LABEL_20;
          }
          LODWORD(Pointer) = HampCltDelayCloseContextCreate(&v20);
          if ( (int)Pointer < 0 )
          {
            v6 = v20;
          }
          else
          {
            HamPopulateActivityPropertiesByClass(L"Win32LaunchGrace", 0LL, 0, (__int64)v41);
            v42 = -1;
            v6 = v20;
            LODWORD(Pointer) = HamActivityWrapper::StartAsyncForProcess(*(_QWORD *)(v20 + 8), ProcessHandle, v41);
            if ( (int)Pointer >= 0 )
            {
              v15 = 16000;
              *(_DWORD *)Data = 16000;
              if ( RegOpenKeyExW(
                     HKEY_LOCAL_MACHINE,
                     L"Software\\Microsoft\\Windows NT\\CurrentVersion\\AppModel",
                     0,
                     1u,
                     hKey)
                || (cbData = 4, RegQueryValueExW(hKey[0], L"LaunchGraceMs", 0LL, 0LL, Data, &cbData), cbData == 4) )
              {
                v15 = *(_DWORD *)Data;
              }
              else
              {
                *(_DWORD *)Data = 16000;
              }
              LODWORD(Pointer) = HamActivityWrapper::WaitForStarted(*(HamActivityWrapper **)(v6 + 8), v15);
              if ( (int)Pointer >= 0 )
              {
                LODWORD(Pointer) = CempGetTokenHostInfo(TokenHandle, (__int64)v36);
                if ( (int)Pointer >= 0 )
                {
                  LODWORD(Pointer) = PsmTimerStart(
                                       v6 + 16,
                                       v37,
                                       v38,
                                       v36,
                                       v39,
                                       v40,
                                       0,
                                       *(unsigned int *)Data,
                                       HampCltDelayCloseCallback,
                                       v6);
                  if ( (int)Pointer >= 0 )
                  {
                    v6 = 0LL;
LABEL_20:
                    LODWORD(Pointer) = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_21:
  if ( TokenHandle )
    NtClose(TokenHandle);
  if ( v22 )
    RpcBindingFree(&v22);
  if ( v25 )
    HamCloseActivityForDesktopBridge(ProcessHandle);
  if ( hKey[0] )
    RegCloseKey(hKey[0]);
  if ( v6 )
    HampCltDelayCloseContextDestroy(v6);
  return (unsigned int)Pointer;
}
