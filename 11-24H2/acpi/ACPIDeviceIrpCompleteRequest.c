/*
 * XREFs of ACPIDeviceIrpCompleteRequest @ 0x14001AC30
 * Callers:
 *     ACPIBusIrpSetSystemPowerComplete @ 0x14004C0B0 (ACPIBusIrpSetSystemPowerComplete.c)
 * Callees:
 *     ACPIInternalDecrementIrpReferenceCount @ 0x14001B414 (ACPIInternalDecrementIrpReferenceCount.c)
 *     WPP_RECORDER_SF_qLqss @ 0x140028718 (WPP_RECORDER_SF_qLqss.c)
 */

__int64 __fastcall ACPIDeviceIrpCompleteRequest(_QWORD *a1, IRP *a2, int a3)
{
  const char *v4; // rbp
  char v5; // si
  int v8; // edx
  const char *v9; // r8
  const char *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v14; // rax
  const char *v15; // rax
  __int64 v16; // rcx
  char v17; // [rsp+38h] [rbp-40h]

  v4 = byte_1400753E8;
  v5 = 0;
  v8 = 0;
  v9 = byte_1400753E8;
  v10 = byte_1400753E8;
  if ( a1 )
  {
    v14 = a1[1];
    v8 = (int)a1;
    if ( (v14 & 0x200000000000LL) != 0 )
    {
      v9 = (const char *)a1[76];
      if ( (v14 & 0x400000000000LL) != 0 )
        v10 = (const char *)a1[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = v8;
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_qLqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      10,
      26,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      (char)a2,
      a3,
      v17,
      (__int64)v9,
      (__int64)v10);
  }
  if ( a3 < 0 )
  {
    v15 = byte_1400753E8;
    if ( a1 )
    {
      v16 = a1[1];
      v5 = (char)a1;
      if ( (v16 & 0x200000000000LL) != 0 )
      {
        v4 = (const char *)a1[76];
        if ( (v16 & 0x400000000000LL) != 0 )
          v15 = (const char *)a1[77];
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_qLqss(
        WPP_GLOBAL_Control->DeviceExtension,
        v8,
        10,
        27,
        (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
        (char)a2,
        a3,
        v5,
        (__int64)v4,
        (__int64)v15);
    }
  }
  else
  {
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  }
  a2->IoStatus.Status = a3;
  IofCompleteRequest(a2, 0);
  return ACPIInternalDecrementIrpReferenceCount(a1, v11, v12);
}
