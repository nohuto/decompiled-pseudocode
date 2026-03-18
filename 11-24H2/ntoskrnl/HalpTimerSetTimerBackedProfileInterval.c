/*
 * XREFs of HalpTimerSetTimerBackedProfileInterval @ 0x14054A044
 * Callers:
 *     DefaultSetInterval @ 0x14054C4E0 (DefaultSetInterval.c)
 * Callees:
 *     HalpSetTimer @ 0x1403BC5B0 (HalpSetTimer.c)
 */

unsigned __int64 __fastcall HalpTimerSetTimerBackedProfileInterval(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int Number; // ebx
  unsigned __int64 v6; // rdx
  int v7; // eax
  unsigned __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0LL;
  if ( !HalpProfileTimer )
    return 0LL;
  Number = KeGetPcr()->Prcb.Number;
  if ( HalpProfilingActive )
  {
    LOBYTE(a4) = 1;
    if ( (*(_DWORD *)(HalpProfileTimer + 224) & 1) == 0 && Number )
    {
      v6 = *(unsigned int *)(HalpProfileData + 24);
LABEL_9:
      *(_DWORD *)(296LL * Number + HalpProfileData + 24) = v6;
      return v6;
    }
  }
  else
  {
    a4 = 0LL;
  }
  v7 = HalpSetTimer(HalpProfileTimer, 2u, a1, a4, &v8);
  v6 = v8;
  if ( v7 >= 0 )
    goto LABEL_9;
  return v6;
}
