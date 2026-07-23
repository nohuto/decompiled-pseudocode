/*
 * XREFs of EtwRegisterTraceGuidsA @ 0x1800E5900
 * Callers:
 *     <none>
 * Callees:
 *     EtwRegisterTraceGuidsW @ 0x1800E5940 (EtwRegisterTraceGuidsW.c)
 */

__int64 __fastcall EtwRegisterTraceGuidsA(
        ULONG (__cdecl *a1)(PETW_NOTIFICATION_HEADER, PVOID),
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8)
{
  return EtwRegisterTraceGuidsW(a1, a5, 0, 0, a8);
}
