/*
 * XREFs of ACPIBuildProcessThermalZoneHrv @ 0x140059C20
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     ACPIGet @ 0x1400157F0 (ACPIGet.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteMustSucceed @ 0x14001E380 (ACPIBuildCompleteMustSucceed.c)
 */

__int64 __fastcall ACPIBuildProcessThermalZoneHrv(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v3; // ebx
  __int64 *v4; // rbp

  v1 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  v4 = AMLIGetNamedChild(*(__int64 **)(v1 + 760), 1448233055);
  *(_DWORD *)(a1 + 32) = 0;
  if ( !v4 )
    goto LABEL_6;
  if ( (*(_BYTE *)(v1 + 1120) & 8) == 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)(v1 + 1120), 8uLL);
    v3 = ACPIGet(v1, 1448233055, 537149442, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v1 + 632, 0LL);
  }
  AMLIDereferenceHandleEx((__int64)v4);
  if ( v3 == 259 )
    return 0;
  else
LABEL_6:
    ACPIBuildCompleteMustSucceed(0LL, v3, 0LL, a1);
  return v3;
}
