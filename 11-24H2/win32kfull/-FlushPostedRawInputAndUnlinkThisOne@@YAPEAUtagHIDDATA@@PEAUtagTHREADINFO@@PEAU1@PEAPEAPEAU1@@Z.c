/*
 * XREFs of ?FlushPostedRawInputAndUnlinkThisOne@@YAPEAUtagHIDDATA@@PEAUtagTHREADINFO@@PEAU1@PEAPEAPEAU1@@Z @ 0x14017AE18
 * Callers:
 *     ?PrepareToReturnHidData@@YAXPEAUtagTHREADINFO@@_J@Z @ 0x140077844 (-PrepareToReturnHidData@@YAXPEAUtagTHREADINFO@@_J@Z.c)
 *     xxxRealInternalGetMessage @ 0x140107DFC (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?UnlinkHidData@@YAPEAUtagHIDDATA@@PEAUtagTHREADINFO@@PEAU1@PEAPEAPEAU1@@Z @ 0x14017AEB4 (-UnlinkHidData@@YAPEAUtagHIDDATA@@PEAUtagTHREADINFO@@PEAU1@PEAPEAPEAU1@@Z.c)
 */

struct tagHIDDATA *__fastcall FlushPostedRawInputAndUnlinkThisOne(
        union _SLIST_HEADER *a1,
        struct tagHIDDATA *a2,
        struct tagHIDDATA ***a3)
{
  PSLIST_ENTRY v6; // rax
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // rcx
  union _SLIST_HEADER *i; // rax

  v6 = ExpInterlockedFlushSList(a1 + 72);
  v7 = 0LL;
  v8 = (unsigned __int64)&v6[-2] & -(__int64)(v6 != 0LL);
  if ( v8 )
  {
    do
    {
      v9 = *(_QWORD *)(v8 + 32);
      *(_QWORD *)(v8 + 32) = v7;
      v7 = v8;
      v8 = (v9 - 32) & -(__int64)(v9 != 0);
    }
    while ( v8 );
    for ( i = a1 + 73; i->Alignment; i = (union _SLIST_HEADER *)(i->Alignment + 32) )
      ;
    i->Alignment = v7;
  }
  return UnlinkHidData((struct tagTHREADINFO *)a1, a2, a3);
}
