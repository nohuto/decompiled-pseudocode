/*
 * XREFs of ACPIBuildProcessDevicePhaseCls @ 0x140049610
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     ACPIGet @ 0x1400157F0 (ACPIGet.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteMustSucceed @ 0x14001E380 (ACPIBuildCompleteMustSucceed.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseCls(__int64 a1)
{
  __int64 v1; // rbx
  __int64 *v3; // rax
  int v4; // eax
  unsigned int v5; // ebx

  v1 = *(_QWORD *)(a1 + 40);
  v3 = AMLIGetNamedChild(*(__int64 **)(v1 + 760), 1397506911);
  *(_DWORD *)(a1 + 32) = 13;
  if ( !v3 || (*(_BYTE *)(v1 + 1120) & 4) != 0 )
  {
    v4 = ACPIGet(v1, 1096045407, -1610348542, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, a1 + 128, 0LL);
  }
  else
  {
    AMLIDereferenceHandleEx((__int64)v3);
    _InterlockedOr64((volatile signed __int64 *)(v1 + 1120), 4uLL);
    v4 = ACPIGet(v1, 1397506911, 537165824, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v1 + 640, 0LL);
    *(_DWORD *)(a1 + 32) = 12;
  }
  v5 = v4;
  if ( v4 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL, v4, 0LL, a1);
  return v5;
}
