/*
 * XREFs of ?FlushPostedRawInput@@YAXPEAUtagTHREADINFO@@@Z @ 0x140271D08
 * Callers:
 *     ?PrepareToReturnHidData@@YAXPEAUtagTHREADINFO@@_J@Z @ 0x140077844 (-PrepareToReturnHidData@@YAXPEAUtagTHREADINFO@@_J@Z.c)
 *     xxxRealInternalGetMessage @ 0x140107DFC (xxxRealInternalGetMessage.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x140167DA8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?GetRawInputBuffer_NoUserCrit@@YAIPEAUtagTHREADINFO@@PEAUtagRAWINPUT@@PEAII@Z @ 0x1401C5C24 (-GetRawInputBuffer_NoUserCrit@@YAIPEAUtagTHREADINFO@@PEAUtagRAWINPUT@@PEAII@Z.c)
 *     ?TrySmuggleHidData@@YAXPEAUtagTHREADINFO@@0PEAUtagHIDDATA@@_N@Z @ 0x140272310 (-TrySmuggleHidData@@YAXPEAUtagTHREADINFO@@0PEAUtagHIDDATA@@_N@Z.c)
 * Callees:
 *     ?ReverseHidDataList@@YAPEAUtagHIDDATA@@PEAU_SLIST_ENTRY@@@Z @ 0x140183DD0 (-ReverseHidDataList@@YAPEAUtagHIDDATA@@PEAU_SLIST_ENTRY@@@Z.c)
 */

void __fastcall FlushPostedRawInput(union _SLIST_HEADER *a1)
{
  struct _SLIST_ENTRY *v2; // rax
  struct tagHIDDATA *v3; // rax
  _QWORD *i; // rcx

  v2 = ExpInterlockedFlushSList(a1 + 72);
  v3 = ReverseHidDataList(v2);
  if ( v3 )
  {
    for ( i = &a1[73].Alignment; *i; i = (_QWORD *)(*i + 32LL) )
      ;
    *i = v3;
  }
}
