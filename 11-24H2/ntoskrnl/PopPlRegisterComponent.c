/*
 * XREFs of PopPlRegisterComponent @ 0x14049AD70
 * Callers:
 *     PopPlRegisterDeviceIterator @ 0x1405D9C50 (PopPlRegisterDeviceIterator.c)
 *     PopFxRegisterDeviceWorker @ 0x14074CF20 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     PopPlLookupComponentPowerProfile @ 0x1405D98B0 (PopPlLookupComponentPowerProfile.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PopPlRegisterComponent(__int64 a1)
{
  bool v2; // zf
  __int64 v3; // rax
  int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // [rsp+20h] [rbp-69h]
  int v9; // [rsp+28h] [rbp-61h]
  __int16 v10; // [rsp+40h] [rbp-49h] BYREF
  BOOL v11; // [rsp+44h] [rbp-45h] BYREF
  int v12; // [rsp+48h] [rbp-41h] BYREF
  __int64 v13[5]; // [rsp+50h] [rbp-39h] BYREF
  int v14; // [rsp+78h] [rbp-11h]
  int v15; // [rsp+7Ch] [rbp-Dh]
  __int64 v16; // [rsp+80h] [rbp-9h]
  int v17; // [rsp+88h] [rbp-1h]
  int v18; // [rsp+8Ch] [rbp+3h]
  BOOL *v19; // [rsp+90h] [rbp+7h]
  int v20; // [rsp+98h] [rbp+Fh]
  int v21; // [rsp+9Ch] [rbp+13h]
  int *v22; // [rsp+A0h] [rbp+17h]
  int v23; // [rsp+A8h] [rbp+1Fh]
  int v24; // [rsp+ACh] [rbp+23h]
  _DWORD *v25; // [rsp+B0h] [rbp+27h]
  int v26; // [rsp+B8h] [rbp+2Fh]
  int v27; // [rsp+BCh] [rbp+33h]
  __int64 v28; // [rsp+C0h] [rbp+37h]
  _DWORD v29[2]; // [rsp+C8h] [rbp+3Fh] BYREF

  if ( PopPowerPlane )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 1224LL);
    if ( v6 )
    {
      v7 = PopPlLookupComponentPowerProfile(v6, a1);
      if ( v7 )
        *(_QWORD *)(a1 + 432) = v7;
    }
  }
  if ( (unsigned int)dword_140E07680 > 5 )
  {
    v15 = 0;
    v18 = 0;
    v13[4] = (__int64)&v10;
    v2 = *(_QWORD *)(a1 + 432) == 0LL;
    v10 = 1;
    v16 = a1;
    v21 = 0;
    v24 = 0;
    v11 = !v2;
    v19 = &v11;
    v12 = *(_DWORD *)(a1 + 156);
    v22 = &v12;
    v3 = *(_QWORD *)(a1 + 80);
    v20 = 4;
    v23 = 4;
    v14 = 2;
    v17 = 16;
    v4 = *(unsigned __int16 *)(v3 + 216);
    v5 = *(_QWORD *)(v3 + 224);
    v27 = 0;
    v29[1] = 0;
    v25 = v29;
    v28 = v5;
    v29[0] = v4;
    v26 = 2;
    tlgWriteEx_EtwWriteEx((int)&dword_140E07680, (int)&byte_14004F820, 2, 1, v8, v9, 8u, (__int64)v13);
  }
}
