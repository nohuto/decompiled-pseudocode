/*
 * XREFs of DpReadDeviceSpace @ 0x140042EE0
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x1401902D4 (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 *     ?CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z @ 0x14021545C (-CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?ReadVirtualFunctionConfig@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_READVIRTUALFUNCTIONCONFIG@@@Z @ 0x1403E46A0 (-ReadVirtualFunctionConfig@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_READVIRTUALFUNCTIONCONFIG@@.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpReadDeviceSpace(__int64 a1, __int64 a2, void *a3, ULONG Offset, ULONG Length, ULONG *a6)
{
  unsigned int v6; // ebx
  __int64 v8; // rcx
  int v9; // r8d
  __int64 (__fastcall *v10)(_QWORD, __int64, void *); // r11
  ULONG BusDataByOffset; // eax
  __int64 (__fastcall *v13)(_QWORD, void *, _QWORD, _QWORD); // rax

  v6 = 0;
  if ( !a1 || !a3 || !a6 )
  {
    v6 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 2712;
    return v6;
  }
  *a6 = 0;
  v8 = *(_QWORD *)(a1 + 64);
  if ( !v8 )
    goto LABEL_13;
  if ( *(_DWORD *)(v8 + 16) != 1953656900 )
    goto LABEL_13;
  v9 = *(_DWORD *)(v8 + 20);
  if ( (unsigned int)(v9 - 2) > 1 )
    goto LABEL_13;
  switch ( (_DWORD)a2 )
  {
    case 0:
    case 0x52696350:
      v10 = *(__int64 (__fastcall **)(_QWORD, __int64, void *))(v8 + 616);
      if ( !v10 )
      {
        v6 = -1073741823;
        WdLogSingleEntry1(3LL, -1073741823LL);
        WdLogGlobalForLineNumber = 2809;
        return v6;
      }
      BusDataByOffset = v10(*(_QWORD *)(v8 + 568), a2, a3);
      break;
    case 0x80000000:
      BusDataByOffset = HalGetBusDataByOffset(PCIConfiguration, 0, 0, a3, Offset, Length);
      break;
    case 0x80000001:
      if ( v9 != 2 )
      {
        v6 = -1073741811;
        WdLogSingleEntry1(2LL, -1073741811LL);
        WdLogGlobalForLineNumber = 2755;
        return v6;
      }
      if ( (*(_DWORD *)(v8 + 4124) & 4) == 0 )
      {
        v6 = -1071774661;
        WdLogSingleEntry1(2LL, -1071774661LL);
        WdLogGlobalForLineNumber = 2766;
        return v6;
      }
      v13 = *(__int64 (__fastcall **)(_QWORD, void *, _QWORD, _QWORD))(v8 + 3072);
      if ( !v13 )
      {
        v6 = -1073741823;
        WdLogSingleEntry1(3LL, -1073741823LL);
        WdLogGlobalForLineNumber = 2776;
        return v6;
      }
      BusDataByOffset = v13(*(_QWORD *)(v8 + 3048), a3, Offset, Length);
      break;
    default:
LABEL_13:
      v6 = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 2735;
      return v6;
  }
  *a6 = BusDataByOffset;
  WdLogSingleEntry1(4LL, BusDataByOffset);
  WdLogGlobalForLineNumber = 2822;
  return v6;
}
