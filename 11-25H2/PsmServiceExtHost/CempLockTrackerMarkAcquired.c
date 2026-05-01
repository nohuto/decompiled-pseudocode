/*
 * XREFs of CempLockTrackerMarkAcquired @ 0x1800380B0
 * Callers:
 *     ?HampUserAcquireLockExclusive@@YAXPEAU_HAM_USER@@@Z @ 0x180037FC8 (-HampUserAcquireLockExclusive@@YAXPEAU_HAM_USER@@@Z.c)
 *     ?HampWakeManagerAcquireLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180038080 (-HampWakeManagerAcquireLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     PsmInitializeServiceExtension4 @ 0x1800778B0 (PsmInitializeServiceExtension4.c)
 *     ?HampDepGroupInvalidateDependency@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x1800827C4 (-HampDepGroupInvalidateDependency@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     ?HampDepGroupLogRundownEvents@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18008287C (-HampDepGroupLogRundownEvents@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepLinkAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_LINK@@@Z @ 0x180083E34 (-HampDepLinkAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_LINK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CempLockTrackerMarkAcquired(DWORD dwTlsIndex, __int64 a2, unsigned int a3, int a4)
{
  __int64 v5; // rdi
  _QWORD *Value; // rbx
  _QWORD *v8; // rax
  char v9; // cl

  if ( dwTlsIndex != -1 )
  {
    v5 = a3;
    Value = TlsGetValue(dwTlsIndex);
    v8 = TlsGetValue(dwTlsIndex);
    v9 = v5 + 1;
    if ( !a4 )
      v9 = v5;
    if ( (~((1LL << v9) - 1) & *v8) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 1LL << v5;
    ++Value[v5 + 1];
  }
}
