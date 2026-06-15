/*
 * XREFs of std::_Func_impl_no_alloc__lambda_faf7e52385c7969624d4e537e1f2e3ad__void_::_Do_call @ 0x1800F96C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveEffectPackConfigurationFromEndpoints@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z @ 0x1800F8F18 (-RemoveEffectPackConfigurationFromEndpoints@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_faf7e52385c7969624d4e537e1f2e3ad__void_::_Do_call(struct _GUID *a1)
{
  int v1; // eax
  struct _GUID v2; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = a1[1];
  v1 = EffectPackConfigurationManager::RemoveEffectPackConfigurationFromEndpoints(
         (EffectPackConfigurationManager *)a1,
         &v2);
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      64LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\effectpackconfigurationmanager.cpp",
      (const char *)(unsigned int)v1);
}
