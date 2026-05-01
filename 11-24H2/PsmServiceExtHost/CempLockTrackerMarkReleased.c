/*
 * XREFs of CempLockTrackerMarkReleased @ 0x180038130
 * Callers:
 *     ?HampUserReleaseLockExclusive@@YAXPEAU_HAM_USER@@@Z @ 0x1800380B8 (-HampUserReleaseLockExclusive@@YAXPEAU_HAM_USER@@@Z.c)
 *     ?HampWakeManagerReleaseLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x1800380F4 (-HampWakeManagerReleaseLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     PsmInitializeServiceExtension4 @ 0x180077910 (PsmInitializeServiceExtension4.c)
 *     ?HampDepGroupInvalidateDependency@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x180082C84 (-HampDepGroupInvalidateDependency@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     ?HampDepGroupLogRundownEvents@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180082D3C (-HampDepGroupLogRundownEvents@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepLinkReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_LINK@@@Z @ 0x18008436C (-HampDepLinkReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_LINK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CempLockTrackerMarkReleased(DWORD a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  _QWORD *Value; // rax

  if ( a1 != -1 )
  {
    v3 = a3;
    Value = TlsGetValue(a1);
    if ( ((1LL << v3) & *Value) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( Value[v3 + 1]-- == 1LL )
      *Value &= ~(1LL << v3);
  }
}
