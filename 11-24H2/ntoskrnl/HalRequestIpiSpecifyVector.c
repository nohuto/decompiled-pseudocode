/*
 * XREFs of HalRequestIpiSpecifyVector @ 0x14042A540
 * Callers:
 *     HalpReboot @ 0x140542500 (HalpReboot.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x1402C8970 (HalpInterruptSendIpi.c)
 */

__int64 __fastcall HalRequestIpiSpecifyVector(int a1, unsigned __int16 *a2, unsigned int a3)
{
  unsigned __int16 v3; // ax
  int v5; // ecx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+30h] [rbp-18h]

  v3 = 0;
  v7 = 0;
  v6 = 0LL;
  if ( !a1 )
  {
    if ( a2 )
    {
      while ( v3 < *a2 )
      {
        if ( *(_QWORD *)&a2[4 * v3 + 4] )
        {
          LODWORD(v6) = 2;
          *((_QWORD *)&v6 + 1) = a2;
          return HalpInterruptSendIpi((unsigned int *)&v6, a3);
        }
        ++v3;
      }
    }
    return 3221225485LL;
  }
  if ( a1 != 1 && a1 != 2 )
    return 3221225485LL;
  v5 = a1 - 1;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      LODWORD(v6) = 3;
      return HalpInterruptSendIpi((unsigned int *)&v6, a3);
    }
    else
    {
      return HalpInterruptSendIpi((unsigned int *)&v6, a3);
    }
  }
  else
  {
    LODWORD(v6) = 4;
    return HalpInterruptSendIpi((unsigned int *)&v6, a3);
  }
}
