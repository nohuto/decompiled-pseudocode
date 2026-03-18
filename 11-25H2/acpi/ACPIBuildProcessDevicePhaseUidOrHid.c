/*
 * XREFs of ACPIBuildProcessDevicePhaseUidOrHid @ 0x14004FA90
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     ACPIGet @ 0x1400157F0 (ACPIGet.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteMustSucceed @ 0x14001E380 (ACPIBuildCompleteMustSucceed.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseUidOrHid(__int64 a1)
{
  __int64 v1; // r14
  int v3; // esi
  __int64 *v4; // rdi
  __int64 *v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // r8d
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // edi

  v1 = *(_QWORD *)(a1 + 40);
  v3 = 1145656671;
  v4 = AMLIGetNamedChild(*(__int64 **)(v1 + 760), 1145653343);
  v5 = AMLIGetNamedChild(*(__int64 **)(v1 + 760), 1145656671);
  if ( v5 )
  {
    AMLIDereferenceHandleEx((__int64)v4);
    v6 = *(_QWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 32) = 8;
    if ( v6 )
      AMLIDereferenceHandleEx(v6);
    v7 = 616LL;
    v8 = 671613062;
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 32) = 7;
    if ( v9 )
      AMLIDereferenceHandleEx(v9);
    v3 = 1145653343;
    v7 = 608LL;
    v8 = 671612966;
    v5 = v4;
  }
  *(_QWORD *)(a1 + 56) = v5;
  v10 = ACPIGet(v1, v3, v8, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v1 + v7, 0LL);
  v11 = v10;
  if ( v10 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL, v10, 0LL, a1);
  return v11;
}
