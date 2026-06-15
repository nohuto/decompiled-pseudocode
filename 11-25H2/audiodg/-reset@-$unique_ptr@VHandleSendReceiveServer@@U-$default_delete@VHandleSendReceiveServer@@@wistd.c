/*
 * XREFs of ?reset@?$unique_ptr@VHandleSendReceiveServer@@U?$default_delete@VHandleSendReceiveServer@@@wistd@@@wistd@@QEAAXPEAVHandleSendReceiveServer@@@Z @ 0x1400442A4
 * Callers:
 *     ?StartALPCHandleServer@@YAJKPEAPEAVHandleSendReceiveServer@@PEAPEAG@Z @ 0x1400386AC (-StartALPCHandleServer@@YAJKPEAPEAVHandleSendReceiveServer@@PEAPEAG@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@VHandleSendReceiveServer@@U?$default_delete@VHandleSendReceiveServer@@@wistd@@@wistd@@@details@wil@@QEAA@XZ @ 0x140044280 (--1-$out_param_t@V-$unique_ptr@VHandleSendReceiveServer@@U-$default_delete@VHandleSendReceiveSer.c)
 *     ??1?$unique_ptr@VHandleSendReceiveServer@@U?$default_delete@VHandleSendReceiveServer@@@wistd@@@wistd@@QEAA@XZ @ 0x14004C32C (--1-$unique_ptr@VHandleSendReceiveServer@@U-$default_delete@VHandleSendReceiveServer@@@wistd@@@w.c)
 *     ??1?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAA@XZ @ 0x140055498 (--1-$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@.c)
 *     ??1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ @ 0x140055930 (--1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ.c)
 *     ??1?$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAA@XZ @ 0x140082C94 (--1-$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wistd::unique_ptr<HandleSendReceiveServer,wistd::default_delete<HandleSendReceiveServer>>::reset(
        __int64 (__fastcall ****a1)(_QWORD, __int64),
        __int64 (__fastcall ***a2)(_QWORD, __int64))
{
  __int64 (__fastcall ***v2)(_QWORD, __int64); // r8
  __int64 result; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    return (**v2)(v2, 1LL);
  return result;
}
