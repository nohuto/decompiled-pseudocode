/*
 * XREFs of ?CopyRegistryKeys@DXGADAPTER@@QEAAJXZ @ 0x14018BA9C
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x1401902D4 (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x14002ED20 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z @ 0x1402254CC (-VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z.c)
 */

__int64 __fastcall DXGADAPTER::CopyRegistryKeys(DXGADAPTER *this)
{
  unsigned int v1; // ebx
  __int64 result; // rax
  unsigned __int16 v4[264]; // [rsp+20h] [rbp-228h] BYREF

  v1 = 0;
  if ( *((_BYTE *)this + 210) )
  {
    WdLogSingleEntry0(4LL);
    result = 0LL;
    WdLogGlobalForLineNumber = 12655;
    return result;
  }
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 426) >= 0x16u )
  {
    RtlStringCbCopyW((char *)v4, 0x208uLL, (char *)L"Classes");
    result = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetRegistryKeys((DXGADAPTER *)((char *)this + 4664), v4);
    if ( (int)result < 0 )
      return result;
    RtlStringCbCopyW((char *)v4, 0x208uLL, (char *)L"MediaFoundation\\Transforms");
    return (unsigned int)DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetRegistryKeys((DXGADAPTER *)((char *)this + 4664), v4);
  }
  return v1;
}
