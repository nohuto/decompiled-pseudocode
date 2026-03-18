/*
 * XREFs of PnpiUpdateResourceList @ 0x1400BBEEC
 * Callers:
 *     PnpiBiosAddressHandleGlobalFlags @ 0x140097424 (PnpiBiosAddressHandleGlobalFlags.c)
 *     PnpiBiosExtendedIrqToIoDescriptor @ 0x140097B80 (PnpiBiosExtendedIrqToIoDescriptor.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1400A43CC (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1400A4820 (PnpiBiosAddressQuadToIoDescriptor.c)
 *     PnpiBiosDmaToIoDescriptor @ 0x1400A4C40 (PnpiBiosDmaToIoDescriptor.c)
 *     PnpiBiosDmaToIoDescriptorV3 @ 0x1400A4D08 (PnpiBiosDmaToIoDescriptorV3.c)
 *     PnpiBiosGpioInterruptIoToNtIoDescriptor @ 0x1400A4D70 (PnpiBiosGpioInterruptIoToNtIoDescriptor.c)
 *     PnpiBiosIrqToIoDescriptor @ 0x1400A4DD4 (PnpiBiosIrqToIoDescriptor.c)
 *     PnpiBiosPortFixedToIoDescriptor @ 0x1400A4EA8 (PnpiBiosPortFixedToIoDescriptor.c)
 *     PnpiBiosPortToIoDescriptor @ 0x1400A4F28 (PnpiBiosPortToIoDescriptor.c)
 *     PnpiBiosVendorToNtIoDescriptor @ 0x1400A4FBC (PnpiBiosVendorToNtIoDescriptor.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1400BADE8 (PnpiBiosAddressToIoDescriptor.c)
 *     PnpiBiosMemoryToIoDescriptor @ 0x1400BBDE0 (PnpiBiosMemoryToIoDescriptor.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1400BC174 (PnpiBiosAddressDoubleToIoDescriptor.c)
 * Callees:
 *     PnpiGrowResourceDescriptor @ 0x1400BBF5C (PnpiGrowResourceDescriptor.c)
 */

__int64 __fastcall PnpiUpdateResourceList(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r8d
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  bool v8; // zf
  _OWORD *v9; // rdx

  v2 = 0;
  if ( *(_QWORD *)a1 && (*(_DWORD *)(*(_QWORD *)a1 + 4LL) & 7) != 0
    || (result = PnpiGrowResourceDescriptor(a1, a2, 0LL), v2 = result, (int)result >= 0) )
  {
    v6 = *(_QWORD *)a1 + 8LL;
    v7 = 32LL * *(unsigned int *)(*(_QWORD *)a1 + 4LL);
    v8 = v7 + v6 == 0;
    v9 = (_OWORD *)(v7 + v6);
    *a2 = v9;
    if ( v8 )
    {
      return 3221225473LL;
    }
    else
    {
      *v9 = 0LL;
      v9[1] = 0LL;
      ++*(_DWORD *)(*(_QWORD *)a1 + 4LL);
      return v2;
    }
  }
  return result;
}
