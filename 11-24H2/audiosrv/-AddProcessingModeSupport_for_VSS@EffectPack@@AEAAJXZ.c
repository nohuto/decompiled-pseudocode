/*
 * XREFs of ?AddProcessingModeSupport_for_VSS@EffectPack@@AEAAJXZ @ 0x1800680B0
 * Callers:
 *     ?AddOsProcessingModeSupport@EffectPack@@AEAAJXZ @ 0x18008C044 (-AddOsProcessingModeSupport@EffectPack@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x1800313A0 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x180032474 (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z @ 0x180035780 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x180039630 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x18003AFBC (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ??$?0$00X@?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@PEAX@Z @ 0x18009FB98 (--$-0$00X@-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@PEAX@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x1800A7618 (IsGetDefaultSpatialRenderingModePresent.c)
 *     _lambda_8ba24c4cf53db699b74a350d628b126d_::operator() @ 0x180131684 (_lambda_8ba24c4cf53db699b74a350d628b126d_--operator().c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall EffectPack::AddProcessingModeSupport_for_VSS(EffectPack *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // rax
  int v10; // eax
  int OverridingChain; // ebx
  __int64 v12; // rdx
  int v14; // r9d
  int v15; // r9d
  _BYTE v16[8]; // [rsp+40h] [rbp-29h] BYREF
  __int64 (__fastcall **v17)(); // [rsp+48h] [rbp-21h] BYREF
  EffectPack *v18; // [rsp+50h] [rbp-19h]
  __int64 (__fastcall ***v19)(); // [rsp+80h] [rbp+17h]
  GUID v20; // [rsp+90h] [rbp+27h] BYREF
  CLSID pClsid; // [rsp+A0h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 198) + 56LL))(*((_QWORD *)this + 198))
    && (!(unsigned __int8)IsGetDefaultSpatialRenderingModePresent(v3, v2, v4, v5)
     || (unsigned int)IsVirtualSurroundAllowedOnCurrentPlatform()) )
  {
    pClsid = 0LL;
    if ( CoGetPSClsid(&GUID_b8bb0d7d_75ea_4359_abdf_d256f849d065, &pClsid) >= 0 )
    {
      if ( *((_QWORD *)this + 202) )
      {
        if ( **((_DWORD **)this + 203) )
        {
          wistd::unique_ptr<void,wil::process_heap_deleter>::unique_ptr<void,wil::process_heap_deleter>(v16, this);
          v18 = this;
          v17 = off_180178BC8;
          v19 = &v17;
          OverridingChain = lambda_8ba24c4cf53db699b74a350d628b126d_::operator()(
                              (unsigned int)v16,
                              0,
                              (unsigned int)&v17,
                              v14,
                              3);
          if ( OverridingChain < 0 )
          {
            v12 = 2995LL;
            goto LABEL_9;
          }
          if ( (unsigned int)CEndpointCharacteristics::HasHardwareAudioEngine(*((CEndpointCharacteristics **)this + 198)) )
          {
            v18 = this;
            v17 = off_18017EC38;
            v19 = &v17;
            OverridingChain = lambda_8ba24c4cf53db699b74a350d628b126d_::operator()(
                                (unsigned int)v16,
                                1,
                                (unsigned int)&v17,
                                v15,
                                4);
            if ( OverridingChain < 0 )
            {
              v12 = 3004LL;
              goto LABEL_9;
            }
          }
        }
        else
        {
          v8 = gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)this + 180, 0LL);
          v18 = this;
          v17 = off_180178BC8;
          v19 = &v17;
          v9 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 214, 0LL);
          v20 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          v10 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                  v9,
                  &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
          OverridingChain = SystemEffectDescriptor::CreateOverridingChain(
                              v8,
                              (__int64)&v20,
                              1,
                              (int)&unk_18018F920,
                              1,
                              v10 != -1,
                              (__int64)&v17);
          if ( OverridingChain < 0 )
          {
            v12 = 2925LL;
LABEL_9:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v12,
              (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)(unsigned int)OverridingChain);
            return (unsigned int)OverridingChain;
          }
        }
      }
      else
      {
        _o_terminate(v7, v6);
        __debugbreak();
      }
    }
  }
  return 0LL;
}
