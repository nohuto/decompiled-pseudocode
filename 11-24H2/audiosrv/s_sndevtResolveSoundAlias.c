/*
 * XREFs of s_sndevtResolveSoundAlias @ 0x18007F820
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     MIDL_user_allocate @ 0x18003F650 (MIDL_user_allocate.c)
 *     ?_GetSoundAlias@@YAHPEBGPEAG_KAEAKHPEAUHKEY__@@0@Z @ 0x18005E1AC (-_GetSoundAlias@@YAHPEBGPEAG_KAEAKHPEAUHKEY__@@0@Z.c)
 *     ?StringCbCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x180064CB0 (-StringCbCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800A4EB4 (memset_0.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z @ 0x1800AD550 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z.c)
 *     ??0?$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800AD630 (--0-$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$unique_ptr@V?$CWatchdogTimer@$00@@U?$default_delete@V?$CWatchdogTimer@$00@@@std@@@std@@QEAA@XZ @ 0x1800AD900 (--1-$unique_ptr@V-$CWatchdogTimer@$00@@U-$default_delete@V-$CWatchdogTimer@$00@@@std@@@std@@QEAA.c)
 *     ??1?$unique_ptr@V?$CWatchdogTimer_Old@$00@@U?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@@std@@QEAA@XZ @ 0x1800AD920 (--1-$unique_ptr@V-$CWatchdogTimer_Old@$00@@U-$default_delete@V-$CWatchdogTimer_Old@$00@@@std@@@s.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@details@wil@@QEAA_NXZ @ 0x1800B0A94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@det.c)
 *     ?reset@?$unique_ptr@V?$CWatchdogTimer@$00@@U?$default_delete@V?$CWatchdogTimer@$00@@@std@@@std@@QEAAXPEAV?$CWatchdogTimer@$00@@@Z @ 0x1800B0B28 (-reset@-$unique_ptr@V-$CWatchdogTimer@$00@@U-$default_delete@V-$CWatchdogTimer@$00@@@std@@@std@@.c)
 *     ?reset@?$unique_ptr@V?$CWatchdogTimer_Old@$00@@U?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@@std@@QEAAXPEAV?$CWatchdogTimer_Old@$00@@@Z @ 0x1800B0B4C (-reset@-$unique_ptr@V-$CWatchdogTimer_Old@$00@@U-$default_delete@V-$CWatchdogTimer_Old@$00@@@std.c)
 */

__int64 __fastcall s_sndevtResolveSoundAlias(
        RPC_BINDING_HANDLE BindingHandle,
        const unsigned __int16 *a2,
        unsigned __int16 *a3,
        DWORD a4,
        LPHANDLE lpTargetHandle,
        wchar_t **a6)
{
  struct _FILETIME v6; // rbx
  RPC_BINDING_HANDLE v7; // rdi
  char *v8; // r13
  int v9; // r15d
  void *v10; // rsi
  __int64 v11; // rax
  void *v12; // rsi
  __int64 v13; // rax
  DWORD LastError; // edi
  int v15; // r15d
  int v16; // esi
  __int64 v17; // r8
  const unsigned __int16 *v18; // rcx
  int SoundAlias; // ebx
  __int64 v20; // rax
  size_t v21; // rsi
  wchar_t *v22; // rax
  HANDLE v23; // rbx
  HANDLE CurrentProcess; // rax
  int dwCreationDisposition; // [rsp+20h] [rbp-E0h]
  char v27; // [rsp+44h] [rbp-BCh]
  unsigned int Pid; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int dwLowDateTime; // [rsp+4Ch] [rbp-B4h] BYREF
  HKEY phkResult; // [rsp+50h] [rbp-B0h] BYREF
  RPC_BINDING_HANDLE Binding; // [rsp+58h] [rbp-A8h]
  const unsigned __int16 *v32; // [rsp+60h] [rbp-A0h]
  HANDLE hObject; // [rsp+68h] [rbp-98h]
  __int64 v34; // [rsp+70h] [rbp-90h] BYREF
  __int64 v35; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int16 *v36; // [rsp+80h] [rbp-80h]
  WCHAR FileName[264]; // [rsp+90h] [rbp-70h] BYREF

  v6.dwLowDateTime = a4;
  v7 = BindingHandle;
  v36 = a3;
  v32 = a2;
  Binding = BindingHandle;
  v27 = a4;
  phkResult = 0LL;
  memset_0(FileName, 0, 0x208uLL);
  dwLowDateTime = v6.dwLowDateTime;
  v8 = 0LL;
  hObject = 0LL;
  v9 = 0;
  Pid = 0;
  v35 = 0LL;
  v34 = 0LL;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::GetImpl'::`2'::impl) )
  {
    v10 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = 0LL;
    if ( v10 )
    {
      v6 = g_AudioHealthMonitor;
      AudioSrvTelemetryProvider::Instance();
      v11 = CWatchdogTimer<1>::CWatchdogTimer<1>(v10, v6);
      LOBYTE(v6.dwLowDateTime) = v27;
      v7 = Binding;
    }
    std::unique_ptr<CWatchdogTimer<1>>::reset(&v35, v11);
  }
  else
  {
    v12 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v13 = 0LL;
    if ( v12 )
    {
      v6 = g_AudioHealthMonitor;
      AudioSrvTelemetryProvider::Instance();
      v13 = CWatchdogTimer_Old<1>::CWatchdogTimer_Old<1>(v12, v6);
      LOBYTE(v6.dwLowDateTime) = v27;
      v7 = Binding;
    }
    std::unique_ptr<CWatchdogTimer_Old<1>>::reset(&v34, v13);
  }
  if ( !v32 )
  {
    LastError = -2147418096;
LABEL_10:
    v15 = 0;
    goto LABEL_30;
  }
  if ( !lpTargetHandle )
  {
    if ( !a6 )
    {
      LastError = -2147418096;
      goto LABEL_61;
    }
    goto LABEL_15;
  }
  *lpTargetHandle = (HANDLE)-1LL;
  if ( a6 )
LABEL_15:
    *a6 = 0LL;
  LastError = RpcImpersonateClient(v7);
  if ( LastError )
    goto LABEL_10;
LABEL_17:
  v16 = v6.dwLowDateTime & 2;
  while ( 1 )
  {
    FileName[0] = 0;
    LastError = RegOpenCurrentUser(1u, &phkResult);
    if ( LastError )
      goto LABEL_29;
    v18 = v32;
    if ( v9 )
      v18 = szSystemDefaultSound;
    SoundAlias = _GetSoundAlias(v18, FileName, v17, &dwLowDateTime, dwCreationDisposition, phkResult, v36);
    RegCloseKey(phkResult);
    if ( !SoundAlias )
    {
      LOBYTE(v6.dwLowDateTime) = v27;
      if ( (v27 & 2) == 0 && v9 != 1 )
      {
        v9 = 1;
        goto LABEL_17;
      }
      LastError = 1168;
      goto LABEL_29;
    }
    if ( !FileName[0] )
    {
      if ( v16 || v9 == 1 )
      {
        LastError = 2;
LABEL_29:
        v15 = 1;
        goto LABEL_30;
      }
      goto LABEL_40;
    }
    if ( !lpTargetHandle )
      goto LABEL_29;
    hObject = CreateFileW(FileName, 0x80000000, 3u, 0LL, 3u, 0x60000080u, 0LL);
    v23 = hObject;
    if ( hObject != (HANDLE)-1LL )
      break;
    if ( v16 || v9 == 1 )
    {
      LastError = GetLastError();
      goto LABEL_29;
    }
LABEL_40:
    v9 = 1;
  }
  LastError = I_RpcBindingInqLocalClientPID(Binding, &Pid);
  if ( LastError )
    goto LABEL_29;
  v8 = (char *)OpenProcess(0x40u, 0, Pid);
  LastError = RpcRevertToSelf();
  if ( LastError )
    goto LABEL_29;
  v15 = 0;
  if ( !v8
    || (CurrentProcess = GetCurrentProcess(), !DuplicateHandle(CurrentProcess, v23, v8, lpTargetHandle, 0, 0, 2u)) )
  {
    LastError = GetLastError();
  }
LABEL_30:
  if ( a6 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( FileName[v20] );
    v21 = 2 * v20 + 2;
    v22 = (wchar_t *)MIDL_user_allocate(v21);
    *a6 = v22;
    if ( v22 )
    {
      StringCbCopyExW(v22, v21, FileName, 0LL, 0LL, 0x600u);
      if ( LastError )
        goto LABEL_51;
    }
    else if ( LastError )
    {
      LastError = 14;
LABEL_51:
      if ( lpTargetHandle )
      {
        if ( (char *)*lpTargetHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(*lpTargetHandle);
        *lpTargetHandle = (HANDLE)-1LL;
      }
    }
  }
  if ( v15 == 1 )
    RpcRevertToSelf();
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v8);
LABEL_61:
  std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v34);
  std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(&v35);
  return LastError;
}
