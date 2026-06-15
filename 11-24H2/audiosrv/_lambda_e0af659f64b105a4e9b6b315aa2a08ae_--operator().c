/*
 * XREFs of _lambda_e0af659f64b105a4e9b6b315aa2a08ae_::operator() @ 0x18010BCD0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_e0af659f64b105a4e9b6b315aa2a08ae__void_::_Do_call @ 0x18010F0E0 (std--_Func_impl_no_alloc__lambda_e0af659f64b105a4e9b6b315aa2a08ae__void_--_Do_call.c)
 * Callees:
 *     ?s_adPublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x180020040 (-s_adPublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x180032DC0 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z @ 0x180059D68 (-GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PublishProcessingModeTelemetry@EffectPack@@QEAAXXZ @ 0x180135D88 (-PublishProcessingModeTelemetry@EffectPack@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_e0af659f64b105a4e9b6b315aa2a08ae_::operator()(__int64 a1)
{
  const unsigned __int16 *v2; // rcx
  const unsigned __int16 *v3; // rcx
  int v4; // eax
  struct _GUID v5; // [rsp+20h] [rbp-38h] BYREF
  EffectPack *v6[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(_OWORD *)v6 = 0LL;
  v7 = 0LL;
  v2 = *(const unsigned __int16 **)a1;
  if ( v2 )
    v2 = *(const unsigned __int16 **)v2;
  if ( (int)GetEndpointCharacteristicsDescriptor(v2, 1u, (struct EndpointCharacteristicsDescriptor *)v6) >= 0 )
    EffectPack::PublishProcessingModeTelemetry(v6[1]);
  if ( *(_QWORD *)a1 )
    v3 = **(const unsigned __int16 ***)a1;
  else
    v3 = 0LL;
  v5 = *(struct _GUID *)(a1 + 16);
  v4 = s_adPublishApoTelemetry(v3, &v5);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1362LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v4);
  EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v6);
}
