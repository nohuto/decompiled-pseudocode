/*
 * XREFs of PsSetProcessDxgProcess @ 0x140A71980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PsSetProcessDxgProcess(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 1760) = a2;
}
