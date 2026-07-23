/*
 * XREFs of TppSetTimer @ 0x180087CF0
 * Callers:
 *     TpSetWaitEx @ 0x18004CAE0 (TpSetWaitEx.c)
 *     TppSetupNextWait @ 0x180086FB0 (TppSetupNextWait.c)
 *     TpSetTimerEx @ 0x180087860 (TpSetTimerEx.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180048FD0 (RtlSetLastWin32Error.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x1800872D0 (RtlNtStatusToDosErrorNoTeb.c)
 *     TppETWTimerSet @ 0x180087FF8 (TppETWTimerSet.c)
 *     TppUpdateSubQueueTimer @ 0x180088FE0 (TppUpdateSubQueueTimer.c)
 */

void __fastcall TppSetTimer(__int64 a1, _RTL_SRWLOCK *a2, __int64 *a3, __int64 a4, int a5)
{
  bool v5; // sf
  __int64 *v8; // rbx
  __int64 *v9; // r14
  unsigned __int8 v10; // r12
  _RTL_SRWLOCK *v11; // rbp
  __int64 v12; // rcx
  _DWORD *SharedData; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  _QWORD *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r9
  bool v19; // of
  __int64 *v20; // rcx
  _QWORD *Value; // r8
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 *v26; // rdx
  _QWORD *v27; // r8
  __int64 v28; // rcx
  _QWORD *v29; // r8
  __int64 v30; // rax
  __int64 v31; // r9
  LONG v32; // eax

  v5 = *a3 < 0;
  v8 = (__int64 *)(a1 + 328);
  v9 = a3;
  *(_DWORD *)(a1 + 344) = a5;
  *(_DWORD *)(a1 + 348) = a4;
  if ( v5 )
  {
    v10 = 0;
    v11 = a2 + 16;
    if ( a1 == -328 )
    {
      v32 = RtlNtStatusToDosErrorNoTeb(-1073741811);
      RtlSetLastWin32Error(v32);
    }
    else
    {
      a4 = 2147353520LL;
      a3 = (__int64 *)MEMORY[0x7FFE03B0];
      *v8 = MEMORY[0x7FFE0008] - RtlpFreezeTimeBias - MEMORY[0x7FFE03B0];
    }
    v12 = *v8 - *v9;
    if ( v12 < *v8 )
      v12 = 0x7FFFFFFFFFFFFFFFLL;
    *v8 = v12;
  }
  else
  {
    *(_BYTE *)(a1 + 354) |= 2u;
    v11 = a2 + 1;
    v30 = *a3;
    v10 = 1;
    *v8 = *a3;
    if ( !v30 )
      *v8 = 1LL;
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v14 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v14 = 2147353478LL;
  if ( *(_BYTE *)v14 )
    TppETWTimerSet(v11, a1, a3, a4);
  RtlAcquireSRWLockExclusive(a2);
  v15 = *v8;
  v16 = (_QWORD *)(a1 + 288);
  v17 = *(unsigned int *)(a1 + 344);
  *(_QWORD *)(a1 + 320) = *v8;
  v18 = v15 + 10000 * v17;
  v19 = __OFSUB__(v18, v15);
  v20 = (__int64 *)(a1 + 304);
  *(_QWORD *)(a1 + 312) = a1 + 304;
  *(_QWORD *)(a1 + 304) = a1 + 304;
  if ( 10000 * v17 < 0 != v19 )
    v18 = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(a1 + 296) = a1 + 288;
  *v16 = v16;
  Value = (_QWORD *)v11[1].Value;
  if ( !Value )
  {
LABEL_19:
    v11[1].Value = (unsigned __int64)v16;
    goto LABEL_20;
  }
  if ( Value[4] >= *(_QWORD *)(a1 + 320) )
  {
    v24 = *v20;
    if ( *(__int64 **)(*v20 + 8) != v20 )
      goto LABEL_16;
    *Value = v24;
    Value[1] = v20;
    *(_QWORD *)(v24 + 8) = Value;
    *v20 = (__int64)Value;
    goto LABEL_19;
  }
  v22 = Value[2];
  v23 = Value + 2;
  if ( *(_QWORD **)(v22 + 8) != Value + 2 )
    goto LABEL_16;
  *v16 = v22;
  *(_QWORD *)(a1 + 296) = v23;
  *(_QWORD *)(v22 + 8) = v16;
  *v23 = v16;
LABEL_20:
  v25 = (_QWORD *)(a1 + 248);
  *(_QWORD *)(a1 + 280) = v18;
  v26 = (__int64 *)(a1 + 264);
  *(_QWORD *)(a1 + 272) = a1 + 264;
  *(_QWORD *)(a1 + 264) = a1 + 264;
  *(_QWORD *)(a1 + 256) = a1 + 248;
  *(_QWORD *)(a1 + 248) = a1 + 248;
  v27 = (_QWORD *)v11[2].Value;
  if ( !v27 )
    goto LABEL_28;
  if ( v27[4] >= *(_QWORD *)(a1 + 280) )
  {
    v31 = *v26;
    if ( *(__int64 **)(*v26 + 8) != v26 )
LABEL_16:
      __fastfail(3u);
    *v27 = v31;
    v27[1] = v26;
    *(_QWORD *)(v31 + 8) = v27;
    *v26 = (__int64)v27;
LABEL_28:
    v11[2].Value = (unsigned __int64)v25;
    goto LABEL_29;
  }
  v28 = v27[2];
  v29 = v27 + 2;
  if ( *(_QWORD **)(v28 + 8) != v29 )
    goto LABEL_16;
  *v25 = v28;
  *(_QWORD *)(a1 + 256) = v29;
  *(_QWORD *)(v28 + 8) = v25;
  *v29 = v25;
LABEL_29:
  *(_BYTE *)(a1 + 354) |= 1u;
  *(_BYTE *)(a1 + 352) = 1;
  TppUpdateSubQueueTimer(v11, v10);
  RtlReleaseSRWLockExclusive(a2);
}
