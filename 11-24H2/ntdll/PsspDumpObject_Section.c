/*
 * XREFs of PsspDumpObject_Section @ 0x18010AA30
 * Callers:
 *     <none>
 * Callees:
 *     NtQuerySection @ 0x1801626B0 (NtQuerySection.c)
 */

__int64 __fastcall PsspDumpObject_Section(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  __int64 result; // rax

  *a4 = 0;
  if ( a3 < 0x18 )
    return 3221225507LL;
  result = NtQuerySection(a1, 0LL, a2);
  *a4 = 0;
  if ( (int)result >= 0 )
    return (unsigned int)result;
  return result;
}
