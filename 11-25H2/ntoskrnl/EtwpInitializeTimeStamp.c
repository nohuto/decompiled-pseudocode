/*
 * XREFs of EtwpInitializeTimeStamp @ 0x140A38C3C
 * Callers:
 *     EtwpStartLogger @ 0x140A374DC (EtwpStartLogger.c)
 * Callees:
 *     KeQuerySystemTimePrecise @ 0x14031ABA0 (KeQuerySystemTimePrecise.c)
 *     EtwpGetLoggerTimeStamp @ 0x14031B820 (EtwpGetLoggerTimeStamp.c)
 *     RtlGetMultiTimePrecise @ 0x1404975D0 (RtlGetMultiTimePrecise.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall EtwpInitializeTimeStamp(__int64 a1)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  __int64 v5; // rax
  __int64 *v6; // rdi
  _QWORD *v7; // rdi
  char v8; // bp
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 result; // rax
  int v13; // edx
  __int64 v14; // rcx
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+30h] [rbp-28h]
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 200) - 1;
  if ( !v2 )
    goto LABEL_17;
  v3 = v2 - 1;
  if ( !v3 )
  {
    v5 = 0LL;
    goto LABEL_5;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v5 = 3LL;
LABEL_5:
    v6 = (__int64 *)(a1 + 24);
    goto LABEL_6;
  }
  if ( v4 != 1 )
  {
LABEL_17:
    v6 = (__int64 *)(a1 + 24);
LABEL_18:
    v5 = 1LL;
    *(_DWORD *)(a1 + 200) = 1;
    goto LABEL_6;
  }
  v17 = 0LL;
  v6 = (__int64 *)(a1 + 24);
  if ( (int)guard_dispatch_icall_no_overrides(&v17) < 0 )
    goto LABEL_18;
  v5 = 2LL;
LABEL_6:
  *v6 = v5;
  v7 = (_QWORD *)(a1 + 304);
  if ( (*(_DWORD *)(a1 + 816) & 2) != 0 )
  {
    v13 = *(_DWORD *)(a1 + 200);
    *v7 = EtwpRefTimeSystem;
    result = EtwpRefQpcDelta;
    *(_QWORD *)(a1 + 1544) = EtwpRefQpcDelta;
    if ( v13 == 3 )
    {
      result = EtwpRefTimeCycle;
      *(_QWORD *)(a1 + 312) = EtwpRefTimeCycle;
    }
    else
    {
      v14 = EtwpRefTimePerfCounter;
      if ( v13 == 2 )
        v14 = EtwpRefTimeSystem;
      *(_QWORD *)(a1 + 312) = v14;
    }
  }
  else if ( *(_DWORD *)(a1 + 200) == 3 )
  {
    *(LARGE_INTEGER *)(a1 + 312) = EtwpGetLoggerTimeStamp(a1);
    result = KeQuerySystemTimePrecise((_QWORD *)(a1 + 304));
  }
  else
  {
    LODWORD(v17) = 0;
    v16 = 0LL;
    v15 = 0LL;
    RtlGetMultiTimePrecise((LARGE_INTEGER *)&v15, 7, (int *)&v17);
    v8 = v17;
    v9 = *((_QWORD *)&v15 + 1);
    v10 = v15;
    if ( (v17 & 5) == 5 )
    {
      v11 = v16;
      result = *(unsigned int *)(a1 + 200);
      *v7 = v16;
      switch ( (_DWORD)result )
      {
        case 2:
          *(_QWORD *)(a1 + 312) = v11;
          break;
        case 1:
          *(_QWORD *)(a1 + 312) = v10;
          break;
        case 4:
          *(_QWORD *)(a1 + 312) = v9;
          break;
      }
    }
    else
    {
      *(LARGE_INTEGER *)(a1 + 312) = EtwpGetLoggerTimeStamp(a1);
      result = KeQuerySystemTimePrecise((_QWORD *)(a1 + 304));
      *(_DWORD *)(a1 + 816) &= ~0x8000000u;
    }
    if ( *(_DWORD *)(a1 + 200) != 4 && (v8 & 3) == 3 )
      *(_QWORD *)(a1 + 1544) = v9 - v10;
  }
  *(_OWORD *)(a1 + 432) = *(_OWORD *)v7;
  return result;
}
