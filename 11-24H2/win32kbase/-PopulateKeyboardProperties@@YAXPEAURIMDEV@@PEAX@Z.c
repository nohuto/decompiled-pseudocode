/*
 * XREFs of ?PopulateKeyboardProperties@@YAXPEAURIMDEV@@PEAX@Z @ 0x14012CF1C
 * Callers:
 *     RIMPopulateExtendedKeyboardDeviceProperties @ 0x1401E8AB8 (RIMPopulateExtendedKeyboardDeviceProperties.c)
 * Callees:
 *     RIMRegQueryDWordFromKey @ 0x14012D070 (RIMRegQueryDWordFromKey.c)
 */

void __fastcall PopulateKeyboardProperties(struct RIMDEV *a1, void *a2)
{
  int v3; // ebx

  v3 = 0;
  if ( (unsigned int)RIMRegQueryDWordFromKey(a2) || (unsigned int)RIMRegQueryDWordFromKey(0LL) )
  {
    LOBYTE(v3) = 0;
    *((_DWORD *)a1 + 119) = v3 | *((_DWORD *)a1 + 119) & 0xFFFFFFFE;
  }
}
