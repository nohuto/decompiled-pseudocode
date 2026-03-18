/*
 * XREFs of MiInitializeTbFlushing @ 0x140C5A77C
 * Callers:
 *     MiInitSystem @ 0x140C4DC40 (MiInitSystem.c)
 * Callees:
 *     KeGetTbSize @ 0x140C2947C (KeGetTbSize.c)
 *     MiInitializeTbFlush @ 0x140C5A5FC (MiInitializeTbFlush.c)
 */

__int64 MiInitializeTbFlushing()
{
  unsigned int TbSize; // ebx
  __int64 result; // rax

  TbSize = KeGetTbSize();
  if ( !TbSize )
    TbSize = 2048;
  qword_140E2DBD0 = -1LL;
  result = MiInitializeTbFlush(TbSize);
  if ( qword_140E2DBD0 == TbSize && TbSize != 2048 )
  {
    qword_140E2DBD0 = -1LL;
    return MiInitializeTbFlush(0x800u);
  }
  return result;
}
