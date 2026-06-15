/*
 * XREFs of ?ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x14004DC24
 * Callers:
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14004D7B0 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 *     ?Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x1400711B0 (-Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphC.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x140037B9C (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x140039ED0 (-ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     ?AEWMILOG_ENDPOINT_ACTIVATION@@YAXKPEAXEEKKKKKKKKKKKKK@Z @ 0x14004B848 (-AEWMILOG_ENDPOINT_ACTIVATION@@YAXKPEAXEEKKKKKKKKKKKKK@Z.c)
 *     memcpy_0 @ 0x14005B571 (memcpy_0.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140065D4C (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_Ds @ 0x14006ED64 (WPP_SF_Ds.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CSystemAudioDeviceBase::ActivateEndpoint(
        CSystemAudioDeviceBase *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2)
{
  int v4; // ebx
  struct IUnknown *v5; // rcx
  int v6; // eax
  unsigned int *v7; // rsi
  __int64 v8; // rcx
  char *v9; // rbx
  int v10; // eax
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rax
  _QWORD *v12; // r14
  __int64 (__fastcall ***v14)(_QWORD, GUID *, char *); // [rsp+90h] [rbp-9h] BYREF
  __int64 (__fastcall ***v15)(_QWORD, GUID *, char *); // [rsp+98h] [rbp-1h] BYREF
  LPVOID ppv; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+Fh] BYREF
  PROPVARIANT pvar[2]; // [rsp+B0h] [rbp+17h] BYREF
  char *v19; // [rsp+C0h] [rbp+27h]
  struct IUnknown *v20; // [rsp+110h] [rbp+77h] BYREF
  struct IUnknown *v21; // [rsp+118h] [rbp+7Fh] BYREF

  ppv = 0LL;
  v20 = 0LL;
  v17 = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  v21 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v19 = 0LL;
  v4 = ValidateDevicePipeDescriptor((const struct tWAVEFORMATEX **)a2);
  if ( v4 >= 0 )
  {
    v4 = CoCreateInstance(
           &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
           0LL,
           0x17u,
           &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
           &ppv);
    if ( v4 >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, struct IUnknown **))(*(_QWORD *)ppv + 40LL))(
             ppv,
             *((_QWORD *)a2 + 7),
             &v20);
      if ( v4 >= 0 )
      {
        v5 = v21;
        if ( v21 != v20 )
        {
          ATL::AtlComQIPtrAssign(&v21, v20, &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21);
          v5 = v21;
        }
        if ( !v5 )
        {
          v4 = -2147467262;
          goto LABEL_21;
        }
        LOWORD(pvar[0]) = 65;
        v6 = ((__int64 (__fastcall *)(struct IUnknown *))v5->lpVtbl[2].QueryInterface)(v5);
        v7 = (unsigned int *)*((_QWORD *)a2 + 1);
        v8 = *((unsigned __int16 *)v7 + 8);
        if ( v6 )
        {
          v9 = (char *)CoTaskMemAlloc(v8 + 32);
          if ( !v9 )
            goto LABEL_10;
          *(_DWORD *)v9 = *((unsigned __int16 *)v7 + 8) + 32;
          *((_DWORD *)v9 + 1) = GetSessionIdFromEndpointId(*((_QWORD *)a2 + 7));
          *((_DWORD *)v9 + 2) = *((_DWORD *)a2 + 25);
          memcpy_0(v9 + 12, v7, *((unsigned __int16 *)v7 + 8) + 18LL);
          v10 = *((unsigned __int16 *)v7 + 8) + 32;
        }
        else
        {
          v9 = (char *)CoTaskMemAlloc(v8 + 64);
          if ( !v9 )
          {
LABEL_10:
            v4 = -2147024882;
            goto LABEL_21;
          }
          *(_DWORD *)v9 = *((unsigned __int16 *)v7 + 8) + 64;
          *((_DWORD *)v9 + 1) = GetSessionIdFromEndpointId(*((_QWORD *)a2 + 7));
          *((_DWORD *)v9 + 2) = *((_DWORD *)a2 + 25);
          *(_OWORD *)(v9 + 12) = *(_OWORD *)((char *)a2 + 104);
          *(_OWORD *)(v9 + 28) = *(_OWORD *)((char *)a2 + 148);
          memcpy_0(v9 + 44, v7, *((unsigned __int16 *)v7 + 8) + 18LL);
          v10 = *((unsigned __int16 *)v7 + 8) + 64;
        }
        v19 = v9;
        LODWORD(pvar[1]) = v10;
        QueryInterface = v20->lpVtbl[1].QueryInterface;
        if ( *((_DWORD *)a2 + 18) )
        {
          v4 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64, PROPVARIANT *, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))QueryInterface)(
                 v20,
                 &GUID_8026ab61_92b2_43c1_a1df_5c37ebd08d82,
                 1LL,
                 pvar,
                 &v15);
          if ( v4 < 0 )
            goto LABEL_21;
          v12 = (_QWORD *)((char *)this + 88);
          v4 = (**v15)(v15, &GUID_30a99515_1527_4451_af9f_00c5f0234daf, (char *)this + 88);
        }
        else
        {
          v4 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64, PROPVARIANT *, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))QueryInterface)(
                 v20,
                 &GUID_8fa906e4_c31c_4e31_932e_19a66385e9aa,
                 1LL,
                 pvar,
                 &v14);
          if ( v4 < 0 )
            goto LABEL_21;
          v12 = (_QWORD *)((char *)this + 88);
          v4 = (**v14)(v14, &GUID_30a99515_1527_4451_af9f_00c5f0234daf, (char *)this + 88);
        }
        AEWMILOG_ENDPOINT_ACTIVATION(
          *((unsigned int *)a2 + 24),
          this,
          *((unsigned __int16 *)v7 + 7),
          *(unsigned __int16 *)v7,
          *((_DWORD *)a2 + 34),
          *((_DWORD *)a2 + 25),
          *((_DWORD *)a2 + 18),
          *((_DWORD *)a2 + 35),
          *(unsigned __int16 *)v7,
          v7[1],
          *((unsigned __int16 *)v7 + 7),
          *((unsigned __int16 *)v7 + 1),
          *((_DWORD *)a2 + 8),
          *((_DWORD *)this + 20),
          *((_DWORD *)a2 + 20) != 0,
          *((_DWORD *)a2 + 24),
          v4);
        if ( v4 >= 0 )
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v12 + 48LL))(*v12, *((unsigned int *)this + 20));
      }
    }
  }
LABEL_21:
  PropVariantClear(pvar);
  if ( v4 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_Ds(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        10,
        (unsigned int)&WPP_f439333ca32d38002cb7cfdad9c030a3_Traceguids,
        v4,
        (__int64)"CSystemAudioDeviceBase::ActivateEndpoint");
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceBase::ActivateEndpoint", 0x10Bu, v4);
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v21);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v14);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v15);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v17);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v20);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&ppv);
  return (unsigned int)v4;
}
