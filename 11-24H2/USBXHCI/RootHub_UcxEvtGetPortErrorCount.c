/*
 * XREFs of RootHub_UcxEvtGetPortErrorCount @ 0x14004A220
 * Callers:
 *     <none>
 * Callees:
 *     Controller_IsControllerAccessible @ 0x14000BE64 (Controller_IsControllerAccessible.c)
 *     XilRegister_ReadUlong @ 0x14000D210 (XilRegister_ReadUlong.c)
 *     Debug_FreAssertMsg @ 0x140019AC8 (Debug_FreAssertMsg.c)
 *     WPP_RECORDER_SF_ @ 0x14001A724 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x14004AB84 (WPP_RECORDER_SF_DDDDDDDD.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RootHub_UcxEvtGetPortErrorCount(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int16 v7; // ax
  __int64 v8; // rbp
  int v9; // edx
  unsigned int v10; // r15d
  __int64 v11; // r8
  unsigned __int16 Ulong; // bx
  int v13; // r9d
  int v14; // edx
  int v15; // r8d
  __int64 v17; // [rsp+28h] [rbp-C0h]
  __int64 v18; // [rsp+30h] [rbp-B8h]
  _OWORD v20[2]; // [rsp+78h] [rbp-70h] BYREF
  __int64 v21; // [rsp+98h] [rbp-50h]

  v3 = 0;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B0B0);
  v5 = *(_QWORD *)(v4 + 8);
  v6 = *(_QWORD *)(v5 + 88);
  if ( *(_BYTE *)(v5 + 1001) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\roothub.c",
      3332);
  memset(v20, 0, sizeof(v20));
  v21 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount > 0x33 )
    {
      LOWORD(v20[0]) = *(_WORD *)(WdfStructures + 408);
      goto LABEL_10;
    }
    v7 = -1;
  }
  else
  {
    v7 = 40;
  }
  LOWORD(v20[0]) = v7;
LABEL_10:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    a2,
    v20);
  v8 = *((_QWORD *)&v20[0] + 1);
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v4 + 8)) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        v9,
        11,
        184,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids);
    }
    *(_DWORD *)(v8 + 4) = -1073713152;
    v3 = -1073741810;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
             WdfDriverGlobals,
             a2,
             v3);
  }
  v10 = *(unsigned __int16 *)(v8 + 132);
  if ( *(_WORD *)(v8 + 128) != 3491
    || *(_WORD *)(v8 + 130)
    || !*(_WORD *)(v8 + 132)
    || v10 > *(_DWORD *)(v4 + 16)
    || *(_WORD *)(v8 + 134) != 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = *(unsigned __int8 *)(v8 + 134);
      v13 = 185;
      v15 = *(unsigned __int8 *)(v8 + 133);
      goto LABEL_30;
    }
LABEL_31:
    v3 = -1073741823;
    *(_DWORD *)(v8 + 4) = -1073741820;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
             WdfDriverGlobals,
             a2,
             v3);
  }
  v11 = v10 - 1;
  if ( *(_BYTE *)(120 * v11 + *(_QWORD *)(v4 + 48) + 13) != 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = 188;
      v14 = *(unsigned __int8 *)(v8 + 134);
      v15 = *(unsigned __int8 *)(v8 + 133);
LABEL_30:
      WPP_RECORDER_SF_DDDDDDDD(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL), v14, v15, v13);
      goto LABEL_31;
    }
    goto LABEL_31;
  }
  Ulong = XilRegister_ReadUlong(v6, (unsigned int *)(16 * v11 + 8 + *(_QWORD *)(v4 + 40)));
  **(_WORD **)(v8 + 40) = Ulong;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
      4u,
      0xBu,
      0xBAu,
      (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
      v10,
      Ulong);
  if ( Ulong > 0xAu && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v18) = Ulong;
    LODWORD(v17) = v10;
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
      2u,
      0xBu,
      0xBBu,
      (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
      v17,
      v18);
  }
  *(_DWORD *)(v8 + 4) = 0;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
           WdfDriverGlobals,
           a2,
           v3);
}
