/*
 * XREFs of ViIrpDatabaseFindPointer @ 0x140BA6150
 * Callers:
 *     VfIrpDatabaseCheckExFreePool @ 0x140BA5E64 (VfIrpDatabaseCheckExFreePool.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x140BA9084 (VfIrpDatabaseEntryFindAndLock.c)
 * Callees:
 *     VfUtilAddressRangeFit @ 0x140B85148 (VfUtilAddressRangeFit.c)
 */

_QWORD *__fastcall ViIrpDatabaseFindPointer(unsigned __int64 a1)
{
  __int64 v2; // r11
  _QWORD *i; // rax

  if ( (unsigned int)VfUtilAddressRangeFit(
                       (unsigned __int64 *)(16LL * (unsigned __int8)(-125 * (a1 >> 12)) + ViIrpDatabaseAddressRanges),
                       a1,
                       a1 + 208) )
  {
    for ( i = *(_QWORD **)((char *)ViIrpDatabase + v2); i != (_QWORD *)((char *)ViIrpDatabase + v2); i = (_QWORD *)*i )
    {
      if ( *(i - 4) == a1 )
        return i - 4;
    }
  }
  return 0LL;
}
