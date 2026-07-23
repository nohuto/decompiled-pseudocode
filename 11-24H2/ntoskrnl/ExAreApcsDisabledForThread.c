/*
 * XREFs of ExAreApcsDisabledForThread @ 0x1403FD770
 * Callers:
 *     ExAcquireFastResourceShared @ 0x1403206D0 (ExAcquireFastResourceShared.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExAreApcsDisabledForThread(char a1, __int64 a2)
{
  return a1 || (*(_DWORD *)(a2 + 116) & 0x400) != 0 || *(_DWORD *)(a2 + 484) != 0;
}
