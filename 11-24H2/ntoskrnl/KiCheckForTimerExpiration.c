/*
 * XREFs of KiCheckForTimerExpiration @ 0x1402AB5D0
 * Callers:
 *     KeAccumulateTicks @ 0x1402AAEB0 (KeAccumulateTicks.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     KiSetClockIntervalOneShot @ 0x1402AC34C (KiSetClockIntervalOneShot.c)
 *     KiSetDpcRequestFlag @ 0x1402AC800 (KiSetDpcRequestFlag.c)
 *     KiResetClockIntervalOneShot @ 0x1402AD63C (KiResetClockIntervalOneShot.c)
 *     HalpInterruptSendIpi @ 0x1402C8970 (HalpInterruptSendIpi.c)
 *     HalpDisableInterrupts @ 0x1402C9320 (HalpDisableInterrupts.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall KiCheckForTimerExpiration(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE *v4; // r14
  _BYTE *v5; // rbx
  bool v6; // si
  __int64 v7; // r15
  unsigned __int64 v8; // rbp
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // r13
  bool v14; // r10
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int8 CurrentIrql; // r13
  int *v21; // rbx
  __int64 v22; // r11
  int v23; // ecx
  unsigned int v24; // r8d
  unsigned __int64 v25; // rcx
  unsigned int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  char v29; // al
  __int64 v30; // r8
  int v31; // edx
  char v32; // r9
  __int16 v33; // cx
  unsigned int v34; // [rsp+30h] [rbp-78h]
  unsigned int v35; // [rsp+34h] [rbp-74h]
  int v36; // [rsp+38h] [rbp-70h] BYREF
  __int128 v37; // [rsp+3Ch] [rbp-6Ch]
  __int128 v38; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v39[2]; // [rsp+60h] [rbp-48h] BYREF

  v4 = a1 + 14524;
  v5 = a1 + 33;
  v6 = 0;
  v7 = 0LL;
  v35 = a2;
  v38 = 0LL;
  v8 = MEMORY[0xFFFFF78000000008];
  v10 = 1LL;
  if ( (a1[14524] & 8) != 0 )
    goto LABEL_23;
  if ( KiSerializeTimerExpiration )
  {
    if ( !*v5 )
      goto LABEL_23;
    v11 = KiProcessorBlock[0];
  }
  else
  {
    v11 = (__int64)a1;
  }
  a4 = v11 + 16640;
  if ( v11 == -16640 )
    goto LABEL_23;
  a2 = KiLastNonHrTimerExpiration;
  v12 = KiLastPseudoHrTimerExpiration;
  v13 = *(_QWORD *)(v11 + 33536);
  v14 = *(_QWORD *)(v11 + 33544) != KiLastNonHrTimerExpiration;
  if ( KiGlobalTimerResolutionRequests )
    v14 = v13 != KiLastPseudoHrTimerExpiration;
  if ( v14 || v13 != KiLastPseudoHrTimerExpiration )
  {
    v21 = (int *)(v11 + 33552);
    v22 = MEMORY[0xFFFFF78000000008] >> 18;
    v34 = -1;
    LODWORD(a2) = 0;
    while ( 1 )
    {
      v23 = *v21;
      if ( (unsigned int)(v22 - *v21) >= 0x100 )
        LODWORD(v22) = v23 + 255;
      v24 = v23 - 1;
      while ( 1 )
      {
        v25 = *(_QWORD *)(32 * (v7 + (unsigned __int8)++v24) + a4 + 536);
        if ( (_DWORD)a2 != 1 || v14 )
          break;
        if ( v8 >= v25 )
        {
          v26 = v34;
          if ( v34 >= v24 )
            v26 = v24;
          v34 = v26;
          if ( v8 + (unsigned int)KePseudoHrTimeIncrement > (unsigned int)KeNonHrTimeIncrement + v25 )
          {
            v24 = v26;
            v6 = 1;
            v14 = 1;
            KiLastNonHrTimerExpiration = v8;
            goto LABEL_48;
          }
        }
LABEL_46:
        if ( v24 == (_DWORD)v22 )
          goto LABEL_47;
      }
      if ( v8 < v25 )
        goto LABEL_46;
      v6 = 1;
LABEL_47:
      if ( !(_DWORD)a2 || v14 )
LABEL_48:
        *(_DWORD *)(a4 + 4LL * (unsigned int)a2 + 16912) = v24;
      a2 = (unsigned int)(a2 + 1);
      ++v21;
      v7 += 256LL;
      if ( (unsigned int)a2 >= 2 )
      {
        v10 = 1LL;
        break;
      }
    }
  }
  v5 = a1 + 33;
  if ( !a1[33] )
    goto LABEL_23;
  if ( !v14
    && v13 != v12
    && v8 >= qword_140F22250
    && v8 + (unsigned int)KePseudoHrTimeIncrement > (unsigned __int64)(unsigned int)KeNonHrTimeIncrement
                                                  + qword_140F22250 )
  {
    KiLastNonHrTimerExpiration = v8;
    goto LABEL_21;
  }
  v5 = a1 + 33;
  if ( v6 )
    goto LABEL_23;
  if ( v14 )
  {
    v6 = KiNextTimer2DueTime <= v8;
    goto LABEL_22;
  }
  if ( v13 != v12 && qword_140F22238 <= v8 )
    goto LABEL_21;
  v5 = a1 + 33;
  v15 = qword_140F22208;
  if ( qword_140F22220 < (unsigned __int64)qword_140F22208 )
    v15 = qword_140F22220;
  if ( v15 <= v8 )
  {
LABEL_21:
    v6 = 1;
LABEL_22:
    v5 = a1 + 33;
  }
LABEL_23:
  if ( !*v5 )
    goto LABEL_24;
  v16 = qword_140F22208;
  v17 = v8 + KeMaximumIncrement;
  if ( qword_140F22220 < (unsigned __int64)qword_140F22208 )
    v16 = qword_140F22220;
  if ( v16 > v8 )
  {
    v18 = KiClockOwnerOneShotRequest;
    v19 = -1LL;
    if ( !KiClockOwnerOneShotRequest )
      v18 = -1LL;
    if ( v18 != v16 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15LL);
      if ( v17 <= v16 )
        KiResetClockIntervalOneShot(v19, a2, v10);
      else
        KiSetClockIntervalOneShot(v16, v8, v10);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
LABEL_24:
    if ( !v6 )
      goto LABEL_25;
  }
  if ( (KiSetDpcRequestFlag(v4, 8LL, v10, a4) & 0xA9) == 0 )
  {
    if ( a1[32] )
    {
      a1[6] = 1;
    }
    else
    {
      v37 = 0LL;
      if ( KiAmdTprLowerInterruptDelayDynamicWorkaround )
      {
        v29 = HalpDisableInterrupts(v28, v27, KeGetCurrentPrcb());
        v31 = *(_DWORD *)(v30 + 168);
        v32 = v29;
        *(_DWORD *)(v30 + 168) = v31 | 4;
        if ( !v31 )
          __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
        if ( v32 )
          _enable();
      }
      v36 = 5;
      HalpInterruptSendIpi(&v36, 47LL);
    }
  }
LABEL_25:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x40000) != 0 && KeGetCurrentIrql() == 13 )
  {
    *(_QWORD *)&v38 = v8;
    v33 = 0;
    WORD4(v38) = 0;
    if ( *v5 )
    {
      v33 = 1;
      WORD4(v38) = 1;
    }
    if ( (*v4 & 8) != 0 )
    {
      v33 |= 8u;
      WORD4(v38) = v33;
    }
    if ( v35 <= 1 )
      WORD4(v38) = v33 | 0x10;
    v39[1] = 16LL;
    v39[0] = &v38;
    EtwTraceKernelEvent((int)v39, 1, 0x40040000u, 3919, 5245442);
  }
}
