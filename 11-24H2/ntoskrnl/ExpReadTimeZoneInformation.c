/*
 * XREFs of ExpReadTimeZoneInformation @ 0x1407B6C28
 * Callers:
 *     ExpReadSiloTimeZoneMarker @ 0x1407B6BF8 (ExpReadSiloTimeZoneMarker.c)
 *     ExpTimeZoneInitSiloState @ 0x1407B6E80 (ExpTimeZoneInitSiloState.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlpQueryRegistryValues @ 0x1409B4DD0 (RtlpQueryRegistryValues.c)
 */

__int64 __fastcall ExpReadTimeZoneInformation(__int64 a1, int a2, __int64 a3)
{
  ULONG v6; // [rsp+20h] [rbp-88h]
  int v7[4]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v8; // [rsp+40h] [rbp-68h]
  __int64 v9; // [rsp+48h] [rbp-60h]
  int v10; // [rsp+50h] [rbp-58h]
  int *v11; // [rsp+58h] [rbp-50h]
  int v12; // [rsp+60h] [rbp-48h]
  int v13; // [rsp+B8h] [rbp+10h] BYREF

  v13 = a2;
  memset_0(v7, 0, 0x70uLL);
  v7[2] = 288;
  v8 = a1;
  v9 = a3;
  v10 = 67108868;
  v11 = &v13;
  v12 = 4;
  return RtlpQueryRegistryValues(2, (int)L"TimeZoneInformation", (int)v7, 0, v6, 1);
}
