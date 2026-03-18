/*
 * XREFs of DpiSriovNotification @ 0x140249844
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x14023DB30 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x140054F44 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z @ 0x1400573EC (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x14005A028 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DpiFdoGetVirtualGpuType @ 0x140405578 (DpiFdoGetVirtualGpuType.c)
 */

__int64 __fastcall DpiSriovNotification(_QWORD *a1, struct _IRP *a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rsi
  int VirtualGpuType; // eax
  __int64 v10; // r9
  unsigned int v11; // ebx
  __int64 v12; // rdi
  _BYTE v14[32]; // [rsp+30h] [rbp-38h] BYREF
  int v15; // [rsp+50h] [rbp-18h]

  v5 = a1[8];
  if ( bTracingEnabled )
    VgpuTrace(1, 0, (void *)v5, L"DpiSriovNotification", 0LL);
  if ( a4 >= 4 && a3 )
  {
    VirtualGpuType = DpiFdoGetVirtualGpuType(a2);
    if ( *(_BYTE *)((VirtualGpuType != 0 ? 0x20 : 0) + v5 + 5516) )
    {
      v12 = VirtualGpuType != 0 ? 0x20 : 0;
      if ( *(_QWORD *)(v12 + v5 + 5496) )
      {
        v11 = -1073741811;
        WdLogSingleEntry1(2LL, -1073741811LL);
        WdLogGlobalForLineNumber = 2840;
      }
      else
      {
        LOBYTE(v10) = 1;
        CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v14, a1, a2, v10, 0, 0);
        v11 = v15;
        if ( v15 >= 0 )
        {
          *(_QWORD *)(v12 + v5 + 5496) = a2;
          a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
          IoCsqInsertIrp((PIO_CSQ)(v5 + 5400), a2, 0LL);
          v11 = 259;
        }
        CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v14);
      }
    }
    else
    {
      v11 = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 2831;
    }
  }
  else
  {
    v11 = -1073741789;
    WdLogSingleEntry1(2LL, -1073741789LL);
    WdLogGlobalForLineNumber = 2817;
  }
  if ( bTracingEnabled )
    VgpuTrace(0, v11, (void *)v5, L"DpiSriovNotification", 0LL);
  return v11;
}
