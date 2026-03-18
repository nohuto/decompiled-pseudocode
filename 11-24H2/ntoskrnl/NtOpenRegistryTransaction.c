/*
 * XREFs of NtOpenRegistryTransaction @ 0x1407CFE60
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403FA250 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x14041EE60 (CmpCleanupThreadInfo.c)
 *     NtClose @ 0x14084AA00 (NtClose.c)
 *     ObOpenObjectByName @ 0x14089B210 (ObOpenObjectByName.c)
 *     CmpAcquireShutdownRundown @ 0x140BB9400 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BB9880 (CmpReleaseShutdownRundown.c)
 */

__int64 __fastcall NtOpenRegistryTransaction(HANDLE *a1, int a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // si
  int v11; // r8d
  int v12; // ebx
  char PreviousMode; // r14
  __int64 v14; // rax
  HANDLE Handle; // [rsp+48h] [rbp-40h] BYREF
  __int128 v17; // [rsp+50h] [rbp-38h] BYREF
  __int64 v18; // [rsp+60h] [rbp-28h]

  v17 = 0LL;
  v18 = 0LL;
  Handle = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v17);
  v10 = CmpAcquireShutdownRundown(v7, v6, v8, v9);
  if ( v10 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode == 1 )
    {
      v14 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
        v14 = (__int64)a1;
      *(_QWORD *)v14 = 0LL;
    }
    else
    {
      *a1 = 0LL;
    }
    LOBYTE(v11) = PreviousMode;
    v12 = ObOpenObjectByName(a3, (_DWORD)CmRegistryTransactionType, v11, 0, a2, 0LL, (__int64)&Handle);
    if ( v12 >= 0 )
    {
      *a1 = Handle;
      Handle = 0LL;
      v12 = 0;
    }
  }
  else
  {
    v12 = -1073741431;
  }
  if ( Handle )
    NtClose(Handle);
  if ( v10 )
    CmpReleaseShutdownRundown();
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v17);
  return (unsigned int)v12;
}
