/*
 * XREFs of PnpiBiosAddressHandleGlobalFlags @ 0x140097424
 * Callers:
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1400A43CC (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1400A4820 (PnpiBiosAddressQuadToIoDescriptor.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1400BADE8 (PnpiBiosAddressToIoDescriptor.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1400BC174 (PnpiBiosAddressDoubleToIoDescriptor.c)
 * Callees:
 *     PnpiUpdateResourceList @ 0x1400BBEEC (PnpiUpdateResourceList.c)
 */

NTSTATUS __fastcall PnpiBiosAddressHandleGlobalFlags(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        struct _IO_RESOURCE_DESCRIPTOR *a4)
{
  ULONGLONG v4; // r10
  ULONGLONG v5; // r14
  __int64 v6; // r12
  ULONGLONG v8; // r9
  ULONGLONG v9; // r11
  __int64 v12; // r8
  char v13; // al
  UCHAR *p_Type; // rsi
  unsigned __int8 Type; // cl
  unsigned __int8 *v16; // rax
  ULONGLONG v17; // rax
  char v18; // dl
  NTSTATUS result; // eax
  __int64 v20; // rax
  unsigned __int64 Alignment; // [rsp+30h] [rbp-10h] BYREF
  __int64 v22; // [rsp+38h] [rbp-8h] BYREF
  unsigned __int64 MaximumAddress; // [rsp+80h] [rbp+40h] BYREF
  unsigned __int64 MinimumAddress; // [rsp+98h] [rbp+58h] BYREF

  v22 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = a3;
  MinimumAddress = 0LL;
  v8 = 0LL;
  Alignment = 0LL;
  v9 = 0LL;
  MaximumAddress = 0LL;
  v12 = 1LL;
  if ( (AcpiOverrideAttributes & 0x800) != 0 || (v13 = 3, (*(_BYTE *)(a1 + 4) & 1) != 0) )
    v13 = 1;
  a4->ShareDisposition = v13;
  p_Type = &a4->Type;
  Type = a4->Type;
  if ( ((Type - 3) & 0xFB) == 0 || (v16 = &a4->Type, Type == 1) )
  {
    v17 = RtlIoDecodeMemIoResource(a4, &Alignment, &MinimumAddress, &MaximumAddress);
    v8 = MaximumAddress;
    v12 = 1LL;
    v4 = MinimumAddress;
    v9 = v17;
    v5 = Alignment;
    v16 = &a4->Type;
  }
  v18 = *(_BYTE *)(a1 + 4);
  if ( (v18 & 0xC) == 0xC )
  {
    if ( *p_Type == 6 )
    {
      a4->u.Port.Length = a4->u.Port.MinimumAddress.LowPart - a4->u.Port.Alignment + 1;
    }
    else
    {
      result = RtlIoEncodeMemIoResource(a4, *p_Type, v8 - v4 + 1, v5, v4, v8);
      if ( result < 0 )
        return result;
    }
  }
  else if ( (v18 & 8) != 0 )
  {
    if ( *p_Type == 6 )
      a4->u.Port.Alignment = a4->u.Port.MinimumAddress.LowPart - a4->u.Port.Length + 1;
    else
      a4->u.Port.MinimumAddress.QuadPart = v8 - v9 + 1;
  }
  else if ( (v18 & 4) != 0 )
  {
    if ( *v16 == 6 )
      a4->u.Port.MinimumAddress.LowPart = a4->u.Port.Length + a4->u.Port.Alignment - 1;
    else
      a4->u.Port.MaximumAddress.QuadPart = v9 + v4 - 1;
  }
  if ( (*(_BYTE *)(a1 + 4) & 1) == 0 )
  {
    result = PnpiUpdateResourceList(a2 + 8 * v6, &v22, v12);
    if ( result < 0 )
      return result;
    v20 = v22;
    *(_BYTE *)(v22 + 1) = -127;
    *(_WORD *)(v20 + 4) = 1;
  }
  return 0;
}
