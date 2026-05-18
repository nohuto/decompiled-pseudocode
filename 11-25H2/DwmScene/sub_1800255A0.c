/*
 * XREFs of sub_1800255A0 @ 0x1800255A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180017618 @ 0x180017618 (sub_180017618.c)
 *     sub_180068508 @ 0x180068508 (sub_180068508.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800255A0(__int64 a1, __int64 a2, _OWORD *a3)
{
  unsigned int v5; // eax
  int v6; // r8d
  __int64 result; // rax
  _QWORD v8[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v9[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  if ( *(_DWORD *)(a2 + 28) > *(_DWORD *)(a2 + 32) )
  {
    std::string::string(
      v9,
      "RenderDevice::InitializeDevice() -- MinFeatureLevelRequired must not exceed MaxFeatureLevelRequired");
    v5 = (unsigned int)std::string::string(
                         v8,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\renderer.cpp");
    sub_180068508((unsigned int)pExceptionObject, v5, v6, (unsigned int)v9, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  sub_180017618(a1 + 288, a2);
  *(_OWORD *)(a1 + 384) = *a3;
  *(_OWORD *)(a1 + 400) = a3[1];
  *(_DWORD *)(a1 + 416) = *(_DWORD *)(a1 + 308);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 280LL))(a1);
  *(_BYTE *)(a1 + 3640) = 1;
  return result;
}
