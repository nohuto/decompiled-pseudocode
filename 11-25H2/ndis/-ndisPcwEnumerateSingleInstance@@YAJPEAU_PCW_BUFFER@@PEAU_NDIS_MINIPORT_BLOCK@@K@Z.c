/*
 * XREFs of ?ndisPcwEnumerateSingleInstance@@YAJPEAU_PCW_BUFFER@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14016BD50
 * Callers:
 *     ?ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1400748E0 (-ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     ?ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z @ 0x14016BE40 (-ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z.c)
 */

NTSTATUS __fastcall ndisPcwEnumerateSingleInstance(
        PPCW_BUFFER Buffer,
        struct _NDIS_MINIPORT_BLOCK *a2,
        unsigned int a3)
{
  ULONG v4; // ebx
  NTSTATUS result; // eax
  UNICODE_STRING Name; // [rsp+30h] [rbp-248h] BYREF
  struct _PCW_DATA Data; // [rsp+40h] [rbp-238h] BYREF
  char v8; // [rsp+50h] [rbp-228h] BYREF

  v4 = -2;
  *(_DWORD *)(&Name.MaximumLength + 1) = 0;
  if ( a3 != -2 )
    v4 = a3 & 0xFFF | ((a2->IfIndex & 0xFFF) << 12) | (a2->NetLuid.Value >> 24) & 0xFF000000;
  Data.Data = 0LL;
  Data.Size = 0;
  Name.Buffer = (wchar_t *)&v8;
  *(_DWORD *)&Name.Length = 33685504;
  result = ndisPcwGetInstanceName(a2, a3, &Name);
  if ( result >= 0 )
    return PcwAddInstance(Buffer, &Name, v4, 1u, &Data);
  return result;
}
