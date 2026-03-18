/*
 * XREFs of KiStopProfileTarget @ 0x140269F30
 * Callers:
 *     KeStopProfile @ 0x1405BB340 (KeStopProfile.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140256160 (KeAddProcessorAffinityEx.c)
 *     KeSubtractAffinityEx2 @ 0x140269E70 (KeSubtractAffinityEx2.c)
 *     KeCheckProcessorAffinityEx @ 0x14026BAA0 (KeCheckProcessorAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x140377880 (KeIsEmptyAffinityEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     HalStopProfileInterrupt @ 0x140542770 (HalStopProfileInterrupt.c)
 */

ULONG_PTR __fastcall KiStopProfileTarget(_QWORD *Argument, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  _QWORD *v5; // rdi
  unsigned __int8 CurrentIrql; // r12
  __int64 v7; // rdx
  ULONG_PTR result; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  _QWORD *v13; // rsi
  unsigned __int16 *v14; // r14
  unsigned __int16 v15; // bx
  unsigned __int64 v16; // r15
  unsigned int v17; // ecx
  unsigned __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  signed __int32 v23[18]; // [rsp+0h] [rbp-48h] BYREF

  v4 = *Argument;
  v5 = Argument;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8((unsigned __int8)KiProfileIrql);
  if ( KiIrqlFlags )
  {
    LOBYTE(Argument) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(Argument);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5 + 2, 0xFFFFFFFF) == 1 && *(_BYTE *)(v4 + 610) )
  {
    v9 = v4 + 8;
    *(_BYTE *)(v4 + 610) = 0;
    v10 = *(_QWORD *)(v4 + 8);
    if ( v10 != v4 + 8 )
    {
      v11 = *(_QWORD **)(v4 + 16);
      if ( *(_QWORD *)(v10 + 8) != v9 || *v11 != v9 )
LABEL_15:
        __fastfail(3u);
      *v11 = v10;
      *(_QWORD *)(v10 + 8) = v11;
    }
    v12 = (_QWORD *)KiProfileSourceListHead;
    do
    {
      v13 = v12;
      v12 = (_QWORD *)*v12;
    }
    while ( *((_DWORD *)v13 + 4) != *(__int16 *)(v4 + 608) );
    v14 = (unsigned __int16 *)(v4 + 336);
    v15 = 0;
    v16 = *(_QWORD *)(v4 + 344);
LABEL_20:
    if ( v4 == -336 )
      v17 = v15 + 1;
    else
      v17 = *v14;
    while ( 1 )
    {
      if ( v16 )
      {
        _BitScanForward64(&v18, v16);
        v16 &= ~(1LL << v18);
        v19 = *((unsigned int *)qword_140F216A8 + 64 * v15 + (unsigned __int8)v18);
        if ( (*((_DWORD *)v13 + v19 + 72))-- == 1 )
          KeAddProcessorAffinityEx((unsigned __int16 *)v5 + 8, v19);
        goto LABEL_20;
      }
      if ( ++v15 >= v17 )
        break;
      v16 = *(_QWORD *)&v14[4 * v15 + 4];
    }
    _InterlockedOr(v23, 0);
    KeSubtractAffinityEx2(
      (struct _KAFFINITY_EX *)(v13 + 3),
      (struct _KAFFINITY_EX *)(v5 + 2),
      (struct _KAFFINITY_EX *)(v13 + 3));
    if ( (unsigned int)KeIsEmptyAffinityEx(v13 + 3) )
    {
      v21 = *v13;
      v22 = (_QWORD *)v13[1];
      if ( *(_QWORD **)(*v13 + 8LL) != v13 || (_QWORD *)*v22 != v13 )
        goto LABEL_15;
      *v22 = v21;
      *(_QWORD *)(v21 + 8) = v22;
      v5[35] = v13;
    }
    *((_BYTE *)v5 + 288) = 1;
  }
  _InterlockedDecrement((volatile signed __int32 *)v5 + 3);
  while ( *((int *)v5 + 3) > 0 )
    _mm_pause();
  if ( (unsigned int)KeCheckProcessorAffinityEx(v5 + 2, KeGetCurrentPrcb()->Number, a3, a4) )
    HalStopProfileInterrupt((unsigned int)*(__int16 *)(v4 + 608));
  if ( KiIrqlFlags )
  {
    LOBYTE(v7) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
