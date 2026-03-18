/*
 * XREFs of ??_ECManipulationMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140123BE0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??1?$CStructDynamicArray@UInjectManipulationArgs@@@@QEAA@XZ @ 0x140123C1C (--1-$CStructDynamicArray@UInjectManipulationArgs@@@@QEAA@XZ.c)
 */

char *__fastcall DirectComposition::CManipulationMarshaler::`vector deleting destructor'(char *Buffer, char a2)
{
  CStructDynamicArray<InjectManipulationArgs>::~CStructDynamicArray<InjectManipulationArgs>(Buffer + 128);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex(Buffer);
  return Buffer;
}
