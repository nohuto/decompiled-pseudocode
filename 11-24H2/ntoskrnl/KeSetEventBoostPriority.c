/*
 * XREFs of KeSetEventBoostPriority @ 0x1404F7790
 * Callers:
 *     NtSetEventBoostPriority @ 0x140A98090 (NtSetEventBoostPriority.c)
 * Callees:
 *     KeSetEventBoostPriorityEx @ 0x1403D8BE8 (KeSetEventBoostPriorityEx.c)
 */

__int64 __fastcall KeSetEventBoostPriority(volatile signed __int32 *a1, char *a2)
{
  char *v2; // rax
  char v4; // [rsp+48h] [rbp+10h] BYREF

  v2 = &v4;
  if ( a2 )
    v2 = a2;
  return KeSetEventBoostPriorityEx(a1, (__int64)v2, 0LL, 0LL, 1, 0);
}
