/*
 * XREFs of KiAdjustTimerDueTimes @ 0x1403F908C
 * Callers:
 *     KiSetSystemTimeDpc @ 0x14047ACB0 (KiSetSystemTimeDpc.c)
 *     KiAdjustTimersAfterDripsExit @ 0x1405B6284 (KiAdjustTimersAfterDripsExit.c)
 * Callees:
 *     KiInsertTimerTable @ 0x1402EDE10 (KiInsertTimerTable.c)
 *     KiTimerWaitTest @ 0x1402EEDC0 (KiTimerWaitTest.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveEntryTimer @ 0x1403F9350 (KiRemoveEntryTimer.c)
 *     KiTraceSetTimer @ 0x1403F95AC (KiTraceSetTimer.c)
 *     KiAdjustTimer2DueTimes @ 0x140454A68 (KiAdjustTimer2DueTimes.c)
 */

_QWORD *__fastcall KiAdjustTimerDueTimes(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  unsigned int i; // r14d
  unsigned int v6; // r12d
  volatile signed __int32 *v7; // rbx
  _QWORD **v8; // r13
  int v9; // edi
  _QWORD *v10; // rdi
  volatile signed __int64 *v11; // rax
  _QWORD *v12; // rdx
  char v13; // r8
  _QWORD *v14; // rsi
  _QWORD *result; // rax
  __int64 v16; // rbx
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  __int64 v23; // rdi
  unsigned int v24; // r9d
  unsigned __int64 v25; // rdi
  bool inserted; // al
  volatile signed __int32 *v27; // [rsp+30h] [rbp-30h] BYREF
  _QWORD *v28; // [rsp+38h] [rbp-28h] BYREF
  _QWORD **v29; // [rsp+40h] [rbp-20h]
  __int128 v30; // [rsp+48h] [rbp-18h]
  __int64 v31; // [rsp+58h] [rbp-8h]
  char v34; // [rsp+B8h] [rbp+58h] BYREF

  v29 = &v28;
  v3 = a2;
  v34 = 0;
  v28 = &v28;
  for ( i = 0; i < 2; ++i )
  {
    v6 = 0;
    v7 = (volatile signed __int32 *)(((unsigned __int64)i << 13) + v3 + 512);
    do
    {
      v8 = (_QWORD **)(v7 + 2);
      v9 = 0;
      while ( _interlockedbittestandset64(v7, 0LL) )
      {
        do
        {
          if ( (++v9 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait();
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)v7 );
      }
      v10 = *v8;
      v11 = (volatile signed __int64 *)v7;
      v27 = v7;
      if ( v10 != v8 )
      {
        do
        {
          v12 = v10 - 4;
          v13 = *((_BYTE *)v10 - 31);
          v14 = v10;
          v10 = (_QWORD *)*v10;
          if ( (v13 & 1) != *(_BYTE *)a3 && (!*(_BYTE *)a3 || (v13 & 2) == 0) )
          {
            KiRemoveEntryTimer(a2, v12, v6, &v27);
            v19 = v29;
            if ( *v29 != &v28 )
              goto LABEL_18;
            v14[1] = v29;
            *v14 = &v28;
            *v19 = v14;
            v29 = (_QWORD **)v14;
          }
        }
        while ( v10 != v8 );
        v11 = (volatile signed __int64 *)v27;
      }
      _InterlockedAnd64(v11, 0LL);
      ++v6;
      v7 += 8;
    }
    while ( v6 < 0x100 );
    v3 = a2;
  }
  result = v28;
  if ( v28 != &v28 )
  {
    while ( 1 )
    {
      v16 = (__int64)(result - 4);
      v17 = *result;
      if ( *(_QWORD **)(*result + 8LL) != result )
        break;
      v18 = (_QWORD *)result[1];
      if ( (_QWORD *)*v18 != result )
        break;
      *v18 = v17;
      *(_QWORD *)(v17 + 8) = v18;
      v20 = *(_QWORD *)(a3 + 24);
      v21 = *(_QWORD *)(v16 + 24);
      v22 = v21 - v20;
      if ( v20 < 0 )
      {
        if ( v22 < v21 )
          v22 = -1LL;
      }
      else if ( v22 > v21 )
      {
        v22 = 0LL;
      }
      v23 = __ROL8__(KiWaitNever ^ *(_QWORD *)(v16 + 48), KiWaitNever);
      v24 = (unsigned __int8)(v22 >> 18);
      v30 = 0LL;
      v25 = KiWaitAlways ^ _byteswap_uint64(v16 ^ v23);
      *(_DWORD *)v16 |= 0x80u;
      *(_QWORD *)(v16 + 24) = v22;
      v31 = 0LL;
      LODWORD(v30) = *(_DWORD *)v16;
      BYTE2(v30) = v22 >> 18;
      *(_DWORD *)v16 = v30;
      if ( *(_BYTE *)(a3 + 32) )
        inserted = KiInsertTimerTable(a1, v16, v25, v24, &v34);
      else
        inserted = KiInsertTimerTable(a1, v16, v25, v24, 0LL);
      if ( inserted )
      {
        if ( _bittest((_DWORD *)&PerfGlobalGroupMask + 2, 0x11u) )
          KiTraceSetTimer(v16, v25, 0LL);
        else
          _InterlockedAnd((volatile signed __int32 *)v16, 0xFFFFFF7F);
      }
      else
      {
        KiTimerWaitTest(a1, v16, 0LL);
      }
      result = v28;
      if ( v28 == &v28 )
        goto LABEL_34;
    }
LABEL_18:
    __fastfail(3u);
  }
LABEL_34:
  if ( *(_BYTE *)(a1 + 33) || *(_BYTE *)(a3 + 32) )
    return (_QWORD *)KiAdjustTimer2DueTimes(a3);
  return result;
}
