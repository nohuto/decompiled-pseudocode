/*
 * XREFs of KiBugCheckProgressCpusFrozen @ 0x1405AFF04
 * Callers:
 *     KeBugCheck2 @ 0x1405AE6F0 (KeBugCheck2.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x14065C840 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall KiBugCheckProgressCpusFrozen(char a1)
{
  __int64 v1; // rdx
  struct _KPRCB *v2; // r8
  char result; // al
  __int128 Src; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+30h] [rbp-28h]

  v1 = 0LL;
  Src = 0LL;
  v5 = 0LL;
  while ( (unsigned int)v1 < (unsigned int)KeNumberProcessors_0 )
  {
    v2 = (struct _KPRCB *)KiProcessorBlock[v1];
    if ( v2 != KeGetCurrentPrcb() )
    {
      result = v2->IpiFrozen & 0xF;
      if ( result != 2 )
        return result;
    }
    v1 = (unsigned int)(v1 + 1);
  }
  *(_QWORD *)&Src = 0x1674C6857LL;
  *((_QWORD *)&Src + 1) = 32LL;
  DWORD1(v5) = -2147483552;
  LODWORD(v5) = (a1 != 0) - 2147483552;
  *((_QWORD *)&v5 + 1) = 24LL;
  return WheaLogInternalEvent(&Src);
}
