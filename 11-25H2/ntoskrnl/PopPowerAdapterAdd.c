/*
 * XREFs of PopPowerAdapterAdd @ 0x14074ECF0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     IoSynchronousCallDriver @ 0x14035DF20 (IoSynchronousCallDriver.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_char @ 0x140428104 (_tlgCreate1Sz_char.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 *     PopPowerAdapterQueryStatus @ 0x14074F2D4 (PopPowerAdapterQueryStatus.c)
 *     PopPowerAdapterTraceFailure @ 0x14074F618 (PopPowerAdapterTraceFailure.c)
 *     PopPrepareIoctl @ 0x140A5AE80 (PopPrepareIoctl.c)
 */

void __fastcall PopPowerAdapterAdd(__int64 a1)
{
  char v2; // al
  NTSTATUS updated; // edx
  const CHAR *v4; // rdx
  int v5; // ecx
  int Buffer; // [rsp+40h] [rbp-C0h] BYREF
  char v7; // [rsp+44h] [rbp-BCh] BYREF
  __int16 v8; // [rsp+45h] [rbp-BBh] BYREF
  NTSTATUS v9; // [rsp+48h] [rbp-B8h] BYREF
  int v10; // [rsp+4Ch] [rbp-B4h] BYREF
  int v11; // [rsp+50h] [rbp-B0h] BYREF
  int v12; // [rsp+54h] [rbp-ACh] BYREF
  int v13; // [rsp+58h] [rbp-A8h] BYREF
  int v14; // [rsp+5Ch] [rbp-A4h] BYREF
  int v15; // [rsp+60h] [rbp-A0h] BYREF
  int v16; // [rsp+64h] [rbp-9Ch] BYREF
  int v17; // [rsp+68h] [rbp-98h] BYREF
  __int64 v18; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+80h] [rbp-80h] BYREF
  NTSTATUS *v20; // [rsp+A0h] [rbp-60h]
  __int64 v21; // [rsp+A8h] [rbp-58h]
  char v22[16]; // [rsp+B0h] [rbp-50h] BYREF
  int *v23; // [rsp+C0h] [rbp-40h]
  __int64 v24; // [rsp+C8h] [rbp-38h]
  int *v25; // [rsp+D0h] [rbp-30h]
  __int64 v26; // [rsp+D8h] [rbp-28h]
  int *v27; // [rsp+E0h] [rbp-20h]
  __int64 v28; // [rsp+E8h] [rbp-18h]
  int *v29; // [rsp+F0h] [rbp-10h]
  __int64 v30; // [rsp+F8h] [rbp-8h]
  int *v31; // [rsp+100h] [rbp+0h]
  __int64 v32; // [rsp+108h] [rbp+8h]
  int *v33; // [rsp+110h] [rbp+10h]
  __int64 v34; // [rsp+118h] [rbp+18h]
  int *v35; // [rsp+120h] [rbp+20h]
  __int64 v36; // [rsp+128h] [rbp+28h]
  int *v37; // [rsp+130h] [rbp+30h]
  __int64 v38; // [rsp+138h] [rbp+38h]
  __int64 *v39; // [rsp+140h] [rbp+40h]
  __int64 v40; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+150h] [rbp+50h] BYREF
  char *v42; // [rsp+170h] [rbp+70h]
  __int64 v43; // [rsp+178h] [rbp+78h]
  __int16 *v44; // [rsp+180h] [rbp+80h]
  __int64 v45; // [rsp+188h] [rbp+88h]
  char *v46; // [rsp+190h] [rbp+90h]
  __int64 v47; // [rsp+198h] [rbp+98h]
  NTSTATUS *v48; // [rsp+1A0h] [rbp+A0h]
  __int64 v49; // [rsp+1A8h] [rbp+A8h]

  Buffer = 0;
  if ( !qword_140F0AD50 )
  {
    KeInitializeEvent((PRKEVENT)(a1 + 104), SynchronizationEvent, 0);
    *(_OWORD *)(a1 + 132) = 0LL;
    *(_OWORD *)(a1 + 148) = 0LL;
    *(_QWORD *)(a1 + 164) = 0LL;
    *(_DWORD *)(a1 + 172) = 0;
    PopPrepareIoctl(*(_QWORD *)(a1 + 56), 2703472, 0, a1 + 132, 0, 44);
    if ( IoSynchronousCallDriver(*(struct _DEVICE_OBJECT **)(a1 + 48), *(IRP **)(a1 + 56)) >= 0 )
    {
      *(_DWORD *)(a1 + 128) = 1;
      PopAcquireRwLockExclusive((unsigned __int64 *)&PopCB);
      v2 = BYTE2(Buffer);
      qword_140F0AD50 = a1;
      if ( (*(_BYTE *)(a1 + 140) & 1) != 0 )
        v2 = 1;
      *(_BYTE *)(a1 + 216) = 0;
      BYTE2(Buffer) = v2;
      LOWORD(Buffer) = 256;
      updated = ZwUpdateWnfStateData(&WNF_PO_POWER_ADAPTER_REC_CAPABILITIES, &Buffer, 4u, 0LL, 0LL, 0, 0);
      if ( (unsigned int)dword_140E07680 > 5 )
      {
        v42 = &v7;
        v7 = Buffer;
        v44 = &v8;
        v46 = (char *)&v8 + 1;
        v48 = &v9;
        v8 = *(_WORD *)((char *)&Buffer + 1);
        v9 = updated;
        v43 = 1LL;
        v45 = 1LL;
        v47 = 1LL;
        v49 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E07680,
          (unsigned __int8 *)&word_14004C436,
          0LL,
          0LL,
          6u,
          &v41);
      }
      PopPowerAdapterQueryStatus(a1, 0LL);
      PopReleaseRwLock((signed __int64 *)&PopCB);
      if ( (unsigned int)dword_140E07680 > 5 && tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL) )
      {
        v4 = "REC Supported";
        v9 = *(_DWORD *)(a1 + 136);
        v21 = 4LL;
        v20 = &v9;
        if ( (*(_DWORD *)(a1 + 140) & 1) == 0 )
          v4 = "-";
        tlgCreate1Sz_char((__int64)v22, v4);
        v5 = *(_DWORD *)(a1 + 144);
        v23 = &v10;
        v11 = *(_DWORD *)(a1 + 148);
        v10 = v5;
        v25 = &v11;
        v12 = *(_DWORD *)(a1 + 152);
        v27 = &v12;
        v13 = *(_DWORD *)(a1 + 156);
        v29 = &v13;
        v14 = *(_DWORD *)(a1 + 160);
        v31 = &v14;
        v15 = *(_DWORD *)(a1 + 164);
        v33 = &v15;
        v16 = *(_DWORD *)(a1 + 168);
        v35 = &v16;
        v17 = *(_DWORD *)(a1 + 172);
        v37 = &v17;
        v39 = &v18;
        v24 = 4LL;
        v26 = 4LL;
        v28 = 4LL;
        v30 = 4LL;
        v32 = 4LL;
        v34 = 4LL;
        v36 = 4LL;
        v38 = 4LL;
        v18 = 0x1000000LL;
        v40 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E07680,
          (unsigned __int8 *)byte_14004C4A3,
          0LL,
          0LL,
          0xDu,
          &v19);
      }
    }
    else
    {
      *(_DWORD *)(a1 + 128) = 2;
      *(_DWORD *)(a1 + 220) = 1;
      *(_DWORD *)(a1 + 228) = 0;
      PopPowerAdapterTraceFailure(a1, 1LL);
    }
  }
}
