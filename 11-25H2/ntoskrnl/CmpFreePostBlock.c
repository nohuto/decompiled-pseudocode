/*
 * XREFs of CmpFreePostBlock @ 0x14086CC80
 * Callers:
 *     CmpPostApcRunDown @ 0x1407C2870 (CmpPostApcRunDown.c)
 *     CmpCloseKeyObject @ 0x140845600 (CmpCloseKeyObject.c)
 *     CmpDeleteKeyObject @ 0x14084B6B0 (CmpDeleteKeyObject.c)
 *     CmpSignalDeferredPosts @ 0x14086CBD0 (CmpSignalDeferredPosts.c)
 *     CmpPostNotify @ 0x140870084 (CmpPostNotify.c)
 *     CmpFreeSubordinatePost @ 0x1408703F0 (CmpFreeSubordinatePost.c)
 *     CmNotifyRunDown @ 0x1408F53C0 (CmNotifyRunDown.c)
 *     NtNotifyChangeMultipleKeys @ 0x140937870 (NtNotifyChangeMultipleKeys.c)
 *     CmpNotifyChangeKey @ 0x1409391FC (CmpNotifyChangeKey.c)
 *     CmpPostApc @ 0x140A29490 (CmpPostApc.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x1403F2E60 (ObDereferenceObjectDeferDelete.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
