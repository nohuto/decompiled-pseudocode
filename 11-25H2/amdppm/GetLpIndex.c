/*
 * XREFs of GetLpIndex @ 0x140025AC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x140003618 (WPP_RECORDER_SF_DD.c)
 *     GetDevExtFromLpIndex @ 0x140004A80 (GetDevExtFromLpIndex.c)
 *     LookupNtProcessorNumber @ 0x14000A59C (LookupNtProcessorNumber.c)
 *     _guard_dispatch_icall @ 0x14000D700 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GetLpIndex(__int64 a1)
{
  unsigned int v2; // edi
  int LpIndexFromApicId; // esi
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  __int64 v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+30h] [rbp-18h]

  v2 = 0;
  LpIndexFromApicId = HvlGetLpIndexFromApicId(*(unsigned int *)(a1 + 48));
  if ( LpIndexFromApicId != -1 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1400145A8,
      0LL);
    if ( GetDevExtFromLpIndex(LpIndexFromApicId) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = *(_DWORD *)(a1 + 48);
        v8 = *(_DWORD *)(a1 + 52);
        WPP_RECORDER_SF_DD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          0xFu,
          (__int64)&WPP_a233770b61303cb7b038d705208677fa_Traceguids,
          v8,
          v10);
      }
    }
    else
    {
      *(_DWORD *)(a1 + 72) = LpIndexFromApicId;
      v4 = (_QWORD *)qword_1400145F0;
      v5 = (_QWORD *)(a1 + 32);
      if ( *(__int64 **)qword_1400145F0 != &qword_1400145E8 )
        __fastfail(3u);
      *v5 = &qword_1400145E8;
      *(_QWORD *)(a1 + 40) = v4;
      *v4 = v5;
      qword_1400145F0 = a1 + 32;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1400145A8);
  }
  if ( *(_DWORD *)(a1 + 72) == -1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v9) = *(_DWORD *)(a1 + 48);
      LODWORD(v7) = *(_DWORD *)(a1 + 52);
      WPP_RECORDER_SF_DD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        1u,
        0x10u,
        (__int64)&WPP_a233770b61303cb7b038d705208677fa_Traceguids,
        v7,
        v9);
    }
    return (unsigned int)-1073741823;
  }
  else if ( (int)LookupNtProcessorNumber((_DWORD *)a1) >= 0 && *(_DWORD *)(a1 + 56) != -1 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1400145A8,
      0LL);
    *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Blink->Flink + *(unsigned int *)(a1 + 56)) = a1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1400145A8);
  }
  return v2;
}
