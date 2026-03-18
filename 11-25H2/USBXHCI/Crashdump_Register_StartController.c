/*
 * XREFs of Crashdump_Register_StartController @ 0x140052608
 * Callers:
 *     Crashdump_InitializeWithControllerReset @ 0x140050F64 (Crashdump_InitializeWithControllerReset.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Crashdump_Register_StartController(__int64 a1)
{
  _DWORD *v1; // rsi
  unsigned int v2; // edi
  unsigned int i; // ebx
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(_DWORD **)(*(_QWORD *)a1 + 32LL);
  *v1 |= 1u;
  v2 = 0;
  _InterlockedOr(v5, 0);
  for ( i = 0; i < 0x50; ++i )
  {
    if ( (v1[1] & 1) == 0 )
    {
      DbgPrintEx(0x93u, 3u, "XHCIDUMP: xHC successfully started in %u ms\n", 200 * i / 0x3E8);
      return v2;
    }
    KeStallExecutionProcessor(0xC8u);
  }
  DbgPrintEx(0x93u, 1u, "XHCIDUMP: xHC failed to start in %u ms\n", 200 * i / 0x3E8);
  return (unsigned int)-1073741630;
}
