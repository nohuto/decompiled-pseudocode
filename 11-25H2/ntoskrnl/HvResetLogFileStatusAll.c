/*
 * XREFs of HvResetLogFileStatusAll @ 0x140A828F4
 * Callers:
 *     CmpFlushHive @ 0x140883A5C (CmpFlushHive.c)
 *     HvpPerformLogFileRecovery @ 0x1409FA6B8 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     <none>
 */

void __fastcall HvResetLogFileStatusAll(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 168) == 1 )
    *(_BYTE *)(a1 + 192) = 0;
  else
    *(_WORD *)(a1 + 192) = 0;
}
