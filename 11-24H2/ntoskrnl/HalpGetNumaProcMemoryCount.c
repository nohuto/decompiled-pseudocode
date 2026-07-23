/*
 * XREFs of HalpGetNumaProcMemoryCount @ 0x140C13460
 * Callers:
 *     HalpNumaSwapP0NodeToFront @ 0x140556280 (HalpNumaSwapP0NodeToFront.c)
 *     HalpNumaInitializeStaticConfiguration @ 0x140C139F8 (HalpNumaInitializeStaticConfiguration.c)
 * Callees:
 *     HalpParseChannelCount @ 0x140565BF0 (HalpParseChannelCount.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     HalpUpdateConfigurationFromMsct @ 0x140C146D0 (HalpUpdateConfigurationFromMsct.c)
 *     HalpVerifySratEntryLengthAndFlag @ 0x140C14A78 (HalpVerifySratEntryLengthAndFlag.c)
 */

char __fastcall HalpGetNumaProcMemoryCount(unsigned int *a1, unsigned __int64 a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v4; // r15
  unsigned int v5; // ebx
  _DWORD *v8; // rsi
  __int64 v9; // r10
  bool v11; // r13
  unsigned __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // r10
  unsigned __int8 *v15; // r11
  int v16; // ecx
  unsigned int v17; // r8d
  _DWORD *v18; // rax
  unsigned int v19; // ecx
  _DWORD *v20; // r8
  __int64 v21; // r10
  _DWORD v23[64]; // [rsp+40h] [rbp-258h] BYREF
  _DWORD v24[64]; // [rsp+140h] [rbp-158h] BYREF

  v4 = HalpAcpiSrat;
  v5 = 0;
  *a1 = 0;
  *a3 = 0;
  *(_DWORD *)a2 = 0;
  v8 = (_DWORD *)a2;
  *a4 = 0;
  v9 = v4 + 48;
  v11 = *(_BYTE *)(v4 + 8) >= 3u;
  v12 = v4 + *(unsigned int *)(v4 + 4);
  while ( v9 + 2 <= v12 )
  {
    v13 = *(unsigned __int8 *)(v9 + 1);
    if ( (unsigned __int8)v13 < 2u || v9 + v13 > v12 )
      break;
    LOBYTE(a2) = v11;
    if ( !(unsigned __int8)HalpVerifySratEntryLengthAndFlag(v9, a2) )
      goto LABEL_24;
    if ( *(_BYTE *)(v4 + 8) == 1 )
    {
      v16 = *v15;
    }
    else if ( *(_BYTE *)v14 )
    {
      if ( *(_BYTE *)v14 == 2 )
        v16 = *(_DWORD *)(v14 + 4);
      else
        v16 = *(_DWORD *)v15;
    }
    else
    {
      v16 = *v15
          + ((*(unsigned __int8 *)(v14 + 9)
            + ((*(unsigned __int8 *)(v14 + 10) + (*(unsigned __int8 *)(v14 + 11) << 8)) << 8)) << 8);
    }
    v17 = *a1;
    a2 = 0LL;
    if ( *a1 )
    {
      v18 = v24;
      do
      {
        if ( v16 == *v18 )
          break;
        a2 = (unsigned int)(a2 + 1);
        ++v18;
      }
      while ( (unsigned int)a2 < v17 );
    }
    if ( (_DWORD)a2 == v17 )
    {
      if ( (_DWORD)a2 == 64 )
        return 0;
      v24[(unsigned int)a2] = v16;
      v23[(unsigned int)a2] = 0;
      *a1 = v17 + 1;
    }
    if ( !*(_BYTE *)v14 )
      goto LABEL_23;
    if ( *(_BYTE *)v14 != 1 )
    {
      if ( *(_BYTE *)v14 != 2 )
        goto LABEL_24;
LABEL_23:
      ++*v8;
      ++v23[(unsigned int)a2];
      goto LABEL_24;
    }
    ++*a3;
LABEL_24:
    v9 = *(unsigned __int8 *)(v14 + 1) + v14;
  }
  if ( *a3 && *v8 )
  {
    if ( HalpAcpiMsct )
      HalpUpdateConfigurationFromMsct((_DWORD)a1, 64, (_DWORD)v8, 0, 0LL, (__int64)v24, (__int64)v23, 0LL);
    if ( HalpSplitLargeNumaNodes )
    {
      v19 = *a1;
      if ( *a1 )
      {
        v20 = v23;
        v21 = v19;
        do
        {
          if ( *v20 > (unsigned int)HalpMaximumGroupSize )
            v5 = (HalpMaximumGroupSize + *v20 - 1) / (unsigned int)HalpMaximumGroupSize + v5 - 1;
          ++v20;
          --v21;
        }
        while ( v21 );
      }
      *a1 = v5 + v19;
    }
    if ( *a1 <= 0x40 )
    {
      *a4 = HalpParseChannelCount();
      return 1;
    }
  }
  return 0;
}
