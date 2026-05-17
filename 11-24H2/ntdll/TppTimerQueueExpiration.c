/*
 * XREFs of TppTimerQueueExpiration @ 0x18006B9F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     TppRaiseInvalidParameter @ 0x18006B7F4 (TppRaiseInvalidParameter.c)
 *     TppETWTimerExpirationBegin @ 0x18006BD70 (TppETWTimerExpirationBegin.c)
 *     TppETWTimerExpirationEnd @ 0x18006BDF8 (TppETWTimerExpirationEnd.c)
 *     TppSingleTimerExpiration @ 0x18006BE80 (TppSingleTimerExpiration.c)
 *     TppPHExtractMin @ 0x18006C650 (TppPHExtractMin.c)
 *     TppETWTimerSetNtTimer @ 0x18006C8D8 (TppETWTimerSetNtTimer.c)
 *     ZwAssociateWaitCompletionPacket @ 0x180162EC0 (ZwAssociateWaitCompletionPacket.c)
 *     ZwSetTimer2 @ 0x180165480 (ZwSetTimer2.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall TppTimerQueueExpiration(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3, __int64 a4)
{
  volatile signed __int32 *v4; // rsi
  unsigned __int8 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rdi
  volatile signed __int32 *v8; // rbx
  __int64 v9; // rbp
  _DWORD *SharedData; // rcx
  __int64 v11; // rcx
  __int64 v12; // r11
  __int64 v13; // r11
  __int64 v14; // rax
  _QWORD **v15; // rcx
  _QWORD *v16; // r14
  __int64 v17; // rax
  _QWORD *v18; // rdx
  _QWORD *v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // r8
  __int64 v22; // r11
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __int128 *v25; // rdi
  char *v26; // rcx
  _DWORD *v27; // rcx
  __int64 v29; // r8
  __int64 v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // r14
  __int64 v33; // rcx
  __int128 v34; // [rsp+40h] [rbp-68h] BYREF
  __int64 v35; // [rsp+50h] [rbp-58h] BYREF
  __int64 v36; // [rsp+58h] [rbp-50h] BYREF
  __int64 v37; // [rsp+60h] [rbp-48h]

  v4 = (volatile signed __int32 *)a3;
  v35 = 0LL;
  v34 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  if ( *(_QWORD *)(a4 + 8) )
  {
    v5 = 1;
    v6 = 2LL;
    v7 = MEMORY[0x7FFE0014];
  }
  else
  {
    v5 = 0;
    a4 = 2147353520LL;
    a2 = (volatile signed __int32 **)RtlpFreezeTimeBias;
    a3 = MEMORY[0x7FFE03B0];
    v6 = 32LL;
    v7 = MEMORY[0x7FFE0008] - RtlpFreezeTimeBias - MEMORY[0x7FFE03B0];
  }
  v8 = &v4[v6];
  if ( !a1 || *(_DWORD *)(a1 + 72) )
    TppRaiseInvalidParameter();
  else
    *(_DWORD *)(a1 + 72) = 3;
  v9 = 2147353478LL;
  *((_QWORD *)&v34 + 1) = &v34;
  *(_QWORD *)&v34 = &v34;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v11 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v11 = 2147353478LL;
  if ( *(_BYTE *)v11 )
    TppETWTimerExpirationBegin(v8, a2, a3, a4);
  RtlAcquireSRWLockExclusive(v4, a2, a3);
  while ( 1 )
  {
    v12 = *((_QWORD *)v8 + 1);
    if ( !v12 || *(_QWORD *)(v12 + 40) > v7 )
      break;
    *(_QWORD *)(v12 + 32) = 0LL;
    TppPHExtractMin(v8 + 2);
    v14 = *((_QWORD *)v8 + 2);
    v15 = (_QWORD **)(v8 + 4);
    v16 = (_QWORD *)(v13 - 40);
    if ( v13 - 40 != v14 )
    {
      v17 = *v16;
      if ( *(_QWORD **)(*v16 + 8LL) != v16 )
        goto LABEL_19;
      v18 = (_QWORD *)v16[1];
      if ( (_QWORD *)*v18 != v16
        || (*v18 = v17,
            *(_QWORD *)(v17 + 8) = v18,
            v19 = v16 + 2,
            v16[1] = v16,
            *v16 = v16,
            v20 = v16[2],
            v21 = *v15,
            *(_QWORD **)(v20 + 8) != v16 + 2) )
      {
LABEL_19:
        __fastfail(3u);
      }
      v21[1] = v19;
      *v21 = v20;
      *(_QWORD *)(v20 + 8) = v21;
      *v19 = v21;
      v14 = v13 - 40;
      *v15 = v16;
    }
    *(_QWORD *)(v14 + 32) = 0LL;
    TppPHExtractMin(v15);
    *(_BYTE *)(v22 + 64) = 0;
    v23 = (_QWORD *)*((_QWORD *)&v34 + 1);
    if ( **((__int128 ***)&v34 + 1) != &v34 )
      goto LABEL_19;
    v16[1] = *((_QWORD *)&v34 + 1);
    *v16 = &v34;
    *v23 = v16;
    *((_QWORD *)&v34 + 1) = v16;
  }
  v24 = *((_QWORD *)v8 + 2);
  if ( v24 )
  {
    v29 = *(_QWORD *)(v12 + 32);
    v30 = v7 - v29;
    v31 = *(_QWORD *)(v24 + 32) - v29;
    *(_QWORD *)v8 = v29;
    v32 = v31 / 10000;
    *((_DWORD *)v8 + 28) = v31 / 10000;
    v37 = 10000LL * (unsigned int)(v31 / 10000);
    if ( v5 )
      v30 = v29;
    v35 = v30;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v33 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v33 = 2147353478LL;
    if ( *(_BYTE *)v33 )
      TppETWTimerSetNtTimer(v8, v30, (unsigned int)v32);
    ZwSetTimer2(*((_QWORD *)v8 + 3), &v35, 0LL, &v36);
  }
  else
  {
    *(_QWORD *)v8 = 0LL;
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)v4);
  v25 = (__int128 *)v34;
  while ( v25 != &v34 )
  {
    v26 = (char *)v25 - 248;
    v25 = *(__int128 **)v25;
    TppSingleTimerExpiration(v26, v4, v5);
  }
  v27 = NtCurrentPeb()->SharedData;
  if ( v27 && *v27 )
    v9 = (__int64)NtCurrentPeb()->SharedData + 556;
  if ( *(_BYTE *)v9 )
    TppETWTimerExpirationEnd(v8);
  return ZwAssociateWaitCompletionPacket(
           *((_QWORD *)v8 + 4),
           *((_QWORD *)v4 - 6),
           *((_QWORD *)v8 + 3),
           v8 + 10,
           v4,
           0,
           v5,
           0LL);
}
