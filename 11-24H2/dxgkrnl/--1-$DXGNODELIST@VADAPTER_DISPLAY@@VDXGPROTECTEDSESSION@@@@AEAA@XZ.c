/*
 * XREFs of ??1?$DXGNODELIST@VADAPTER_DISPLAY@@VDXGPROTECTEDSESSION@@@@AEAA@XZ @ 0x14004F630
 * Callers:
 *     ??_G?$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z @ 0x140073180 (--_G-$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z.c)
 *     ??1ADAPTER_DISPLAY@@QEAA@XZ @ 0x140196A94 (--1ADAPTER_DISPLAY@@QEAA@XZ.c)
 *     ??1ADAPTER_RENDER@@QEAA@XZ @ 0x14019BC2C (--1ADAPTER_RENDER@@QEAA@XZ.c)
 *     ??1DXGGLOBAL@@EEAA@XZ @ 0x1401D29F4 (--1DXGGLOBAL@@EEAA@XZ.c)
 *     ??1DXGCONTEXT@@QEAA@XZ @ 0x1402CD6D8 (--1DXGCONTEXT@@QEAA@XZ.c)
 *     ??1DXGPROCESS@@MEAA@XZ @ 0x1403787F0 (--1DXGPROCESS@@MEAA@XZ.c)
 *     ??1DXGDEVICE@@QEAA@XZ @ 0x1403A6020 (--1DXGDEVICE@@QEAA@XZ.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000A750 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>(
        _QWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // r8

  if ( (_QWORD *)*a1 != a1 )
  {
    result = WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 834;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
        return McTemplateK0zqqzxxxxx_EtwWriteTransfer(0LL, 834LL, v2, 0LL, 2, -1, L"IsEmpty()", 66, 0, 0, 0, 0);
    }
  }
  return result;
}
