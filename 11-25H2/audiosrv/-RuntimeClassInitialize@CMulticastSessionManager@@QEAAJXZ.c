/*
 * XREFs of ?RuntimeClassInitialize@CMulticastSessionManager@@QEAAJXZ @ 0x1800FD5E0
 * Callers:
 *     ??$MakeAndInitialize@VCMulticastSessionManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCMulticastSessionManager@@@Z @ 0x1800FC058 (--$MakeAndInitialize@VCMulticastSessionManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCMultica.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800A43C4 (--1-$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VBluetoothBroadcastProvider@@UIMulticastProvider@@AEAPEAUIMulticastManagerNotificationClient@@@Details@WRL@Microsoft@@YAJPEAPEAUIMulticastProvider@@AEAPEAUIMulticastManagerNotificationClient@@@Z @ 0x1800DDD08 (--$MakeAndInitialize@VBluetoothBroadcastProvider@@UIMulticastProvider@@AEAPEAUIMulticastManagerN.c)
 *     ??$MakeAndInitialize@VDummyBroadcastProvider@@UIMulticastProvider@@AEAPEAUIMulticastManagerNotificationClient@@@Details@WRL@Microsoft@@YAJPEAPEAUIMulticastProvider@@AEAPEAUIMulticastManagerNotificationClient@@@Z @ 0x1800F65EC (--$MakeAndInitialize@VDummyBroadcastProvider@@UIMulticastProvider@@AEAPEAUIMulticastManagerNotif.c)
 *     ?push_front@?$forward_list@V?$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800FD94C (-push_front@-$forward_list@V-$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@V.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMulticastSessionManager::RuntimeClassInitialize(CMulticastSessionManager *this)
{
  LSTATUS ValueW; // eax
  unsigned __int64 v3; // rdx
  int v4; // eax
  unsigned int v5; // edi
  const char *v6; // r9
  __int64 result; // rax
  int v8; // eax
  unsigned int v9; // edi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v11; // [rsp+60h] [rbp+8h] BYREF
  DWORD v12; // [rsp+68h] [rbp+10h] BYREF
  DummyBroadcastProvider *v13; // [rsp+70h] [rbp+18h] BYREF
  struct IMulticastManagerNotificationClient *v14; // [rsp+78h] [rbp+20h] BYREF

  v11 = 0;
  v12 = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
             L"EnableDummyMulticastProvider",
             0x18u,
             0LL,
             &v11,
             &v12);
  if ( !ValueW && v11 )
    *((_BYTE *)this + 32) = 1;
  try
  {
    v3 = (unsigned __int64)this + 8;
    if ( *((_BYTE *)this + 32) )
    {
      v13 = 0LL;
      v14 = (struct IMulticastManagerNotificationClient *)(v3 & -(__int64)(this != 0LL));
      v4 = Microsoft::WRL::Details::MakeAndInitialize<DummyBroadcastProvider,IMulticastProvider,IMulticastManagerNotificationClient * &>(
             &v13,
             &v14);
      v5 = v4;
      if ( v4 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2AB,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\dummybroadcastprovider.cpp",
          (const char *)(unsigned int)v4);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xAC,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
          (const char *)v5);
        wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>::~com_ptr_t<IMulticastProvider,wil::err_returncode_policy>((__int64 *)&v13);
        return v5;
      }
      goto LABEL_7;
    }
    v13 = 0LL;
    v14 = (struct IMulticastManagerNotificationClient *)(v3 & -(__int64)(this != 0LL));
    v8 = Microsoft::WRL::Details::MakeAndInitialize<BluetoothBroadcastProvider,IMulticastProvider,IMulticastManagerNotificationClient * &>(
           &v13,
           &v14);
    v9 = v8;
    if ( v8 >= 0 )
    {
LABEL_7:
      std::forward_list<wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>>::push_front(
        (char *)this + 24,
        &v13);
      wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>::~com_ptr_t<IMulticastProvider,wil::err_returncode_policy>((__int64 *)&v13);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D1,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
      (const char *)(unsigned int)v8);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB4,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
      (const char *)v9);
    wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>::~com_ptr_t<IMulticastProvider,wil::err_returncode_policy>((__int64 *)&v13);
    result = v9;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xB9,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
                           v6);
  }
  return result;
}
