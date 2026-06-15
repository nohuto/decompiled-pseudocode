/*
 * XREFs of _lambda_e84e538cea589f9d2d4ff5de0c6f63fc_::operator() @ 0x180105AD8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_e84e538cea589f9d2d4ff5de0c6f63fc__void_::_Do_call @ 0x180108920 (std--_Func_impl_no_alloc__lambda_e84e538cea589f9d2d4ff5de0c6f63fc__void_--_Do_call.c)
 * Callees:
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x180037B80 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?s_adPublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x1800567C8 (-s_adPublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 *     ?GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z @ 0x180066408 (-GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PublishProcessingModeTelemetry@EffectPack@@QEAAXXZ @ 0x18012D76C (-PublishProcessingModeTelemetry@EffectPack@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_e84e538cea589f9d2d4ff5de0c6f63fc_::operator()(__int64 a1)
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
      1355LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v4);
  EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v6);
}
