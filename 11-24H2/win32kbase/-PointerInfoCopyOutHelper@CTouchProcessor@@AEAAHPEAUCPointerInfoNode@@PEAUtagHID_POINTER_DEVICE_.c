/*
 * XREFs of ?PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x14020212C
 * Callers:
 *     ?GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z @ 0x1400D2BD0 (-GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z.c)
 *     ?GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z @ 0x1400D4750 (-GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z.c)
 *     ?GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIPEAE@Z @ 0x1401FF724 (-GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIP.c)
 *     ?GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z @ 0x1401FF8B8 (-GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z.c)
 * Callees:
 *     PointerInfoCopyOutHelperInternal @ 0x1400FF2DC (PointerInfoCopyOutHelperInternal.c)
 *     ?GetPointerInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_INFO@@@Z @ 0x140104C6C (-GetPointerInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_INFO@@@Z.c)
 *     ?GetPointerTouchInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_TOUCH_INFO@@@Z @ 0x14012CC40 (-GetPointerTouchInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_TOUCH_INFO@@@Z.c)
 *     ?GetPointerPenInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_PEN_INFO@@@Z @ 0x14012F8DC (-GetPointerPenInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_PEN_INFO@@@Z.c)
 *     ?CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ @ 0x140182DBC (-CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetPointerTouchpadInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_TOUCH_INFO@@@Z @ 0x140200490 (-GetPointerTouchpadInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_TOUCH_INFO@@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CTouchProcessor::PointerInfoCopyOutHelper(
        PERESOURCE *this,
        struct CPointerInfoNode *a2,
        struct tagHID_POINTER_DEVICE_INFO *a3,
        unsigned int a4,
        unsigned int a5,
        struct tagPOINTER_INFO *a6)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  unsigned int v12; // edi
  int (*v13)(void); // rax
  unsigned int v14; // esi
  unsigned int v15; // esi

  if ( !(unsigned int)CTouchProcessor::CTouchProcessorLockShared(this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 13995);
  v11 = *(_QWORD *)((char *)a2 + 148);
  v12 = 0;
  v13 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v10, v9) + 48) + 6496LL);
  if ( v13 )
  {
    if ( v13() >= 0 )
    {
      v12 = (unsigned int)PointerInfoCopyOutHelperInternal((__int64)a2 + 160, v11, (__int64)a3, a4, a5, (__int64)a6);
      if ( v12 )
      {
        v14 = a4 - 2;
        if ( v14 )
        {
          v15 = v14 - 1;
          if ( v15 )
          {
            if ( v15 == 2 )
              InputTraceLogging::Pointer::GetPointerTouchpadInfo(a6);
            else
              InputTraceLogging::Pointer::GetPointerInfo(a6);
          }
          else
          {
            InputTraceLogging::Pointer::GetPointerPenInfo(a6);
          }
        }
        else
        {
          InputTraceLogging::Pointer::GetPointerTouchInfo(a6);
        }
      }
    }
  }
  return v12;
}
