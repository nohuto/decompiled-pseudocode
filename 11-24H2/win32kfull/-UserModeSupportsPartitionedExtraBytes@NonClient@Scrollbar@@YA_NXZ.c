/*
 * XREFs of ?UserModeSupportsPartitionedExtraBytes@NonClient@Scrollbar@@YA_NXZ @ 0x1402AB038
 * Callers:
 *     ?xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x14002E080 (-xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     ?GETCLIENTWNDINFOOFFSET@@YAHPEBUtagWND@@@Z @ 0x14026C2A4 (-GETCLIENTWNDINFOOFFSET@@YAHPEBUtagWND@@@Z.c)
 *     ?GetClientExtraBytesTotalSize@@YAHPEBUtagWND@@@Z @ 0x1402F13E4 (-GetClientExtraBytesTotalSize@@YAHPEBUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Scrollbar::NonClient::UserModeSupportsPartitionedExtraBytes(Scrollbar::NonClient *this)
{
  return (unsigned __int8)RtlIsFunctionalityAvailable(5LL) != 0;
}
