/*
 * XREFs of DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x140325500
 * Callers:
 *     ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x1403249F0 (-DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z.c)
 *     ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1403251D0 (-DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkGetMonitorInternalInfo @ 0x140419880 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x14001927C (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x14002963C (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z @ 0x1403257C8 (-FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z.c)
 *     DxgkIsAdapterVirtualTopologyEnabled @ 0x1403258BC (DxgkIsAdapterVirtualTopologyEnabled.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x140325E40 (DxgkIsVirtualizationDisabledForTarget.c)
 */

__int64 __fastcall DxgkConvertLegacyQDCAdapterAndIdToActual(
        struct _LUID *a1,
        unsigned int a2,
        struct _LUID *a3,
        unsigned int *a4)
{
  DXGADAPTERSOURCEHASH *v8; // rdi
  __int64 result; // rax
  struct _LUID v10; // rcx
  __int64 v11; // rbx
  unsigned int v12; // r14d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int HashBitMask; // eax
  struct _LUID v18; // rbx
  __int64 v19; // rax
  unsigned int v20; // [rsp+80h] [rbp+40h] BYREF
  int v21; // [rsp+88h] [rbp+48h]
  struct _LUID v22; // [rsp+90h] [rbp+50h] BYREF

  *a3 = *a1;
  *a4 = a2;
  v8 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal() + 1352);
  if ( ((unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(v8) & a2) == 0 )
    return 0LL;
  v10 = *a1;
  v21 = 0;
  LODWORD(result) = DxgkIsAdapterVirtualTopologyEnabled(v10);
  v11 = (int)result;
  if ( (int)result < 0 )
    return (unsigned int)result;
  if ( !v21 )
    return 0LL;
  v22 = 0LL;
  v20 = 0;
  v12 = a2 >> DXGADAPTERSOURCEHASH::GetHashBitShift(v8);
  if ( (int)DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(v8, v12, &v22, &v20) < 0 )
  {
    v19 = WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
    *(_QWORD *)(v19 + 24) = v12;
    *(_QWORD *)(v19 + 32) = v11;
    WdLogGlobalForLineNumber = 9206;
    return 0LL;
  }
  LOBYTE(v20) = 0;
  LOBYTE(v21) = 0;
  HashBitMask = DXGADAPTERSOURCEHASH::GetHashBitMask(v8);
  v18 = v22;
  result = DxgkIsVirtualizationDisabledForTarget(v22, a2 & ~HashBitMask, 0LL, 0LL, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    if ( !(_BYTE)v21 )
    {
      *a3 = v18;
      *a4 = a2 & ~(unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(v8);
    }
    return 0LL;
  }
  return result;
}
