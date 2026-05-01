/*
 * XREFs of ?SetNavigationLevelOverride@UwpWindowWrapperBase@@UEAA_NW4NavigationLevelOverride@@@Z @ 0x1800A82C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushDesiredNavigationLevelToDerivedClass@UwpWindowWrapperBase@@AEAAXXZ @ 0x1800A89A8 (-PushDesiredNavigationLevelToDerivedClass@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall UwpWindowWrapperBase::SetNavigationLevelOverride(__int64 a1, int a2)
{
  int v4; // edi
  unsigned int v5; // eax
  int v7; // eax
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(a1 + 264) + 208LL))(*(_QWORD *)(a1 + 264), &SRWLock);
  if ( !a2 )
  {
    *(_DWORD *)(a1 + 164) &= 0xFFFFFFC7;
    goto LABEL_6;
  }
  v4 = a2 - 1;
  if ( v4 )
  {
    if ( v4 != 1 )
    {
LABEL_6:
      UwpWindowWrapperBase::PushDesiredNavigationLevelToDerivedClass((UwpWindowWrapperBase *)(a1 - 16));
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 164) & 0xFFFFFFE7 | 0x10;
LABEL_5:
    *(_DWORD *)(a1 + 164) = v5;
    goto LABEL_6;
  }
  v7 = *(_DWORD *)(a1 + 164);
  if ( (v7 & 0x18) == 0 )
  {
    v5 = v7 | 8;
    goto LABEL_5;
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 0;
}
