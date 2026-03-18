/*
 * XREFs of GetgpniFontsDirectoryAndScratch @ 0x140308D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetgpniFontsDirectoryAndScratch(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // r9
  __int64 result; // rax

  v6 = *(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96);
  *a1 = v6 + 20120;
  *a2 = v6 + 20128;
  result = *(_QWORD *)(v6 + 20112);
  *a3 = result;
  return result;
}
