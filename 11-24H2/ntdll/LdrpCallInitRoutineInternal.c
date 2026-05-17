/*
 * XREFs of LdrpCallInitRoutineInternal @ 0x18015F968
 * Callers:
 *     LdrpCallInitRoutine @ 0x180012C90 (LdrpCallInitRoutine.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrpCallInitRoutineInternal(
        __int64 (__fastcall *a1)(__int64, _QWORD, __int64),
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  return a1(a2, a3, a4);
}
