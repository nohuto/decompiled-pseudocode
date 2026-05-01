/*
 * XREFs of ?HampPdcAllocateState@@YAJPEAU_HAM_PDC_CONTEXT@@@Z @ 0x180083634
 * Callers:
 *     ?HampManagerAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x1800811A8 (-HampManagerAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RemoveDamPhaseForHam@@@details@wil@@QEAA_NXZ @ 0x18007EFD0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RemoveDamPhaseForHam@@@details@wi.c)
 */

__int64 __fastcall HampPdcAllocateState(struct _HAM_PDC_CONTEXT *a1)
{
  __int64 result; // rax
  _DWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF
  void (__fastcall *v4)(void *, int, __int64, __int64); // [rsp+28h] [rbp-20h]
  __int64 v5; // [rsp+30h] [rbp-18h]

  v3[1] = 0;
  v3[0] = 1;
  v5 = 0LL;
  v4 = HampActPdcActivationCallback;
  result = Pdcv2ActivationClientRegister(100LL, v3, (char *)a1 + 24);
  if ( (int)result >= 0 )
  {
    result = TpAllocWork((char *)a1 + 72, HampPdcPlmWorker, a1, (char *)a1 + 416);
    if ( (int)result >= 0 )
    {
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_RemoveDamPhaseForHam>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_RemoveDamPhaseForHam>::GetImpl'::`2'::impl) )
        return 0LL;
      result = TpAllocWork((char *)a1 + 80, HampPdcDamEnterWorker, a1, (char *)a1 + 416);
      if ( (int)result >= 0 )
      {
        result = TpAllocWork((char *)a1 + 88, HampPdcDamExitWorker, a1, (char *)a1 + 416);
        if ( (int)result >= 0 )
          return 0LL;
      }
    }
  }
  return result;
}
