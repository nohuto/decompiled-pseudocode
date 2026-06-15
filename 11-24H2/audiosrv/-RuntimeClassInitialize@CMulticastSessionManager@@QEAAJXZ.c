/*
 * XREFs of ?RuntimeClassInitialize@CMulticastSessionManager@@QEAAJXZ @ 0x180100A10
 * Callers:
 *     ??$MakeAndInitialize@VCMulticastSessionManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCMulticastSessionManager@@@Z @ 0x1800FF454 (--$MakeAndInitialize@VCMulticastSessionManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCMultica.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18002A5BC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800A07F8 (--1-$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800A1F54 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Flist_node@V-$com_ptr_t@VCPBMStreamClassVolumeGainSta.c)
 *     ??$MakeAndInitialize@VBluetoothBroadcastProvider@@UIMulticastProvider@@AEAPEAUIMulticastManagerNotificationClient@@@Details@WRL@Microsoft@@YAJPEAPEAUIMulticastProvider@@AEAPEAUIMulticastManagerNotificationClient@@@Z @ 0x1800E26F8 (--$MakeAndInitialize@VBluetoothBroadcastProvider@@UIMulticastProvider@@AEAPEAUIMulticastManagerN.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CMulticastSessionManager::RuntimeClassInitialize(CMulticastSessionManager *this)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 result; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  BluetoothBroadcastProvider *v7; // rcx
  const char *v8; // r9
  _QWORD *v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  BluetoothBroadcastProvider *v12; // [rsp+40h] [rbp+8h] BYREF
  struct IMulticastManagerNotificationClient *v13; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0LL;
  v13 = (struct IMulticastManagerNotificationClient *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
  v2 = Microsoft::WRL::Details::MakeAndInitialize<BluetoothBroadcastProvider,IMulticastProvider,IMulticastManagerNotificationClient * &>(
         &v12,
         &v13);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = (_QWORD *)((char *)this + 24);
    v9 = v5;
    v10 = 0LL;
    try
    {
      v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
      v7 = v12;
      v12 = 0LL;
      v6[1] = v7;
      *v6 = *v5;
      v10 = 0LL;
      *v5 = v6;
      std::_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>((__int64)&v9);
      wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>::~com_ptr_t<IMulticastProvider,wil::err_returncode_policy>((__int64 *)&v12);
      result = 0LL;
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0xA7,
                             (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
                             v8);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D1,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
      (const char *)(unsigned int)v2);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA2,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
      (const char *)v3);
    wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>::~com_ptr_t<IMulticastProvider,wil::err_returncode_policy>((__int64 *)&v12);
    return v3;
  }
  return result;
}
