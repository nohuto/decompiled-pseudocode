/*
 * XREFs of xtow_s @ 0x140500C80
 * Callers:
 *     _itow_s @ 0x140500AD0 (_itow_s.c)
 *     _ultow_s @ 0x140500B20 (_ultow_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14048E2E0 (xHalTimerWatchdogStop.c)
 */

__int64 __fastcall xtow_s(unsigned int a1, __int16 *a2, unsigned __int64 a3, unsigned int a4, int a5)
{
  unsigned __int64 v10; // rdi
  __int16 *v11; // rcx
  __int16 *v12; // r8
  _WORD *v13; // rsi
  __int16 *v14; // r9
  unsigned int v15; // edx
  __int16 v16; // ax
  __int16 v17; // cx

  if ( !a2 || !a3 )
    goto LABEL_18;
  *a2 = 0;
  if ( a3 <= (unsigned __int64)(a5 != 0) + 1 )
  {
LABEL_4:
    xHalTimerWatchdogStop();
    return 34LL;
  }
  if ( a4 - 2 <= 0x22 )
  {
    v10 = 0LL;
    v11 = a2;
    if ( a5 )
    {
      *a2 = 45;
      v11 = a2 + 1;
      v10 = 1LL;
      a1 = -a1;
    }
    v12 = v11;
    do
    {
      v13 = v11 + 1;
      v14 = v11;
      v15 = a1 % a4;
      a1 /= a4;
      v16 = 87;
      if ( v15 <= 9 )
        v16 = 48;
      ++v10;
      *v11 = v15 + v16;
      if ( !a1 )
        break;
      ++v11;
    }
    while ( v10 < a3 );
    if ( v10 >= a3 )
    {
      *a2 = 0;
      goto LABEL_4;
    }
    *v13 = 0;
    do
    {
      v17 = *v14;
      *v14-- = *v12;
      *v12++ = v17;
    }
    while ( v12 < v14 );
    return 0LL;
  }
  else
  {
LABEL_18:
    xHalTimerWatchdogStop();
    return 22LL;
  }
}
