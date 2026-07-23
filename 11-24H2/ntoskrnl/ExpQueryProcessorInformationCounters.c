/*
 * XREFs of ExpQueryProcessorInformationCounters @ 0x1409D78F0
 * Callers:
 *     ExProcessorCounterSetCallback @ 0x1409D6EC0 (ExProcessorCounterSetCallback.c)
 * Callees:
 *     PoGetIdleTimes @ 0x14036F560 (PoGetIdleTimes.c)
 *     PoGetPerfStateAndParkingInfo @ 0x140370500 (PoGetPerfStateAndParkingInfo.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall ExpQueryProcessorInformationCounters(__int64 a1, char a2, char a3, char a4, __int64 a5)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // r11
  __int64 v13; // rsi
  __int64 v14; // r14
  __int64 v15; // r15
  __int128 *v16; // r8
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 result; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  _PROCESSOR_NUMBER ProcNumber; // [rsp+20h] [rbp-61h] BYREF
  __int128 v27; // [rsp+28h] [rbp-59h] BYREF
  __int128 v28; // [rsp+38h] [rbp-49h]
  __int128 v29; // [rsp+48h] [rbp-39h] BYREF
  __int128 v30; // [rsp+58h] [rbp-29h] BYREF
  __int128 v31; // [rsp+68h] [rbp-19h]
  __int128 v32; // [rsp+78h] [rbp-9h] BYREF
  __int128 v33; // [rsp+88h] [rbp+7h]
  __int128 v34; // [rsp+98h] [rbp+17h]

  ProcNumber.Group = *(unsigned __int8 *)(a1 + 208);
  ProcNumber.Number = *(_BYTE *)(a1 + 209);
  ProcNumber.Reserved = 0;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v29 = 0LL;
  if ( a2 )
  {
    PoGetIdleTimes(&ProcNumber, (__int64)&v32, (__int64)&v29);
    v21 = (unsigned int)v29;
    v12 = *((_QWORD *)&v32 + 1);
    v15 = (unsigned int)v34;
    v11 = v33;
    v14 = DWORD1(v34);
    v10 = *((_QWORD *)&v33 + 1);
    v13 = DWORD2(v34);
    v22 = DWORD1(v29);
    *(_QWORD *)(a5 + 120) = *((_QWORD *)&v29 + 1);
    v23 = KeMaximumIncrement;
    v24 = KeMaximumIncrement * v21;
    v25 = KeMaximumIncrement * v22;
    *(_QWORD *)a5 = v24;
    *(_QWORD *)(a5 + 72) = v12;
    *(_QWORD *)(a5 + 96) = v15;
    *(_QWORD *)(a5 + 80) = v11;
    *(_QWORD *)(a5 + 104) = v14;
    *(_QWORD *)(a5 + 88) = v10;
    v8 = v25 - v24;
    *(_QWORD *)(a5 + 112) = v13;
    v9 = v24 + v23 * *(unsigned int *)(a1 + 34412);
  }
  else
  {
    *(_QWORD *)a5 = 0LL;
    v8 = 0LL;
    *(_QWORD *)(a5 + 72) = 0LL;
    v9 = 0LL;
    *(_QWORD *)(a5 + 80) = 0LL;
    v10 = 0LL;
    *(_QWORD *)(a5 + 88) = 0LL;
    v11 = 0LL;
    *(_QWORD *)(a5 + 96) = 0LL;
    v12 = 0LL;
    *(_QWORD *)(a5 + 104) = 0LL;
    v13 = 0LL;
    *(_QWORD *)(a5 + 112) = 0LL;
    v14 = 0LL;
    *(_QWORD *)(a5 + 120) = 0LL;
    v15 = 0LL;
  }
  *(_QWORD *)(a5 + 8) = v9;
  *(_QWORD *)(a5 + 24) = v8;
  v16 = &v30;
  v17 = KeMaximumIncrement;
  v18 = KeMaximumIncrement * (unsigned __int64)*(unsigned int *)(a1 + 34376);
  v27 = 0LL;
  v28 = 0LL;
  v30 = 0LL;
  *(_QWORD *)(a5 + 16) = v18;
  *(_DWORD *)(a5 + 32) = *(_DWORD *)(a1 + 34368);
  v19 = v17 * *(unsigned int *)(a1 + 34384);
  v31 = 0LL;
  *(_QWORD *)(a5 + 48) = v19;
  *(_DWORD *)(a5 + 60) = *(_DWORD *)(a1 + 14428);
  *(_DWORD *)(a5 + 64) = *(_DWORD *)(a1 + 14508);
  *(_QWORD *)(a5 + 40) = v17 * *(unsigned int *)(a1 + 34380);
  *(_DWORD *)(a5 + 56) = *(_DWORD *)(a1 + 14532);
  *(_QWORD *)(a5 + 168) = v11 + v12 + v10;
  *(_QWORD *)(a5 + 176) = v15 + v14 + v13;
  if ( !a4 )
    v16 = 0LL;
  if ( a3 || v16 )
    PoGetPerfStateAndParkingInfo(&ProcNumber, (__int64)&v27, (__int64)v16, 0LL);
  *(_DWORD *)(a5 + 128) = BYTE13(v28);
  *(_QWORD *)(a5 + 132) = *(_QWORD *)((char *)&v27 + 4);
  *(_DWORD *)(a5 + 140) = v27;
  *(_QWORD *)(a5 + 184) = *(_QWORD *)((char *)&v28 + 4);
  *(_OWORD *)(a5 + 144) = v30;
  *(_QWORD *)(a5 + 160) = v31;
  result = *((_QWORD *)&v31 + 1);
  *(_QWORD *)(a5 + 192) = *((_QWORD *)&v31 + 1);
  return result;
}
