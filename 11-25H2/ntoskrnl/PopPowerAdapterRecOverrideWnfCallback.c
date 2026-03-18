/*
 * XREFs of PopPowerAdapterRecOverrideWnfCallback @ 0x14074F3C0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     PopBatteryQueueWork @ 0x1404A406C (PopBatteryQueueWork.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ExQueryWnfStateData @ 0x140A36E60 (ExQueryWnfStateData.c)
 */

__int64 __fastcall PopPowerAdapterRecOverrideWnfCallback(__int64 a1)
{
  int v1; // ebx
  _BYTE v3[4]; // [rsp+30h] [rbp-29h] BYREF
  int v4; // [rsp+34h] [rbp-25h] BYREF
  __int64 v5; // [rsp+38h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+40h] [rbp-19h] BYREF
  _BYTE *v7; // [rsp+60h] [rbp+7h]
  int v8; // [rsp+68h] [rbp+Fh]
  int v9; // [rsp+6Ch] [rbp+13h]
  int *v10; // [rsp+70h] [rbp+17h]
  int v11; // [rsp+78h] [rbp+1Fh]
  int v12; // [rsp+7Ch] [rbp+23h]
  __int64 *v13; // [rsp+80h] [rbp+27h]
  int v14; // [rsp+88h] [rbp+2Fh]
  int v15; // [rsp+8Ch] [rbp+33h]

  v4 = 1;
  v1 = ExQueryWnfStateData(a1, &v5, v3, &v4);
  if ( v1 >= 0 )
  {
    PopPowerAdapterRecOverride = v3[0];
    PopBatteryQueueWork(0x80u);
  }
  if ( (unsigned int)dword_140E07680 > 5 && tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL) )
  {
    v9 = 0;
    v12 = 0;
    v15 = 0;
    v3[0] = PopPowerAdapterRecOverride;
    v7 = v3;
    v10 = &v4;
    v13 = &v5;
    v8 = 1;
    v4 = v1;
    v11 = 4;
    v5 = 0x1000000LL;
    v14 = 8;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07680, (unsigned __int8 *)byte_14004B423, 0LL, 0LL, 5u, &v6);
  }
  return (unsigned int)v1;
}
