/*
 * XREFs of ?ConnectToSaDevice@CExclusiveStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSystemAudioStream@@@Z @ 0x1800F4F70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1SystemAudioStream@@QEAA@XZ @ 0x18001958C (--1SystemAudioStream@@QEAA@XZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x180024FB0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x1800252E8 (--1CPerfTracker@@QEAA@XZ.c)
 *     ??4?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAUISaDeviceProxy@@@Z @ 0x180051EE4 (--4-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAUISaDeviceProxy@@@Z.c)
 *     ?ConnectToSaDevice_Base@CBaseStreamGroupProxy@@IEAAJXZ @ 0x180056B3C (-ConnectToSaDevice_Base@CBaseStreamGroupProxy@@IEAAJXZ.c)
 *     ??4?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaType@@@Z @ 0x180059B18 (--4-$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaTyp.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800A206C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800A4EB4 (memset_0.c)
 *     ??0SystemAudioStream@@QEAA@$$QEAU0@@Z @ 0x1800F3AC4 (--0SystemAudioStream@@QEAA@$$QEAU0@@Z.c)
 *     ?move_initialize_from@SystemAudioStream@@QEAAJKPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18010F338 (-move_initialize_from@SystemAudioStream@@QEAAJKPEAUSYSTEM_AUDIO_STREAM@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CExclusiveStreamGroupProxy::ConnectToSaDevice(__int64 a1, __int64 *a2, unsigned int a3, __int64 *a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v9)(__int64 *, __int64 *); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  unsigned int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  struct AudioSrvTelemetryProvider *v15; // rax
  int v16; // eax
  __int64 v18[2]; // [rsp+30h] [rbp-D0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v20[32]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v21; // [rsp+150h] [rbp+50h]
  __int64 v22; // [rsp+158h] [rbp+58h]
  int v23[316]; // [rsp+640h] [rbp+540h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B78h] [rbp+A78h]

  v4 = *a2;
  v18[0] = 0LL;
  v9 = *(__int64 (__fastcall **)(__int64 *, __int64 *))(v4 + 56);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v18);
  v10 = v9(a2, v18);
  v11 = v10;
  if ( v10 >= 0 )
  {
    SystemAudioStream::SystemAudioStream((__int64)v20, (__int64)a4);
    v12 = RpcImpersonateClient(0LL);
    if ( v12 )
    {
      v11 = wil::details::in1diag3::Return_Win32(
              retaddr,
              (void *)0x8BC,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
              (const char *)v12);
    }
    else
    {
      memset_0(v23, 0, 0x4E8uLL);
      v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int *))(*(_QWORD *)v18[0] + 56LL))(
              v18[0],
              a1 + 352,
              0LL,
              *(_QWORD *)(a1 + 688),
              v23);
      v11 = v13;
      if ( v13 >= 0 )
      {
        v13 = SystemAudioStream::move_initialize_from(
                (SystemAudioStream *)a4,
                0xFFFFFFFF,
                (struct SYSTEM_AUDIO_STREAM *)v23);
        v11 = v13;
        if ( v13 >= 0 )
        {
          RpcRevertToSelf();
          wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(a4 + 5, v22);
          a4[4] = v21;
          v15 = AudioSrvTelemetryProvider::Instance();
          CPerfTracker::CPerfTracker(
            &PerformanceCount,
            *((const struct _tlgProvider_t **)v15 + 1),
            "ExclusiveStreamGroup_ConnectToDeviceGraph",
            0LL);
          v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 80) + 56LL))(
                  *(_QWORD *)(a1 + 80),
                  v18[0],
                  a3);
          v11 = v16;
          if ( v16 >= 0 )
          {
            CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
            Microsoft::WRL::ComPtr<ISaDeviceProxy>::operator=((__int64 *)(a1 + 88), (__int64)a2);
            CBaseStreamGroupProxy::ConnectToSaDevice_Base((CBaseStreamGroupProxy *)a1);
            SystemAudioStream::~SystemAudioStream((SystemAudioStream *)v20);
            v11 = 0;
            goto LABEL_14;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x8CD,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
            (const char *)(unsigned int)v16);
          CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
          goto LABEL_5;
        }
        v14 = 2243LL;
      }
      else
      {
        v14 = 2240LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v13);
      RpcRevertToSelf();
    }
LABEL_5:
    SystemAudioStream::~SystemAudioStream((SystemAudioStream *)v20);
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8B4,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v10);
LABEL_14:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v18);
  return v11;
}
