/*
 * XREFs of ScsiSyncCacheRequest @ 0x140116518
 * Callers:
 *     ScsiToNVMeCommand @ 0x140116554 (ScsiToNVMeCommand.c)
 *     ScsiToNVMeCommand2 @ 0x140116A7C (ScsiToNVMeCommand2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ScsiSyncCacheRequest(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  char v4; // cl
  __int64 result; // rax

  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 592LL) + 525LL) & 1) != 0 )
  {
    v3 = *(_DWORD *)(a1 + 56);
    v4 = 0;
    *(_DWORD *)(a3 + 4) = v3;
    result = 259LL;
    *(_BYTE *)a3 = 0;
  }
  else
  {
    v4 = 1;
    result = 0LL;
  }
  *(_BYTE *)(a2 + 3) = v4;
  return result;
}
