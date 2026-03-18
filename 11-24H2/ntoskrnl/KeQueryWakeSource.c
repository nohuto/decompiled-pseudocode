/*
 * XREFs of KeQueryWakeSource @ 0x1405B095C
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1403B4CA0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KiGetInterruptObjectFromVector @ 0x1403BF648 (KiGetInterruptObjectFromVector.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall KeQueryWakeSource(__int64 a1, _DWORD *a2, _BYTE *a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // si
  _QWORD *InterruptObjectFromVector; // rax
  _QWORD *v11; // r8
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rcx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  unsigned int v28; // [rsp+48h] [rbp+20h] BYREF

  v28 = 0;
  memset_0(a3, 0, 0x88uLL);
  result = guard_dispatch_icall_no_overrides(&v28, 0LL, v6, v7);
  if ( (int)result >= 0 )
  {
    if ( ((v28 - 209) & 0xFFFFFFFD) != 0 )
    {
      *a2 = 128;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
      InterruptObjectFromVector = KiGetInterruptObjectFromVector(v28);
      v11 = InterruptObjectFromVector;
      if ( InterruptObjectFromVector )
      {
        v12 = 0LL;
        v13 = InterruptObjectFromVector;
        do
        {
          v14 = v13[4];
          if ( v14 || (v14 = v13[3]) != 0 )
            *(_QWORD *)&a3[8 * v12] = v14;
          v15 = v13[20];
          v16 = 0LL;
          if ( v15 )
            v16 = *(_QWORD *)(v15 + 480);
          *(_QWORD *)&a3[8 * v12 + 24] = v16;
          v12 = (unsigned int)(v12 + 1);
          v17 = v13[1];
          if ( !v17 )
            break;
          v13 = (_QWORD *)(v17 - 8);
          if ( v13 == v11 )
            break;
        }
        while ( (unsigned int)v12 < 3 );
      }
      else
      {
        *a2 = 2;
      }
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      return 0LL;
    }
    v18 = *(_DWORD *)a1;
    if ( *(int *)a1 > 7 )
    {
      v24 = v18 - 8;
      if ( !v24 )
      {
        *a2 = 6;
        return 0LL;
      }
      v25 = v24 - 1;
      if ( !v25 )
      {
        *a2 = 7;
        return 0LL;
      }
      v26 = v25 - 1;
      if ( !v26 )
      {
        *a2 = 9;
        return 0LL;
      }
      v27 = v26 - 1;
      if ( !v27 )
      {
        *a2 = 10;
        return 0LL;
      }
      if ( v27 == 1 )
      {
        *a2 = 11;
        return 0LL;
      }
    }
    else
    {
      if ( v18 == 7 )
      {
        *a3 = *(_BYTE *)(a1 + 4);
        a3[2] = *(_BYTE *)(a1 + 5);
        *a2 = 129;
        return 0LL;
      }
      v19 = v18 - 1;
      if ( !v19 )
        goto LABEL_30;
      v20 = v19 - 1;
      if ( !v20 )
        goto LABEL_30;
      v21 = v20 - 1;
      if ( !v21 )
        goto LABEL_30;
      v22 = v21 - 1;
      if ( !v22 )
      {
LABEL_29:
        *a2 = 5;
        return 0LL;
      }
      v23 = v22 - 1;
      if ( !v23 )
      {
LABEL_30:
        *a2 = 8;
        return 0LL;
      }
      if ( v23 == 1 )
        goto LABEL_29;
    }
    *a2 = 1;
    return 0LL;
  }
  if ( (_DWORD)result != -1073741823 )
    return result;
  *a2 = 0;
  return 0LL;
}
