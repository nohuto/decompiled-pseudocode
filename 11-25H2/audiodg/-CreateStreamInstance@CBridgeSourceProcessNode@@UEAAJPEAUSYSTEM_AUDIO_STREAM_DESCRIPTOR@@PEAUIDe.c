/*
 * XREFs of ?CreateStreamInstance@CBridgeSourceProcessNode@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDeviceGraphObjectCache@@_JIPEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14006C970
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateBridgeSourceEndpointInstance@CEndpointInstance@@SAJPEAUIDeviceGraphObjectCache@@_JPEAUIAudioMediaType@@IPEAPEAV1@@Z @ 0x14004A7CC (-CreateBridgeSourceEndpointInstance@CEndpointInstance@@SAJPEAUIDeviceGraphObjectCache@@_JPEAUIAu.c)
 *     ??1?$unique_ptr@VCEndpointInstance@@U?$default_delete@VCEndpointInstance@@@std@@@std@@QEAA@XZ @ 0x1400585B4 (--1-$unique_ptr@VCEndpointInstance@@U-$default_delete@VCEndpointInstance@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCEndpointInstance@@U?$default_delete@VCEndpointInstance@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1400586EC (--1-$out_param_t@V-$unique_ptr@VCEndpointInstance@@U-$default_delete@VCEndpointInstance@@@std@@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CBridgeSourceProcessNode::CreateStreamInstance(
        struct IAudioMediaType **this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct IDeviceGraphObjectCache *a3,
        __int64 a4,
        unsigned int a5)
{
  int v6; // ebx
  CEndpointInstance *v7; // rax
  CEndpointInstance **v9; // [rsp+30h] [rbp-28h] BYREF
  struct IUnknown v10; // [rsp+38h] [rbp-20h] BYREF
  char v11; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  CEndpointInstance *v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = 0LL;
  v9 = &v13;
  v10.lpVtbl = 0LL;
  v11 = 1;
  v6 = CEndpointInstance::CreateBridgeSourceEndpointInstance(a3, *((_QWORD *)a2 + 14), this[6], a5, &v10);
  wil::details::out_param_t<std::unique_ptr<CEndpointInstance>>::~out_param_t<std::unique_ptr<CEndpointInstance>>((__int64)&v9);
  if ( v6 >= 0 )
  {
    v7 = v13;
    v13 = 0LL;
    this[4] = (struct IAudioMediaType *)v7;
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x390,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
      (const char *)(unsigned int)v6);
  }
  std::unique_ptr<CEndpointInstance>::~unique_ptr<CEndpointInstance>(&v13);
  return (unsigned int)v6;
}
