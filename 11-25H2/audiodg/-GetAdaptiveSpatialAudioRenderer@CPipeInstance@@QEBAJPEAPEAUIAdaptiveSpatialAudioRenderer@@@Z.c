/*
 * XREFs of ?GetAdaptiveSpatialAudioRenderer@CPipeInstance@@QEBAJPEAPEAUIAdaptiveSpatialAudioRenderer@@@Z @ 0x14002F41C
 * Callers:
 *     ?RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x14002F178 (-RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z.c)
 *     ?GetSpatialResourcePoolSize@CAudioDeviceGraph@@UEAAJPEAI0PEAH@Z @ 0x140064CA0 (-GetSpatialResourcePoolSize@CAudioDeviceGraph@@UEAAJPEAI0PEAH@Z.c)
 *     ?GetSpatialResourceRevocationTime@CAudioDeviceGraph@@UEAAJPEA_J@Z @ 0x140064D50 (-GetSpatialResourceRevocationTime@CAudioDeviceGraph@@UEAAJPEA_J@Z.c)
 *     ?GetSpatialUtilization@CAudioDeviceGraph@@UEAAJPEAI00@Z @ 0x140064DF0 (-GetSpatialUtilization@CAudioDeviceGraph@@UEAAJPEAI00@Z.c)
 * Callees:
 *     ?GetHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ @ 0x14000471C (-GetHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x14005867C (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CPipeInstance::GetAdaptiveSpatialAudioRenderer(
        CPipeInstance *this,
        struct IAdaptiveSpatialAudioRenderer **a2)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rbx
  _QWORD *v7; // rcx
  __int64 v8; // rbx
  unsigned int v9; // edi
  char *v11; // [rsp+28h] [rbp-80h]
  int v12; // [rsp+30h] [rbp-78h]
  int v13; // [rsp+38h] [rbp-70h]
  int v14; // [rsp+40h] [rbp-68h]
  int v15; // [rsp+48h] [rbp-60h]
  int v16; // [rsp+50h] [rbp-58h]
  int v17; // [rsp+58h] [rbp-50h]
  int v18; // [rsp+60h] [rbp-48h]
  int v19; // [rsp+68h] [rbp-40h]
  int v20; // [rsp+70h] [rbp-38h]
  int v21; // [rsp+78h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  __int64 v23; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v24; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v25; // [rsp+C0h] [rbp+18h]

  v24 = 0LL;
  *a2 = 0LL;
  v4 = *((_QWORD *)this + 3);
  v5 = *((_QWORD *)this + 9);
  while ( v4 )
  {
    v6 = *(_QWORD *)(v4 + 16);
    v4 = *(_QWORD *)(v4 + 8);
    v7 = *(_QWORD **)(v5 + 16);
    v5 = *(_QWORD *)(v5 + 8);
    ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetHead(v7);
    if ( *(_DWORD *)(v6 + 40) == 2 )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(v6 + 32) + 40LL);
      v25 = v8;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      v23 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v8)(
             v8,
             &GUID_24bdc606_d710_4d62_be35_be665fbc3e00,
             &v23) >= 0 )
      {
        v25 = 0LL;
        v24 = v8;
        if ( v23 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
        if ( v8 )
        {
          v9 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IAdaptiveSpatialAudioRenderer **))v8)(
                 v8,
                 &GUID_24bdc606_d710_4d62_be35_be665fbc3e00,
                 a2);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
          return v9;
        }
        break;
      }
      if ( v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  if ( *((_DWORD *)this + 28) == 1 && !*((_DWORD *)this + 3) && !*((_DWORD *)this + 32) )
  {
    v21 = *((unsigned __int8 *)this + 175);
    v20 = *((unsigned __int8 *)this + 174);
    v19 = *((unsigned __int8 *)this + 173);
    v18 = *((unsigned __int8 *)this + 172);
    v17 = *((unsigned __int8 *)this + 171);
    v16 = *((unsigned __int8 *)this + 170);
    v15 = *((unsigned __int8 *)this + 169);
    v14 = *((unsigned __int8 *)this + 168);
    v13 = *((unsigned __int16 *)this + 83);
    v12 = *((unsigned __int16 *)this + 82);
    LODWORD(v11) = *((_DWORD *)this + 40);
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x12F7,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
      (const char *)0x80070490LL,
      (int)"Could not find ASAR in device pipe for EndpointId: {%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
      v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v24);
  return 2147943568LL;
}
