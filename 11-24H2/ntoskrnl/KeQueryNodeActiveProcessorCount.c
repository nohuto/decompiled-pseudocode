/*
 * XREFs of KeQueryNodeActiveProcessorCount @ 0x1405B8070
 * Callers:
 *     <none>
 * Callees:
 *     KiQuerySubNodeActiveAffinity @ 0x14026FE00 (KiQuerySubNodeActiveAffinity.c)
 *     KeEnumerateNextSchedulerSubNodeInNode @ 0x14032FEC0 (KeEnumerateNextSchedulerSubNodeInNode.c)
 *     KeInitializeSchedulerSubNodeEnumerationContext @ 0x140412310 (KeInitializeSchedulerSubNodeEnumerationContext.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall KeQueryNodeActiveProcessorCount(unsigned __int16 a1)
{
  __int64 result; // rax
  unsigned int v2; // ebx
  unsigned __int16 v3; // [rsp+20h] [rbp-30h] BYREF
  __int64 v4; // [rsp+28h] [rbp-28h] BYREF
  __int128 v5; // [rsp+30h] [rbp-20h] BYREF
  __int64 v6; // [rsp+40h] [rbp-10h]

  result = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v4 = 0LL;
  v3 = 0;
  if ( a1 < (unsigned __int16)KeNumberNodes )
  {
    v2 = 0;
    KeInitializeSchedulerSubNodeEnumerationContext(&v5, KeNodeBlock[a1]);
    while ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode(&v5, &v4) )
    {
      KiQuerySubNodeActiveAffinity(v4, 0LL, &v3);
      v2 += v3;
    }
    return v2;
  }
  return result;
}
