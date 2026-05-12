/*
 * XREFs of RaidUnitGetInstanceId @ 0x14009F19C
 * Callers:
 *     RaUnitQueryIdIrp @ 0x140186B14 (RaUnitQueryIdIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RtlStringCchPrintfW @ 0x140039774 (RtlStringCchPrintfW.c)
 */

NTSTATUS __fastcall RaidUnitGetInstanceId(__int64 a1, wchar_t **a2)
{
  wchar_t *Pool; // rax
  wchar_t *v5; // rdi
  NTSTATUS result; // eax

  Pool = (wchar_t *)RaidAllocatePool(256LL, 40LL, 1229218130LL, *(_QWORD *)(a1 + 8));
  v5 = Pool;
  if ( Pool )
  {
    if ( (*(_DWORD *)(a1 + 1952) & 0x20) != 0 )
      result = RtlStringCchPrintfW(Pool, 0x14uLL, L"%06x", *(_DWORD *)(a1 + 104) & 0xFFFFFF);
    else
      result = RtlStringCchPrintfW(
                 Pool,
                 0x14uLL,
                 L"%02x%02x%02x",
                 *(unsigned __int8 *)(a1 + 104),
                 *(unsigned __int8 *)(a1 + 105),
                 *(unsigned __int8 *)(a1 + 106));
  }
  else
  {
    result = -1073741801;
  }
  *a2 = v5;
  return result;
}
