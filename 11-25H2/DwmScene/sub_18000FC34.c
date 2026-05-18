/*
 * XREFs of sub_18000FC34 @ 0x18000FC34
 * Callers:
 *     sub_18000DA9C @ 0x18000DA9C (sub_18000DA9C.c)
 * Callees:
 *     sub_18000E1C8 @ 0x18000E1C8 (sub_18000E1C8.c)
 *     sub_18000FCB4 @ 0x18000FCB4 (sub_18000FCB4.c)
 */

__int64 __fastcall sub_18000FC34(__int64 a1, LONG a2, LONG a3, const WCHAR *a4)
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
    sub_18000FCB4(a1, Semaphore);
  }
  else
  {
    return (unsigned int)sub_18000E1C8(v7, v6, v9, v10);
  }
  return v5;
}
