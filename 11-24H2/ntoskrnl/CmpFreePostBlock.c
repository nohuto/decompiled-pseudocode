/*
 * XREFs of CmpFreePostBlock @ 0x14086A740
 * Callers:
 *     CmpPostApcRunDown @ 0x1407D1FB0 (CmpPostApcRunDown.c)
 *     CmpCloseKeyObject @ 0x140841890 (CmpCloseKeyObject.c)
 *     CmpDeleteKeyObject @ 0x140847360 (CmpDeleteKeyObject.c)
 *     CmpPostNotify @ 0x140868D58 (CmpPostNotify.c)
 *     CmpFreeSubordinatePost @ 0x1408690C4 (CmpFreeSubordinatePost.c)
 *     CmpSignalDeferredPosts @ 0x14086A690 (CmpSignalDeferredPosts.c)
 *     CmNotifyRunDown @ 0x1408A87D0 (CmNotifyRunDown.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BF750 (NtNotifyChangeMultipleKeys.c)
 *     CmpPostApc @ 0x140A2F0F0 (CmpPostApc.c)
 *     CmpNotifyChangeKey @ 0x140AE4A64 (CmpNotifyChangeKey.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x1403C5CE0 (ObDereferenceObjectDeferDelete.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFreePostBlock(PVOID P)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)P + 6);
  if ( v2 )
  {
    ObDereferenceObjectDeferDelete(*(PVOID *)(v2 + 16));
    ExFreePoolWithTag(*((PVOID *)P + 6), 0);
  }
  if ( (*((_DWORD *)P + 14) & 0x10000) != 0 )
    ExFreePoolWithTag(*((PVOID *)P + 8), 0);
  ExFreePoolWithTag(P, 0);
}
