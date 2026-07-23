/*
 * XREFs of MiReadProcessNumberOfLockedPages @ 0x1404EDD78
 * Callers:
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     MmUpdateMdlTrackerForMdlSwitch @ 0x140670158 (MmUpdateMdlTrackerForMdlSwitch.c)
 *     MmDeleteProcessAddressSpace @ 0x140AE7D64 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiReadProcessNumberOfLockedPages(__int64 a1)
{
  __int64 *v1; // rdx
  __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // rcx

  v1 = (__int64 *)(*(_QWORD *)(a1 + 1040) + 512LL);
  result = 0LL;
  v3 = 4LL;
  do
  {
    v4 = *v1;
    v1 += 8;
    result += v4;
    --v3;
  }
  while ( v3 );
  return result;
}
