/*
 * XREFs of ?HampManagerAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x1800811A8
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180085754 (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?HampUtilDeleteTempFile@@YAJPEBG@Z @ 0x18007F3F0 (-HampUtilDeleteTempFile@@YAJPEBG@Z.c)
 *     ?HampPdcAllocateState@@YAJPEAU_HAM_PDC_CONTEXT@@@Z @ 0x180083634 (-HampPdcAllocateState@@YAJPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampWakeManagerAllocateState@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180084C9C (-HampWakeManagerAllocateState@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall HampManagerAllocateState(struct _HOST_ACTIVITY_MANAGER *a1)
{
  __int64 result; // rax
  unsigned int v3; // edx
  const unsigned __int16 *v4; // rcx
  _BYTE OutputBuffer[80]; // [rsp+30h] [rbp-68h] BYREF

  memset_0(OutputBuffer, 0, 0x4CuLL);
  if ( NtPowerInformation(SystemPowerCapabilities, 0LL, 0, OutputBuffer, 0x4Cu) >= 0 && OutputBuffer[20] )
  {
    result = TpAllocPool((char *)a1 + 968, 0LL);
    if ( (int)result < 0 )
      return result;
    *((_QWORD *)a1 + 123) = *((_QWORD *)a1 + 121);
  }
  result = HampPdcAllocateState((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 560));
  if ( (int)result >= 0 )
  {
    result = HampWakeManagerAllocateState((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 688));
    if ( (int)result >= 0 )
    {
      HampUtilDeleteTempFile(v4, v3);
      return 0LL;
    }
  }
  return result;
}
