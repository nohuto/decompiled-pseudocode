/*
 * XREFs of ??_GCGenericMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140100530
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??1CGenericPropertyList@DirectComposition@@QEAA@XZ @ 0x14010056C (--1CGenericPropertyList@DirectComposition@@QEAA@XZ.c)
 */

char *__fastcall DirectComposition::CGenericMarshaler::`scalar deleting destructor'(char *Buffer, char a2)
{
  DirectComposition::CGenericPropertyList::~CGenericPropertyList((DirectComposition::CGenericPropertyList *)(Buffer + 56));
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex(Buffer);
  return Buffer;
}
