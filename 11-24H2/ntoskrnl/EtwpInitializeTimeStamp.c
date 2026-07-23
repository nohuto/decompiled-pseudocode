/*
 * XREFs of EtwpInitializeTimeStamp @ 0x1409CFBB0
 * Callers:
 *     EtwpStartLogger @ 0x1409D017C (EtwpStartLogger.c)
 * Callees:
 *     KeQuerySystemTimePrecise @ 0x14036D140 (KeQuerySystemTimePrecise.c)
 *     EtwpGetLoggerTimeStamp @ 0x14036DDA0 (EtwpGetLoggerTimeStamp.c)
 *     RtlGetMultiTimePrecise @ 0x140491A30 (RtlGetMultiTimePrecise.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall EtwpInitializeTimeStamp(__int64 a1, __int64 a2)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  __int64 v6; // rax
  __int64 *v7; // rdi
  _QWORD *v8; // rdi
  char v9; // bp
  __int64 v10; // rsi
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 result; // rax
  int v14; // edx
  __int64 v15; // rcx
  __int128 v16; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+30h] [rbp-28h]
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(_DWORD *)(a1 + 200) - 1;
  if ( !v3 )
    goto LABEL_17;
  v4 = v3 - 1;
  if ( !v4 )
  {
    v6 = 0LL;
    goto LABEL_5;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v6 = 3LL;
LABEL_5:
    v7 = (__int64 *)(a1 + 24);
    goto LABEL_6;
  }
  if ( v5 != 1 )
  {
LABEL_17:
    v7 = (__int64 *)(a1 + 24);
LABEL_18:
    v6 = 1LL;
    *(_DWORD *)(a1 + 200) = 1;
    goto LABEL_6;
  }
  v18 = 0LL;
  v7 = (__int64 *)(a1 + 24);
  if ( (int)guard_dispatch_icall_no_overrides(&v18, a2) < 0 )
    goto LABEL_18;
  v6 = 2LL;
LABEL_6:
  *v7 = v6;
  v8 = (_QWORD *)(a1 + 304);
  if ( (*(_DWORD *)(a1 + 816) & 2) != 0 )
  {
    v14 = *(_DWORD *)(a1 + 200);
    *v8 = EtwpRefTimeSystem;
    result = EtwpRefQpcDelta;
    *(_QWORD *)(a1 + 1544) = EtwpRefQpcDelta;
    if ( v14 == 3 )
    {
      result = EtwpRefTimeCycle;
      *(_QWORD *)(a1 + 312) = EtwpRefTimeCycle;
    }
    else
    {
      v15 = EtwpRefTimePerfCounter;
      if ( v14 == 2 )
        v15 = EtwpRefTimeSystem;
      *(_QWORD *)(a1 + 312) = v15;
    }
  }
  else if ( *(_DWORD *)(a1 + 200) == 3 )
  {
    *(LARGE_INTEGER *)(a1 + 312) = EtwpGetLoggerTimeStamp(a1);
    result = KeQuerySystemTimePrecise((_QWORD *)(a1 + 304));
  }
  else
  {
    LODWORD(v18) = 0;
    v17 = 0LL;
    v16 = 0LL;
    RtlGetMultiTimePrecise((LARGE_INTEGER *)&v16, 7, (int *)&v18);
    v9 = v18;
    v10 = *((_QWORD *)&v16 + 1);
    v11 = v16;
    if ( (v18 & 5) == 5 )
    {
      v12 = v17;
      result = *(unsigned int *)(a1 + 200);
      *v8 = v17;
      switch ( (_DWORD)result )
      {
        case 2:
          *(_QWORD *)(a1 + 312) = v12;
          break;
        case 1:
          *(_QWORD *)(a1 + 312) = v11;
          break;
        case 4:
          *(_QWORD *)(a1 + 312) = v10;
          break;
      }
    }
    else
    {
      *(LARGE_INTEGER *)(a1 + 312) = EtwpGetLoggerTimeStamp(a1);
      result = KeQuerySystemTimePrecise((_QWORD *)(a1 + 304));
      *(_DWORD *)(a1 + 816) &= ~0x8000000u;
    }
    if ( *(_DWORD *)(a1 + 200) != 4 && (v9 & 3) == 3 )
      *(_QWORD *)(a1 + 1544) = v10 - v11;
  }
  *(_OWORD *)(a1 + 432) = *(_OWORD *)v8;
  return result;
}
