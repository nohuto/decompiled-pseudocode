/*
 * XREFs of KiAdjustTimerDueTimes @ 0x1404E0430
 * Callers:
 *     KiSetSystemTimeDpc @ 0x140477490 (KiSetSystemTimeDpc.c)
 *     KiAdjustTimersAfterDripsExit @ 0x1405B76D8 (KiAdjustTimersAfterDripsExit.c)
 * Callees:
 *     KiInsertTimerTable @ 0x140316F50 (KiInsertTimerTable.c)
 *     KiTimerWaitTest @ 0x140317320 (KiTimerWaitTest.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     KiRemoveEntryTimer @ 0x1403FC130 (KiRemoveEntryTimer.c)
 *     KiAdjustTimer2DueTimes @ 0x140449E60 (KiAdjustTimer2DueTimes.c)
 *     KiDecodeTolerableDelayValue @ 0x14046BE58 (KiDecodeTolerableDelayValue.c)
 *     KiTraceSetTimer @ 0x140471C1C (KiTraceSetTimer.c)
 *     Feature_RebaseTimersAfterTimeAdjustments__private_IsEnabledNoReportingNoInline @ 0x1405C2018 (Feature_RebaseTimersAfterTimeAdjustments__private_IsEnabledNoReportingNoInline.c)
 */

__int64 __fastcall KiAdjustTimerDueTimes(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int32 *v4; // r12
  unsigned int i; // r15d
  unsigned int v6; // r14d
  volatile signed __int32 *v7; // rbx
  _QWORD **v8; // r13
  _QWORD *v9; // rdi
  volatile signed __int64 *v10; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  _QWORD *v13; // rsi
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int8 v25; // cl
  unsigned __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rbx
  __int64 result; // rax
  char *v30; // [rsp+20h] [rbp-58h]
  unsigned int v31; // [rsp+30h] [rbp-48h] BYREF
  volatile signed __int32 *v32; // [rsp+38h] [rbp-40h] BYREF
  _QWORD *v33; // [rsp+40h] [rbp-38h] BYREF
  _QWORD **v34; // [rsp+48h] [rbp-30h]
  __int128 v35; // [rsp+50h] [rbp-28h]
  __int64 v36; // [rsp+60h] [rbp-18h]
  char v40; // [rsp+D8h] [rbp+60h] BYREF

  v34 = &v33;
  v4 = (volatile signed __int32 *)(a2 + 512);
  v40 = 0;
  v33 = &v33;
  for ( i = 0; i < 2; ++i )
  {
    v6 = 0;
    v7 = v4;
    do
    {
      v31 = 0;
      v8 = (_QWORD **)(v7 + 2);
      while ( _interlockedbittestandset64(v7, 0LL) )
      {
        do
          KeYieldProcessorEx(&v31);
        while ( *(_QWORD *)v7 );
      }
      v9 = *v8;
      v10 = (volatile signed __int64 *)v7;
      v11 = a3;
      v32 = v7;
      if ( v9 != v8 )
      {
        do
        {
          v12 = (__int64)(v9 - 4);
          LOBYTE(a4) = *((_BYTE *)v9 - 31);
          v13 = v9;
          v9 = (_QWORD *)*v9;
          if ( (a4 & 1) != *(_BYTE *)v11 && (!*(_BYTE *)v11 || (a4 & 2) == 0) )
          {
            KiRemoveEntryTimer(a2, v12, v6, (volatile signed __int64 **)&v32);
            v14 = v34;
            if ( *v34 != &v33 )
              goto LABEL_43;
            v11 = a3;
            *v13 = &v33;
            v13[1] = v14;
            *v14 = v13;
            v34 = (_QWORD **)v13;
          }
        }
        while ( v9 != v8 );
        v10 = (volatile signed __int64 *)v32;
      }
      _InterlockedAnd64(v10, 0LL);
      ++v6;
      v7 += 8;
    }
    while ( v6 < 0x100 );
    v4 += 2048;
  }
  v15 = v33;
  if ( v33 != &v33 )
  {
    while ( 1 )
    {
      v16 = (__int64)(v15 - 4);
      v17 = *v15;
      if ( *(_QWORD **)(*v15 + 8LL) != v15 )
        break;
      v18 = (_QWORD *)v15[1];
      if ( (_QWORD *)*v18 != v15 )
        break;
      *v18 = v17;
      *(_QWORD *)(v17 + 8) = v18;
      v19 = *(_QWORD *)(v11 + 24);
      v20 = *(_QWORD *)(v16 + 24);
      v21 = v20 - v19;
      if ( v19 >= 0 )
      {
        if ( v21 > v20 )
          v21 = 0LL;
      }
      else if ( v21 < v20 )
      {
        v21 = -1LL;
      }
      v22 = KiWaitAlways ^ _byteswap_uint64(v16 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(v16 + 48), KiWaitNever));
      if ( (unsigned int)Feature_RebaseTimersAfterTimeAdjustments__private_IsEnabledNoReportingNoInline(
                           KiWaitNever,
                           v17,
                           v11,
                           a4) )
      {
        v24 = 0LL;
        v25 = *(_BYTE *)(v16 + 1) >> 2;
        if ( v25 )
          v24 = (unsigned int)KiDecodeTolerableDelayValue(v25);
        v26 = v21 + v24;
        v23 = -1LL;
        if ( v26 >= v21 )
          v23 = v26;
      }
      else
      {
        v23 = v21;
      }
      *(_DWORD *)v16 |= 0x80u;
      v36 = 0LL;
      v27 = *(_DWORD *)v16;
      *(_QWORD *)(v16 + 24) = v21;
      v28 = a3;
      v35 = 0LL;
      LODWORD(v35) = v27;
      BYTE2(v35) = v23 >> 18;
      *(_DWORD *)v16 = v35;
      if ( *(_BYTE *)(a3 + 32) )
        v30 = &v40;
      else
        v30 = 0LL;
      if ( KiInsertTimerTable(a1, v16, v22, (unsigned __int8)(v23 >> 18), v30) )
      {
        if ( _bittest((_DWORD *)&PerfGlobalGroupMask + 2, 0x11u) )
          KiTraceSetTimer(v16, v22, 0);
        else
          _InterlockedAnd((volatile signed __int32 *)v16, 0xFFFFFF7F);
      }
      else
      {
        KiTimerWaitTest(a1, v16, 0LL);
      }
      v15 = v33;
      if ( v33 == &v33 )
        goto LABEL_45;
      v11 = a3;
    }
LABEL_43:
    __fastfail(3u);
  }
  v28 = a3;
LABEL_45:
  result = a1;
  if ( *(_BYTE *)(a1 + 33) || *(_BYTE *)(v28 + 32) )
    return KiAdjustTimer2DueTimes(v28);
  return result;
}
