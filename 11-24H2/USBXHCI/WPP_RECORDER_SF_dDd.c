/*
 * XREFs of WPP_RECORDER_SF_DDd @ 0x140049388
 * Callers:
 *     Control_Transfer_CompleteCancelable @ 0x1400064F0 (Control_Transfer_CompleteCancelable.c)
 *     Isoch_RetrieveNextStage @ 0x14000E290 (Isoch_RetrieveNextStage.c)
 *     TR_AddTRBRangeToSecureTransferRing @ 0x140019000 (TR_AddTRBRangeToSecureTransferRing.c)
 *     Control_Transfer_Map @ 0x14001E4D0 (Control_Transfer_Map.c)
 *     Control_WdfEvtIoDefault @ 0x140021340 (Control_WdfEvtIoDefault.c)
 *     TR_EnableForwardProgress_Internal @ 0x14004B0C8 (TR_EnableForwardProgress_Internal.c)
 *     Register_ParseCapabilityRegister @ 0x14007D158 (Register_ParseCapabilityRegister.c)
 *     Register_PrepareHardware @ 0x14007DABC (Register_PrepareHardware.c)
 *     Control_Initialize @ 0x140080740 (Control_Initialize.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_DDd(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // rbx
  unsigned int v9; // edi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-58h]
  __int64 v13; // [rsp+A8h] [rbp+30h] BYREF
  va_list va; // [rsp+A8h] [rbp+30h]
  __int64 v15; // [rsp+B0h] [rbp+38h] BYREF
  va_list va1; // [rsp+B0h] [rbp+38h]
  va_list va2; // [rsp+B8h] [rbp+40h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  v7 = (unsigned __int64)a3 >> 16;
  v9 = a2;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v7 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v7),
      43LL,
      a5,
      a4,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      4LL,
      va2,
      4LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, v9, a3, a5, v12, (__int64 *)va, 4LL, (__int64 *)va1, 4LL, va2, 4LL, 0LL);
}
