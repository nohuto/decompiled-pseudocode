/*
 * XREFs of PnpiBiosAddressQuadToIoDescriptor @ 0x1400A4820
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1400BB1A4 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140017C78 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1400283FC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003A7DC (WPP_RECORDER_SF_d.c)
 *     PnpiBiosValidateMemoryMapAttribute @ 0x1400566EC (PnpiBiosValidateMemoryMapAttribute.c)
 *     WPP_RECORDER_SF_i @ 0x14005D394 (WPP_RECORDER_SF_i.c)
 *     ACPIInitIgnoreResourceMapDescriptor @ 0x140066A40 (ACPIInitIgnoreResourceMapDescriptor.c)
 *     PnpiBiosAddressHandleMemoryFlags @ 0x140096B04 (PnpiBiosAddressHandleMemoryFlags.c)
 *     PnpiBiosAddressHandleGlobalFlags @ 0x140097424 (PnpiBiosAddressHandleGlobalFlags.c)
 *     AcpiDiagTraceMemoryReserved @ 0x140098CF4 (AcpiDiagTraceMemoryReserved.c)
 *     PnpiUpdateResourceList @ 0x1400BBEEC (PnpiUpdateResourceList.c)
 */

NTSTATUS __fastcall PnpiBiosAddressQuadToIoDescriptor(
        unsigned __int8 *BugCheckParameter2,
        __int64 a2,
        unsigned int a3,
        char a4)
{
  int v4; // r14d
  unsigned __int8 v5; // dl
  ULONGLONG v7; // rsi
  char v8; // dl
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r10
  NTSTATUS result; // eax
  __int64 v13; // rdi
  __int64 v14; // r8
  struct _IO_RESOURCE_DESCRIPTOR *v15; // rdi
  __int64 v16; // rax
  ULONGLONG v17; // r9
  ULONG_PTR v18; // r8
  ULONGLONG v19; // r13
  ULONGLONG v20; // rdx
  ULONGLONG v21; // r15
  unsigned __int8 v22; // cl
  ULONG_PTR v23; // r13
  ULONGLONG v24; // rax
  NTSTATUS v25; // eax
  ULONGLONG MaximumAddress; // [rsp+28h] [rbp-38h]
  unsigned __int64 v27; // [rsp+40h] [rbp-20h] BYREF
  ULONGLONG v28; // [rsp+48h] [rbp-18h] BYREF
  ULONGLONG v29; // [rsp+50h] [rbp-10h]
  ULONG_PTR BugCheckParameter4; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v31; // [rsp+A8h] [rbp+48h]
  unsigned int v32; // [rsp+B0h] [rbp+50h]

  v32 = a3;
  v31 = a2;
  v4 = 0;
  v5 = BugCheckParameter2[4];
  v27 = 0LL;
  v7 = 0LL;
  v28 = 0LL;
  if ( (v5 & 1) != 0 && BugCheckParameter2[3] == 1 && (a4 & 1) != 0 )
    return 0;
  if ( !PnpiBiosValidateMemoryMapAttribute() )
  {
    AcpiDiagTraceMemoryReserved(
      BugCheckParameter2[3],
      v8,
      BugCheckParameter2[5],
      *(_QWORD *)(BugCheckParameter2 + 6),
      *(_QWORD *)(BugCheckParameter2 + 14),
      *(_QWORD *)(BugCheckParameter2 + 22),
      *(_QWORD *)(BugCheckParameter2 + 30),
      v9);
    return 0;
  }
  if ( !v9 )
    return 0;
  v13 = v11 + 8LL * (unsigned int)v10;
  result = PnpiUpdateResourceList(v13, &v27, v10);
  if ( result >= 0 )
  {
    if ( BugCheckParameter2[3] > 1u )
    {
      v15 = (struct _IO_RESOURCE_DESCRIPTOR *)v27;
    }
    else
    {
      result = PnpiUpdateResourceList(v13, &v28, v14);
      if ( result < 0 )
        return result;
      v7 = v28;
      *(_BYTE *)(v28 + 1) = -127;
      v15 = (struct _IO_RESOURCE_DESCRIPTOR *)(v7 - 32);
      *(_WORD *)(v7 + 4) = 24576;
    }
    if ( *(unsigned __int16 *)(BugCheckParameter2 + 1) < 0x2Bu )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xDu,
          0x13u,
          (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids,
          *(unsigned __int16 *)(BugCheckParameter2 + 1));
      KeBugCheckEx(
        0xA5u,
        0xFuLL,
        (ULONG_PTR)BugCheckParameter2,
        *BugCheckParameter2,
        *(unsigned __int16 *)(BugCheckParameter2 + 1));
    }
    v16 = *(_QWORD *)(BugCheckParameter2 + 30);
    v17 = *(_QWORD *)(BugCheckParameter2 + 14);
    v18 = *(_QWORD *)(BugCheckParameter2 + 38);
    v19 = *(_QWORD *)(BugCheckParameter2 + 6) + 1LL;
    v20 = *(_QWORD *)(BugCheckParameter2 + 22);
    BugCheckParameter4 = v18;
    v21 = v17 + v16;
    v29 = v19;
    v27 = v17;
    v28 = v20;
    if ( v16 )
    {
      ACPIInitIgnoreResourceMapDescriptor(v17, v20, v16);
      v18 = BugCheckParameter4;
      v17 = v27;
      v20 = v28;
    }
    v22 = BugCheckParameter2[4];
    if ( (v22 & 4) != 0 && (v22 & 8) != 0 )
    {
      v23 = v20 - v17 + 1;
      if ( v23 != v18 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v20) = 2;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v20,
            13,
            20,
            (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids);
          v17 = v27;
        }
        v18 = v23;
        BugCheckParameter4 = v23;
      }
      if ( (v17 & *(_QWORD *)(BugCheckParameter2 + 6)) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v20) = 2;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v20,
            13,
            21,
            (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids);
          v18 = BugCheckParameter4;
          v17 = v27;
        }
        v19 = 1LL;
      }
      else
      {
        v19 = v29;
      }
    }
    if ( v18 > 0xFFFFFFFF && BugCheckParameter2[3] )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_i(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xDu,
          0x16u,
          (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids,
          v18);
        v18 = BugCheckParameter4;
      }
      if ( (AcpiOverrideAttributes & 0x80u) == 0 || (v17 = v27, v27 < 0xFFFFFFFF) )
        KeBugCheckEx(0xA5u, 0x14uLL, (ULONG_PTR)BugCheckParameter2, *BugCheckParameter2, (ULONG_PTR)&BugCheckParameter4);
    }
    if ( BugCheckParameter2[3] )
    {
      if ( BugCheckParameter2[3] == 1 )
      {
        v15->u.Port.Alignment = v19;
        v15->u.Port.Length = BugCheckParameter4;
        v24 = v28;
        v15->u.Port.MinimumAddress.QuadPart = v17;
        v15->u.Port.MaximumAddress.QuadPart = v24;
        v15->Type = 1;
        if ( (BugCheckParameter2[5] & 0x20) != 0 )
          *(_WORD *)(v7 + 4) |= 1u;
        *(_DWORD *)(v7 + 8) = (BugCheckParameter2[5] & 0x10 | 8u) >> 3;
        *(_QWORD *)(v7 + 12) = v21;
        if ( (BugCheckParameter2[4] & 2) == 0 )
          v15->Flags |= 0x20u;
        v15->u.Port.Alignment = 1;
      }
      else if ( BugCheckParameter2[3] == 2 )
      {
        v15->Type = 6;
        v15->u.Port.Length = BugCheckParameter4;
        v15->u.Port.Alignment = *(_DWORD *)(BugCheckParameter2 + 14);
        v15->u.Port.MinimumAddress.LowPart = *(_DWORD *)(BugCheckParameter2 + 22);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(MaximumAddress) = BugCheckParameter2[3];
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xDu,
          0x17u,
          (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids,
          MaximumAddress);
      }
    }
    else
    {
      result = RtlIoEncodeMemIoResource(v15, 3u, v18, v19, v17, v28);
      if ( result < 0 )
        return result;
      if ( (BugCheckParameter2[5] & 0x20) != 0 )
        *(_DWORD *)(v7 + 8) = 1;
      else
        *(_DWORD *)(v7 + 8) = v15->Type;
      *(_QWORD *)(v7 + 12) = v21;
      PnpiBiosAddressHandleMemoryFlags((__int64)BugCheckParameter2, (__int64)v15);
    }
    v25 = PnpiBiosAddressHandleGlobalFlags((__int64)BugCheckParameter2, v31, v32, v15);
    if ( v25 < 0 )
      return v25;
    return v4;
  }
  return result;
}
