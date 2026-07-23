/*
 * XREFs of LdrpIssueEnclaveCall @ 0x1800D4020
 * Callers:
 *     LdrCallEnclave @ 0x18010AEB0 (LdrCallEnclave.c)
 *     RtlEnclaveCallDispatcher @ 0x180164180 (RtlEnclaveCallDispatcher.c)
 * Callees:
 *     LdrpObtainLockedEnclave @ 0x1800D40D0 (LdrpObtainLockedEnclave.c)
 *     LdrpUnlockAndDereferenceEnclave @ 0x1800D41F0 (LdrpUnlockAndDereferenceEnclave.c)
 *     ZwCallEnclave @ 0x1801612A0 (ZwCallEnclave.c)
 *     RtlCallEnclave @ 0x1801641F0 (RtlCallEnclave.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrpIssueEnclaveCall(LPVOID (__cdecl *Routine)(LPVOID), ULONG Flags, PVOID *RoutineParamReturn)
{
  __int64 locked; // rax
  __int64 v7; // rdi
  unsigned int v8; // ebx

  if ( (Flags & 8) != 0 )
  {
    v8 = 0;
    goto LABEL_3;
  }
  locked = LdrpObtainLockedEnclave(Routine, 0LL);
  v7 = locked;
  v8 = 0;
  if ( !locked )
  {
LABEL_3:
    *RoutineParamReturn = (PVOID)((__int64 (__fastcall *)(_QWORD))Routine)(*RoutineParamReturn);
    return v8;
  }
  LdrpUnlockAndDereferenceEnclave(locked);
  if ( *(_DWORD *)(v7 + 56) == 16 )
    return (unsigned int)RtlCallEnclave(Routine, 0LL, Flags, RoutineParamReturn);
  else
    return (unsigned int)ZwCallEnclave(Routine, 0LL, Flags, RoutineParamReturn);
}
