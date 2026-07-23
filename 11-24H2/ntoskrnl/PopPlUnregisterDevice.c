/*
 * XREFs of PopPlUnregisterDevice @ 0x1404D347C
 * Callers:
 *     PopFxUnregisterDevice @ 0x140A6EED4 (PopFxUnregisterDevice.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopPlCalculateDevicePowerDraw @ 0x1405D9764 (PopPlCalculateDevicePowerDraw.c)
 *     PopPlPublishSystemPowerChange @ 0x1405D9B3C (PopPlPublishSystemPowerChange.c)
 *     PopPlUnregisterComponent @ 0x1405DA114 (PopPlUnregisterComponent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PopPlUnregisterDevice(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // r14
  int v4; // ebx
  int v5; // eax
  unsigned int v6; // r15d
  __int64 v7; // rax
  int v8; // ecx
  unsigned __int64 i; // rbx
  int v10; // [rsp+38h] [rbp-89h] BYREF
  int v11; // [rsp+3Ch] [rbp-85h] BYREF
  int v12; // [rsp+40h] [rbp-81h] BYREF
  unsigned int v13; // [rsp+44h] [rbp-7Dh] BYREF
  int v14; // [rsp+48h] [rbp-79h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+58h] [rbp-69h] BYREF
  int *v16; // [rsp+78h] [rbp-49h]
  __int64 v17; // [rsp+80h] [rbp-41h]
  _DWORD *v18; // [rsp+88h] [rbp-39h]
  __int64 v19; // [rsp+90h] [rbp-31h]
  __int64 v20; // [rsp+98h] [rbp-29h]
  _DWORD v21[2]; // [rsp+A0h] [rbp-21h] BYREF
  int *v22; // [rsp+A8h] [rbp-19h]
  __int64 v23; // [rsp+B0h] [rbp-11h]
  int *v24; // [rsp+B8h] [rbp-9h]
  __int64 v25; // [rsp+C0h] [rbp-1h]
  unsigned int *v26; // [rsp+C8h] [rbp+7h]
  __int64 v27; // [rsp+D0h] [rbp+Fh]
  int *v28; // [rsp+D8h] [rbp+17h]
  __int64 v29; // [rsp+E0h] [rbp+1Fh]

  v1 = *(_QWORD *)(a1 + 1224);
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 16);
    *(_BYTE *)(v3 + 24) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 16));
    v4 = *(_DWORD *)(v1 + 32);
    v11 = 1;
    v10 = 0;
    v5 = PopPlCalculateDevicePowerDraw(a1, &v11, &v10, 0LL);
    *(_DWORD *)(v1 + 32) = v5;
    v6 = v5 - v4;
    if ( (unsigned int)dword_140E07680 > 5 )
    {
      v12 = v5;
      LOWORD(v10) = 1;
      v17 = 2LL;
      v16 = &v10;
      v19 = 2LL;
      v18 = v21;
      v20 = *(_QWORD *)(a1 + 224);
      v21[0] = *(unsigned __int16 *)(a1 + 216);
      v22 = &v11;
      v24 = &v12;
      v26 = &v13;
      v7 = *(_QWORD *)(v1 + 16);
      v21[1] = 0;
      v11 = v6;
      v23 = 4LL;
      v25 = 4LL;
      v13 = v6;
      v27 = 4LL;
      v8 = *(_DWORD *)(v7 + 28);
      v28 = &v14;
      v14 = v6 + v8;
      v29 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E07680,
        (unsigned __int8 *)byte_14004F93D,
        0LL,
        0LL,
        9u,
        &v15);
    }
    PopPlPublishSystemPowerChange(v3, v6);
    for ( i = 0LL; i < *(unsigned int *)(a1 + 868); PopPlUnregisterComponent(*(_QWORD *)(*(_QWORD *)(a1 + 872) + 8 * i++)) )
      ;
    *(_QWORD *)(v1 + 24) = 0LL;
    *(_QWORD *)(a1 + 1224) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 16), *(_BYTE *)(v3 + 24));
  }
}
