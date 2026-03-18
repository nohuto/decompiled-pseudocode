/*
 * XREFs of BiQueryBootEntryOrder @ 0x1409C0848
 * Callers:
 *     BiAddBootEntryToNvramDisplayOrder @ 0x140814B14 (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiRemoveBootEntryFromNvramDisplayOrder @ 0x1408155D8 (BiRemoveBootEntryFromNvramDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x1409C0574 (BiBindEfiBootManager.c)
 *     BiExportEfiBootManager @ 0x140AB305C (BiExportEfiBootManager.c)
 * Callees:
 *     ZwQueryBootEntryOrder @ 0x1406A8D50 (ZwQueryBootEntryOrder.c)
 *     BiLogMessage @ 0x1409BE7F8 (BiLogMessage.c)
 *     BiReleasePrivilege @ 0x1409C0C38 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1409C0C90 (BiAcquirePrivilege.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiQueryBootEntryOrder(_QWORD *a1, _DWORD *a2)
{
  void *v2; // rdi
  int BootEntryOrder; // ebx
  __int64 Pool2; // rax
  int v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  v2 = 0LL;
  v8 = 0;
  BootEntryOrder = BiAcquirePrivilege(22LL, &v9);
  if ( BootEntryOrder >= 0 )
  {
    BootEntryOrder = ZwQueryBootEntryOrder(0LL, (__int64)&v8);
    if ( BootEntryOrder != -1073741789 )
      goto LABEL_6;
    Pool2 = ExAllocatePool2(0x102uLL);
    v2 = (void *)Pool2;
    if ( !Pool2 )
    {
      BootEntryOrder = -1073741670;
LABEL_10:
      BiReleasePrivilege(&v9);
      return (unsigned int)BootEntryOrder;
    }
    BootEntryOrder = ZwQueryBootEntryOrder(Pool2, (__int64)&v8);
    if ( BootEntryOrder < 0 )
    {
LABEL_6:
      BiLogMessage();
      if ( BootEntryOrder < 0 )
      {
        if ( v2 )
          ExFreePoolWithTag(v2, 0x4B444342u);
        goto LABEL_10;
      }
    }
    *a2 = v8;
    *a1 = v2;
    goto LABEL_10;
  }
  return (unsigned int)BootEntryOrder;
}
