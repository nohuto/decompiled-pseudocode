/*
 * XREFs of ?SendBtAudioStreamContext@CBtLeAudioResourceManager@@EEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4BTAudio_StreamContext@@@Z @ 0x1800E4B60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetKsControlForFlow@CBtLeAudioResourceManager@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAPEAUIKsControl@@@Z @ 0x1800E47A4 (-GetKsControlForFlow@CBtLeAudioResourceManager@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CBtLeAudioResourceManager::SendBtAudioStreamContext(
        CBtLeAudioResourceManager *a1,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        int a3)
{
  __int64 v3; // r14
  __int64 v4; // rdi
  int KsControlForFlow; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  struct IKsControl *v10; // [rsp+40h] [rbp-30h] BYREF
  __int64 v11; // [rsp+48h] [rbp-28h] BYREF
  GUID v12; // [rsp+50h] [rbp-20h] BYREF
  int v13; // [rsp+60h] [rbp-10h]
  int v14; // [rsp+64h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  int v16; // [rsp+A8h] [rbp+38h] BYREF

  v3 = a3;
  v4 = a2;
  v10 = 0LL;
  KsControlForFlow = CBtLeAudioResourceManager::GetKsControlForFlow(a1, a2, &v10);
  v7 = KsControlForFlow;
  if ( KsControlForFlow >= 0 )
  {
    v12 = GUID_33889d99_1226_4016_a0d5_18875cf7c5cf;
    v13 = 1;
    v14 = 2;
    v11 = v3;
    v16 = 0;
    KsControlForFlow = ((__int64 (__fastcall *)(struct IKsControl *, GUID *, __int64, __int64 *, int, int *))v10->lpVtbl->KsProperty)(
                         v10,
                         &v12,
                         24LL,
                         &v11,
                         8,
                         &v16);
    v7 = KsControlForFlow;
    if ( KsControlForFlow >= 0 )
    {
      *((_DWORD *)a1 + v4 + 121) = v3;
      v7 = 0;
      goto LABEL_7;
    }
    v8 = 97LL;
  }
  else
  {
    v8 = 85LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btleaudioresourcemanager.cpp",
    (const char *)(unsigned int)KsControlForFlow);
LABEL_7:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v10);
  return v7;
}
