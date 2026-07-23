/*
 * XREFs of PopEnlargeHiberFile @ 0x140750744
 * Callers:
 *     PopTransitionToSleep @ 0x140B67570 (PopTransitionToSleep.c)
 * Callees:
 *     MmGetNumberOfPhysicalPages @ 0x140454120 (MmGetNumberOfPhysicalPages.c)
 *     PopResizeHiberFile @ 0x140A72354 (PopResizeHiberFile.c)
 */

__int64 __fastcall PopEnlargeHiberFile(bool *a1)
{
  __int64 v2; // rbx
  int v3; // r9d
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  qword_140F0D2A8 = qword_140F0BB90;
  v2 = MmGetNumberOfPhysicalPages(0) << 12;
  v3 = PopResizeHiberFile(v2, &v5, &v6);
  if ( v3 >= 0 )
  {
    qword_140F0D2B8 = v5;
    qword_140F0D2C0 = v6;
    qword_140F0D2B0 = v2;
    if ( a1 )
      *a1 = (unsigned int)(100 * v2 / v5) < 0x28;
  }
  return (unsigned int)v3;
}
