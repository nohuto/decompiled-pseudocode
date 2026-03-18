/*
 * XREFs of VidSchiUpdateLastCompletedPresentTimestamp @ 0x14000F7D0
 * Callers:
 *     VidSchiIsHardwareCompletedDependingCommandForFlip @ 0x14000F680 (VidSchiIsHardwareCompletedDependingCommandForFlip.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x14001F0E0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiNeedToForcePreemptNode @ 0x140031564 (VidSchiNeedToForcePreemptNode.c)
 * Callees:
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x140005BFC (McTemplateK0pqx_EtwWriteTransfer.c)
 *     RtlULongLongMult @ 0x140035FA0 (RtlULongLongMult.c)
 *     ?VidSchiStartExecutionTimeAtThisPriorityBand@@YAXPEAU_VIDSCH_NODE@@W4VIDSCH_YIELD_PRIORITY_BAND@@_K@Z @ 0x1400394E4 (-VidSchiStartExecutionTimeAtThisPriorityBand@@YAXPEAU_VIDSCH_NODE@@W4VIDSCH_YIELD_PRIORITY_BAND@.c)
 *     VidSchiMonitorRefreshPeriodFromNode @ 0x14003B668 (VidSchiMonitorRefreshPeriodFromNode.c)
 *     VidSchiStartNodeYield @ 0x14003B730 (VidSchiStartNodeYield.c)
 *     McTemplateK0pqxxxx_EtwWriteTransfer @ 0x14003B8AC (McTemplateK0pqxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchiUpdateLastCompletedPresentTimestamp(__int64 a1, __int64 a2, char a3)
{
  unsigned __int128 v3; // rax
  char v5; // bl
  LARGE_INTEGER *v6; // rsi
  LARGE_INTEGER v7; // rdi
  __int64 v8; // r14
  bool v9; // zf
  char v10; // r12
  LARGE_INTEGER v11; // rax
  LARGE_INTEGER v12; // rcx
  LARGE_INTEGER v13; // r8
  LARGE_INTEGER v14; // r10
  __int64 v15; // rdx
  LARGE_INTEGER v16; // r13
  union _LARGE_INTEGER v17; // r9
  unsigned __int64 v18; // r14
  unsigned int v19; // r11d
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rbx
  __int64 v22; // rdx
  unsigned __int64 v23; // rsi
  ULONGLONG v24; // rax
  unsigned __int64 v25; // rax
  LONGLONG v26; // rax
  unsigned __int64 v27; // kr00_8
  unsigned __int128 v28; // rax
  int v29; // ecx
  __int64 v30; // rax
  int v31; // r13d
  __int64 *v32; // r8
  __int64 v33; // r8
  char v34; // r10
  __int64 i; // rsi
  __int64 *v36; // rbx
  __int64 v37; // rbx
  __int64 v38; // r9
  unsigned int refreshed; // eax
  unsigned __int64 v40; // r10
  unsigned __int64 v41; // rcx
  __int16 v42; // r11
  __int64 v43; // rdx
  unsigned __int64 v44; // r8
  LONGLONG v45; // rcx
  unsigned __int64 v46; // r9
  __int16 v47; // r11
  unsigned __int64 v48; // r10
  __int64 v49; // rdx
  unsigned __int64 v50; // r8
  __int64 v51; // r9
  unsigned __int64 v52; // r10
  unsigned __int64 v53; // r8
  unsigned int v55; // [rsp+50h] [rbp-19h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+58h] [rbp-11h] BYREF
  __int64 v57; // [rsp+60h] [rbp-9h]
  ULONGLONG pullResult; // [rsp+68h] [rbp-1h] BYREF
  LARGE_INTEGER v59; // [rsp+70h] [rbp+7h]
  unsigned __int64 v60; // [rsp+78h] [rbp+Fh]
  __int64 v61; // [rsp+80h] [rbp+17h]
  LARGE_INTEGER *v62; // [rsp+88h] [rbp+1Fh]
  char v63; // [rsp+D0h] [rbp+67h]
  int v64; // [rsp+E8h] [rbp+7Fh]

  *((_QWORD *)&v3 + 1) = a2;
  v5 = BYTE8(v3);
  v63 = 0;
  v6 = *(LARGE_INTEGER **)(a1 + 104);
  *(_QWORD *)&v3 = *(unsigned int *)(a1 + 404);
  v62 = v6;
  v7 = v6[4];
  v8 = gulPriorityToYieldPriorityBand[(_QWORD)v3];
  v64 = v8;
  if ( !(_DWORD)v8 || (_DWORD)v8 == 3 )
    return v3;
  v9 = *(_BYTE *)(v7.QuadPart + 7062) == 0;
  v10 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  if ( v9 )
    v10 = a3;
  v11 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v14 = v6[23];
  v15 = v8;
  v59 = v11;
  v16 = v11;
  v57 = v8;
  if ( !v14.QuadPart && !v10 )
  {
    if ( (byte_140081241 & 1) != 0 )
    {
      McTemplateK0pqxxxx_EtwWriteTransfer(
        v12.LowPart,
        v8,
        v13.LowPart,
        *(_QWORD *)(v7.QuadPart + 16),
        1,
        *(_DWORD *)(a1 + 404),
        v11.QuadPart,
        0,
        0);
      v15 = v8;
    }
LABEL_33:
    v34 = v63;
    goto LABEL_34;
  }
  v17 = PerformanceFrequency;
  v18 = v11.QuadPart - v14.QuadPart;
  if ( !v5 && !v10 )
  {
    v60 = 0LL;
    if ( is_mul_ok(v18, 0x989680uLL) )
    {
      *(_QWORD *)&v3 = v18 * (unsigned __int128)0x989680uLL / (unsigned __int64)PerformanceFrequency.QuadPart;
      v13.QuadPart = v3;
    }
    else
    {
      *(_QWORD *)&v3 = v18 / PerformanceFrequency.QuadPart;
      v12.QuadPart = 10000000 * (v18 / PerformanceFrequency.QuadPart);
      v13.QuadPart = v12.QuadPart + 10000000 * (v18 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
    }
    if ( v13.QuadPart < *(_QWORD *)(v7.QuadPart + 3088) )
      return v3;
    v15 = v57;
  }
  v55 = *(_DWORD *)(v7.QuadPart + 4 * v15 + 220);
  v19 = v55;
  v20 = v18 * v55;
  v3 = v20 * (unsigned __int128)0x47AE147AE147AE15uLL;
  v21 = v20 / 0x64;
  if ( !v21 && !v10 )
  {
    if ( (byte_140081241 & 1) != 0 )
      *(_QWORD *)&v3 = McTemplateK0pqxxxx_EtwWriteTransfer(
                         v12.LowPart,
                         DWORD2(v3),
                         v13.LowPart,
                         *(_QWORD *)(v7.QuadPart + 16),
                         2,
                         *(_DWORD *)(a1 + 404),
                         LOBYTE(v16.LowPart) - LOBYTE(v14.LowPart),
                         0,
                         0);
    return v3;
  }
  v60 = 0LL;
  if ( is_mul_ok(v21, 0x989680uLL) )
  {
    v22 = v21 * (unsigned __int128)0x989680uLL % (unsigned __int64)PerformanceFrequency.QuadPart;
    v23 = v21 * (unsigned __int128)0x989680uLL / (unsigned __int64)PerformanceFrequency.QuadPart;
  }
  else
  {
    v22 = v21 % PerformanceFrequency.QuadPart;
    v12.QuadPart = 10000000 * (v21 / PerformanceFrequency.QuadPart);
    v23 = v12.QuadPart + 10000000 * (v21 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
  }
  v24 = *(_QWORD *)(v7.QuadPart + 3072);
  if ( v23 > v24 )
  {
    if ( !v10 )
    {
      if ( (byte_140081241 & 1) != 0 )
        McTemplateK0pqxxxx_EtwWriteTransfer(
          v12.LowPart,
          v22,
          v13.LowPart,
          *(_QWORD *)(v7.QuadPart + 16),
          1,
          *(_DWORD *)(a1 + 404),
          v16.QuadPart,
          v14.QuadPart,
          0);
LABEL_49:
      v15 = v57;
      LODWORD(v8) = v64;
      goto LABEL_33;
    }
    pullResult = 0LL;
    v23 = v24;
    if ( RtlULongLongMult(v24, PerformanceFrequency.QuadPart, &pullResult) >= 0 )
    {
      v17 = PerformanceFrequency;
      v28 = pullResult * (unsigned __int128)0xD6BF94D5E57A42BDuLL;
      goto LABEL_20;
    }
    v52 = v51 * (v23 / 0x989680);
    v53 = v51 * (v23 % 0x989680);
    v17 = PerformanceFrequency;
    v21 = v52 + v53 / 0x989680;
  }
  else
  {
    v25 = *(_QWORD *)(v7.QuadPart + 3080);
    if ( v23 >= v25 )
      goto LABEL_21;
    v60 = 0LL;
    v23 = v25;
    v27 = v25;
    v26 = v25 * PerformanceFrequency.QuadPart;
    if ( is_mul_ok(v27, PerformanceFrequency.QuadPart) )
    {
      v28 = (unsigned __int64)v26 * (unsigned __int128)0xD6BF94D5E57A42BDuLL;
LABEL_20:
      v21 = *((_QWORD *)&v28 + 1) >> 23;
      goto LABEL_21;
    }
    v21 = PerformanceFrequency.QuadPart * (v23 / 0x989680) + PerformanceFrequency.QuadPart * (v23 % 0x989680) / 0x989680;
  }
  v19 = v55;
LABEL_21:
  v29 = *(_DWORD *)(a1 + 404);
  v30 = 0LL;
  LODWORD(pullResult) = 0;
  v31 = (1 << v29) - 1;
  if ( !*(_DWORD *)(v7.QuadPart + 80) )
  {
    v16 = v59;
    v34 = 0;
    LODWORD(v8) = v64;
    v15 = v57;
    goto LABEL_34;
  }
  do
  {
    v32 = *(__int64 **)(v7.QuadPart + 688);
    if ( (unsigned int)v30 < *(_DWORD *)(v7.QuadPart + 760) )
      v32 += v30;
    v33 = *v32;
    if ( (v31 & *(_DWORD *)(v33 + 1888)) == 0 && (v31 & *(_DWORD *)(v33 + 1892)) == 0 )
      goto LABEL_26;
    v60 = *(_QWORD *)(v33 + 8 * v57 + 2088);
    if ( v60 <= v18 * (100 - v19) / 0x64 && !v10 )
    {
      if ( (byte_140081241 & 1) == 0 )
      {
LABEL_26:
        v34 = v63;
        goto LABEL_27;
      }
      v61 = 0LL;
      if ( is_mul_ok(v18, 0x989680uLL) )
        v40 = v18 * (unsigned __int128)0x989680uLL / (unsigned __int64)v17.QuadPart;
      else
        v40 = 10000000 * (v18 / v17.QuadPart) + 10000000 * (v18 % v17.QuadPart) / v17.QuadPart;
      LODWORD(v41) = v60;
      v61 = 0LL;
      v42 = *(_WORD *)(v33 + 4);
      if ( is_mul_ok(v60, 0x989680uLL) )
      {
        v43 = v60 * (unsigned __int128)0x989680uLL % (unsigned __int64)v17.QuadPart;
        v44 = v60 * (unsigned __int128)0x989680uLL / (unsigned __int64)v17.QuadPart;
      }
      else
      {
        v43 = v60 % v17.QuadPart;
        v41 = 10000000 * (v60 / v17.QuadPart);
        v44 = v41 + 10000000 * (v60 % v17.QuadPart) / v17.QuadPart;
      }
      McTemplateK0pqxxxx_EtwWriteTransfer(
        v41,
        v43,
        v44,
        *(_QWORD *)(v7.QuadPart + 16),
        5,
        *(_DWORD *)(a1 + 404),
        v44,
        v42,
        v40);
LABEL_72:
      v17 = PerformanceFrequency;
      goto LABEL_26;
    }
    *(_QWORD *)(v33 + 2120) = 0LL;
    v34 = 1;
    *(_BYTE *)(v33 + 2144) = 1;
    *(_QWORD *)(v33 + 2128) = v21;
    *(_QWORD *)(v33 + 2136) = v23;
    v63 = 1;
    if ( (byte_140081241 & 1) != 0 )
    {
      v61 = 0LL;
      LODWORD(v45) = PerformanceFrequency.LowPart;
      if ( is_mul_ok(v18, 0x989680uLL) )
        v46 = v18 * (unsigned __int128)0x989680uLL / (unsigned __int64)PerformanceFrequency.QuadPart;
      else
        v46 = 10000000 * (v18 / PerformanceFrequency.QuadPart)
            + 10000000 * (v18 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
      v61 = 0LL;
      v47 = *(_WORD *)(v33 + 4);
      v48 = *(_QWORD *)(v33 + 8 * v57 + 2088);
      if ( is_mul_ok(v48, 0x989680uLL) )
      {
        v49 = v48 * (unsigned __int128)0x989680uLL % (unsigned __int64)PerformanceFrequency.QuadPart;
        v50 = v48 * (unsigned __int128)0x989680uLL / (unsigned __int64)PerformanceFrequency.QuadPart;
      }
      else
      {
        v49 = v48 % PerformanceFrequency.QuadPart;
        v45 = 10000000 * (v48 / PerformanceFrequency.QuadPart);
        v50 = v45 + 10000000 * (v48 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
      }
      McTemplateK0pqxxxx_EtwWriteTransfer(
        v45,
        v49,
        v50,
        *(_QWORD *)(v7.QuadPart + 16),
        0,
        *(_DWORD *)(a1 + 404),
        v50,
        v47,
        v46);
      goto LABEL_72;
    }
    v17 = PerformanceFrequency;
LABEL_27:
    v19 = v55;
    v30 = (unsigned int)(pullResult + 1);
    LODWORD(pullResult) = v30;
  }
  while ( (unsigned int)v30 < *(_DWORD *)(v7.QuadPart + 80) );
  if ( v34 )
  {
    *(_DWORD *)(v7.QuadPart + 216) = *(_DWORD *)(a1 + 404) - 1;
    if ( (byte_140081241 & 1) != 0 )
    {
      McTemplateK0pqx_EtwWriteTransfer();
      v16 = v59;
      goto LABEL_49;
    }
  }
  v16 = v59;
  LODWORD(v8) = v64;
  v15 = v57;
LABEL_34:
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v7.QuadPart + 80); v15 = (int)v8 )
  {
    v36 = *(__int64 **)(v7.QuadPart + 688);
    if ( (unsigned int)i < *(_DWORD *)(v7.QuadPart + 760) )
      v36 += i;
    v37 = *v36;
    *(_QWORD *)(v37 + 8 * v15 + 2056) = 0LL;
    *(_QWORD *)(v37 + 8 * v15 + 2088) = 0LL;
    *(LARGE_INTEGER *)(v37 + 8 * v15 + 2024) = v16;
    v38 = *(_QWORD *)(v37 + 8LL * *(unsigned int *)(v37 + 1576) + 1584);
    if ( v38 && gulPriorityToYieldPriorityBand[*(unsigned int *)(v38 + 404)] >= (int)v8 )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))VidSchiStartExecutionTimeAtThisPriorityBand)(
        v37,
        (unsigned int)v8,
        (LARGE_INTEGER)v16.QuadPart);
    if ( v34
      && *(_BYTE *)(v37 + 2144)
      && !*(_QWORD *)(v37 + 2120)
      && v38
      && *(_DWORD *)(v38 + 404) <= *(_DWORD *)(v7.QuadPart + 216) )
    {
      refreshed = VidSchiMonitorRefreshPeriodFromNode(v37);
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
        v37,
        (LARGE_INTEGER)v16.QuadPart,
        (union _LARGE_INTEGER)PerformanceFrequency.QuadPart,
        refreshed);
      v34 = v63;
    }
    i = (unsigned int)(i + 1);
  }
  *(_QWORD *)&v3 = v62;
  v62[23] = v16;
  return v3;
}
