/*
 * XREFs of ?GetCustomDeviceFormatsSupportedOnEndpoint@CPolicyConfig@@UEAAJPEBGPEAIPEAPEAPEAUtWAVEFORMATEX@@PEAPEAPEAG@Z @ 0x18006C4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x180032DC0 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?GetCustomDeviceFormatsSupportedOnEndpoint@EffectPack@@QEAAJPEAIPEAPEAPEAUtWAVEFORMATEX@@PEAPEAPEAG@Z @ 0x18006C574 (-GetCustomDeviceFormatsSupportedOnEndpoint@EffectPack@@QEAAJPEAIPEAPEAPEAUtWAVEFORMATEX@@PEAPEAP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::GetCustomDeviceFormatsSupportedOnEndpoint(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        unsigned int *a3,
        struct tWAVEFORMATEX ***a4,
        unsigned __int16 ***a5)
{
  int v7; // eax
  unsigned int CustomDeviceFormatsSupportedOnEndpoint; // ebx
  EffectPack *v10[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(_OWORD *)v10 = 0LL;
  v11 = 0LL;
  v7 = (*(__int64 (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, EffectPack **))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                                 + 40LL))(
         g_pEndpointCharacteristicsCache,
         a2,
         0LL,
         0LL,
         v10);
  CustomDeviceFormatsSupportedOnEndpoint = v7;
  if ( v7 >= 0 )
    CustomDeviceFormatsSupportedOnEndpoint = EffectPack::GetCustomDeviceFormatsSupportedOnEndpoint(v10[1], a3, a4, a5);
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD16,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)v7);
  EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v10);
  return CustomDeviceFormatsSupportedOnEndpoint;
}
