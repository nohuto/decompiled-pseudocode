/*
 * XREFs of ACPIEcStartDevice @ 0x14005FAE0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIIsEqualHandle @ 0x140015F98 (AMLIIsEqualHandle.c)
 *     AMLIReferenceHandleEx @ 0x140015FC0 (AMLIReferenceHandleEx.c)
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitStartDevice @ 0x140044BF4 (ACPIInitStartDevice.c)
 *     ACPIEcCreateEcData @ 0x14005F744 (ACPIEcCreateEcData.c)
 */

__int64 __fastcall ACPIEcStartDevice(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rax
  __int64 v5; // r14
  __int64 v6; // rdi
  ULONG_PTR *v7; // r8
  __int64 *v8; // rbx
  __int64 EcData; // rax
  __int64 result; // rax
  __int64 v11; // rcx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = *(_QWORD *)(a2 + 184);
  v6 = DeviceExtension;
  v7 = *(ULONG_PTR **)(DeviceExtension + 184);
  if ( !v7 )
  {
    v8 = (__int64 *)(DeviceExtension + 760);
    if ( !gECDTContext || !AMLIIsEqualHandle((_QWORD *)*v8, *(_QWORD **)(gECDTContext + 56)) )
    {
      EcData = ACPIEcCreateEcData();
      if ( !EcData )
        return 3221225626LL;
      v11 = *v8;
      *(_QWORD *)(EcData + 56) = *v8;
      AMLIReferenceHandleEx(v11);
    }
    *(_QWORD *)(v6 + 184) = v7;
  }
  *v7 = a1;
  result = ACPIInitStartDevice(
             a1,
             v5,
             (void (__fastcall *)(__int64, __int64, _QWORD))&ACPIEcStartDeviceCompletion,
             a2,
             a2);
  if ( (int)result >= 0 )
    return 259LL;
  return result;
}
