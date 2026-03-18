/*
 * XREFs of PsSetProcessWindowStation @ 0x140A72D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PsSetProcessWindowStation(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 712) = a2;
}
