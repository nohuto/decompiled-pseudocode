/*
 * XREFs of ACPIBuildProcessPowerResourcePhaseDep @ 0x140058F90
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x140010934 (AMLIAsyncEvalObject.c)
 *     AMLIReferenceHandleEx @ 0x140015FC0 (AMLIReferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteMustSucceed @ 0x14001E380 (ACPIBuildCompleteMustSucceed.c)
 */

__int64 __fastcall ACPIBuildProcessPowerResourcePhaseDep(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 *v4; // rdi
  __int64 v5; // rcx
  __int64 *v6; // rcx

  v2 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  *(_DWORD *)(a1 + 32) = 5;
  *(_OWORD *)(a1 + 80) = 0LL;
  *(_OWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  v4 = AMLIGetNamedChild(*(__int64 **)(v2 + 32), 1346716767);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 56);
    if ( v5 )
      AMLIDereferenceHandleEx(v5);
    *(_QWORD *)(a1 + 56) = v4;
    AMLIReferenceHandleEx((__int64)v4);
    v3 = AMLIAsyncEvalObject(v6, a1 + 80, 0, 0LL, ACPIBuildCompleteMustSucceed, a1);
    if ( v3 == 259 )
      goto LABEL_6;
  }
  ACPIBuildCompleteMustSucceed((ULONG_PTR)v4, v3, a1 + 80, a1);
  if ( v4 )
LABEL_6:
    AMLIDereferenceHandleEx((__int64)v4);
  return v3;
}
