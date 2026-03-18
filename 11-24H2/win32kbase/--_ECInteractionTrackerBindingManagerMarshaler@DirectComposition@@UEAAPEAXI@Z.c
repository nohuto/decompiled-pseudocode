/*
 * XREFs of ??_ECInteractionTrackerBindingManagerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x14015B070
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??1CDCompDynamicArrayBase@DirectComposition@@IEAA@XZ @ 0x140070780 (--1CDCompDynamicArrayBase@DirectComposition@@IEAA@XZ.c)
 */

char **__fastcall DirectComposition::CInteractionTrackerBindingManagerMarshaler::`vector deleting destructor'(
        char **Buffer,
        char a2)
{
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase(Buffer + 9);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer);
  return Buffer;
}
