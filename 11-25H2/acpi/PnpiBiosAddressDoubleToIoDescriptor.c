/*
 * XREFs of PnpiBiosAddressDoubleToIoDescriptor @ 0x1400BC174
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1400BB1A4 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140017C78 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1400283FC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003A7DC (WPP_RECORDER_SF_d.c)
 *     PnpiBiosValidateMemoryMapAttribute @ 0x1400566EC (PnpiBiosValidateMemoryMapAttribute.c)
 *     ACPIInitIgnoreResourceMapDescriptor @ 0x140066A40 (ACPIInitIgnoreResourceMapDescriptor.c)
 *     PnpiBiosAddressHandleMemoryFlags @ 0x140096B04 (PnpiBiosAddressHandleMemoryFlags.c)
 *     PnpiBiosAddressHandleGlobalFlags @ 0x140097424 (PnpiBiosAddressHandleGlobalFlags.c)
 *     AcpiDiagTraceMemoryReserved @ 0x140098CF4 (AcpiDiagTraceMemoryReserved.c)
 *     PnpiUpdateResourceList @ 0x1400BBEEC (PnpiUpdateResourceList.c)
 */

__int64 __fastcall PnpiBiosAddressDoubleToIoDescriptor(
        unsigned __int8 *BugCheckParameter2,
        __int64 a2,
        unsigned int a3,
        char a4)
{
  unsigned int v4; // esi
  unsigned __int8 v5; // dl
  __int64 v7; // rbp
  char v8; // dl
  unsigned int v9; // ecx
  unsigned int v10; // r8d
  __int64 v11; // r10
  __int64 result; // rax
  __int64 v13; // rdi
  struct _IO_RESOURCE_DESCRIPTOR *v14; // rdi
  unsigned int v15; // eax
  unsigned int v16; // r9d
  __int64 v17; // rdx
  int v18; // r15d
  unsigned int v19; // r12d
  unsigned __int8 v20; // al
  unsigned int v21; // r15d
  NTSTATUS v22; // eax
  unsigned int v23; // [rsp+40h] [rbp-48h]
  unsigned int v24; // [rsp+44h] [rbp-44h]
  struct _IO_RESOURCE_DESCRIPTOR *v25; // [rsp+48h] [rbp-40h] BYREF
  __int64 v26; // [rsp+90h] [rbp+8h] BYREF
  __int64 v27; // [rsp+98h] [rbp+10h]
  unsigned int v28; // [rsp+A0h] [rbp+18h]

  v28 = a3;
  v27 = a2;
  v4 = 0;
  v5 = BugCheckParameter2[4];
  v7 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  if ( (v5 & 1) != 0 && BugCheckParameter2[3] == 1 && (a4 & 1) != 0 )
    return 0LL;
  if ( !PnpiBiosValidateMemoryMapAttribute() )
  {
    AcpiDiagTraceMemoryReserved(
      BugCheckParameter2[3],
      v8,
      BugCheckParameter2[5],
      *(unsigned int *)(BugCheckParameter2 + 6),
      *(unsigned int *)(BugCheckParameter2 + 10),
      *(unsigned int *)(BugCheckParameter2 + 14),
      *(unsigned int *)(BugCheckParameter2 + 18),
      v9);
    return 0LL;
  }
  if ( !v9 )
    return 0LL;
  v13 = v11 + 8LL * v10;
  result = PnpiUpdateResourceList(v13, &v25);
  if ( (int)result >= 0 )
  {
    if ( BugCheckParameter2[3] > 1u )
    {
      v14 = v25;
    }
    else
    {
      result = PnpiUpdateResourceList(v13, &v26);
      if ( (int)result < 0 )
        return result;
      v7 = v26;
      *(_BYTE *)(v26 + 1) = -127;
      v14 = (struct _IO_RESOURCE_DESCRIPTOR *)(v7 - 32);
      *(_WORD *)(v7 + 4) = 24576;
      *(_DWORD *)(v7 + 16) = 0;
    }
    if ( *(unsigned __int16 *)(BugCheckParameter2 + 1) < 0x17u )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xDu,
          0xFu,
          (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids,
          *(unsigned __int16 *)(BugCheckParameter2 + 1));
      KeBugCheckEx(
        0xA5u,
        0xFuLL,
        (ULONG_PTR)BugCheckParameter2,
        *BugCheckParameter2,
        *(unsigned __int16 *)(BugCheckParameter2 + 1));
    }
    v15 = *(_DWORD *)(BugCheckParameter2 + 18);
    v16 = *(_DWORD *)(BugCheckParameter2 + 10);
    v17 = *(unsigned int *)(BugCheckParameter2 + 14);
    v18 = *(_DWORD *)(BugCheckParameter2 + 6) + 1;
    v19 = *(_DWORD *)(BugCheckParameter2 + 22);
    LODWORD(v25) = v18;
    v24 = v16 + v15;
    LODWORD(v26) = v16;
    v23 = v17;
    if ( v15 )
    {
      ACPIInitIgnoreResourceMapDescriptor(v16, v17, v15);
      v16 = v26;
      LODWORD(v17) = v23;
    }
    v20 = BugCheckParameter2[4];
    if ( (v20 & 4) != 0 && (v20 & 8) != 0 )
    {
      v21 = v17 - v16 + 1;
      if ( v21 != v19 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v17) = 2;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v17,
            13,
            16,
            (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids);
          v16 = v26;
        }
        v19 = v21;
      }
      if ( (v16 & *(_DWORD *)(BugCheckParameter2 + 6)) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v17) = 2;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v17,
            13,
            17,
            (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids);
          v16 = v26;
        }
        v18 = 1;
      }
      else
      {
        v18 = (int)v25;
      }
    }
    if ( BugCheckParameter2[3] )
    {
      if ( BugCheckParameter2[3] == 1 )
      {
        v14->u.Port.Alignment = v18;
        v14->u.Port.Length = v19;
        v14->u.Port.MinimumAddress.LowPart = v16;
        v14->u.Port.MaximumAddress.QuadPart = v23;
        v14->u.Port.MinimumAddress.HighPart = 0;
        v14->Type = 1;
        if ( (BugCheckParameter2[5] & 0x20) != 0 )
          *(_WORD *)(v7 + 4) |= 1u;
        *(_DWORD *)(v7 + 8) = (BugCheckParameter2[5] & 0x10 | 8u) >> 3;
        *(_DWORD *)(v7 + 12) = v24;
        if ( (BugCheckParameter2[4] & 2) == 0 )
          v14->Flags |= 0x20u;
        v14->u.Port.Alignment = 1;
      }
      else if ( BugCheckParameter2[3] == 2 )
      {
        v14->Type = 6;
        v14->u.Port.Length = v19;
        v14->u.Port.Alignment = *(_DWORD *)(BugCheckParameter2 + 10);
        v14->u.Port.MinimumAddress.LowPart = *(_DWORD *)(BugCheckParameter2 + 14);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xDu,
          0x12u,
          (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids,
          BugCheckParameter2[3]);
      }
    }
    else
    {
      v14->u.Port.Alignment = v18;
      v14->u.Port.Length = v19;
      v14->u.Port.MinimumAddress.LowPart = v16;
      v14->u.Port.MaximumAddress.LowPart = v23;
      v14->u.Port.MaximumAddress.HighPart = 0;
      v14->u.Port.MinimumAddress.HighPart = 0;
      v14->Type = 3;
      *(_DWORD *)(v7 + 8) = (~BugCheckParameter2[5] & 0x20 | 0x10u) >> 4;
      *(_DWORD *)(v7 + 12) = v24;
      PnpiBiosAddressHandleMemoryFlags((__int64)BugCheckParameter2, (__int64)v14);
      v14->u.Port.Alignment = 1;
    }
    v22 = PnpiBiosAddressHandleGlobalFlags((__int64)BugCheckParameter2, v27, v28, v14);
    if ( v22 < 0 )
      return (unsigned int)v22;
    return v4;
  }
  return result;
}
