/*
 * XREFs of BusApiBuildMixerFunctionUnit @ 0x1400345C0
 * Callers:
 *     USBParseMixerUnit @ 0x140038920 (USBParseMixerUnit.c)
 * Callees:
 *     BusApiBuildFunctionUnit @ 0x14002D1DC (BusApiBuildFunctionUnit.c)
 */

__int64 __fastcall BusApiBuildMixerFunctionUnit(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        int *a6,
        const WCHAR *a7,
        unsigned int a8,
        char *a9)
{
  __int64 v9; // rbx
  int v10; // r10d
  __int64 v11; // rdx
  __int64 v13; // r9
  char v14; // al
  __int64 v16[3]; // [rsp+50h] [rbp-18h] BYREF

  v9 = 0LL;
  v16[0] = 0LL;
  v10 = BusApiBuildFunctionUnit(a1, a2, 5, a3, a4, a5, a6, a7, a8, v16);
  if ( v10 >= 0 )
  {
    v11 = v16[0];
    if ( v16[0] )
    {
      *(_DWORD *)(v16[0] + 68) = a8;
      *(_QWORD *)(v11 + 72) = v11 + 12 * (a5 + 8LL);
      if ( a8 )
      {
        v13 = a8;
        do
        {
          v14 = *a9++;
          *(_BYTE *)(v9 + *(_QWORD *)(v11 + 72)) = v14;
          ++v9;
          --v13;
        }
        while ( v13 );
      }
    }
  }
  return (unsigned int)v10;
}
