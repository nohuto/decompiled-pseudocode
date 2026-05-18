/*
 * XREFs of sub_180034C38 @ 0x180034C38
 * Callers:
 *     sub_18003001C @ 0x18003001C (sub_18003001C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18000B2D4 @ 0x18000B2D4 (sub_18000B2D4.c)
 *     memset @ 0x18000C088 (memset.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180011B8C @ 0x180011B8C (sub_180011B8C.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_18001C1D8 @ 0x18001C1D8 (sub_18001C1D8.c)
 *     sub_18002378C @ 0x18002378C (sub_18002378C.c)
 *     sub_18002F0CC @ 0x18002F0CC (sub_18002F0CC.c)
 *     sub_18002F1B4 @ 0x18002F1B4 (sub_18002F1B4.c)
 *     sub_18002FABC @ 0x18002FABC (sub_18002FABC.c)
 *     sub_18003062C @ 0x18003062C (sub_18003062C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=9
char __fastcall sub_180034C38(_QWORD *a1)
{
  _UNKNOWN **v1; // rax
  _QWORD *v3; // r15
  HANDLE CurrentProcess; // rax
  SIZE_T v5; // r9
  int v6; // r12d
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rsi
  _QWORD *v11; // rdx
  _QWORD *i; // rax
  __int64 v13; // r8
  unsigned int v14; // r10d
  float v15; // xmm6_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  __int64 v19; // rsi
  void (__fastcall *v20)(__int64, _QWORD *, __int64 *, void **); // rdi
  __int64 *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r9
  void (__fastcall *v25)(__int64, __int64, __int64); // r10
  __int64 v26; // r11
  _BYTE *v27; // rax
  size_t v28; // r8
  void *v30[2]; // [rsp+30h] [rbp-128h] BYREF
  __m128i v31; // [rsp+40h] [rbp-118h] BYREF
  __int128 v32; // [rsp+50h] [rbp-108h]
  _QWORD *v33; // [rsp+60h] [rbp-F8h]
  __int128 v34; // [rsp+68h] [rbp-F0h] BYREF
  _QWORD *v35; // [rsp+78h] [rbp-E0h]
  stdext::exception *v36; // [rsp+80h] [rbp-D8h] BYREF
  _QWORD v37[4]; // [rsp+88h] [rbp-D0h] BYREF
  _QWORD v38[4]; // [rsp+A8h] [rbp-B0h] BYREF
  float v39; // [rsp+C8h] [rbp-90h]
  PROCESS_MEMORY_COUNTERS ppsmemCounters; // [rsp+D0h] [rbp-88h] BYREF
  _UNKNOWN *retaddr; // [rsp+158h] [rbp+0h] BYREF

  v1 = &retaddr;
  v35 = a1;
  if ( a1[60] )
  {
    v3 = a1 + 62;
    v33 = a1 + 62;
    memset(&ppsmemCounters, 0, sizeof(ppsmemCounters));
    CurrentProcess = GetCurrentProcess();
    K32GetProcessMemoryInfo(CurrentProcess, &ppsmemCounters, 0x48u);
    v5 = ppsmemCounters.PeakWorkingSetSize - a1[146];
    v6 = 0;
    v7 = 0x7FFFFFFFFFFFFFFFLL;
    v8 = 0x8000000000000000uLL;
    v9 = 0LL;
    v10 = 0LL;
    v11 = (_QWORD *)a1[21];
    for ( i = (_QWORD *)*v11; i != v11; i = (_QWORD *)*i )
    {
      v13 = i[2];
      v31 = *(__m128i *)(v13 + 400);
      v32 = *(_OWORD *)(v13 + 416);
      v14 = _mm_cvtsi128_si32(v31);
      if ( v14 )
      {
        if ( v31.m128i_i64[1] < v7 )
          v7 = v31.m128i_i64[1];
        if ( v8 < *((__int64 *)&v32 + 1) )
          v8 = *((_QWORD *)&v32 + 1);
        v9 += v32 * v14;
        v6 += v14;
      }
    }
    if ( v6 )
      v10 = v9 / v6;
    if ( (v5 & 0x8000000000000000uLL) != 0LL )
      v15 = (float)(int)(v5 & 1 | (v5 >> 1)) + (float)(int)(v5 & 1 | (v5 >> 1));
    else
      v15 = (float)(int)v5;
    std::string::string(v38, "Engine Max Memory Usage");
    v39 = v15;
    v31.m128i_i64[0] = (__int64)v38;
    v31.m128i_i64[1] = (__int64)&ppsmemCounters;
    sub_18002F0CC((__int64 *)v30, &v31);
    sub_18000B2D4((__int64)v38, 40LL, 1LL, (void (__fastcall *)(__int64))sub_180010F20);
    if ( v6 )
    {
      v16 = sub_18002378C(v7);
      std::string::string(v37, "Min Time Per-render-update");
      *(float *)sub_18003062C((__int64 *)v30, (__int64)v37) = v16;
      sub_180011A5C((__int64)v37);
      v17 = sub_18002378C(v10);
      std::string::string(v37, "Avg Time Per-render-update");
      *(float *)sub_18003062C((__int64 *)v30, (__int64)v37) = v17;
      sub_180011A5C((__int64)v37);
      v18 = sub_18002378C(v8);
      std::string::string(v37, "Max Time Per-render-update");
      *(float *)sub_18003062C((__int64 *)v30, (__int64)v37) = v18;
      sub_180011A5C((__int64)v37);
    }
    v19 = a1[60];
    v20 = *(void (__fastcall **)(__int64, _QWORD *, __int64 *, void **))(*(_QWORD *)v19 + 40LL);
    v21 = sub_18002F1B4(v31.m128i_i64);
    std::string::string(v37, "Engine Shutting Down");
    v20(v19, v37, v21, v30);
    sub_180011A5C((__int64)v37);
    sub_18002FABC((void **)&v31);
    LOBYTE(v1) = sub_18001C1D8(v30);
  }
  else
  {
    v3 = a1 + 62;
    if ( !a1[62] )
      return (char)v1;
    v33 = a1 + 62;
  }
  if ( *v3 )
  {
    std::string::string(v37, byte_1800F6C80);
    v34 = 0LL;
    __ExceptionPtrCreate(&v34);
    __ExceptionPtrCurrentException(&v34);
    if ( __ExceptionPtrToBool(&v34) )
    {
      v31 = 0LL;
      __ExceptionPtrCopy(&v31, &v34);
      try
      {
        v30[0] = &v31;
        __ExceptionPtrRethrow(&v31);
      }
      catch ( stdext::exception *v36 )
      {
        v27 = (_BYTE *)(*(__int64 (__fastcall **)(stdext::exception *))(*(_QWORD *)v36 + 8LL))(v36);
        v28 = -1LL;
        do
          ++v28;
        while ( v27[v28] );
        sub_180013818((__int64)v37, v27, v28);
      }
    }
    else
    {
      __ExceptionPtrDestroy(&v34);
    }
    sub_180011B8C((__int64 *)v30);
    sub_1800137F8((__int64)v37);
    v23 = (unsigned int)(int)sub_18002378C(v22);
    v25(v26, v23, v24);
    LOBYTE(v1) = sub_180011A5C((__int64)v37);
  }
  return (char)v1;
}
