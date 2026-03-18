/*
 * XREFs of rimGetCompleteFrameFromIVCompleteFrame @ 0x1C01A0A18
 * Callers:
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EE100 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C004F080 (Win32AllocPoolZInit.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D6F00 (memmove.c)
 *     ?CompleteFrameFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z @ 0x1C019D7D0 (-CompleteFrameFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z.c)
 *     ?CopyPointerFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@AEBUtagPOINTEREVENTINT@@@Z @ 0x1C019D984 (-CopyPointerFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@AEBUtagPOINTEREVENTINT@@@Z.c)
 *     ?StartFrameFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z @ 0x1C019EDAC (-StartFrameFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z.c)
 *     ConvertPointCoordinates @ 0x1C01EFBE8 (ConvertPointCoordinates.c)
 */

__int64 __fastcall rimGetCompleteFrameFromIVCompleteFrame(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // edi
  unsigned int v6; // ebx
  _QWORD *v7; // r12
  _DWORD *v8; // rax
  _DWORD *v9; // rsi
  _DWORD *v10; // rdi
  __int64 v11; // r14
  _QWORD *v12; // rax
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // r12
  __m128i v19; // xmm2
  __int128 v20; // xmm1
  __int64 v21; // xmm0_8
  __int64 v23; // rdx
  unsigned int v24; // ecx
  __int64 v25; // rdi
  __int64 v26; // r14
  __int64 v28; // rcx
  int v29; // eax
  unsigned int v30; // eax
  __int64 v31; // [rsp+28h] [rbp-89h]
  __int64 v32; // [rsp+30h] [rbp-81h]
  __int64 v33; // [rsp+38h] [rbp-79h]
  __int128 v34; // [rsp+68h] [rbp-49h]
  __int128 v35; // [rsp+78h] [rbp-39h]
  __int128 v36; // [rsp+88h] [rbp-29h]
  int v37; // [rsp+118h] [rbp+67h]
  int v39; // [rsp+130h] [rbp+7Fh]

  v3 = *(_DWORD *)(a1 + 16);
  v6 = 0;
  *a3 = 0LL;
  v7 = a3;
  v8 = (_DWORD *)Win32AllocPoolZInit(v3, 0x66637352u);
  v9 = v8;
  if ( !v8 )
    return v6;
  *v8 = v3;
  v10 = (_DWORD *)(a1 + 176);
  if ( a2 )
  {
    if ( *v10 )
      v11 = *(_QWORD *)(a2 + 24);
    else
      v11 = *(_QWORD *)(a2 + 16);
  }
  else
  {
    v11 = 0LL;
  }
  v12 = v8 + 2;
  v31 = v11;
  v12[1] = v12;
  *v12 = v12;
  *v9 = *(_DWORD *)(a1 + 16);
  v9[6] = *(_DWORD *)(a1 + 20);
  v9[7] = *(_DWORD *)(a1 + 24);
  *((_OWORD *)v9 + 3) = *(_OWORD *)(a1 + 32);
  *((_OWORD *)v9 + 4) = *(_OWORD *)(a1 + 48);
  *((_OWORD *)v9 + 5) = *(_OWORD *)(a1 + 64);
  *((_OWORD *)v9 + 6) = *(_OWORD *)(a1 + 80);
  *((_OWORD *)v9 + 7) = *(_OWORD *)(a1 + 96);
  *((_OWORD *)v9 + 8) = *(_OWORD *)(a1 + 112);
  *((_OWORD *)v9 + 9) = *(_OWORD *)(a1 + 128);
  *((_OWORD *)v9 + 10) = *(_OWORD *)(a1 + 144);
  *((_OWORD *)v9 + 11) = *(_OWORD *)(a1 + 160);
  v32 = 0LL;
  *((LARGE_INTEGER *)v9 + 15) = KeQueryPerformanceCounter(0LL);
  v9[48] = *v10;
  v9[49] = *(_DWORD *)(a1 + 180);
  v9[50] = *(_DWORD *)(a1 + 184);
  *((_QWORD *)v9 + 26) = *(_QWORD *)(a1 + 192);
  *((_QWORD *)v9 + 29) = v9 + 60;
  *((_QWORD *)v9 + 4) = v11;
  if ( a2 && *(_QWORD *)(a2 + 472) )
    v32 = *(_QWORD *)(a2 + 472);
  InputTraceLogging::RIM::StartFrameFromContainer((struct RIMDEV *const)a2, (const struct RIMCOMPLETEFRAME *)v9);
  v13 = *(_QWORD *)(a1 + 216);
  v14 = 0LL;
  v37 = 0;
  if ( !*(_DWORD *)(a1 + 20) )
  {
LABEL_28:
    v23 = *((_QWORD *)v9 + 29);
    *((_QWORD *)v9 + 27) = v23;
    v24 = 192 * *(_DWORD *)(a1 + 20);
    v9[7] = *(_DWORD *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 208) )
      *((_QWORD *)v9 + 28) = v23 + v24;
    v25 = *(_QWORD *)(a1 + 208);
    v26 = *((_QWORD *)v9 + 28);
    while ( v25 )
    {
      while ( 1 )
      {
        *(_DWORD *)v26 = *(_DWORD *)v25;
        *(_DWORD *)(v26 + 4) = *(_DWORD *)(v25 + 4);
        *(_QWORD *)(v26 + 8) = v26 + 24;
        memmove((void *)(v26 + 24), *(const void **)(v25 + 8), *(unsigned int *)(v25 + 4));
        v28 = 0LL;
        v29 = *(_DWORD *)(v25 + 4) + 7;
        *(_QWORD *)(v26 + 16) = 0LL;
        v30 = (v29 & 0xFFFFFFF8) + 24;
        if ( *(_QWORD *)(v25 + 16) )
        {
          v28 = v26 + v30;
          *(_QWORD *)(v26 + 16) = v28;
        }
        v25 = *(_QWORD *)(v25 + 16);
        v26 = v28;
        if ( !v28 )
          break;
        if ( !v25 )
          goto LABEL_38;
      }
      if ( !v25 )
        break;
LABEL_38:
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1547);
    }
    *v7 = v9;
    v6 = 1;
    InputTraceLogging::RIM::CompleteFrameFromContainer((struct RIMDEV *const)a2, (const struct RIMCOMPLETEFRAME *)v9);
    return v6;
  }
  while ( 1 )
  {
    v15 = 192 * v14;
    *(_DWORD *)(v15 + *((_QWORD *)v9 + 29)) = *(_DWORD *)v13;
    *(_WORD *)(v15 + *((_QWORD *)v9 + 29) + 8) = *(_WORD *)(v13 + 8);
    *(_WORD *)(v15 + *((_QWORD *)v9 + 29) + 10) = *(_WORD *)(v13 + 12);
    *(_DWORD *)(v15 + *((_QWORD *)v9 + 29) + 160) = *(_DWORD *)(v13 + 152);
    v16 = *((_QWORD *)v9 + 29);
    *(_DWORD *)(v15 + v16 + 164) = *(_DWORD *)(v13 + 156);
    v17 = *(_DWORD *)(v13 + 16);
    v39 = v17;
    if ( v17 == 2 || v17 == 5 )
    {
      v16 = *((_QWORD *)v9 + 29);
      *(_DWORD *)(v15 + v16 + 112) = *(_DWORD *)(v13 + 104);
      *(_DWORD *)(v15 + v16 + 116) = *(_DWORD *)(v13 + 108);
      *(_OWORD *)(v15 + v16 + 120) = *(_OWORD *)(v13 + 112);
      *(_OWORD *)(v15 + v16 + 136) = *(_OWORD *)(v13 + 128);
      *(_DWORD *)(v15 + v16 + 152) = *(_DWORD *)(v13 + 144);
      *(_DWORD *)(v15 + v16 + 156) = *(_DWORD *)(v13 + 148);
    }
    else if ( v17 == 3 )
    {
      v16 = *((_QWORD *)v9 + 29);
      *(_DWORD *)(v15 + v16 + 112) = *(_DWORD *)(v13 + 104);
      *(_DWORD *)(v15 + v16 + 116) = *(_DWORD *)(v13 + 108);
      *(_DWORD *)(v15 + v16 + 120) = *(_DWORD *)(v13 + 112);
      *(_DWORD *)(v15 + v16 + 124) = *(_DWORD *)(v13 + 116);
      *(_DWORD *)(v15 + v16 + 128) = *(_DWORD *)(v13 + 120);
      *(_DWORD *)(v15 + v16 + 132) = *(_DWORD *)(v13 + 124);
    }
    v18 = *((_QWORD *)v9 + 29);
    v19 = *(__m128i *)(v13 + 16);
    v34 = *(_OWORD *)(v13 + 32);
    v35 = *(_OWORD *)(v13 + 48);
    v20 = *(_OWORD *)(v13 + 80);
    v36 = *(_OWORD *)(v13 + 64);
    v21 = *(_QWORD *)(v13 + 96);
    *(_DWORD *)(v15 + v18 + 20) = v19.m128i_i32[1];
    *(_DWORD *)(v15 + v18 + 16) = _mm_cvtsi128_si32(v19);
    *(_DWORD *)(v15 + v18 + 28) = _mm_srli_si128(v19, 8).m128i_i32[1];
    *(_QWORD *)(v15 + v18 + 32) = v31;
    *(_QWORD *)(v15 + v18 + 48) = *((_QWORD *)&v34 + 1);
    *(_QWORD *)(v15 + v18 + 64) = *((_QWORD *)&v35 + 1);
    v33 = v15 + *((_QWORD *)v9 + 29) + 16LL;
    if ( !qword_1C0296E48 || (int)qword_1C0296E48(v16, 2LL) < 0 )
      return 0LL;
    if ( !(qword_1C0296E50 ? qword_1C0296E50(v34, v33) : 0) )
      return 0LL;
    if ( v39 == 5 || !v32 )
    {
      *(_QWORD *)(v15 + v18 + 56) = v35;
      *(_QWORD *)(v15 + v18 + 72) = v36;
    }
    else
    {
      ConvertPointCoordinates(*(_QWORD *)(v15 + v18 + 48));
      ConvertPointCoordinates(*(_QWORD *)(v15 + v18 + 64));
    }
    *(_QWORD *)(v15 + v18 + 80) = *((_QWORD *)&v36 + 1);
    *(_OWORD *)(v15 + v18 + 88) = v20;
    *(_DWORD *)(v15 + v18 + 104) = v21;
    InputTraceLogging::RIM::CopyPointerFromContainer(
      (struct RIMDEV *const)a2,
      (const struct tagPOINTEREVENTINT *)(v15 + *((_QWORD *)v9 + 29) + 8LL));
    v13 += 176LL;
    v14 = (unsigned int)(v37 + 1);
    v37 = v14;
    if ( (unsigned int)v14 >= *(_DWORD *)(a1 + 20) )
    {
      v7 = a3;
      goto LABEL_28;
    }
  }
}
