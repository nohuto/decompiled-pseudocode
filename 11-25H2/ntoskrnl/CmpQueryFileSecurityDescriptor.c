/*
 * XREFs of CmpQueryFileSecurityDescriptor @ 0x1409104C8
 * Callers:
 *     CmpOpenHiveFiles @ 0x14090EA84 (CmpOpenHiveFiles.c)
 *     CmpOpenHiveFile @ 0x14090F91C (CmpOpenHiveFile.c)
 *     CmpLogHiveFileInaccessible @ 0x14091005C (CmpLogHiveFileInaccessible.c)
 *     CmpInitCmRM @ 0x140AD3ED8 (CmpInitCmRM.c)
 *     CmpStartRMLog @ 0x140AD49C8 (CmpStartRMLog.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     CmSiAllocateMemory @ 0x140484F40 (CmSiAllocateMemory.c)
 *     ZwQuerySecurityObject @ 0x14069DE40 (ZwQuerySecurityObject.c)
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
    Memory = (struct _PRIVILEGE_SET *)CmSiAllocateMemory();
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
