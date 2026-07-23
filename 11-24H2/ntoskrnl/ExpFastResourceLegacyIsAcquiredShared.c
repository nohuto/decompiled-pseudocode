/*
 * XREFs of ExpFastResourceLegacyIsAcquiredShared @ 0x1406553E4
 * Callers:
 *     ExIsResourceAcquiredSharedLite @ 0x14022A090 (ExIsResourceAcquiredSharedLite.c)
 * Callees:
 *     ExpIsFastResourceOwned @ 0x1403C3A60 (ExpIsFastResourceOwned.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall ExpFastResourceLegacyIsAcquiredShared(unsigned __int64 *a1)
{
  unsigned int v2; // ebx
  int v3; // edx
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 *i; // rcx
  bool v7; // zf

  v2 = 0;
  if ( ExpIsFastResourceOwned(a1) )
  {
    CurrentThread = KeGetCurrentThread();
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v3) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v3);
    }
    for ( i = (unsigned __int64 *)CurrentThread[1].WaitBlock[3].SparePtr;
          i != &CurrentThread[1].LastXStateSaveDebugInfo;
          i = (unsigned __int64 *)*i )
    {
      if ( (*((_BYTE *)i + 37) & 2) != 0 )
        v7 = a1 == i - 8;
      else
        v7 = i[3] == (_QWORD)a1;
      if ( v7 )
        v2 += *((_DWORD *)i + 8);
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return v2;
}
