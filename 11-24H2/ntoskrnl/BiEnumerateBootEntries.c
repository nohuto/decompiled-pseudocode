/*
 * XREFs of BiEnumerateBootEntries @ 0x1409C0EC8
 * Callers:
 *     BiBuildIdentifierList @ 0x1409BEF7C (BiBuildIdentifierList.c)
 * Callees:
 *     ZwEnumerateBootEntries @ 0x1406A80F0 (ZwEnumerateBootEntries.c)
 *     BiLogMessage @ 0x1409BE7F8 (BiLogMessage.c)
 *     BiReleasePrivilege @ 0x1409C0C38 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1409C0C90 (BiAcquirePrivilege.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiEnumerateBootEntries(_QWORD *a1, int *a2)
{
  int v4; // ebx
  __int64 Pool2; // rax
  void *v6; // rdi
  int v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  v4 = BiAcquirePrivilege(0x16u, (__int64)&v9);
  if ( v4 >= 0 )
  {
    v8 = 0x2000;
    Pool2 = ExAllocatePool2(0x102uLL);
    v6 = (void *)Pool2;
    if ( !Pool2 )
      v8 = 0;
    while ( 1 )
    {
      v4 = ZwEnumerateBootEntries(Pool2, (__int64)&v8);
      if ( v4 != -1073741789 )
        break;
      if ( v6 )
        ExFreePoolWithTag(v6, 0x4B444342u);
      Pool2 = ExAllocatePool2(0x102uLL);
      v6 = (void *)Pool2;
      if ( !Pool2 )
      {
        v4 = -1073741670;
        goto LABEL_13;
      }
    }
    if ( v4 >= 0 )
    {
      *a2 = v8;
      *a1 = v6;
    }
    else
    {
      BiLogMessage();
      if ( v6 )
        ExFreePoolWithTag(v6, 0x4B444342u);
    }
LABEL_13:
    BiReleasePrivilege((unsigned int *)&v9);
  }
  return (unsigned int)v4;
}
