/*
 * XREFs of MiInitializeTbFlushing @ 0x140C5C90C
 * Callers:
 *     MiInitSystem @ 0x140C4FDD0 (MiInitSystem.c)
 * Callees:
 *     KeGetTbSize @ 0x140C2B51C (KeGetTbSize.c)
 *     MiInitializeTbFlush @ 0x140C5C78C (MiInitializeTbFlush.c)
 */

__int64 MiInitializeTbFlushing()
{
  unsigned int TbSize; // ebx
  __int64 result; // rax

  TbSize = KeGetTbSize();
  if ( !TbSize )
    TbSize = 2048;
  qword_140E2DD10 = -1LL;
  result = MiInitializeTbFlush(TbSize);
  if ( qword_140E2DD10 == TbSize && TbSize != 2048 )
  {
    qword_140E2DD10 = -1LL;
    return MiInitializeTbFlush(0x800u);
  }
  return result;
}
