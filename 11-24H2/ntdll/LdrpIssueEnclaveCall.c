/*
 * XREFs of LdrpIssueEnclaveCall @ 0x1800D8CB0
 * Callers:
 *     LdrCallEnclave @ 0x18010FED0 (LdrCallEnclave.c)
 *     RtlEnclaveCallDispatcher @ 0x180165DC0 (RtlEnclaveCallDispatcher.c)
 * Callees:
 *     LdrpObtainLockedEnclave @ 0x1800D8D60 (LdrpObtainLockedEnclave.c)
 *     LdrpUnlockAndDereferenceEnclave @ 0x1800D8E80 (LdrpUnlockAndDereferenceEnclave.c)
 *     ZwCallEnclave @ 0x180162EE0 (ZwCallEnclave.c)
 *     RtlCallEnclave @ 0x180165E30 (RtlCallEnclave.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrpIssueEnclaveCall(__int64 (__fastcall *a1)(_QWORD), unsigned int a2, _QWORD *a3)
{
  __int64 locked; // rax
  __int64 v7; // rdi
  unsigned int v8; // ebx

  if ( (a2 & 8) != 0 )
  {
    v8 = 0;
    goto LABEL_3;
  }
  locked = LdrpObtainLockedEnclave(a1, 0LL);
  v7 = locked;
  v8 = 0;
  if ( !locked )
  {
LABEL_3:
    *a3 = a1(*a3);
    return v8;
  }
  LdrpUnlockAndDereferenceEnclave(locked);
  if ( *(_DWORD *)(v7 + 56) == 16 )
    return (unsigned int)RtlCallEnclave(a1, 0LL, a2, a3);
  else
    return (unsigned int)ZwCallEnclave(a1, 0LL, a2, a3);
}
