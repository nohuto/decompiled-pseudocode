/*
 * XREFs of BiEnumerateBootEntries @ 0x1409A7518
 * Callers:
 *     BiBuildIdentifierList @ 0x1409A55CC (BiBuildIdentifierList.c)
 * Callees:
 *     ZwEnumerateBootEntries @ 0x1406A9090 (ZwEnumerateBootEntries.c)
 *     BiLogMessage @ 0x1409A4E48 (BiLogMessage.c)
 *     BiReleasePrivilege @ 0x1409A7288 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1409A72E0 (BiAcquirePrivilege.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiEnumerateBootEntries(_QWORD *a1, ULONG *a2)
{
  NTSTATUS v4; // ebx
  void *Pool2; // rax
  void *v6; // rdi
  ULONG BufferLength; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  v4 = BiAcquirePrivilege(0x16u, (__int64)&v9);
  if ( v4 >= 0 )
  {
    BufferLength = 0x2000;
    Pool2 = (void *)ExAllocatePool2(0x102uLL, 0x2000uLL, 0x4B444342u);
    v6 = Pool2;
    if ( !Pool2 )
      BufferLength = 0;
    while ( 1 )
    {
      v4 = ZwEnumerateBootEntries(Pool2, &BufferLength);
      if ( v4 != -1073741789 )
        break;
      if ( v6 )
        ExFreePoolWithTag(v6, 0x4B444342u);
      Pool2 = (void *)ExAllocatePool2(0x102uLL, BufferLength, 0x4B444342u);
      v6 = Pool2;
      if ( !Pool2 )
      {
        v4 = -1073741670;
        goto LABEL_13;
      }
    }
    if ( v4 >= 0 )
    {
      *a2 = BufferLength;
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
