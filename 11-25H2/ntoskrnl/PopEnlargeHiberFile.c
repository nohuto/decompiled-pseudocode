/*
 * XREFs of PopEnlargeHiberFile @ 0x140746360
 * Callers:
 *     PopTransitionToSleep @ 0x140B55320 (PopTransitionToSleep.c)
 * Callees:
 *     PopResizeHiberFile @ 0x140A76280 (PopResizeHiberFile.c)
 */

__int64 __fastcall PopEnlargeHiberFile(bool *a1)
{
  __int64 v2; // rbx
  int v3; // r9d
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  qword_140F0C988 = qword_140F0AD70;
  v2 = *(_QWORD *)(*(_QWORD *)qword_140E2FD48 + 18512LL) << 12;
  v3 = PopResizeHiberFile(v2, &v5, &v6);
  if ( v3 >= 0 )
  {
    qword_140F0C998 = v5;
    qword_140F0C9A0 = v6;
    qword_140F0C990 = v2;
    if ( a1 )
      *a1 = (unsigned int)(100 * v2 / v5) < 0x28;
  }
  return (unsigned int)v3;
}
