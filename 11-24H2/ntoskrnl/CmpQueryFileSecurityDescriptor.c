/*
 * XREFs of CmpQueryFileSecurityDescriptor @ 0x140932BA0
 * Callers:
 *     CmpOpenHiveFiles @ 0x1409312F0 (CmpOpenHiveFiles.c)
 *     CmpOpenHiveFile @ 0x140931FA4 (CmpOpenHiveFile.c)
 *     CmpLogHiveFileInaccessible @ 0x140932734 (CmpLogHiveFileInaccessible.c)
 *     CmpInitCmRM @ 0x140AE6674 (CmpInitCmRM.c)
 *     CmpStartRMLog @ 0x140AE7164 (CmpStartRMLog.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     CmSiAllocateMemory @ 0x14048071C (CmSiAllocateMemory.c)
 *     ZwQuerySecurityObject @ 0x1406AA0B0 (ZwQuerySecurityObject.c)
 */

__int64 __fastcall CmpQueryFileSecurityDescriptor(HANDLE Handle, struct _PRIVILEGE_SET **a2)
{
  struct _PRIVILEGE_SET *Memory; // rdi
  NTSTATUS v5; // ebx
  __int64 result; // rax
  ULONG Length; // [rsp+48h] [rbp+10h] BYREF

  Memory = 0LL;
  Length = 0;
  v5 = ZwQuerySecurityObject(Handle, 4u, 0LL, 0, &Length);
  if ( v5 == -1073741789 )
  {
    Memory = (struct _PRIVILEGE_SET *)CmSiAllocateMemory(Length, 0x64734D43u);
    if ( Memory )
    {
      v5 = ZwQuerySecurityObject(Handle, 4u, Memory, Length, &Length);
      if ( v5 < 0 )
      {
        CmSiFreeMemory(Memory);
        Memory = 0LL;
      }
    }
    else
    {
      v5 = -1073741670;
    }
  }
  else if ( !v5 )
  {
    v5 = -1073741823;
  }
  result = (unsigned int)v5;
  *a2 = Memory;
  return result;
}
