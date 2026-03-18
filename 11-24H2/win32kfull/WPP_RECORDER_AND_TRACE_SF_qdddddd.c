/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qdddddd @ 0x1402BFB0C
 * Callers:
 *     _anonymous_namespace_::xxxNormalizeRect_0 @ 0x14014AE04 (_anonymous_namespace_--xxxNormalizeRect_0.c)
 *     ?SetRestoreToArrangeRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@@Z @ 0x14014EB1C (-SetRestoreToArrangeRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@@Z.c)
 *     ?SetOverrideMargins@CWindowMarginProp@WindowMargins@@SAJPEAUtagWND@@AEBUFRAME_MARGIN@@@Z @ 0x1402BF6B0 (-SetOverrideMargins@CWindowMarginProp@WindowMargins@@SAJPEAUtagWND@@AEBUFRAME_MARGIN@@@Z.c)
 *     ?SetLastMoveRect@CRecalcProp@@AEAAXXZ @ 0x1402C3FC0 (-SetLastMoveRect@CRecalcProp@@AEAAXXZ.c)
 *     ?ShouldMigrateFromAnchor@CRecalcProp@@AEAA_NXZ @ 0x1402C4478 (-ShouldMigrateFromAnchor@CRecalcProp@@AEAA_NXZ.c)
 *     ?xxxTransformRectToMonitor@AdvancedWindowPos@@YA?AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CMonitorTopology@@2_N@Z @ 0x1402D7FA8 (-xxxTransformRectToMonitor@AdvancedWindowPos@@YA-AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CM.c)
 *     ?SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z @ 0x1402DB324 (-SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_qdddddd(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned __int16 a7,
        __int64 a8,
        ...)
{
  __int64 result; // rax
  int v11; // [rsp+28h] [rbp-79h]
  __int64 v12; // [rsp+F8h] [rbp+57h] BYREF
  va_list va; // [rsp+F8h] [rbp+57h]
  __int64 v14; // [rsp+100h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+100h] [rbp+5Fh]
  __int64 v16; // [rsp+108h] [rbp+67h] BYREF
  va_list va2; // [rsp+108h] [rbp+67h]
  __int64 v18; // [rsp+110h] [rbp+6Fh] BYREF
  va_list va3; // [rsp+110h] [rbp+6Fh]
  __int64 v20; // [rsp+118h] [rbp+77h] BYREF
  va_list va4; // [rsp+118h] [rbp+77h]
  __int64 v22; // [rsp+120h] [rbp+7Fh] BYREF
  va_list va5; // [rsp+120h] [rbp+7Fh]
  va_list va6; // [rsp+128h] [rbp+87h] BYREF

  va_start(va6, a8);
  va_start(va5, a8);
  va_start(va4, a8);
  va_start(va3, a8);
  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v12 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v14 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v16 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v18 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v20 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v22 = va_arg(va6, _QWORD);
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               a8,
               a7,
               (__int64 *)va,
               8LL,
               (__int64 *)va1,
               4LL,
               (__int64 *)va2,
               4LL,
               (__int64 *)va3,
               4LL,
               (__int64 *)va4,
               4LL,
               (__int64 *)va5,
               4LL,
               va6,
               4LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = a7;
    return WppAutoLogTrace(
             a4,
             5LL,
             a6,
             a8,
             v11,
             (__int64 *)va,
             8LL,
             (__int64 *)va1,
             4LL,
             (__int64 *)va2,
             4LL,
             (__int64 *)va3);
  }
  return result;
}
