/*
 * XREFs of XilCoreCommonBuffer_FreeUnusedResources @ 0x140034C3C
 * Callers:
 *     CommonBuffer_RebalanceResources @ 0x14000B11C (CommonBuffer_RebalanceResources.c)
 *     CommonBuffer_RebalanceResourcesWorkItem @ 0x140034BE0 (CommonBuffer_RebalanceResourcesWorkItem.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x14002CE68 (WPP_RECORDER_SF_q.c)
 *     SecureDmaEnabler_FreeCommonBufferPage @ 0x14003C8A8 (SecureDmaEnabler_FreeCommonBufferPage.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 **__fastcall XilCoreCommonBuffer_FreeUnusedResources(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rdx
  __int64 *v4; // rcx
  int v5; // edx
  __int64 *v6; // rbx
  __int64 **result; // rax
  __int64 *v8; // rax
  __int64 v9; // rdx
  __int64 *v10; // [rsp+30h] [rbp-10h] BYREF
  __int64 **v11; // [rsp+38h] [rbp-8h]

  v11 = &v10;
  v10 = (__int64 *)&v10;
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
  v3 = a1 + 184;
  *(_BYTE *)(a1 + 25) = v2;
  v4 = *(__int64 **)(a1 + 184);
  if ( v4 != (__int64 *)(a1 + 184) )
  {
    *v11 = v4;
    *(_QWORD *)(*(_QWORD *)v3 + 8LL) = v11;
    **(_QWORD **)(a1 + 192) = &v10;
    v11 = *(__int64 ***)(a1 + 192);
    *(_QWORD *)(a1 + 192) = a1 + 184;
    *(_QWORD *)v3 = v3;
  }
  *(_DWORD *)(a1 + 200) -= *(_DWORD *)(a1 + 176);
  *(_DWORD *)(a1 + 176) = 0;
  ++*(_DWORD *)(a1 + 212);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 16), *(_BYTE *)(a1 + 25));
  while ( 1 )
  {
    v6 = v10;
    result = &v10;
    if ( v10 == (__int64 *)&v10 )
      break;
    if ( (__int64 **)v10[1] != &v10 || (v8 = (__int64 *)*v10, *(__int64 **)(*v10 + 8) != v10) )
      __fastfail(3u);
    v10 = (__int64 *)*v10;
    v8[1] = (__int64)&v10;
    v6[1] = (__int64)v6;
    *v6 = (__int64)v6;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_q(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v5,
        8,
        25,
        (__int64)&WPP_ed2c8bfb3bf43ee5af8154ef7bced396_Traceguids,
        v6[3]);
    }
    v9 = v6[3];
    if ( *(_BYTE *)(*(_QWORD *)a1 + 80LL) )
      SecureDmaEnabler_FreeCommonBufferPage(*(_QWORD *)(**(_QWORD **)a1 + 104LL), v9);
    else
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 1664))(
        WdfDriverGlobals,
        *(_QWORD *)(v9 + 16));
  }
  return result;
}
