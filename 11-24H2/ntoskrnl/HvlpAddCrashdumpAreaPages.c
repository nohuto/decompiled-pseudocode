/*
 * XREFs of HvlpAddCrashdumpAreaPages @ 0x140587964
 * Callers:
 *     HvlAddSecurePagesCallbackRoutine @ 0x140587118 (HvlAddSecurePagesCallbackRoutine.c)
 * Callees:
 *     <none>
 */

char __fastcall HvlpAddCrashdumpAreaPages(__int64 a1, char a2)
{
  char v2; // r8
  __int64 v3; // rax

  if ( a2 && (HvlpFlags & 2) == 0 || !KiHypervisorInitiatedCrashDump )
    return 0;
  v2 = 1;
  if ( a2 )
  {
    *(_QWORD *)(a1 + 16) = (unsigned __int64)qword_140F8E1C8 >> 12;
    v3 = (unsigned int)dword_140F8E1D0;
    *(_DWORD *)(a1 + 8) |= 0x80000022;
  }
  else
  {
    *(_QWORD *)(a1 + 16) = (unsigned __int64)qword_140F8E1B0 >> 12;
    v3 = (unsigned int)dword_140F8E1B8;
    *(_DWORD *)(a1 + 8) |= 0x80000002;
  }
  *(_QWORD *)(a1 + 24) = v3;
  return v2;
}
