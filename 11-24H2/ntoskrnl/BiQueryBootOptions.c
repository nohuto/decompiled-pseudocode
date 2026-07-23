/*
 * XREFs of BiQueryBootOptions @ 0x1409A6F74
 * Callers:
 *     BiBindEfiBootManager @ 0x1409A6BC4 (BiBindEfiBootManager.c)
 *     BiExportEfiBootManager @ 0x140AADFCC (BiExportEfiBootManager.c)
 * Callees:
 *     ZwQueryBootOptions @ 0x1406A9D10 (ZwQueryBootOptions.c)
 *     BiLogMessage @ 0x1409A4E48 (BiLogMessage.c)
 *     BiReleasePrivilege @ 0x1409A7288 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1409A72E0 (BiAcquirePrivilege.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiQueryBootOptions(_BOOT_OPTIONS **a1, ULONG *a2)
{
  _BOOT_OPTIONS *v2; // rdi
  NTSTATUS v5; // ebx
  _BOOT_OPTIONS *Pool2; // rax
  ULONG BootOptionsLength; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = 0LL;
  *a2 = 0;
  v9 = 0LL;
  BootOptionsLength = 0;
  v5 = BiAcquirePrivilege(22LL, &v9);
  if ( v5 >= 0 )
  {
    v5 = ZwQueryBootOptions(0LL, &BootOptionsLength);
    if ( v5 != -1073741789 )
      goto LABEL_3;
    Pool2 = (_BOOT_OPTIONS *)ExAllocatePool2(0x102uLL, BootOptionsLength, 0x4B444342u);
    v2 = Pool2;
    if ( !Pool2 )
    {
      v5 = -1073741670;
LABEL_12:
      BiReleasePrivilege(&v9);
      return (unsigned int)v5;
    }
    v5 = ZwQueryBootOptions(Pool2, &BootOptionsLength);
    if ( v5 < 0 )
    {
LABEL_3:
      BiLogMessage();
      if ( v5 < 0 )
      {
        if ( v2 )
          ExFreePoolWithTag(v2, 0x4B444342u);
        goto LABEL_12;
      }
    }
    *a2 = BootOptionsLength;
    *a1 = v2;
    goto LABEL_12;
  }
  return (unsigned int)v5;
}
