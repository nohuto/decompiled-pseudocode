/*
 * XREFs of NtGdiAnyLinkedFonts @ 0x140203EA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiAnyLinkedFonts(int a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  result = 0LL;
  if ( *(_DWORD *)(v2 + 13512) || *(_QWORD *)(v2 + 13528) || *(_QWORD *)(v2 + 13536) )
    return 1LL;
  return result;
}
