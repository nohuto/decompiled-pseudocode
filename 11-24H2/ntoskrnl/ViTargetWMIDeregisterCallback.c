/*
 * XREFs of ViTargetWMIDeregisterCallback @ 0x140B8DCD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViTargetWMIDeregisterCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 64);
  if ( !v2 || *(_QWORD *)(v2 + 8) != a2 )
    return 1LL;
  *(_QWORD *)(v2 + 8) = 0LL;
  ++dword_140FFEF7C;
  return 0LL;
}
