/*
 * XREFs of BiQueryBootEntryOrder @ 0x140A2609C
 * Callers:
 *     BiAddBootEntryToNvramDisplayOrder @ 0x140804F9C (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiRemoveBootEntryFromNvramDisplayOrder @ 0x140805A60 (BiRemoveBootEntryFromNvramDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x140A25DC8 (BiBindEfiBootManager.c)
 *     BiExportEfiBootManager @ 0x140AADFBC (BiExportEfiBootManager.c)
 * Callees:
 *     ZwQueryBootEntryOrder @ 0x14069DA80 (ZwQueryBootEntryOrder.c)
 *     BiReleasePrivilege @ 0x140A26700 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x140A26758 (BiAcquirePrivilege.c)
 *     BiLogMessage @ 0x140A26990 (BiLogMessage.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiQueryBootEntryOrder(ULONG **a1, ULONG *a2)
{
  ULONG *v2; // rdi
  NTSTATUS v5; // ebx
  ULONG *Pool2; // rax
  ULONG Count; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  v2 = 0LL;
  Count = 0;
  v5 = BiAcquirePrivilege(22LL, &v9);
  if ( v5 >= 0 )
  {
    v5 = ZwQueryBootEntryOrder(0LL, &Count);
    if ( v5 != -1073741789 )
      goto LABEL_6;
    Pool2 = (ULONG *)ExAllocatePool2(0x102uLL);
    v2 = Pool2;
    if ( !Pool2 )
    {
      v5 = -1073741670;
LABEL_10:
      BiReleasePrivilege(&v9);
      return (unsigned int)v5;
    }
    v5 = ZwQueryBootEntryOrder(Pool2, &Count);
    if ( v5 < 0 )
    {
LABEL_6:
      BiLogMessage(4LL, L"Failed to query boot entry order. Status: %x", (unsigned int)v5);
      if ( v5 < 0 )
      {
        if ( v2 )
          ExFreePoolWithTag(v2, 0x4B444342u);
        goto LABEL_10;
      }
    }
    *a2 = Count;
    *a1 = v2;
    goto LABEL_10;
  }
  return (unsigned int)v5;
}
