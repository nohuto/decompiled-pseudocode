/*
 * XREFs of ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@J_NAEBU_GUID@@M@Z @ 0x1400077F4
 * Callers:
 *     ?CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140005FB0 (-CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@.c)
 *     ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x140006E20 (-ActivateAPOs@CPipeInstance@@AEAAJ_K@Z.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140010750 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x1400116C8 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?APOTrackAndLogException@@YAXPEBU_tlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEBDJ@Z @ 0x14007271C (-APOTrackAndLogException@@YAXPEBU_tlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEBDJ@Z.c)
 *     ?TrackAPOFailureUnhandled@CSystemEffectWrapper@@UEAAJM@Z @ 0x1400736E0 (-TrackAPOFailureUnhandled@CSystemEffectWrapper@@UEAAJM@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@J_NAEBU_GUID@@M@Z @ 0x140036540 (-TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@J_NAEBU_GUID@@M@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TrackSystemEffectBehavior(__int64 a1, unsigned int a2, unsigned int a3, char a4, __int64 a5, int a6)
{
  HRESULT Instance; // ebx
  __int64 v11; // r9
  __int64 v13; // [rsp+30h] [rbp-18h] BYREF
  LPVOID ppv[2]; // [rsp+38h] [rbp-10h] BYREF

  ppv[0] = 0LL;
  v13 = 0LL;
  if ( (unsigned int)GetClassFromEndpointId() == 3 )
  {
    Instance = 0;
  }
  else
  {
    Instance = CoCreateInstance(
                 &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                 0LL,
                 0x17u,
                 &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                 ppv);
    if ( Instance >= 0 )
    {
      Instance = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)ppv[0] + 40LL))(ppv[0], a1, &v13);
      if ( Instance >= 0 )
      {
        LOBYTE(v11) = a4;
        Instance = TrackSystemEffectBehavior(v13, a2, a3, v11, a5, a6);
      }
    }
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v13);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)ppv);
  return (unsigned int)Instance;
}
