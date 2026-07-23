/*
 * XREFs of PopBatteryInitialize @ 0x140AC5B8C
 * Callers:
 *     PopBatteryWorker @ 0x140AC5DB0 (PopBatteryWorker.c)
 * Callees:
 *     IoSynchronousCallDriver @ 0x14025D510 (IoSynchronousCallDriver.c)
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     Feature_Servicing_BatteryTestExempt__private_IsEnabledDeviceUsageNoInline @ 0x1405CD1A8 (Feature_Servicing_BatteryTestExempt__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopPrepareIoctl @ 0x140A54F18 (PopPrepareIoctl.c)
 */

NTSTATUS __fastcall PopBatteryInitialize(__int64 a1)
{
  unsigned int v1; // eax
  IRP *v3; // rcx
  NTSTATUS result; // eax
  int v5; // eax
  const char *v6; // rcx
  __int128 v7; // xmm1
  bool v8; // zf
  int v9; // eax
  _QWORD *v10; // rcx
  _QWORD *v11; // rbx
  _QWORD *v12; // rdx
  __int64 v13; // [rsp+20h] [rbp-69h]
  __int64 v14; // [rsp+28h] [rbp-61h]
  int v15; // [rsp+70h] [rbp-19h] BYREF
  __m256i v16; // [rsp+78h] [rbp-11h] BYREF
  int v17; // [rsp+98h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+A0h] [rbp+17h] BYREF
  int *v19; // [rsp+C0h] [rbp+37h]
  int v20; // [rsp+C8h] [rbp+3Fh]
  int v21; // [rsp+CCh] [rbp+43h]
  int v22; // [rsp+D0h] [rbp+47h] BYREF
  char v23; // [rsp+D4h] [rbp+4Bh]

  v1 = *(_DWORD *)(a1 + 108);
  v3 = *(IRP **)(a1 + 56);
  v17 = 0;
  memset(&v16.m256i_u64[1], 0, 24);
  v16.m256i_i64[0] = v1;
  PopPrepareIoctl(v3, 0x294044u, 0, (struct _IRP *)&v16, 0xCu, 0x24u);
  result = IoSynchronousCallDriver(*(struct _DEVICE_OBJECT **)(a1 + 48), *(IRP **)(a1 + 56));
  if ( result >= 0 )
  {
    v5 = v17;
    v6 = "non-rechargeable";
    v7 = *(_OWORD *)&v16.m256i_u64[2];
    v23 = 0;
    *(_OWORD *)(a1 + 112) = *(_OWORD *)v16.m256i_i8;
    *(_OWORD *)(a1 + 128) = v7;
    *(_DWORD *)(a1 + 144) = v5;
    v8 = *(_BYTE *)(a1 + 116) == 0;
    v22 = *(_DWORD *)(a1 + 120);
    if ( !v8 )
      v6 = "rechargeable";
    LODWORD(v14) = *(_DWORD *)(a1 + 112);
    LODWORD(v13) = *(_DWORD *)(a1 + 108);
    DbgPrintEx(
      0x92u,
      2u,
      "\n"
      "Battery Information [%p]\n"
      "|-- Tag                 = %u\n"
      "|-- Capabilities        = 0x%08x\n"
      "|-- Technology          = %s\n"
      "|-- Chemistry           = %s\n"
      "|-- DesignedCapacity    = %u\n"
      "|-- FullChargedCapacity = %u\n"
      "|-- DefaultAlert1       = %u\n"
      "|-- DefaultAlert2       = %u\n"
      "|-- CriticalBias        = %u\n"
      "|-- CycleCount          = %u\n",
      a1,
      v13,
      v14,
      v6,
      &v22,
      *(_DWORD *)(a1 + 124),
      *(_DWORD *)(a1 + 128),
      *(_DWORD *)(a1 + 132),
      *(_DWORD *)(a1 + 136),
      *(_DWORD *)(a1 + 140),
      *(_DWORD *)(a1 + 144));
    *(_DWORD *)(a1 + 104) = 3;
    if ( (unsigned int)Feature_Servicing_BatteryTestExempt__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( PopBatteryTestExemptPolicy && (*(_DWORD *)(a1 + 112) & 0x10) == 0 )
      {
        if ( (unsigned int)dword_140E07680 > 5 )
        {
          v9 = *(_DWORD *)(a1 + 108);
          v21 = 0;
          v15 = v9;
          v20 = 4;
          v19 = &v15;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E07680,
            (unsigned __int8 *)&byte_14004D20F,
            0LL,
            0LL,
            3u,
            &v18);
        }
        goto LABEL_15;
      }
      v10 = (_QWORD *)qword_140F0BCB8;
      v11 = (_QWORD *)(a1 + 64);
      if ( *(__int64 **)qword_140F0BCB8 == &qword_140F0BCB0 )
      {
        *v11 = &qword_140F0BCB0;
        v11[1] = v10;
        *v10 = v11;
LABEL_14:
        ++dword_140F0BC94;
        byte_140F0BC98 = 1;
        qword_140F0BCB8 = (__int64)v11;
LABEL_15:
        ++dword_140F0BD0C;
        return 0;
      }
    }
    else
    {
      v12 = (_QWORD *)qword_140F0BCB8;
      v11 = (_QWORD *)(a1 + 64);
      if ( *(__int64 **)qword_140F0BCB8 == &qword_140F0BCB0 )
      {
        *v11 = &qword_140F0BCB0;
        v11[1] = v12;
        *v12 = v11;
        goto LABEL_14;
      }
    }
    __fastfail(3u);
  }
  return result;
}
