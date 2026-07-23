/*
 * XREFs of KiIpiUpdateUserIsolationDomain @ 0x1405C0600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIpiUpdateUserIsolationDomain(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax

  result = *a3;
  *(_QWORD *)(a2 + 1816) = *a3;
  return result;
}
