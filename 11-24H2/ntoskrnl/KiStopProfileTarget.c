/*
 * XREFs of KiStopProfileTarget @ 0x1403A55C0
 * Callers:
 *     KeStopProfile @ 0x1405BC7A4 (KeStopProfile.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     KeSubtractAffinityEx2 @ 0x1402B2C40 (KeSubtractAffinityEx2.c)
 *     KeIsEmptyAffinityEx @ 0x140371960 (KeIsEmptyAffinityEx.c)
 *     KeCheckProcessorAffinityEx @ 0x1403A4AD0 (KeCheckProcessorAffinityEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     HalStopProfileInterrupt @ 0x140542920 (HalStopProfileInterrupt.c)
 */

ULONG_PTR __fastcall KiStopProfileTarget(_QWORD *Argument)
{
  __int64 v1; // rbp
  _QWORD *v2; // rdi
  __int64 v3; // rdx
  unsigned __int8 CurrentIrql; // r12
  __int64 v5; // rdx
  ULONG_PTR result; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // rsi
  unsigned __int16 *v12; // r14
  unsigned __int16 v13; // bx
  unsigned __int64 v14; // r15
  unsigned int v15; // ecx
  unsigned __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  signed __int32 v21[18]; // [rsp+0h] [rbp-48h] BYREF

  v1 = *Argument;
  v2 = Argument;
  v3 = (unsigned __int8)KiProfileIrql;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8((unsigned __int8)KiProfileIrql);
  if ( KiIrqlFlags )
  {
    LOBYTE(Argument) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(Argument, v3);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2 + 2, 0xFFFFFFFF) == 1 && *(_BYTE *)(v1 + 610) )
  {
    v7 = v1 + 8;
    *(_BYTE *)(v1 + 610) = 0;
    v8 = *(_QWORD *)(v1 + 8);
    if ( v8 != v1 + 8 )
    {
      v9 = *(_QWORD **)(v1 + 16);
      if ( *(_QWORD *)(v8 + 8) != v7 || *v9 != v7 )
LABEL_15:
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
    }
    v10 = (_QWORD *)KiProfileSourceListHead;
    do
    {
      v11 = v10;
      v10 = (_QWORD *)*v10;
    }
    while ( *((_DWORD *)v11 + 4) != *(__int16 *)(v1 + 608) );
    v12 = (unsigned __int16 *)(v1 + 336);
    v13 = 0;
    v14 = *(_QWORD *)(v1 + 344);
LABEL_20:
    if ( v1 == -336 )
      v15 = v13 + 1;
    else
      v15 = *v12;
    while ( 1 )
    {
      if ( v14 )
      {
        _BitScanForward64(&v16, v14);
        v14 &= ~(1LL << v16);
        v17 = *((unsigned int *)qword_140F22998 + 64 * v13 + (unsigned __int8)v16);
        if ( (*((_DWORD *)v11 + v17 + 72))-- == 1 )
          KeAddProcessorAffinityEx((unsigned __int16 *)v2 + 8, v17);
        goto LABEL_20;
      }
      if ( ++v13 >= v15 )
        break;
      v14 = *(_QWORD *)&v12[4 * v13 + 4];
    }
    _InterlockedOr(v21, 0);
    KeSubtractAffinityEx2(
      (struct _KAFFINITY_EX *)(v11 + 3),
      (struct _KAFFINITY_EX *)(v2 + 2),
      (struct _KAFFINITY_EX *)(v11 + 3));
    if ( (unsigned int)KeIsEmptyAffinityEx((unsigned __int16 *)v11 + 12) )
    {
      v19 = *v11;
      v20 = (_QWORD *)v11[1];
      if ( *(_QWORD **)(*v11 + 8LL) != v11 || (_QWORD *)*v20 != v11 )
        goto LABEL_15;
      *v20 = v19;
      *(_QWORD *)(v19 + 8) = v20;
      v2[35] = v11;
    }
    *((_BYTE *)v2 + 288) = 1;
  }
  _InterlockedDecrement((volatile signed __int32 *)v2 + 3);
  while ( *((int *)v2 + 3) > 0 )
    _mm_pause();
  if ( (unsigned int)KeCheckProcessorAffinityEx((unsigned __int16 *)v2 + 8, KeGetCurrentPrcb()->Number) )
    HalStopProfileInterrupt((unsigned int)*(__int16 *)(v1 + 608));
  if ( KiIrqlFlags )
  {
    LOBYTE(v5) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
