/*
 * XREFs of RIMApiSetIsMouseDeviceOnIgnoreList @ 0x1400A79A0
 * Callers:
 *     UpdateMouseConnectionState @ 0x14012BF88 (UpdateMouseConnectionState.c)
 * Callees:
 *     IsMouseDeviceOnIgnoreList @ 0x1400A7E38 (IsMouseDeviceOnIgnoreList.c)
 *     RIMIsRunningOnDesktop @ 0x1400A8A78 (RIMIsRunningOnDesktop.c)
 */

__int64 __fastcall RIMApiSetIsMouseDeviceOnIgnoreList(__int64 a1)
{
  if ( (unsigned int)RIMIsRunningOnDesktop() )
    return IsMouseDeviceOnIgnoreList(a1);
  else
    return 0LL;
}
