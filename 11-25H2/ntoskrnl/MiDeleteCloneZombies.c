/*
 * XREFs of MiDeleteCloneZombies @ 0x14048FC24
 * Callers:
 *     MiCloneVads @ 0x1402CC944 (MiCloneVads.c)
 *     MiInsertClone @ 0x1404CA2E8 (MiInsertClone.c)
 *     MiDeleteInsertedCloneVads @ 0x1407F03A4 (MiDeleteInsertedCloneVads.c)
 *     MmCleanProcessAddressSpace @ 0x140A04D48 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x140211FE0 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1404CF3C8 (MiDeleteDeferredCloneDescriptors.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
