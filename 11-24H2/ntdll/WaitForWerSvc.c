/*
 * XREFs of WaitForWerSvc @ 0x18000103C
 * Callers:
 *     SendMessageToWERService @ 0x1800015D0 (SendMessageToWERService.c)
 * Callees:
 *     NtWaitForSingleObject @ 0x180161D10 (NtWaitForSingleObject.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenEvent @ 0x180162490 (NtOpenEvent.c)
 */

__int64 __fastcall WaitForWerSvc(int a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  char v3; // dl
  LARGE_INTEGER *v4; // r8
  unsigned int v5; // ebx
  _QWORD v6[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v7[4]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v8; // [rsp+50h] [rbp-10h]
  HANDLE Handle; // [rsp+78h] [rbp+18h] BYREF
  __int64 v10; // [rsp+80h] [rbp+20h] BYREF

  v1 = a1;
  v6[0] = 4718662LL;
  v6[1] = L"\\KernelObjects\\SystemErrorPortReady";
  v7[0] = 48LL;
  v7[2] = v6;
  v7[3] = 0LL;
  Handle = 0LL;
  v10 = 0LL;
  v7[1] = 0LL;
  v8 = 0LL;
  result = NtOpenEvent(&Handle, 1048577LL, v7);
  if ( (int)result >= 0 )
  {
    if ( (_DWORD)v1 == -1 )
    {
      v3 = 1;
    }
    else
    {
      v3 = 0;
      v10 = -10000 * v1;
    }
    v4 = (LARGE_INTEGER *)&v10;
    if ( v3 )
      v4 = 0LL;
    v5 = NtWaitForSingleObject(Handle, 0, v4);
    NtClose(Handle);
    return v5;
  }
  return result;
}
