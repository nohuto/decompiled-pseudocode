/*
 * XREFs of ObUnRegisterCallbacks @ 0x140742860
 * Callers:
 *     <none>
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 *     ObpUnlockObjectType @ 0x1409C64EC (ObpUnlockObjectType.c)
 *     ObpLockObjectTypeExclusive @ 0x1409C6564 (ObpLockObjectTypeExclusive.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __stdcall ObUnRegisterCallbacks(PVOID RegistrationHandle)
{
  unsigned int i; // edi
  struct _EX_RUNDOWN_REF *v3; // rbx
  unsigned __int64 Count; // rcx
  struct _EX_RUNDOWN_REF **v5; // rax

  for ( i = 0; i < *((unsigned __int16 *)RegistrationHandle + 1); ++i )
  {
    v3 = (struct _EX_RUNDOWN_REF *)((char *)RegistrationHandle + 64 * (unsigned __int64)i + 32);
    ExWaitForRundownProtectionRelease(v3 + 7);
    ObpLockObjectTypeExclusive(v3[4].Count);
    Count = v3->Count;
    if ( *(struct _EX_RUNDOWN_REF **)(v3->Count + 8) != v3 || (v5 = (struct _EX_RUNDOWN_REF **)v3[1].Count, *v5 != v3) )
      __fastfail(3u);
    *v5 = (struct _EX_RUNDOWN_REF *)Count;
    *(_QWORD *)(Count + 8) = v5;
    ObpUnlockObjectType(v3[4].Count);
  }
  ExFreePoolWithTag(RegistrationHandle, 0x6C46624Fu);
}
