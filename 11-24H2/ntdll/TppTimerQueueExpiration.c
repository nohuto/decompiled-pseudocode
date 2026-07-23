/*
 * XREFs of TppTimerQueueExpiration @ 0x1800882D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     TppRaiseInvalidParameter @ 0x1800880D4 (TppRaiseInvalidParameter.c)
 *     TppETWTimerExpirationBegin @ 0x180088650 (TppETWTimerExpirationBegin.c)
 *     TppETWTimerExpirationEnd @ 0x1800886D8 (TppETWTimerExpirationEnd.c)
 *     TppSingleTimerExpiration @ 0x180088760 (TppSingleTimerExpiration.c)
 *     TppPHExtractMin @ 0x180088F30 (TppPHExtractMin.c)
 *     TppETWTimerSetNtTimer @ 0x1800891B8 (TppETWTimerSetNtTimer.c)
 *     ZwAssociateWaitCompletionPacket @ 0x180161280 (ZwAssociateWaitCompletionPacket.c)
 *     ZwSetTimer2 @ 0x180163840 (ZwSetTimer2.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall TppTimerQueueExpiration(__int64 a1, __int64 a2, _RTL_SRWLOCK *a3, __int64 a4)
{
  _RTL_SRWLOCK *ApcContext; // rsi
  unsigned __int8 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rdi
  _RTL_SRWLOCK *v8; // rbx
  __int64 v9; // rbp
  _DWORD *SharedData; // rcx
  __int64 v11; // rcx
  LARGE_INTEGER *Value; // r11
  __int64 v13; // r11
  unsigned __int64 v14; // rax
  _RTL_SRWLOCK *v15; // rcx
  _QWORD *v16; // r14
  __int64 v17; // rax
  _QWORD *v18; // rdx
  _QWORD *v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // r8
  __int64 v22; // r11
  _QWORD *v23; // rax
  unsigned __int64 v24; // rcx
  __int128 *v25; // rdi
  char *v26; // rcx
  _DWORD *v27; // rcx
  LARGE_INTEGER v29; // r8
  LARGE_INTEGER v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // r14
  __int64 v33; // rcx
  __int128 v34; // [rsp+40h] [rbp-68h] BYREF
  LARGE_INTEGER DueTime; // [rsp+50h] [rbp-58h] BYREF
  _T2_SET_PARAMETERS_V0 Parameters; // [rsp+58h] [rbp-50h] BYREF

  ApcContext = a3;
  DueTime.QuadPart = 0LL;
  v34 = 0LL;
  *(_QWORD *)&Parameters.Version = 0LL;
  Parameters.NoWakeTolerance = 0LL;
  if ( *(_QWORD *)(a4 + 8) )
  {
    v5 = 1;
    v6 = 1LL;
    v7 = MEMORY[0x7FFE0014];
  }
  else
  {
    v5 = 0;
    a4 = 2147353520LL;
    a2 = RtlpFreezeTimeBias;
    a3 = (_RTL_SRWLOCK *)MEMORY[0x7FFE03B0];
    v6 = 16LL;
    v7 = MEMORY[0x7FFE0008] - RtlpFreezeTimeBias - MEMORY[0x7FFE03B0];
  }
  v8 = &ApcContext[v6];
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
  RtlAcquireSRWLockExclusive(ApcContext);
  while ( 1 )
  {
    Value = (LARGE_INTEGER *)v8[1].Value;
    if ( !Value || Value[5].QuadPart > v7 )
      break;
    Value[4].QuadPart = 0LL;
    TppPHExtractMin(&v8[1]);
    v14 = v8[2].Value;
    v15 = v8 + 2;
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
            v21 = (_QWORD *)v15->Value,
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
      v15->Value = (unsigned __int64)v16;
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
  v24 = v8[2].Value;
  if ( v24 )
  {
    v29 = Value[4];
    v30.QuadPart = v7 - v29.QuadPart;
    v31 = *(_QWORD *)(v24 + 32) - v29.QuadPart;
    v8->0 = ($2F38BEDF952D5DA5F266621B11247D04)v29;
    v32 = v31 / 10000;
    *(_DWORD *)&v8[14].0 = v31 / 10000;
    Parameters.NoWakeTolerance = 10000LL * (unsigned int)(v31 / 10000);
    if ( v5 )
      v30 = v29;
    DueTime = v30;
    if ( RtlGetCurrentServiceSessionId() )
      v33 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v33 = 2147353478LL;
    if ( *(_BYTE *)v33 )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))TppETWTimerSetNtTimer)(
        v8,
        (LARGE_INTEGER)v30.QuadPart,
        (unsigned int)v32);
    ZwSetTimer2(v8[3].Ptr, &DueTime, 0LL, &Parameters);
  }
  else
  {
    v8->Value = 0LL;
  }
  RtlReleaseSRWLockExclusive(ApcContext);
  v25 = (__int128 *)v34;
  while ( v25 != &v34 )
  {
    v26 = (char *)v25 - 248;
    v25 = *(__int128 **)v25;
    TppSingleTimerExpiration(v26, ApcContext);
  }
  v27 = NtCurrentPeb()->SharedData;
  if ( v27 && *v27 )
    v9 = (__int64)NtCurrentPeb()->SharedData + 556;
  if ( *(_BYTE *)v9 )
    TppETWTimerExpirationEnd(v8);
  return ZwAssociateWaitCompletionPacket(v8[4].Ptr, ApcContext[-6].Ptr, v8[3].Ptr, &v8[5], ApcContext, 0, v5, 0LL);
}
