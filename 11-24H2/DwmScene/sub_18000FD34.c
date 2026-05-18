/*
 * XREFs of sub_18000FD34 @ 0x18000FD34
 * Callers:
 *     sub_18000DB7C @ 0x18000DB7C (sub_18000DB7C.c)
 * Callees:
 *     sub_18000E268 @ 0x18000E268 (sub_18000E268.c)
 *     sub_18000FDB4 @ 0x18000FDB4 (sub_18000FDB4.c)
 */

__int64 __fastcall sub_18000FD34(__int64 a1, LONG a2, LONG a3, const WCHAR *a4)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  HANDLE Semaphore; // rdi
  __int64 v9; // r8
  __int64 v10; // r9

  v5 = 0;
  Semaphore = CreateSemaphoreExW(0LL, a2, a3, a4, 0, 0x1F0003u);
  if ( Semaphore )
  {
    GetLastError();
    sub_18000FDB4(a1, Semaphore);
  }
  else
  {
    return (unsigned int)sub_18000E268(v7, v6, v9, v10);
  }
  return v5;
}
