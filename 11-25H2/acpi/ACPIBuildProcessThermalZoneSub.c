/*
 * XREFs of ACPIBuildProcessThermalZoneSub @ 0x140059E90
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     ACPIGet @ 0x1400157F0 (ACPIGet.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteMustSucceed @ 0x14001E380 (ACPIBuildCompleteMustSucceed.c)
 */

__int64 __fastcall ACPIBuildProcessThermalZoneSub(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v3; // ebx
  __int64 *v4; // rbp

  v1 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  v4 = AMLIGetNamedChild(*(__int64 **)(v1 + 760), 1112888159);
  *(_DWORD *)(a1 + 32) = 9;
  if ( !v4 )
    goto LABEL_7;
  if ( (*(_BYTE *)(v1 + 1120) & 0x10) != 0 )
  {
    strnlen(*(const char **)(v1 + 624), 9uLL);
  }
  else
  {
    _InterlockedOr64((volatile signed __int64 *)(v1 + 1120), 0x10uLL);
    *(_DWORD *)(a1 + 32) = 8;
    v3 = ACPIGet(v1, 1112888159, 671612932, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v1 + 624, 0LL);
  }
  AMLIDereferenceHandleEx((__int64)v4);
  if ( v3 == 259 )
    return 0;
  else
LABEL_7:
    ACPIBuildCompleteMustSucceed(0LL, v3, 0LL, a1);
  return v3;
}
