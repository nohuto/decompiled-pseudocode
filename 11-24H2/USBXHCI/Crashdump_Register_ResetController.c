/*
 * XREFs of Crashdump_Register_ResetController @ 0x1400517F0
 * Callers:
 *     Crashdump_InitializeWithControllerReset @ 0x140050604 (Crashdump_InitializeWithControllerReset.c)
 * Callees:
 *     Crashdump_Register_StopController @ 0x140051D74 (Crashdump_Register_StopController.c)
 */

__int64 __fastcall Crashdump_Register_ResetController(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v3; // rdi
  unsigned int i; // ebx
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  result = Crashdump_Register_StopController(a1);
  if ( (int)result >= 0 )
  {
    v3 = *(_DWORD **)(*(_QWORD *)a1 + 32LL);
    *v3 |= 2u;
    _InterlockedOr(v5, 0);
    for ( i = 0; i < 0x1388; ++i )
    {
      if ( (*v3 & 2) == 0 )
      {
        DbgPrintEx(0x93u, 3u, "XHCIDUMP: xHC successfully reset in %u ms\n", 200 * i / 0x3E8);
        return 0LL;
      }
      KeStallExecutionProcessor(0xC8u);
    }
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: xHC failed to reset in %u ms\n", 200 * i / 0x3E8);
    return 3221225666LL;
  }
  return result;
}
