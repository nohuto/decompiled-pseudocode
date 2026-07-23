/*
 * XREFs of KeQueryWakeSource @ 0x1405AD8CC
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140371030 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KiGetInterruptObjectFromVector @ 0x1403AE208 (KiGetInterruptObjectFromVector.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KeQueryWakeSource(__int64 a1, _DWORD *a2, _BYTE *a3)
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // si
  _QWORD *InterruptObjectFromVector; // rax
  _QWORD *v9; // r8
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rcx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  unsigned int v26; // [rsp+48h] [rbp+20h] BYREF

  v26 = 0;
  memset_0(a3, 0, 0x88uLL);
  result = guard_dispatch_icall_no_overrides(&v26, 0LL);
  if ( (int)result >= 0 )
  {
    if ( ((v26 - 209) & 0xFFFFFFFD) != 0 )
    {
      *a2 = 128;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
      InterruptObjectFromVector = KiGetInterruptObjectFromVector(v26);
      v9 = InterruptObjectFromVector;
      if ( InterruptObjectFromVector )
      {
        v10 = 0LL;
        v11 = InterruptObjectFromVector;
        do
        {
          v12 = v11[4];
          if ( v12 || (v12 = v11[3]) != 0 )
            *(_QWORD *)&a3[8 * v10] = v12;
          v13 = v11[20];
          v14 = 0LL;
          if ( v13 )
            v14 = *(_QWORD *)(v13 + 480);
          *(_QWORD *)&a3[8 * v10 + 24] = v14;
          v10 = (unsigned int)(v10 + 1);
          v15 = v11[1];
          if ( !v15 )
            break;
          v11 = (_QWORD *)(v15 - 8);
          if ( v11 == v9 )
            break;
        }
        while ( (unsigned int)v10 < 3 );
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
    v16 = *(_DWORD *)a1;
    if ( *(int *)a1 > 7 )
    {
      v22 = v16 - 8;
      if ( !v22 )
      {
        *a2 = 6;
        return 0LL;
      }
      v23 = v22 - 1;
      if ( !v23 )
      {
        *a2 = 7;
        return 0LL;
      }
      v24 = v23 - 1;
      if ( !v24 )
      {
        *a2 = 9;
        return 0LL;
      }
      v25 = v24 - 1;
      if ( !v25 )
      {
        *a2 = 10;
        return 0LL;
      }
      if ( v25 == 1 )
      {
        *a2 = 11;
        return 0LL;
      }
    }
    else
    {
      if ( v16 == 7 )
      {
        *a3 = *(_BYTE *)(a1 + 4);
        a3[2] = *(_BYTE *)(a1 + 5);
        *a2 = 129;
        return 0LL;
      }
      v17 = v16 - 1;
      if ( !v17 )
        goto LABEL_30;
      v18 = v17 - 1;
      if ( !v18 )
        goto LABEL_30;
      v19 = v18 - 1;
      if ( !v19 )
        goto LABEL_30;
      v20 = v19 - 1;
      if ( !v20 )
      {
LABEL_29:
        *a2 = 5;
        return 0LL;
      }
      v21 = v20 - 1;
      if ( !v21 )
      {
LABEL_30:
        *a2 = 8;
        return 0LL;
      }
      if ( v21 == 1 )
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
