/*
 * XREFs of rimGetCompleteFrameFromIVCompleteFrame @ 0x1401EBC98
 * Callers:
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x140217080 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ConvertPointCoordinates @ 0x1401584C4 (ConvertPointCoordinates.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CompleteFrameFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z @ 0x1401EABE0 (-CompleteFrameFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z.c)
 *     ?CopyPointerFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@AEBUtagPOINTEREVENTINT@@@Z @ 0x1401EAD30 (-CopyPointerFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@AEBUtagPOINTEREVENTINT@@@Z.c)
 *     ?StartFrameFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z @ 0x1401EB974 (-StartFrameFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall rimGetCompleteFrameFromIVCompleteFrame(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // edi
  _QWORD *v4; // r12
  unsigned int v7; // ebx
  _DWORD *v8; // rax
  _DWORD *v9; // rsi
  _DWORD *v10; // rdi
  __int64 v11; // r14
  _QWORD *v12; // rax
  __int128 v13; // xmm6
  __int128 v14; // xmm7
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // r12
  __m128i v22; // xmm2
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int64 v26; // rax
  int (*v27)(void); // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 (__fastcall *v30)(_QWORD, _QWORD); // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rdx
  unsigned int v35; // ecx
  __int64 v36; // rdi
  __int64 v37; // r14
  __int64 v39; // rcx
  int v40; // eax
  unsigned int v41; // eax
  __int64 v42; // [rsp+28h] [rbp-89h]
  __int64 v43; // [rsp+30h] [rbp-81h]
  __int128 v44; // [rsp+38h] [rbp-79h] BYREF
  int v45[8]; // [rsp+48h] [rbp-69h] BYREF
  __int128 v46; // [rsp+68h] [rbp-49h]
  __int128 v47; // [rsp+78h] [rbp-39h]
  __int128 v48; // [rsp+88h] [rbp-29h]
  __int128 v49; // [rsp+98h] [rbp-19h]
  __int64 v50; // [rsp+A8h] [rbp-9h]
  int v51; // [rsp+118h] [rbp+67h]
  int v53; // [rsp+130h] [rbp+7Fh]

  v3 = *(_DWORD *)(a1 + 16);
  v4 = a3;
  v7 = 0;
  *a3 = 0LL;
  v8 = (_DWORD *)Win32AllocPoolZInitImpl(256LL, v3, 0x66637352u);
  v9 = v8;
  if ( !v8 )
    return v7;
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
  v42 = v11;
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
  v43 = 0LL;
  v13 = 0LL;
  *((LARGE_INTEGER *)v9 + 15) = KeQueryPerformanceCounter(0LL);
  v14 = 0LL;
  v9[48] = *v10;
  v9[49] = *(_DWORD *)(a1 + 180);
  v9[50] = *(_DWORD *)(a1 + 184);
  *((_QWORD *)v9 + 26) = *(_QWORD *)(a1 + 192);
  *((_QWORD *)v9 + 29) = v9 + 60;
  *((_QWORD *)v9 + 4) = v11;
  if ( a2 )
  {
    v15 = *(_QWORD *)(a2 + 456);
    if ( v15 )
    {
      v13 = *(_OWORD *)(v15 + 176);
      v43 = *(_QWORD *)(a2 + 456);
      v14 = *(_OWORD *)(v15 + 160);
    }
  }
  InputTraceLogging::RIM::StartFrameFromContainer((struct RIMDEV *const)a2, (const struct RIMCOMPLETEFRAME *)v9);
  v16 = *(_QWORD *)(a1 + 216);
  v17 = 0LL;
  v51 = 0;
  if ( !*(_DWORD *)(a1 + 20) )
  {
LABEL_28:
    v34 = *((_QWORD *)v9 + 29);
    *((_QWORD *)v9 + 27) = v34;
    v35 = 192 * *(_DWORD *)(a1 + 20);
    v9[7] = *(_DWORD *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 208) )
      *((_QWORD *)v9 + 28) = v34 + v35;
    v36 = *(_QWORD *)(a1 + 208);
    v37 = *((_QWORD *)v9 + 28);
    while ( v36 )
    {
      while ( 1 )
      {
        *(_DWORD *)v37 = *(_DWORD *)v36;
        *(_DWORD *)(v37 + 4) = *(_DWORD *)(v36 + 4);
        *(_QWORD *)(v37 + 8) = v37 + 24;
        memmove((void *)(v37 + 24), *(const void **)(v36 + 8), *(unsigned int *)(v36 + 4));
        v39 = 0LL;
        v40 = *(_DWORD *)(v36 + 4) + 7;
        *(_QWORD *)(v37 + 16) = 0LL;
        v41 = (v40 & 0xFFFFFFF8) + 24;
        if ( *(_QWORD *)(v36 + 16) )
        {
          v39 = v37 + v41;
          *(_QWORD *)(v37 + 16) = v39;
        }
        v36 = *(_QWORD *)(v36 + 16);
        v37 = v39;
        if ( !v39 )
          break;
        if ( !v36 )
          goto LABEL_38;
      }
      if ( !v36 )
        break;
LABEL_38:
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1549);
    }
    *v4 = v9;
    v7 = 1;
    InputTraceLogging::RIM::CompleteFrameFromContainer((struct RIMDEV *const)a2, (const struct RIMCOMPLETEFRAME *)v9);
    return v7;
  }
  while ( 1 )
  {
    v18 = 192 * v17;
    *(_DWORD *)(v18 + *((_QWORD *)v9 + 29)) = *(_DWORD *)v16;
    *(_WORD *)(*((_QWORD *)v9 + 29) + v18 + 8) = *(_WORD *)(v16 + 8);
    *(_WORD *)(*((_QWORD *)v9 + 29) + v18 + 10) = *(_WORD *)(v16 + 12);
    *(_DWORD *)(*((_QWORD *)v9 + 29) + v18 + 160) = *(_DWORD *)(v16 + 152);
    v19 = *((_QWORD *)v9 + 29);
    *(_DWORD *)(v19 + v18 + 164) = *(_DWORD *)(v16 + 156);
    v20 = *(_DWORD *)(v16 + 16);
    v53 = v20;
    if ( v20 == 2 || v20 == 5 )
    {
      v19 = *((_QWORD *)v9 + 29);
      *(_DWORD *)(v19 + v18 + 112) = *(_DWORD *)(v16 + 104);
      *(_DWORD *)(v19 + v18 + 116) = *(_DWORD *)(v16 + 108);
      *(_OWORD *)(v19 + v18 + 120) = *(_OWORD *)(v16 + 112);
      *(_OWORD *)(v19 + v18 + 136) = *(_OWORD *)(v16 + 128);
      *(_DWORD *)(v19 + v18 + 152) = *(_DWORD *)(v16 + 144);
      *(_DWORD *)(v19 + v18 + 156) = *(_DWORD *)(v16 + 148);
    }
    else if ( v20 == 3 )
    {
      v19 = *((_QWORD *)v9 + 29);
      *(_DWORD *)(v19 + v18 + 112) = *(_DWORD *)(v16 + 104);
      *(_DWORD *)(v19 + v18 + 116) = *(_DWORD *)(v16 + 108);
      *(_DWORD *)(v19 + v18 + 120) = *(_DWORD *)(v16 + 112);
      *(_DWORD *)(v19 + v18 + 124) = *(_DWORD *)(v16 + 116);
      *(_DWORD *)(v19 + v18 + 128) = *(_DWORD *)(v16 + 120);
      *(_DWORD *)(v19 + v18 + 132) = *(_DWORD *)(v16 + 124);
    }
    v21 = *((_QWORD *)v9 + 29);
    v22 = *(__m128i *)(v16 + 16);
    v23 = *(_OWORD *)(v16 + 48);
    v46 = *(_OWORD *)(v16 + 32);
    v24 = *(_OWORD *)(v16 + 64);
    v47 = v23;
    v25 = *(_OWORD *)(v16 + 80);
    v48 = v24;
    *(_QWORD *)&v24 = *(_QWORD *)(v16 + 96);
    *(_DWORD *)(v21 + v18 + 20) = v22.m128i_i32[1];
    *(_DWORD *)(v21 + v18 + 16) = _mm_cvtsi128_si32(v22);
    v49 = v25;
    *(_DWORD *)(v21 + v18 + 28) = _mm_srli_si128(v22, 8).m128i_i32[1];
    *(_QWORD *)(v21 + v18 + 32) = v42;
    *(_QWORD *)(v21 + v18 + 48) = *((_QWORD *)&v46 + 1);
    *(_QWORD *)(v21 + v18 + 64) = *((_QWORD *)&v47 + 1);
    v26 = *((_QWORD *)v9 + 29) + 16LL;
    v50 = v24;
    *(_QWORD *)&v44 = v18 + v26;
    v27 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v19, 2LL) + 48) + 7488LL);
    if ( !v27 || v27() < 0 )
      return 0LL;
    v30 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v29, v28) + 48) + 7496LL);
    if ( !(v30 ? v30(v46, v44) : 0) )
      return 0LL;
    if ( v53 == 5 || !v43 )
    {
      *(_QWORD *)(v21 + v18 + 56) = v47;
      *(_QWORD *)(v21 + v18 + 72) = v48;
    }
    else
    {
      v32 = *(_QWORD *)(v21 + v18 + 48);
      v44 = v13;
      *(_OWORD *)v45 = v14;
      ConvertPointCoordinates(v32, v45, (int *)&v44, (_QWORD *)(v18 + v21 + 56));
      v33 = *(_QWORD *)(v21 + v18 + 64);
      *(_OWORD *)v45 = v13;
      v44 = v14;
      ConvertPointCoordinates(v33, (int *)&v44, v45, (_QWORD *)(v18 + v21 + 72));
    }
    *(_QWORD *)(v21 + v18 + 80) = *((_QWORD *)&v48 + 1);
    *(_OWORD *)(v21 + v18 + 88) = v49;
    *(_DWORD *)(v21 + v18 + 104) = v50;
    InputTraceLogging::RIM::CopyPointerFromContainer(
      (struct RIMDEV *const)a2,
      (const struct tagPOINTEREVENTINT *)(v18 + *((_QWORD *)v9 + 29) + 8LL));
    v16 += 176LL;
    v17 = (unsigned int)(v51 + 1);
    v51 = v17;
    if ( (unsigned int)v17 >= *(_DWORD *)(a1 + 20) )
    {
      v4 = a3;
      goto LABEL_28;
    }
  }
}
