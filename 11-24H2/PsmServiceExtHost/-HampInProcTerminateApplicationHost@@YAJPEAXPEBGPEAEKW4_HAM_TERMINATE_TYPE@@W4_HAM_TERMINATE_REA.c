/*
 * XREFs of ?HampInProcTerminateApplicationHost@@YAJPEAXPEBGPEAEKW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_K@Z @ 0x180071DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HampInProcTerminateApplicationHost(
        __int64 a1,
        const unsigned __int16 *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        signed int a5,
        unsigned int a6,
        _QWORD *a7)
{
  return HamSrvTerminateApplicationHost(a1, a2, a3, a4, a5, a6, a7);
}
