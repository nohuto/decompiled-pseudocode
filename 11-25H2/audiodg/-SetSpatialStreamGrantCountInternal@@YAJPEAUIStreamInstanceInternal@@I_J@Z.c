/*
 * XREFs of ?SetSpatialStreamGrantCountInternal@@YAJPEAUIStreamInstanceInternal@@I_J@Z @ 0x14006EC08
 * Callers:
 *     ?SetSpatialStreamGrantCount@CStreamInstance@@UEAAJI_J@Z @ 0x14006E750 (-SetSpatialStreamGrantCount@CStreamInstance@@UEAAJI_J@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@U?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x14000ED80 (-reset@-$com_ptr_t@U-$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundati.c)
 *     ?GetStreamEndpointInstance@CPipeInstance@@QEAAPEAVCEndpointInstance@@XZ @ 0x140058470 (-GetStreamEndpointInstance@CPipeInstance@@QEAAPEAVCEndpointInstance@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SetSpatialStreamGrantCountInternal(struct IStreamInstanceInternal *a1, unsigned int a2, __int64 a3)
{
  CPipeInstance *v5; // rax
  __int64 *StreamEndpointInstance; // rbx
  __int64 v7; // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF
  __int64 v14; // [rsp+48h] [rbp+20h] BYREF

  v5 = (CPipeInstance *)(*(__int64 (__fastcall **)(struct IStreamInstanceInternal *))(*(_QWORD *)a1 + 24LL))(a1);
  StreamEndpointInstance = (__int64 *)CPipeInstance::GetStreamEndpointInstance(v5);
  if ( StreamEndpointInstance )
  {
    v14 = 0LL;
    wil::com_ptr_t<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,wil::err_returncode_policy>::reset(&v14);
    v7 = *StreamEndpointInstance;
    v14 = v7;
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      v13 = 0LL;
      v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v7)(
             v7,
             &GUID_3d7ca171_206f_4cec_968b_149749ff740b,
             &v13);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 754LL;
LABEL_7:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)(unsigned int)v8);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v13);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v14);
        return v9;
      }
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v13 + 32LL))(v13, a2, a3);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 755LL;
        goto LABEL_7;
      }
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v13);
    }
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v14);
  }
  return 0LL;
}
