/*
 * XREFs of XilCoreCommonBuffer_ReleaseBufferInternal @ 0x14003075C
 * Callers:
 *     CommonBuffer_ReleaseBuffer @ 0x1400034F4 (CommonBuffer_ReleaseBuffer.c)
 *     XilCoreCommonBuffer_ReleaseBuffers @ 0x1400306BC (XilCoreCommonBuffer_ReleaseBuffers.c)
 * Callees:
 *     SecureDmaEnabler_FreeCommonBufferPage @ 0x14003C8A8 (SecureDmaEnabler_FreeCommonBufferPage.c)
 *     Feature_UMPERS__private_IsEnabledDeviceUsageNoInline @ 0x14003F574 (Feature_UMPERS__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

_QWORD *__fastcall XilCoreCommonBuffer_ReleaseBufferInternal(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v5; // rdx
  _QWORD *result; // rax
  _DWORD *v7; // rax
  _DWORD *v8; // rcx
  __int64 v9; // rdx

  v2 = 0;
  *(_QWORD *)(a2 + 72) = 0LL;
  *(_DWORD *)(a2 + 64) = 0;
  if ( (unsigned int)Feature_UMPERS__private_IsEnabledDeviceUsageNoInline() && *(_DWORD *)(a2 + 40) > 0x1000u )
  {
    v5 = *(_QWORD *)(a2 + 96);
    if ( *(_BYTE *)(*(_QWORD *)a1 + 80LL) )
      return (_QWORD *)SecureDmaEnabler_FreeCommonBufferPage(*(_QWORD *)(**(_QWORD **)a1 + 104LL), v5);
    else
      return (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 1664))(
                         WdfDriverGlobals,
                         *(_QWORD *)(v5 + 16));
  }
  else
  {
    v7 = a1 + 8;
    do
    {
      v8 = v7;
      if ( *(_DWORD *)(a2 + 40) == *v7 )
        break;
      ++v2;
      v7 += 16;
    }
    while ( v2 < 2 );
    result = v8 + 8;
    v9 = *((_QWORD *)v8 + 4);
    if ( *(_DWORD **)(v9 + 8) != v8 + 8 )
      __fastfail(3u);
    *(_QWORD *)a2 = v9;
    *(_QWORD *)(a2 + 8) = result;
    *(_QWORD *)(v9 + 8) = a2;
    *result = a2;
    ++v8[7];
  }
  return result;
}
