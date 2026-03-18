/*
 * XREFs of ?bSecureBits@@YAHPEAXKPEAPEAX@Z @ 0x140338AEC
 * Callers:
 *     NtGdiEngCreatePalette @ 0x140261970 (NtGdiEngCreatePalette.c)
 * Callees:
 *     Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline @ 0x140325560 (Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall bSecureBits(PVOID Address, SIZE_T Size, void **a3)
{
  unsigned int v5; // ebx
  unsigned int v6; // r14d
  HANDLE v7; // rax

  v5 = 1;
  *a3 = 0LL;
  if ( Address )
  {
    v6 = Size;
    if ( (unsigned int)Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline() )
      v7 = GrepSecureVirtualMemory(Address, v6, 2u);
    else
      v7 = MmSecureVirtualMemory(Address, v6, 2u);
    *a3 = v7;
    return v7 != 0LL;
  }
  return v5;
}
