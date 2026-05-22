/*
 * XREFs of McTemplateU0sqq_EventWriteTransfer @ 0x180195268
 * Callers:
 *     ?QueryInterface@InputInfoValidator@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180194E00 (-QueryInterface@InputInfoValidator@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?RuntimeClassInitialize@HotkeyContextualProcessor@@QEAAJXZ @ 0x1801A96F4 (-RuntimeClassInitialize@HotkeyContextualProcessor@@QEAAJXZ.c)
 *     ?DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_K1PEAEIIU_GUID@@AEAUHotKeyDetectionResult@@@Z @ 0x1801C3338 (-DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_K1PEAEIIU_GUID@@AEAUHotKeyDetectionResult@@@Z.c)
 *     ?Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z @ 0x1801C59D0 (-Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z.c)
 *     ?IsProxyInitialized@TextInputStateAdapter@@UEAAJPEA_N@Z @ 0x1801C6610 (-IsProxyInitialized@TextInputStateAdapter@@UEAAJPEA_N@Z.c)
 *     ?OnConnected@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x1801C6680 (-OnConnected@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?OnPropertyChanged@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@G@Z @ 0x1801C6770 (-OnPropertyChanged@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@G@Z.c)
 *     ?PropertyChangeHelper@TextInputStateAdapter@@AEAAJG_N@Z @ 0x1801C6820 (-PropertyChangeHelper@TextInputStateAdapter@@AEAAJG_N@Z.c)
 *     ?RuntimeClassInitialize@TextInputStateAdapter@@QEAAJPEAUITextInputStateAdapterOwner@@@Z @ 0x1801C7948 (-RuntimeClassInitialize@TextInputStateAdapter@@QEAAJPEAUITextInputStateAdapterOwner@@@Z.c)
 *     ?SetInterestedProperty@TextInputStateAdapter@@UEAAJG_N@Z @ 0x1801C7B70 (-SetInterestedProperty@TextInputStateAdapter@@UEAAJG_N@Z.c)
 *     __lambda_9193c85b91a90ecd300d0af0c9084680_::operator()_::_1_::catch$1 @ 0x1801D2163 (__lambda_9193c85b91a90ecd300d0af0c9084680_--operator()_--_1_--catch$1.c)
 *     _HotKeyProcessor::RegisterHotKey_::_1_::catch$4 @ 0x1801D2270 (_HotKeyProcessor--RegisterHotKey_--_1_--catch$4.c)
 *     _HotKeyProcessor::RegisterHotKey_::_1_::catch$5 @ 0x1801D22BF (_HotKeyProcessor--RegisterHotKey_--_1_--catch$5.c)
 *     _HotKeyProcessor::RegisterHotKeyClient_::_1_::catch$2 @ 0x1801D230E (_HotKeyProcessor--RegisterHotKeyClient_--_1_--catch$2.c)
 * Callees:
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x180195200 (McGenEventWrite_EventWriteTransfer.c)
 */

ULONG __fastcall McTemplateU0sqq_EventWriteTransfer(__int64 a1, __int64 a2, const char *a3, __int64 a4, char a5)
{
  __int64 v5; // rax
  int v6; // eax
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-50h] BYREF
  const char *v9; // [rsp+40h] [rbp-40h]
  int v10; // [rsp+48h] [rbp-38h]
  int v11; // [rsp+4Ch] [rbp-34h]
  int *v12; // [rsp+50h] [rbp-30h]
  __int64 v13; // [rsp+58h] [rbp-28h]
  char *v14; // [rsp+60h] [rbp-20h]
  __int64 v15; // [rsp+68h] [rbp-18h]
  int v16; // [rsp+A8h] [rbp+28h] BYREF

  v16 = a4;
  if ( a3 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a3[v5] );
    v6 = v5 + 1;
  }
  else
  {
    v6 = 5;
  }
  v10 = v6;
  v11 = 0;
  v12 = &v16;
  v13 = 4LL;
  v14 = &a5;
  if ( !a3 )
    a3 = "NULL";
  v9 = a3;
  v15 = 4LL;
  return McGenEventWrite_EventWriteTransfer((__int64)"NULL", 0LL, (__int64)a3, a4, &v8);
}
