/*
 * XREFs of ?QueryInterface@Win32kInterop@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F1BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32kInterop::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return Win32kInterop::QueryInterface((Win32kInterop *)(a1 - 8), a2, a3);
}
