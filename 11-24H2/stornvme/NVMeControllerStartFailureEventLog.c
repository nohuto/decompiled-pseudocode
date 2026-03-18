/*
 * XREFs of NVMeControllerStartFailureEventLog @ 0x14000D720
 * Callers:
 *     NVMeHwAdapterControl @ 0x14000DBA0 (NVMeHwAdapterControl.c)
 *     NVMeControllerInitPart3 @ 0x14000FB50 (NVMeControllerInitPart3.c)
 *     NVMeHwFindAdapter @ 0x140017CA0 (NVMeHwFindAdapter.c)
 *     NVMeHwPassiveInitialize @ 0x1400185A0 (NVMeHwPassiveInitialize.c)
 *     NVMeControllerReset @ 0x14001D564 (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x140027150 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeControllerStartFailureEventLog(__int64 a1)
{
  _DWORD v2[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v3; // [rsp+28h] [rbp-50h]
  __int64 v4; // [rsp+30h] [rbp-48h]
  int v5; // [rsp+38h] [rbp-40h]
  char v6; // [rsp+3Ch] [rbp-3Ch]
  __int16 v7; // [rsp+3Dh] [rbp-3Bh]
  char v8; // [rsp+3Fh] [rbp-39h]
  int v9; // [rsp+40h] [rbp-38h]
  int v10; // [rsp+44h] [rbp-34h]
  __int64 v11; // [rsp+48h] [rbp-30h]
  __int64 v12; // [rsp+50h] [rbp-28h]
  __int64 v13; // [rsp+58h] [rbp-20h]
  __int64 v14; // [rsp+60h] [rbp-18h]
  int v15; // [rsp+80h] [rbp+8h] BYREF

  v15 = 72;
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v7 = 0;
  v8 = 0;
  v13 = 0LL;
  v14 = 0LL;
  v11 = 4LL;
  v2[0] = 256;
  v6 = 1;
  v9 = 6;
  v10 = 2;
  v12 = a1 + 28;
  v2[1] = 72;
  return StorPortExtendedFunction(16LL, a1, v2, &v15);
}
