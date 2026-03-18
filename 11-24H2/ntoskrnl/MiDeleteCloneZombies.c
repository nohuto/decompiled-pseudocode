/*
 * XREFs of MiDeleteCloneZombies @ 0x14048F544
 * Callers:
 *     MiCloneVads @ 0x1402C4DAC (MiCloneVads.c)
 *     MiInsertClone @ 0x1404CA408 (MiInsertClone.c)
 *     MiDeleteInsertedCloneVads @ 0x140800264 (MiDeleteInsertedCloneVads.c)
 *     MmCleanProcessAddressSpace @ 0x140A06E44 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14020D480 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x140218550 (MiUnlockWorkingSetExclusive.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1404CF22C (MiDeleteDeferredCloneDescriptors.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
