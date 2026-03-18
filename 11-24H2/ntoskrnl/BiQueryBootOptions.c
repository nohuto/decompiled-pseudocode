/*
 * XREFs of BiQueryBootOptions @ 0x1409C0924
 * Callers:
 *     BiBindEfiBootManager @ 0x1409C0574 (BiBindEfiBootManager.c)
 *     BiExportEfiBootManager @ 0x140AB305C (BiExportEfiBootManager.c)
 * Callees:
 *     ZwQueryBootOptions @ 0x1406A8D70 (ZwQueryBootOptions.c)
 *     BiLogMessage @ 0x1409BE7F8 (BiLogMessage.c)
 *     BiReleasePrivilege @ 0x1409C0C38 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1409C0C90 (BiAcquirePrivilege.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiQueryBootOptions(_QWORD *a1, _DWORD *a2)
{
  void *v2; // rdi
  int BootOptions; // ebx
  __int64 Pool2; // rax
  int v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = 0LL;
  *a2 = 0;
  v9 = 0LL;
  v8 = 0;
  BootOptions = BiAcquirePrivilege(22LL, &v9);
  if ( BootOptions >= 0 )
  {
    BootOptions = ZwQueryBootOptions(0LL, (__int64)&v8);
    if ( BootOptions != -1073741789 )
      goto LABEL_3;
    Pool2 = ExAllocatePool2(0x102uLL);
    v2 = (void *)Pool2;
    if ( !Pool2 )
    {
      BootOptions = -1073741670;
LABEL_12:
      BiReleasePrivilege(&v9);
      return (unsigned int)BootOptions;
    }
    BootOptions = ZwQueryBootOptions(Pool2, (__int64)&v8);
    if ( BootOptions < 0 )
    {
LABEL_3:
      BiLogMessage();
      if ( BootOptions < 0 )
      {
        if ( v2 )
          ExFreePoolWithTag(v2, 0x4B444342u);
        goto LABEL_12;
      }
    }
    *a2 = v8;
    *a1 = v2;
    goto LABEL_12;
  }
  return (unsigned int)BootOptions;
}
