/*
 * XREFs of MiDeleteCloneZombies @ 0x140489754
 * Callers:
 *     MiCloneVads @ 0x140268194 (MiCloneVads.c)
 *     MiInsertClone @ 0x1404C392C (MiInsertClone.c)
 *     MiDeleteInsertedCloneVads @ 0x1408009A4 (MiDeleteInsertedCloneVads.c)
 *     MmCleanProcessAddressSpace @ 0x140A03374 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     MiLockWorkingSetExclusive @ 0x1403367E0 (MiLockWorkingSetExclusive.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1404C83F8 (MiDeleteDeferredCloneDescriptors.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteCloneZombies(__int64 a1, int a2)
{
  __int64 v3; // rsi
  unsigned __int8 v4; // bl
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx

  if ( *(_WORD *)(*(_QWORD *)(a1 + 1040) + 1072LL) )
  {
    v3 = a1 + 1024;
    if ( a2 )
      v4 = 17;
    else
      v4 = MiLockWorkingSetExclusive(a1 + 1024);
    v5 = (_QWORD *)MiDeleteDeferredCloneDescriptors(a1);
    if ( v4 != 17 )
      MiUnlockWorkingSetExclusive(v3, v4);
    if ( v5 )
    {
      do
      {
        v6 = (_QWORD *)*v5;
        ExFreePoolWithTag(v5, 0);
        v5 = v6;
      }
      while ( v6 );
    }
  }
}
