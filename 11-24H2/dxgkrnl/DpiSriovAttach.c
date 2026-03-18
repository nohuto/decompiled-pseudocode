/*
 * XREFs of DpiSriovAttach @ 0x1402493B8
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x14023DB30 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x140054F44 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z @ 0x1400573EC (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x14005A028 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DxgkpCheckProcessForVirtualMachineManagementAccess @ 0x1402118C4 (DxgkpCheckProcessForVirtualMachineManagementAccess.c)
 *     DpiFdoGetVirtualGpuType @ 0x140405578 (DpiFdoGetVirtualGpuType.c)
 */

__int64 __fastcall DpiSriovAttach(_QWORD *a1, struct _IRP *a2)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  __int64 v6; // r9
  unsigned int v7; // edi
  _BYTE v9[32]; // [rsp+30h] [rbp-38h] BYREF
  int v10; // [rsp+50h] [rbp-18h]

  v3 = a1[8];
  if ( bTracingEnabled )
    VgpuTrace(1, 0, (void *)v3, L"DpiSriovAttach", 0LL);
  v5 = v3 + ((unsigned int)DpiFdoGetVirtualGpuType(a2) != 0 ? 5520LL : 5488LL);
  if ( !a2->RequestorMode || DxgkpCheckProcessForVirtualMachineManagementAccess() )
  {
    if ( *(_BYTE *)(v5 + 28) || *(_QWORD *)v5 )
    {
      v7 = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 3067;
    }
    else
    {
      LOBYTE(v6) = 1;
      CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v9, a1, a2, v6, 0, 0);
      v7 = v10;
      if ( v10 >= 0 )
      {
        if ( *(_DWORD *)(v3 + 236) == 2 )
        {
          *(_BYTE *)(v5 + 28) = 1;
          IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(v3 + 152));
        }
        else
        {
          *(_QWORD *)v5 = a2;
          a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
          IoCsqInsertIrp((PIO_CSQ)(v3 + 5400), a2, 0LL);
          v7 = 259;
        }
        _InterlockedIncrement(&dword_1401612C8);
      }
      CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v9);
    }
  }
  else
  {
    v7 = -1073741790;
    WdLogSingleEntry1(2LL, -1073741790LL);
    WdLogGlobalForLineNumber = 3057;
  }
  if ( bTracingEnabled )
    VgpuTrace(0, v7, (void *)v3, L"DpiSriovAttach", 0LL);
  return v7;
}
