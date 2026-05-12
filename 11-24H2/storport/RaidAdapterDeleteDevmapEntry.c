/*
 * XREFs of RaidAdapterDeleteDevmapEntry @ 0x1400553D0
 * Callers:
 *     RaidAdapterDisableDeviceInterface @ 0x14003DE00 (RaidAdapterDisableDeviceInterface.c)
 * Callees:
 *     PortMapDeleteAdapterEntry @ 0x1400374E0 (PortMapDeleteAdapterEntry.c)
 */

__int64 __fastcall RaidAdapterDeleteDevmapEntry(__int64 a1)
{
  unsigned int v1; // ebp
  unsigned int v2; // ebx
  HANDLE *v4; // rsi

  v1 = *(unsigned __int8 *)(a1 + 456);
  v2 = 0;
  if ( *(_BYTE *)(a1 + 456) )
  {
    v4 = (HANDLE *)(a1 + 2080);
    do
    {
      if ( v2 >= 0xFF )
        break;
      ZwClose(*v4);
      ++v2;
      ++v4;
    }
    while ( v2 < v1 );
  }
  PortMapDeleteAdapterEntry(*(_DWORD *)(a1 + 56));
  return 0LL;
}
