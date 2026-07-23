/*
 * XREFs of ExpFastResourceLegacyConvertExclusiveToShared @ 0x1402F0F98
 * Callers:
 *     ExConvertExclusiveToSharedLite @ 0x1402F1430 (ExConvertExclusiveToSharedLite.c)
 * Callees:
 *     ExpConvertFastResourceExclusiveToShared @ 0x1402F10A8 (ExpConvertFastResourceExclusiveToShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x140323290 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpFastResourceLegacyConvertExclusiveToShared(_QWORD *BugCheckParameter2, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  _QWORD *v3; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 *i; // rax
  char v6; // dl
  __int64 OwnerEntryForLegacyShim; // rax
  __int64 v8; // r8

  CurrentThread = KeGetCurrentThread();
  v3 = BugCheckParameter2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(BugCheckParameter2) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(BugCheckParameter2, a2);
  }
  if ( (*v3 & 1) == 0 || (struct _KTHREAD *)v3[10] != CurrentThread )
  {
    for ( i = (unsigned __int64 *)CurrentThread[1].WaitBlock[3].SparePtr;
          i != &CurrentThread[1].LastXStateSaveDebugInfo;
          i = (unsigned __int64 *)*i )
    {
      v6 = *((_BYTE *)i + 37);
      if ( (v6 & 2) == 0 && (_QWORD *)i[3] == v3 && (v6 & 1) != 0 )
        goto LABEL_13;
    }
LABEL_10:
    KeBugCheckEx(0xE3u, (ULONG_PTR)v3, (ULONG_PTR)CurrentThread, 0LL, 0LL);
  }
  i = v3 + 8;
LABEL_13:
  if ( !i )
    goto LABEL_10;
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
  }
  __writecr8(CurrentIrql);
  if ( (*v3 & 1) == 0 )
    KeBugCheckEx(0x1C6u, 0x16uLL, (ULONG_PTR)v3, (ULONG_PTR)CurrentThread, 0LL);
  OwnerEntryForLegacyShim = ExpAllocateOwnerEntryForLegacyShim();
  return ExpConvertFastResourceExclusiveToShared(v3, OwnerEntryForLegacyShim, v8);
}
