/*
 * XREFs of ?HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x1800813D8
 * Callers:
 *     ?RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180085B48 (-RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?HampSystemQueryPolicyInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x1800109E8 (-HampSystemQueryPolicyInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAU_ResourceSetInfo@ExecutionMod.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x1800117B0 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?HampRmPopulateExternalResourceAccessData@@YAXPEAU_ResourceSetInfo@ExecutionModel@@PEAU_HAM_EXTERNAL_RESOURCE_MASK@@@Z @ 0x18005E284 (-HampRmPopulateExternalResourceAccessData@@YAXPEAU_ResourceSetInfo@ExecutionModel@@PEAU_HAM_EXTE.c)
 *     ?HampPdcStart@@YAJPEAU_HAM_PDC_CONTEXT@@@Z @ 0x180083370 (-HampPdcStart@@YAJPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall HampManagerStart(struct _HOST_ACTIVITY_MANAGER *a1)
{
  __int64 result; // rax
  __int64 i; // rdi
  _BYTE v4[384]; // [rsp+40h] [rbp-198h] BYREF

  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v4);
  result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))RtlSubscribeWnfStateChangeNotification)(
             (char *)a1 + 512,
             SystemStateChangedWnfName,
             0LL,
             HampManagerSystemStateChangedCallback,
             a1,
             0LL,
             0,
             0);
  if ( (int)result >= 0 )
  {
    RtlSubscribeWnfStateChangeNotification(
      (char *)a1 + 520,
      WNF_EDP_DPL_KEYS_STATE,
      0LL,
      HampManagerDplKeyStateChangedCallback,
      a1,
      0LL,
      0,
      0);
    result = HampPdcStart((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 560));
    if ( (int)result >= 0 )
    {
      for ( i = 0LL; (unsigned int)i < 4; i = (unsigned int)(i + 1) )
      {
        result = RtlSubscribeWnfStateChangeNotification(
                   (char *)a1 + 8 * i + 528,
                   HamOplockWatchStateNames[i],
                   0LL,
                   HampOplockCallback,
                   a1,
                   0LL,
                   0,
                   0);
        if ( (int)result < 0 )
          return result;
      }
      result = HampSystemQueryPolicyInfo(a1, L"UiPausing", (struct ExecutionModel::_ResourceSetInfo *)v4);
      if ( (int)result >= 0 )
      {
        HampRmPopulateExternalResourceAccessData((struct ExecutionModel::_ResourceSetInfo *)v4, (ULONG *)a1 + 240);
        return 0LL;
      }
    }
  }
  return result;
}
