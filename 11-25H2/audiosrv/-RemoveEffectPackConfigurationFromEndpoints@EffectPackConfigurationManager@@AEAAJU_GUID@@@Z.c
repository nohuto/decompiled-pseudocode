/*
 * XREFs of ?RemoveEffectPackConfigurationFromEndpoints@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z @ 0x1800F8F18
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_faf7e52385c7969624d4e537e1f2e3ad__void_::_Do_call @ 0x1800F96C0 (std--_Func_impl_no_alloc__lambda_faf7e52385c7969624d4e537e1f2e3ad__void_--_Do_call.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EffectPackConfigurationManager::RemoveEffectPackConfigurationFromEndpoints(
        EffectPackConfigurationManager *this,
        struct _GUID *a2)
{
  __int64 v2; // rax
  int v3; // ebx
  _QWORD *v4; // rdx
  _QWORD v6[7]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v7; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v2 = *(_QWORD *)g_pEndpointCharacteristicsCache;
  v6[0] = off_1801732B8;
  v6[1] = a2;
  v7 = v6;
  v3 = (*(__int64 (__fastcall **)(PVOID, _QWORD *))(v2 + 48))(g_pEndpointCharacteristicsCache, v6);
  if ( v7 )
  {
    v4 = v6;
    LOBYTE(v4) = v7 != v6;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v7 + 32LL))(v7, v4);
  }
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7F,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\effectpackconfigurationmanager.cpp",
    (const char *)(unsigned int)v3);
  return (unsigned int)v3;
}
