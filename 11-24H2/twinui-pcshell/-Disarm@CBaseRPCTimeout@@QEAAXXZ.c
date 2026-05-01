/*
 * XREFs of ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x1800155E4
 * Callers:
 *     ?TryWithRpcDisconnectFallbackAndTimeout@Shell@Internal@Windows@@YAJK$$QEAV?$function@$$A6AJXZ@wistd@@0$$QEAV?$function@$$A6A_NJ@Z@5@@Z @ 0x180015250 (-TryWithRpcDisconnectFallbackAndTimeout@Shell@Internal@Windows@@YAJK$$QEAV-$function@$$A6AJXZ@wi.c)
 *     ?_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x1800152C8 (-_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicat.c)
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x180015544 (--0CRPCTimeout@@QEAA@K@Z.c)
 *     ??1CRPCTimeout@@QEAA@XZ @ 0x18022E314 (--1CRPCTimeout@@QEAA@XZ.c)
 *     ?QueryService@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_QUERY_SERVICE_OPTION@@KAEBU_GUID@@1PEAPEAX@Z @ 0x180304400 (-QueryService@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_QUERY_SERVICE_OPTION@@KAEBU_GUID@@1PEA.c)
 *     ?GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x18030FEA4 (-GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     _lambda_b1ccbe0050df59b1c7585372b6aa23ae_::operator() @ 0x1804330B4 (_lambda_b1ccbe0050df59b1c7585372b6aa23ae_--operator().c)
 *     _lambda_8b16b784198cc2ffe8f5be0ce118e36a_::operator() @ 0x1804383E4 (_lambda_8b16b784198cc2ffe8f5be0ce118e36a_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8cb864d560eabf2ff9644d5f66b5c768___::Run @ 0x1804455E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8cb864d560eabf2ff9644d5f66b5c768___--Run.c)
 * Callees:
 *     <none>
 */

void __fastcall CBaseRPCTimeout::Disarm(CBaseRPCTimeout *this)
{
  void *v2; // rdx

  if ( *((int *)this + 2) >= 0 )
  {
    *((_DWORD *)this + 2) = -2147467259;
    CoDisableCallCancellation(0LL);
    v2 = (void *)*((_QWORD *)this + 2);
    if ( v2 )
    {
      DeleteTimerQueueTimer(0LL, v2, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
      *((_QWORD *)this + 2) = 0LL;
    }
  }
}
