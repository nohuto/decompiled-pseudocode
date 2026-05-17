/*
 * XREFs of TppSetTimer @ 0x18006B410
 * Callers:
 *     TpSetWaitEx @ 0x1800200E0 (TpSetWaitEx.c)
 *     TppSetupNextWait @ 0x18006A8C0 (TppSetupNextWait.c)
 *     TpSetTimerEx @ 0x18006AF80 (TpSetTimerEx.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001C5D0 (RtlSetLastWin32Error.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     TppETWTimerSet @ 0x18006B718 (TppETWTimerSet.c)
 *     TppUpdateSubQueueTimer @ 0x18006C700 (TppUpdateSubQueueTimer.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x18009F9E0 (RtlNtStatusToDosErrorNoTeb.c)
 */

__int64 __fastcall TppSetTimer(__int64 a1, volatile signed __int32 **a2, __int64 *a3, __int64 a4, int a5)
{
  bool v5; // sf
  volatile signed __int32 *v6; // r15
  __int64 *v8; // rbx
  __int64 *v9; // r14
  unsigned __int8 v10; // r12
  volatile signed __int32 **v11; // rbp
  __int64 v12; // rcx
  _DWORD *SharedData; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  volatile signed __int32 *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r9
  bool v19; // of
  volatile signed __int32 **v20; // rcx
  volatile signed __int32 *v21; // r8
  __int64 v22; // rcx
  volatile signed __int32 **v23; // rax
  volatile signed __int32 *v24; // rax
  volatile signed __int32 *v25; // rax
  volatile signed __int32 **v26; // rdx
  volatile signed __int32 *v27; // r8
  __int64 v28; // rcx
  volatile signed __int32 **v29; // r8
  __int64 v30; // rax
  volatile signed __int32 *v31; // r9
  unsigned int v33; // eax

  v5 = *a3 < 0;
  v6 = (volatile signed __int32 *)a2;
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
      v33 = RtlNtStatusToDosErrorNoTeb(3221225485LL);
      RtlSetLastWin32Error(v33);
    }
    else
    {
      a4 = 2147353520LL;
      a2 = (volatile signed __int32 **)RtlpFreezeTimeBias;
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
  RtlAcquireSRWLockExclusive(v6, a2, (unsigned __int64)a3);
  v15 = *v8;
  v16 = (volatile signed __int32 *)(a1 + 288);
  v17 = *(unsigned int *)(a1 + 344);
  *(_QWORD *)(a1 + 320) = *v8;
  v18 = v15 + 10000 * v17;
  v19 = __OFSUB__(v18, v15);
  v20 = (volatile signed __int32 **)(a1 + 304);
  *(_QWORD *)(a1 + 312) = a1 + 304;
  *(_QWORD *)(a1 + 304) = a1 + 304;
  if ( 10000 * v17 < 0 != v19 )
    v18 = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(a1 + 296) = a1 + 288;
  *(_QWORD *)v16 = v16;
  v21 = v11[1];
  if ( !v21 )
  {
LABEL_19:
    v11[1] = v16;
    goto LABEL_20;
  }
  if ( *((_QWORD *)v21 + 4) >= *(_QWORD *)(a1 + 320) )
  {
    v24 = *v20;
    if ( *((volatile signed __int32 ***)*v20 + 1) != v20 )
      goto LABEL_16;
    *(_QWORD *)v21 = v24;
    *((_QWORD *)v21 + 1) = v20;
    *((_QWORD *)v24 + 1) = v21;
    *v20 = v21;
    goto LABEL_19;
  }
  v22 = *((_QWORD *)v21 + 2);
  v23 = (volatile signed __int32 **)(v21 + 4);
  if ( *(volatile signed __int32 **)(v22 + 8) != v21 + 4 )
    goto LABEL_16;
  *(_QWORD *)v16 = v22;
  *(_QWORD *)(a1 + 296) = v23;
  *(_QWORD *)(v22 + 8) = v16;
  *v23 = v16;
LABEL_20:
  v25 = (volatile signed __int32 *)(a1 + 248);
  *(_QWORD *)(a1 + 280) = v18;
  v26 = (volatile signed __int32 **)(a1 + 264);
  *(_QWORD *)(a1 + 272) = a1 + 264;
  *(_QWORD *)(a1 + 264) = a1 + 264;
  *(_QWORD *)(a1 + 256) = a1 + 248;
  *(_QWORD *)(a1 + 248) = a1 + 248;
  v27 = v11[2];
  if ( !v27 )
    goto LABEL_28;
  if ( *((_QWORD *)v27 + 4) >= *(_QWORD *)(a1 + 280) )
  {
    v31 = *v26;
    if ( *((volatile signed __int32 ***)*v26 + 1) != v26 )
LABEL_16:
      __fastfail(3u);
    *(_QWORD *)v27 = v31;
    *((_QWORD *)v27 + 1) = v26;
    *((_QWORD *)v31 + 1) = v27;
    *v26 = v27;
LABEL_28:
    v11[2] = v25;
    goto LABEL_29;
  }
  v28 = *((_QWORD *)v27 + 2);
  v29 = (volatile signed __int32 **)(v27 + 4);
  if ( *(volatile signed __int32 ***)(v28 + 8) != v29 )
    goto LABEL_16;
  *(_QWORD *)v25 = v28;
  *(_QWORD *)(a1 + 256) = v29;
  *(_QWORD *)(v28 + 8) = v25;
  *v29 = v25;
LABEL_29:
  *(_BYTE *)(a1 + 354) |= 1u;
  *(_BYTE *)(a1 + 352) = 1;
  TppUpdateSubQueueTimer(v11, v10);
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)v6);
}
