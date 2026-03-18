/*
 * XREFs of ?bActive@RFONTOBJ@@QEBA_NAEBV?$SEMOBJ@$0BC@@@@Z @ 0x14030C634
 * Callers:
 *     prfntKillList @ 0x1400DCA9C (prfntKillList.c)
 * Callees:
 *     <none>
 */

bool __fastcall RFONTOBJ::bActive(__int64 a1)
{
  return *(_DWORD *)(*(_QWORD *)a1 + 668LL) > 0;
}
