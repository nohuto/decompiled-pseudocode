/*
 * XREFs of RtlpAllocateActivationContextStackFrame @ 0x18001E160
 * Callers:
 *     RtlActivateActivationContext @ 0x18001DEA0 (RtlActivateActivationContext.c)
 *     RtlActivateActivationContextEx @ 0x18001E010 (RtlActivateActivationContextEx.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlRaiseException @ 0x18008CDF0 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpAllocateActivationContextStackFrame(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v5; // ebx
  _QWORD *v6; // r15
  unsigned __int64 v7; // r14
  _QWORD *v8; // rdi
  int v9; // r8d
  unsigned int i; // eax
  __int64 v11; // rcx
  _DWORD *v12; // rax
  _DWORD *Heap; // rax
  _DWORD *v15; // rcx
  _QWORD *v16; // rdx
  __int64 v17; // rcx
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-C8h] BYREF

  memset_thunk_772440563353939046(&ExceptionRecord, 0, 0x98uLL);
  if ( a3 && (v5 = 0, *a3 = 0LL, a2) )
  {
    v6 = *(_QWORD **)(a2 + 8);
    v7 = a2 + 8;
    if ( v6 != (_QWORD *)(a2 + 8) )
    {
      do
      {
        v8 = v6 - 1;
        if ( *((_DWORD *)v6 - 2) != 1953721414 )
        {
          ExceptionRecord.ExceptionRecord = 0LL;
          ExceptionRecord.NumberParameters = 4;
          ExceptionRecord.ExceptionInformation[0] = 1LL;
          ExceptionRecord.ExceptionInformation[1] = 1LL;
          ExceptionRecord.ExceptionInformation[2] = v7;
          ExceptionRecord.ExceptionInformation[3] = (unsigned __int64)(v6 - 1);
          ExceptionRecord.ExceptionCode = -1072365547;
          ExceptionRecord.ExceptionFlags = 1;
          RtlRaiseException(&ExceptionRecord);
        }
        v9 = *((_DWORD *)v8 + 1);
        if ( v9 != 32 )
        {
          for ( i = 0; i < 0x20; ++i )
          {
            v11 = 12LL * i;
            if ( (v8[v11 + 6] & 4) != 0 )
            {
              *((_DWORD *)v8 + 1) = v9 + 1;
              *((_DWORD *)v8 + 7) = ~(v9 + 1);
              v12 = &v8[v11 + 4];
              if ( !v12 )
                break;
              goto LABEL_12;
            }
          }
        }
        v6 = (_QWORD *)*v6;
      }
      while ( v6 != (_QWORD *)v7 );
    }
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xC20uLL);
    v15 = Heap;
    if ( Heap )
    {
      *Heap = 1953721414;
      Heap[6] = 0;
      v12 = Heap + 8;
      *((_QWORD *)v15 + 5) = 0LL;
      v15[12] = 12;
      *((_QWORD *)v15 + 7) = 0LL;
      *(_QWORD *)v12 = 0LL;
      *((_QWORD *)v15 + 16) = 0LL;
      *((_QWORD *)v15 + 17) = 0LL;
      v15[36] = 12;
      *((_QWORD *)v15 + 19) = 0LL;
      *((_QWORD *)v15 + 28) = 0LL;
      *((_QWORD *)v15 + 29) = 0LL;
      v15[60] = 12;
      *((_QWORD *)v15 + 31) = 0LL;
      *((_QWORD *)v15 + 40) = 0LL;
      *((_QWORD *)v15 + 41) = 0LL;
      v15[84] = 12;
      *((_QWORD *)v15 + 43) = 0LL;
      *((_QWORD *)v15 + 52) = 0LL;
      *((_QWORD *)v15 + 53) = 0LL;
      v15[108] = 12;
      *((_QWORD *)v15 + 55) = 0LL;
      *((_QWORD *)v15 + 64) = 0LL;
      *((_QWORD *)v15 + 65) = 0LL;
      v15[132] = 12;
      *((_QWORD *)v15 + 67) = 0LL;
      *((_QWORD *)v15 + 76) = 0LL;
      *((_QWORD *)v15 + 77) = 0LL;
      v15[156] = 12;
      *((_QWORD *)v15 + 79) = 0LL;
      *((_QWORD *)v15 + 88) = 0LL;
      *((_QWORD *)v15 + 89) = 0LL;
      v15[180] = 12;
      *((_QWORD *)v15 + 91) = 0LL;
      *((_QWORD *)v15 + 100) = 0LL;
      *((_QWORD *)v15 + 101) = 0LL;
      v15[204] = 12;
      *((_QWORD *)v15 + 103) = 0LL;
      *((_QWORD *)v15 + 112) = 0LL;
      *((_QWORD *)v15 + 113) = 0LL;
      v15[228] = 12;
      *((_QWORD *)v15 + 115) = 0LL;
      *((_QWORD *)v15 + 124) = 0LL;
      *((_QWORD *)v15 + 125) = 0LL;
      v15[252] = 12;
      *((_QWORD *)v15 + 127) = 0LL;
      *((_QWORD *)v15 + 136) = 0LL;
      *((_QWORD *)v15 + 137) = 0LL;
      v15[276] = 12;
      *((_QWORD *)v15 + 139) = 0LL;
      *((_QWORD *)v15 + 148) = 0LL;
      *((_QWORD *)v15 + 149) = 0LL;
      v15[300] = 12;
      *((_QWORD *)v15 + 151) = 0LL;
      *((_QWORD *)v15 + 160) = 0LL;
      *((_QWORD *)v15 + 161) = 0LL;
      v15[324] = 12;
      *((_QWORD *)v15 + 163) = 0LL;
      *((_QWORD *)v15 + 172) = 0LL;
      *((_QWORD *)v15 + 173) = 0LL;
      v15[348] = 12;
      *((_QWORD *)v15 + 175) = 0LL;
      *((_QWORD *)v15 + 184) = 0LL;
      *((_QWORD *)v15 + 185) = 0LL;
      v15[372] = 12;
      *((_QWORD *)v15 + 187) = 0LL;
      *((_QWORD *)v15 + 196) = 0LL;
      *((_QWORD *)v15 + 197) = 0LL;
      v15[396] = 12;
      *((_QWORD *)v15 + 199) = 0LL;
      *((_QWORD *)v15 + 208) = 0LL;
      *((_QWORD *)v15 + 209) = 0LL;
      v15[420] = 12;
      *((_QWORD *)v15 + 211) = 0LL;
      *((_QWORD *)v15 + 220) = 0LL;
      *((_QWORD *)v15 + 221) = 0LL;
      v15[444] = 12;
      *((_QWORD *)v15 + 223) = 0LL;
      *((_QWORD *)v15 + 232) = 0LL;
      *((_QWORD *)v15 + 233) = 0LL;
      v15[468] = 12;
      v16 = v15 + 2;
      *((_QWORD *)v15 + 235) = 0LL;
      *((_QWORD *)v15 + 244) = 0LL;
      *((_QWORD *)v15 + 245) = 0LL;
      v15[492] = 12;
      *((_QWORD *)v15 + 247) = 0LL;
      *((_QWORD *)v15 + 256) = 0LL;
      *((_QWORD *)v15 + 257) = 0LL;
      v15[516] = 12;
      *((_QWORD *)v15 + 259) = 0LL;
      *((_QWORD *)v15 + 268) = 0LL;
      *((_QWORD *)v15 + 269) = 0LL;
      v15[540] = 12;
      *((_QWORD *)v15 + 271) = 0LL;
      *((_QWORD *)v15 + 280) = 0LL;
      *((_QWORD *)v15 + 281) = 0LL;
      v15[564] = 12;
      *((_QWORD *)v15 + 283) = 0LL;
      *((_QWORD *)v15 + 292) = 0LL;
      *((_QWORD *)v15 + 293) = 0LL;
      v15[588] = 12;
      *((_QWORD *)v15 + 295) = 0LL;
      *((_QWORD *)v15 + 304) = 0LL;
      *((_QWORD *)v15 + 305) = 0LL;
      v15[612] = 12;
      *((_QWORD *)v15 + 307) = 0LL;
      *((_QWORD *)v15 + 316) = 0LL;
      *((_QWORD *)v15 + 317) = 0LL;
      v15[636] = 12;
      *((_QWORD *)v15 + 319) = 0LL;
      *((_QWORD *)v15 + 328) = 0LL;
      *((_QWORD *)v15 + 329) = 0LL;
      v15[660] = 12;
      *((_QWORD *)v15 + 331) = 0LL;
      *((_QWORD *)v15 + 340) = 0LL;
      *((_QWORD *)v15 + 341) = 0LL;
      v15[684] = 12;
      *((_QWORD *)v15 + 343) = 0LL;
      *((_QWORD *)v15 + 352) = 0LL;
      *((_QWORD *)v15 + 353) = 0LL;
      v15[708] = 12;
      *((_QWORD *)v15 + 355) = 0LL;
      *((_QWORD *)v15 + 364) = 0LL;
      *((_QWORD *)v15 + 365) = 0LL;
      v15[732] = 12;
      *((_QWORD *)v15 + 367) = 0LL;
      *((_QWORD *)v15 + 376) = 0LL;
      *((_QWORD *)v15 + 377) = 0LL;
      v15[756] = 12;
      *((_QWORD *)v15 + 379) = 0LL;
      v15[1] = 1;
      v15[7] = -2;
      v17 = *(_QWORD *)v7;
      if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 )
        __fastfail(3u);
      *v16 = v17;
      v16[1] = v7;
      *(_QWORD *)(v17 + 8) = v16;
      *(_QWORD *)v7 = v16;
LABEL_12:
      v12[4] = 8;
      *a3 = v12;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
