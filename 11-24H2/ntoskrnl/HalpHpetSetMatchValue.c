/*
 * XREFs of HalpHpetSetMatchValue @ 0x14049D89C
 * Callers:
 *     HalpHpetArmTimer @ 0x14049D850 (HalpHpetArmTimer.c)
 *     HalpHpetAcknowledgeInterrupt @ 0x1404A99E0 (HalpHpetAcknowledgeInterrupt.c)
 * Callees:
 *     HalSetTimerProblem @ 0x1404F8640 (HalSetTimerProblem.c)
 */

__int64 __fastcall HalpHpetSetMatchValue(int *a1, int a2, char a3)
{
  unsigned int v3; // edi
  __int64 v4; // r13
  char v5; // r10
  __int64 v6; // r15
  unsigned int v7; // r8d
  unsigned int v9; // ebp
  unsigned int *v10; // r14
  int *v11; // rdx
  unsigned int v13; // ebx
  int v14; // r12d
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  __int64 result; // rax
  signed __int32 v18[22]; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v19; // [rsp+60h] [rbp+8h]
  int *v21; // [rsp+78h] [rbp+20h]

  v3 = 0;
  v4 = HalpHpetBaseAddress;
  v5 = a3;
  v6 = 32LL * *a1;
  v7 = a1[4];
  v19 = v7;
  v9 = 10;
  v10 = (unsigned int *)(HalpHpetBaseAddress + 32 * (*a1 + 8LL));
  v11 = a1 + 2;
  v13 = 0;
  do
  {
    v21 = v11;
    v14 = v7 + a2;
    if ( !v5 )
    {
      v11 = a1 + 2;
      v21 = a1 + 2;
      v15 = *v10 & 0xFFFFFEB1 | 0x14C;
      if ( a1[2] != 2 )
        v15 = *v10 & 0xFFFFFEB1 | 0x104;
      v16 = ((a1[1] & 0x1F) << 9) | v15 & 0xFFFF81FF;
      *v10 = v16;
      _InterlockedOr(v18, 0);
      v13 = v16 & 0xFFFFFFBF;
    }
    *(_DWORD *)(v6 + v4 + 264) = v14;
    _InterlockedOr(v18, 0);
    if ( v5 )
    {
      v11 = a1 + 2;
    }
    else
    {
      if ( *v11 == 2 )
      {
        if ( !*((_BYTE *)a1 + 12) )
        {
          HalSetTimerProblem(a1, 2LL);
          v11 = v21;
          v7 = v19;
          v5 = a3;
        }
        v13 |= 8u;
        *v10 = v13;
        _InterlockedOr(v18, 0);
        *(_DWORD *)(v6 + v4 + 264) = a1[4];
        _InterlockedOr(v18, 0);
        *v10 = v13;
        _InterlockedOr(v18, 0);
        *(_DWORD *)(v6 + v4 + 264) = a1[4];
        _InterlockedOr(v18, 0);
        *(_DWORD *)(v6 + v4 + 264) = a1[4];
      }
      else
      {
        *v10 = v13;
      }
      _InterlockedOr(v18, 0);
      a1[8] = v13;
    }
    a2 = *(_DWORD *)(HalpHpetBaseAddress + 240);
    if ( v14 - a2 <= v7
      && v14 - a2 >= (unsigned int)HalpHpetComparatorLatchDelay
      && *(_DWORD *)(v6 + v4 + 264) != 2 * v14 )
    {
      break;
    }
    v7 = 1 << v9++;
    v19 = v7;
  }
  while ( v9 < 0x1F );
  if ( v9 != 10 )
  {
    if ( v9 == 31 )
    {
      HalSetTimerProblem(a1, 6LL);
      v3 = -1073741823;
    }
    ++HalpHpetDebugTimerArm[v9 - 10];
  }
  result = v3;
  a1[5] = v14;
  return result;
}
