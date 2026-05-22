/*
 * XREFs of ?QueryInterface@InjectionRawInputProvider@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E2920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InjectionRawInputProvider::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        InjectionRawInputProvider **a3)
{
  return InjectionRawInputProvider::QueryInterface((InjectionRawInputProvider *)(a1 - 8), a2, a3);
}
