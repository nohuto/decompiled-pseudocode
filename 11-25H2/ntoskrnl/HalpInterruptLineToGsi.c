/*
 * XREFs of HalpInterruptLineToGsi @ 0x140444838
 * Callers:
 *     HalpInterruptConnect @ 0x14053E2A8 (HalpInterruptConnect.c)
 *     HalpTimerConfigureInterrupt @ 0x140544A90 (HalpTimerConfigureInterrupt.c)
 *     HalpTimerUnmapInterrupt @ 0x140546120 (HalpTimerUnmapInterrupt.c)
 * Callees:
 *     HalpInterruptLookupController @ 0x140445B74 (HalpInterruptLookupController.c)
 */

__int64 __fastcall HalpInterruptLineToGsi(unsigned int *a1, _DWORD *a2)
{
  __int64 v2; // rax
  _DWORD *v3; // r10
  __int64 v4; // r11
  _QWORD *v5; // r9
  _QWORD *v6; // r8
  int v7; // eax
  _DWORD *v8; // rcx
  int v9; // edx
  int v10; // eax
  int v12; // edx

  *a2 = -1;
  v2 = HalpInterruptLookupController(*a1);
  if ( v2 )
  {
    v5 = (_QWORD *)(v2 + 264);
    v6 = *(_QWORD **)(v2 + 264);
    while ( v6 != v5 )
    {
      v7 = *(_DWORD *)(v4 + 4);
      v8 = v6;
      v6 = (_QWORD *)*v6;
      v9 = v8[5];
      if ( v9 <= v7 && v8[6] > v7 )
      {
        v10 = v7 - v9;
        if ( v8 )
        {
          v12 = v8[7];
          if ( v12 != -1 )
          {
            *v3 = v12 + v10;
            return 0LL;
          }
        }
        return 3221225485LL;
      }
    }
  }
  return 3221225485LL;
}
