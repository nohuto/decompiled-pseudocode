/*
 * XREFs of NtOpenRegistryTransaction @ 0x1407C0760
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     NtClose @ 0x14084EC50 (NtClose.c)
 *     ObOpenObjectByName @ 0x14085AA70 (ObOpenObjectByName.c)
 *     CmpAcquireShutdownRundown @ 0x140BA9460 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BA9970 (CmpReleaseShutdownRundown.c)
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
  HANDLE Handle; // [rsp+48h] [rbp-30h] BYREF
  __int128 v17; // [rsp+50h] [rbp-28h] BYREF

  v17 = 0LL;
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
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v17);
  return (unsigned int)v12;
}
