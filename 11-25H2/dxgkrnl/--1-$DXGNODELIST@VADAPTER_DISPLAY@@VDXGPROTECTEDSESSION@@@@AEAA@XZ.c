/*
 * XREFs of ??1?$DXGNODELIST@VADAPTER_DISPLAY@@VDXGPROTECTEDSESSION@@@@AEAA@XZ @ 0x14004FBB0
 * Callers:
 *     ??_G?$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z @ 0x1400727EC (--_G-$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z.c)
 *     ??1ADAPTER_DISPLAY@@QEAA@XZ @ 0x14019471C (--1ADAPTER_DISPLAY@@QEAA@XZ.c)
 *     ??1ADAPTER_RENDER@@QEAA@XZ @ 0x14019973C (--1ADAPTER_RENDER@@QEAA@XZ.c)
 *     ??1DXGGLOBAL@@EEAA@XZ @ 0x1401CD6B4 (--1DXGGLOBAL@@EEAA@XZ.c)
 *     ??1DXGCONTEXT@@QEAA@XZ @ 0x140334140 (--1DXGCONTEXT@@QEAA@XZ.c)
 *     ??1DXGPROCESS@@MEAA@XZ @ 0x14038BE90 (--1DXGPROCESS@@MEAA@XZ.c)
 *     ??1DXGDEVICE@@QEAA@XZ @ 0x1403B4470 (--1DXGDEVICE@@QEAA@XZ.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x140019D30 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>(
        _QWORD *a1)
{
  NTSTATUS result; // eax
  __int64 v2; // r8

  if ( (_QWORD *)*a1 != a1 )
  {
    result = WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 835;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
        return McTemplateK0zqqzxxxxx_EtwWriteTransfer(0, 835, v2, 0LL, 2, -1, L"IsEmpty()", 835LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  return result;
}
