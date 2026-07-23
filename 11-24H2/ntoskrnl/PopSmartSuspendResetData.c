/*
 * XREFs of PopSmartSuspendResetData @ 0x1406F99A0
 * Callers:
 *     PopSmartSuspendInit @ 0x140C33FE0 (PopSmartSuspendInit.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall PopSmartSuspendResetData(_QWORD *a1)
{
  __int64 result; // rax

  memset_0(a1, 0, 0x60uLL);
  result = -1LL;
  a1[5] = -1LL;
  a1[7] = -1LL;
  return result;
}
