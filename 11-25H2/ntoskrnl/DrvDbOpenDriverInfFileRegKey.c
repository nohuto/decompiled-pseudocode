/*
 * XREFs of DrvDbOpenDriverInfFileRegKey @ 0x140930354
 * Callers:
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x1408121F8 (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 *     DrvDbSetDriverInfFileMappedProperty @ 0x140812EF8 (DrvDbSetDriverInfFileMappedProperty.c)
 *     DrvDbDispatchDriverInfFile @ 0x14092FE10 (DrvDbDispatchDriverInfFile.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x140931000 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDriverInfFileRegKey(int a1, int a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return DrvDbOpenObjectRegKey(a1, 0, 3, a2, a3, a4, a5, a6, 0LL);
}
