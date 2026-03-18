/*
 * XREFs of EtwpInitializeTimeStamp @ 0x1408307CC
 * Callers:
 *     EtwpStartLogger @ 0x140831694 (EtwpStartLogger.c)
 * Callees:
 *     KeQuerySystemTimePrecise @ 0x14034EC60 (KeQuerySystemTimePrecise.c)
 *     EtwpGetLoggerTimeStamp @ 0x14034F8C0 (EtwpGetLoggerTimeStamp.c)
 *     RtlGetMultiTimePrecise @ 0x1404970A0 (RtlGetMultiTimePrecise.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall EtwpInitializeTimeStamp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // rax
  __int64 *v9; // rdi
  _QWORD *v10; // rdi
  char v11; // bp
  __int64 v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 result; // rax
  int v16; // edx
  __int64 v17; // rcx
  __int128 v18; // [rsp+20h] [rbp-38h] BYREF
  __int64 v19; // [rsp+30h] [rbp-28h]
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF

  v5 = *(_DWORD *)(a1 + 200) - 1;
  if ( !v5 )
    goto LABEL_17;
  v6 = v5 - 1;
  if ( !v6 )
  {
    v8 = 0LL;
    goto LABEL_5;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v8 = 3LL;
LABEL_5:
    v9 = (__int64 *)(a1 + 24);
    goto LABEL_6;
  }
  if ( v7 != 1 )
  {
LABEL_17:
    v9 = (__int64 *)(a1 + 24);
LABEL_18:
    v8 = 1LL;
    *(_DWORD *)(a1 + 200) = 1;
    goto LABEL_6;
  }
  v20 = 0LL;
  v9 = (__int64 *)(a1 + 24);
  if ( (int)guard_dispatch_icall_no_overrides(&v20, a2, a3, a4) < 0 )
    goto LABEL_18;
  v8 = 2LL;
LABEL_6:
  *v9 = v8;
  v10 = (_QWORD *)(a1 + 304);
  if ( (*(_DWORD *)(a1 + 816) & 2) != 0 )
  {
    v16 = *(_DWORD *)(a1 + 200);
    *v10 = EtwpRefTimeSystem;
    result = EtwpRefQpcDelta;
    *(_QWORD *)(a1 + 1544) = EtwpRefQpcDelta;
    if ( v16 == 3 )
    {
      result = EtwpRefTimeCycle;
      *(_QWORD *)(a1 + 312) = EtwpRefTimeCycle;
    }
    else
    {
      v17 = EtwpRefTimePerfCounter;
      if ( v16 == 2 )
        v17 = EtwpRefTimeSystem;
      *(_QWORD *)(a1 + 312) = v17;
    }
  }
  else if ( *(_DWORD *)(a1 + 200) == 3 )
  {
    *(LARGE_INTEGER *)(a1 + 312) = EtwpGetLoggerTimeStamp(a1);
    result = KeQuerySystemTimePrecise((_QWORD *)(a1 + 304));
  }
  else
  {
    LODWORD(v20) = 0;
    v19 = 0LL;
    v18 = 0LL;
    RtlGetMultiTimePrecise((LARGE_INTEGER *)&v18, 7, (int *)&v20);
    v11 = v20;
    v12 = *((_QWORD *)&v18 + 1);
    v13 = v18;
    if ( (v20 & 5) == 5 )
    {
      v14 = v19;
      result = *(unsigned int *)(a1 + 200);
      *v10 = v19;
      switch ( (_DWORD)result )
      {
        case 2:
          *(_QWORD *)(a1 + 312) = v14;
          break;
        case 1:
          *(_QWORD *)(a1 + 312) = v13;
          break;
        case 4:
          *(_QWORD *)(a1 + 312) = v12;
          break;
      }
    }
    else
    {
      *(LARGE_INTEGER *)(a1 + 312) = EtwpGetLoggerTimeStamp(a1);
      result = KeQuerySystemTimePrecise((_QWORD *)(a1 + 304));
      *(_DWORD *)(a1 + 816) &= ~0x8000000u;
    }
    if ( *(_DWORD *)(a1 + 200) != 4 && (v11 & 3) == 3 )
      *(_QWORD *)(a1 + 1544) = v12 - v13;
  }
  *(_OWORD *)(a1 + 432) = *(_OWORD *)v10;
  return result;
}
