/*
 * XREFs of ?AddProcessingModeSupport_for_VSS@EffectPack@@AEAAJXZ @ 0x180049F7C
 * Callers:
 *     ?AddOsProcessingModeSupport@EffectPack@@AEAAJXZ @ 0x180049E14 (-AddOsProcessingModeSupport@EffectPack@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180036160 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x180037234 (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18003D3BC (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z @ 0x18004BC10 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x18004E258 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ??$?0$00X@?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@PEAX@Z @ 0x1800A370C (--$-0$00X@-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@PEAX@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x1800AB328 (IsGetDefaultSpatialRenderingModePresent.c)
 *     _lambda_f318f87950837fa021a8ed1b2df6ff30_::operator() @ 0x18012A524 (_lambda_f318f87950837fa021a8ed1b2df6ff30_--operator().c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall EffectPack::AddProcessingModeSupport_for_VSS(CEndpointCharacteristics **this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rax
  int v6; // eax
  int OverridingChain; // ebx
  __int64 v8; // rdx
  int v10; // r9d
  int v11; // r9d
  _BYTE v12[8]; // [rsp+40h] [rbp-29h] BYREF
  __int64 (__fastcall **v13)(); // [rsp+48h] [rbp-21h] BYREF
  CEndpointCharacteristics **v14; // [rsp+50h] [rbp-19h]
  __int64 (__fastcall ***v15)(); // [rsp+80h] [rbp+17h]
  GUID v16; // [rsp+90h] [rbp+27h] BYREF
  CLSID pClsid; // [rsp+A0h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  if ( !(*(unsigned int (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)this[198] + 56LL))(this[198])
    && (!(unsigned __int8)IsGetDefaultSpatialRenderingModePresent()
     || (unsigned int)IsVirtualSurroundAllowedOnCurrentPlatform()) )
  {
    pClsid = 0LL;
    if ( CoGetPSClsid(&GUID_b8bb0d7d_75ea_4359_abdf_d256f849d065, &pClsid) >= 0 )
    {
      if ( this[202] )
      {
        if ( *(_DWORD *)this[203] )
        {
          wistd::unique_ptr<void,wil::process_heap_deleter>::unique_ptr<void,wil::process_heap_deleter>(v12, this);
          v14 = this;
          v13 = off_18016DAB8;
          v15 = &v13;
          OverridingChain = lambda_f318f87950837fa021a8ed1b2df6ff30_::operator()(
                              (unsigned int)v12,
                              0,
                              (unsigned int)&v13,
                              v10,
                              3);
          if ( OverridingChain < 0 )
          {
            v8 = 2947LL;
            goto LABEL_9;
          }
          if ( (unsigned int)CEndpointCharacteristics::HasHardwareAudioEngine(this[198]) )
          {
            v14 = this;
            v13 = off_1801747F8;
            v15 = &v13;
            OverridingChain = lambda_f318f87950837fa021a8ed1b2df6ff30_::operator()(
                                (unsigned int)v12,
                                1,
                                (unsigned int)&v13,
                                v11,
                                4);
            if ( OverridingChain < 0 )
            {
              v8 = 2956LL;
              goto LABEL_9;
            }
          }
        }
        else
        {
          v4 = gsl::span<SystemEffectDescriptor,-1>::operator[](this + 180, 0LL);
          v14 = this;
          v13 = off_18016DAB8;
          v15 = &v13;
          v5 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](this + 214, 0LL);
          v16 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          v6 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                 v5,
                 &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
          OverridingChain = SystemEffectDescriptor::CreateOverridingChain(
                              v4,
                              (__int64)&v16,
                              1,
                              (int)&unk_180185740,
                              1,
                              v6 != -1,
                              (__int64)&v13);
          if ( OverridingChain < 0 )
          {
            v8 = 2877LL;
LABEL_9:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v8,
              (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)(unsigned int)OverridingChain);
            return (unsigned int)OverridingChain;
          }
        }
      }
      else
      {
        _o_terminate(v3, v2);
        __debugbreak();
      }
    }
  }
  return 0LL;
}
