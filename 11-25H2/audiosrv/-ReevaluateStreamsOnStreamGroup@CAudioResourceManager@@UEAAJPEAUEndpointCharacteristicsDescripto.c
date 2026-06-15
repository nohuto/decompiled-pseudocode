/*
 * XREFs of ?ReevaluateStreamsOnStreamGroup@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIStreamGroupProxy@@@Z @ 0x180089200
 * Callers:
 *     ?ReevaluateStreamGroups@CAudioResourceManager@@IEAAJPEBGU_GUID@@@Z @ 0x1800BF6A0 (-ReevaluateStreamGroups@CAudioResourceManager@@IEAAJPEBGU_GUID@@@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEAUIAudioStreamInfo@@@std@@IEAAXXZ @ 0x180023650 (-_Tidy@-$_Func_class@XPEAUIAudioStreamInfo@@@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_StreamDisconnectCrash@@@details@wil@@QEAA_NXZ @ 0x1800C1564 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_StreamDisconnectCrash@@.c)
 *     ?ForEachStream@@YAX$$QEAV?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x180105FDC (-ForEachStream@@YAX$$QEAV-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioResourceManager::ReevaluateStreamsOnStreamGroup(
        CAudioResourceManager *this,
        struct EndpointCharacteristicsDescriptor *a2,
        struct IStreamGroupProxy *a3)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  void (__fastcall *v5)(struct IStreamGroupProxy *, __int64 (__fastcall ***)()); // rax
  __int128 v7; // [rsp+20h] [rbp-19h]
  struct IStreamGroupProxy *v8; // [rsp+38h] [rbp-1h] BYREF
  __int64 (__fastcall **v9)(); // [rsp+40h] [rbp+7h] BYREF
  __int128 v10; // [rsp+48h] [rbp+Fh]
  struct EndpointCharacteristicsDescriptor **v11; // [rsp+58h] [rbp+1Fh]
  __int64 (__fastcall ***v12)(); // [rsp+78h] [rbp+3Fh]
  struct EndpointCharacteristicsDescriptor *v13; // [rsp+A8h] [rbp+6Fh] BYREF

  v13 = a2;
  v8 = a3;
  *((_QWORD *)&v7 + 1) = (char *)this - 8;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_StreamDisconnectCrash>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_StreamDisconnectCrash>::GetImpl'::`2'::impl) )
  {
    *(_QWORD *)&v7 = &v8;
    v9 = off_180170EB8;
    v12 = &v9;
    v10 = v7;
    v11 = &v13;
    ForEachStream(&v9);
    std::_Func_class<void,IAudioStreamInfo *>::_Tidy((__int64)&v9, v3);
  }
  else
  {
    v4 = *(_QWORD *)v8;
    v9 = off_180170E88;
    *(_QWORD *)&v7 = v8;
    v5 = *(void (__fastcall **)(struct IStreamGroupProxy *, __int64 (__fastcall ***)()))(v4 + 368);
    v12 = &v9;
    v10 = v7;
    v11 = (struct EndpointCharacteristicsDescriptor **)v13;
    v5(v8, &v9);
  }
  return 0LL;
}
