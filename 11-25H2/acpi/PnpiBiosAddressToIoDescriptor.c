/*
 * XREFs of PnpiBiosAddressToIoDescriptor @ 0x1400BADE8
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

__int64 __fastcall PnpiBiosAddressToIoDescriptor(
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
  __int64 v10; // r8
  __int64 v11; // r10
  __int64 result; // rax
  __int64 v13; // rdi
  __int64 v14; // r8
  struct _IO_RESOURCE_DESCRIPTOR *v15; // rdi
  int v16; // edx
  unsigned int v17; // eax
  unsigned int v18; // r9d
  unsigned int v19; // r13d
  int v20; // r15d
  unsigned __int16 v21; // cx
  unsigned __int8 v22; // al
  int v23; // r15d
  NTSTATUS v24; // eax
  unsigned __int16 v25; // [rsp+40h] [rbp-48h]
  unsigned __int16 v26; // [rsp+42h] [rbp-46h]
  struct _IO_RESOURCE_DESCRIPTOR *v27; // [rsp+48h] [rbp-40h] BYREF
  __int64 v28; // [rsp+90h] [rbp+8h] BYREF
  __int64 v29; // [rsp+98h] [rbp+10h]
  unsigned int v30; // [rsp+A0h] [rbp+18h]

  v30 = a3;
  v29 = a2;
  v4 = 0;
  v5 = BugCheckParameter2[4];
  v7 = 0LL;
  v28 = 0LL;
  v27 = 0LL;
  if ( (v5 & 1) != 0 && BugCheckParameter2[3] == 1 && (a4 & 1) != 0 )
    return 0LL;
  if ( !PnpiBiosValidateMemoryMapAttribute() )
  {
    AcpiDiagTraceMemoryReserved(
      BugCheckParameter2[3],
      v8,
      BugCheckParameter2[5],
      *((unsigned __int16 *)BugCheckParameter2 + 3),
      *((unsigned __int16 *)BugCheckParameter2 + 4),
      *((unsigned __int16 *)BugCheckParameter2 + 5),
      *((unsigned __int16 *)BugCheckParameter2 + 6),
      v9);
    return 0LL;
  }
  if ( !(_WORD)v9 )
    return 0LL;
  v13 = v11 + 8LL * (unsigned int)v10;
  result = PnpiUpdateResourceList(v13, &v27, v10);
  if ( (int)result >= 0 )
  {
    if ( BugCheckParameter2[3] > 1u )
    {
      v15 = v27;
    }
    else
    {
      result = PnpiUpdateResourceList(v13, &v28, v14);
      if ( (int)result < 0 )
        return result;
      v7 = v28;
      *(_BYTE *)(v28 + 1) = -127;
      v15 = (struct _IO_RESOURCE_DESCRIPTOR *)(v7 - 32);
      *(_WORD *)(v7 + 4) = 24576;
      *(_DWORD *)(v7 + 16) = 0;
    }
    v16 = 13;
    if ( *(_WORD *)(BugCheckParameter2 + 1) < 0xDu )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xDu,
          0xBu,
          (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids,
          *(unsigned __int16 *)(BugCheckParameter2 + 1));
      KeBugCheckEx(
        0xA5u,
        0xFuLL,
        (ULONG_PTR)BugCheckParameter2,
        *BugCheckParameter2,
        *(unsigned __int16 *)(BugCheckParameter2 + 1));
    }
    v17 = *((unsigned __int16 *)BugCheckParameter2 + 6);
    v18 = *((unsigned __int16 *)BugCheckParameter2 + 4);
    v19 = *((unsigned __int16 *)BugCheckParameter2 + 7);
    v20 = *((unsigned __int16 *)BugCheckParameter2 + 3) + 1;
    LODWORD(v27) = v20;
    LOWORD(v28) = v18;
    v26 = v17 + v18;
    v21 = *((_WORD *)BugCheckParameter2 + 5);
    v25 = v21;
    if ( (_WORD)v17 )
    {
      ACPIInitIgnoreResourceMapDescriptor(v18, *((unsigned __int16 *)BugCheckParameter2 + 5), v17);
      LOWORD(v18) = v28;
      v16 = 13;
      v21 = v25;
    }
    v22 = BugCheckParameter2[4];
    if ( (v22 & 4) != 0 && (v22 & 8) != 0 )
    {
      v23 = v21 - (unsigned __int16)v18 + 1;
      if ( v23 != v19 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = 2;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v16,
            13,
            12,
            (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids);
          LOWORD(v18) = v28;
        }
        v19 = v23;
      }
      if ( ((unsigned __int16)v18 & *((_WORD *)BugCheckParameter2 + 3)) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = 2;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v16,
            13,
            13,
            (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids);
          LOWORD(v18) = v28;
        }
        v20 = 1;
      }
      else
      {
        v20 = (int)v27;
      }
    }
    if ( BugCheckParameter2[3] )
    {
      if ( BugCheckParameter2[3] == 1 )
      {
        v15->u.Port.Alignment = v20;
        v15->u.Port.Length = v19;
        v15->u.Port.MinimumAddress.LowPart = (unsigned __int16)v18;
        v15->u.Port.MaximumAddress.LowPart = v25;
        v15->u.Port.MaximumAddress.HighPart = 0;
        v15->u.Port.MinimumAddress.HighPart = 0;
        v15->Type = 1;
        if ( (BugCheckParameter2[5] & 0x20) != 0 )
          *(_WORD *)(v7 + 4) |= 1u;
        *(_DWORD *)(v7 + 8) = (BugCheckParameter2[5] & 0x10 | 8u) >> 3;
        *(_DWORD *)(v7 + 12) = v26;
        if ( (BugCheckParameter2[4] & 2) == 0 )
          v15->Flags |= 0x20u;
        v15->u.Port.Alignment = 1;
      }
      else if ( BugCheckParameter2[3] == 2 )
      {
        v15->Type = 6;
        v15->u.Port.Alignment = *((unsigned __int16 *)BugCheckParameter2 + 4);
        v15->u.Port.MinimumAddress.LowPart = *((unsigned __int16 *)BugCheckParameter2 + 5);
        v15->u.Port.Length = v19;
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xDu,
          0xEu,
          (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids,
          BugCheckParameter2[3]);
      }
    }
    else
    {
      v15->u.Port.Alignment = v20;
      v15->u.Port.Length = v19;
      v15->u.Port.MinimumAddress.LowPart = (unsigned __int16)v18;
      v15->u.Port.MaximumAddress.LowPart = v25;
      v15->u.Port.MaximumAddress.HighPart = 0;
      v15->u.Port.MinimumAddress.HighPart = 0;
      v15->Type = 3;
      *(_DWORD *)(v7 + 8) = (~BugCheckParameter2[5] & 0x20 | 0x10u) >> 4;
      *(_DWORD *)(v7 + 12) = v26;
      PnpiBiosAddressHandleMemoryFlags((__int64)BugCheckParameter2, (__int64)v15);
      v15->u.Port.Alignment = 1;
    }
    v24 = PnpiBiosAddressHandleGlobalFlags((__int64)BugCheckParameter2, v29, v30, v15);
    if ( v24 < 0 )
      return (unsigned int)v24;
    return v4;
  }
  return result;
}
