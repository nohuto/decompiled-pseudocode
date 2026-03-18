/*
 * XREFs of Crashdump_UsbDevice_SendAddressDeviceCommand @ 0x1400549A0
 * Callers:
 *     Crashdump_UsbDevice_Configure @ 0x14005399C (Crashdump_UsbDevice_Configure.c)
 * Callees:
 *     Crashdump_Command_SendCommand @ 0x1400528DC (Crashdump_Command_SendCommand.c)
 *     memset @ 0x140058EC0 (memset.c)
 */

__int64 __fastcall Crashdump_UsbDevice_SendAddressDeviceCommand(__int64 *a1)
{
  __int64 v2; // rbx
  __int64 v3; // r10
  int v4; // r9d
  __int64 v5; // r8
  int v6; // edx
  int v7; // ecx
  char v8; // al
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // esi
  __int64 v14; // r9
  int v15; // r8d
  __int64 v17; // [rsp+60h] [rbp-18h] BYREF
  int v18; // [rsp+68h] [rbp-10h]
  unsigned __int32 v19; // [rsp+6Ch] [rbp-Ch]

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_SendAddressDeviceCommand: begin\n");
  v2 = *a1;
  memset(*(void **)(*a1 + 472), 0, *(unsigned int *)(*a1 + 480));
  v3 = *(_QWORD *)(v2 + 472);
  *(_DWORD *)(v3 + 4) |= 3u;
  v4 = *(_DWORD *)(*(_QWORD *)a1[1] + 104LL) & 4;
  v5 = v4 != 0 ? 0x20 : 0;
  v6 = *(_DWORD *)(v5 + v3 + 32) ^ (*((_DWORD *)a1 + 20) ^ *(_DWORD *)(v5 + v3 + 32)) & 0xFFFFF;
  *(_DWORD *)(v5 + v3 + 32) = v6;
  v7 = v6 ^ (*((_DWORD *)a1 + 20) ^ v6) & 0xF00000;
  *(_DWORD *)(v5 + v3 + 32) = v7;
  v8 = *((_BYTE *)a1 + 86);
  *(_DWORD *)(v5 + v3 + 32) = v7 & 0x7FFFFFF | 0x8000000;
  *(_BYTE *)(v5 + v3 + 38) = v8;
  v9 = a1[15];
  v10 = v4 != 0 ? 0x40 : 0;
  *(_DWORD *)(v10 + v3 + 68) ^= (*(_DWORD *)(v9 + 52) ^ *(_DWORD *)(v10 + v3 + 68)) & 0x38;
  *(_WORD *)(v10 + v3 + 70) = *(_WORD *)(v9 + 54);
  *(_DWORD *)(v10 + v3 + 68) ^= (*(_DWORD *)(v9 + 52) ^ *(_DWORD *)(v10 + v3 + 68)) & 6;
  if ( *(_BYTE *)(v9 + 128) )
    v11 = *(_QWORD *)(v9 + 136);
  else
    v11 = *(_QWORD *)(v9 + 24LL * *(unsigned int *)(v9 + 160) + 80);
  v18 = 0;
  *(_QWORD *)((v4 != 0 ? 0x40 : 0) + v3 + 72) = v11 | 1;
  v12 = a1[2];
  v19 = _byteswap_ulong(*((unsigned __int8 *)a1 + 56)) | 0x2C00;
  v17 = *(_QWORD *)(v2 + 464);
  v13 = Crashdump_Command_SendCommand(v12, (__int64)&v17, 0LL);
  if ( v13 >= 0 )
  {
    v14 = a1[9];
    DbgPrintEx(
      0x93u,
      3u,
      "XHCIDUMP: Slot %u: RH %u, RS %u, Speed %u, IsHub %u, NumEntries %u, Addr %u, State %u\n",
      *((unsigned __int8 *)a1 + 56),
      *(unsigned __int8 *)(v14 + 6),
      *(_DWORD *)v14 & 0xFFFFF,
      (*(_DWORD *)v14 >> 20) & 0xF,
      (*(_DWORD *)v14 >> 26) & 1,
      *(_DWORD *)v14 >> 27,
      (unsigned __int8)*(_DWORD *)(v14 + 12),
      *(_DWORD *)(v14 + 12) >> 27);
    v15 = *(_DWORD *)(a1[9] + 12) >> 27;
    if ( v15 != 2 )
    {
      DbgPrintEx(
        0x93u,
        1u,
        "XHCIDUMP: SlotId %u: After address device command, slot state is not addressed, it is %u\n",
        *((unsigned __int8 *)a1 + 56),
        v15);
      v13 = -1073741630;
    }
  }
  else
  {
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: SlotId %u: Address device command failed\n", *((unsigned __int8 *)a1 + 56));
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_SendAddressDeviceCommand: end 0x%X\n", v13);
  return (unsigned int)v13;
}
