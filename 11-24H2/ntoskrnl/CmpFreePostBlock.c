/*
 * XREFs of CmpFreePostBlock @ 0x14086EA70
 * Callers:
 *     CmpPostApcRunDown @ 0x1407D24A0 (CmpPostApcRunDown.c)
 *     CmpCloseKeyObject @ 0x14083DB50 (CmpCloseKeyObject.c)
 *     CmpDeleteKeyObject @ 0x140843620 (CmpDeleteKeyObject.c)
 *     CmpPostNotify @ 0x14086D048 (CmpPostNotify.c)
 *     CmpFreeSubordinatePost @ 0x14086D3B4 (CmpFreeSubordinatePost.c)
 *     CmpSignalDeferredPosts @ 0x14086E9C0 (CmpSignalDeferredPosts.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BD110 (NtNotifyChangeMultipleKeys.c)
 *     CmNotifyRunDown @ 0x1408FEA30 (CmNotifyRunDown.c)
 *     CmpPostApc @ 0x140A23B30 (CmpPostApc.c)
 *     CmpNotifyChangeKey @ 0x140AE6344 (CmpNotifyChangeKey.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x1403B48A0 (ObDereferenceObjectDeferDelete.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
