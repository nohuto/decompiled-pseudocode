/*
 * XREFs of ?InitializeGpuVaState@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAVVIDMM_GLOBAL@@IPEBUDXGADAPTER_GPUMMUCAPS@@PEBUDXGK_PHYSICALADAPTERINFO@@@Z @ 0x140094D38
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z @ 0x140093E90 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140055A70 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall VIDMM_PHYSICAL_ADAPTER::InitializeGpuVaState(
        VIDMM_PHYSICAL_ADAPTER *this,
        struct VIDMM_GLOBAL *a2,
        unsigned int a3,
        const struct DXGADAPTER_GPUMMUCAPS *a4)
{
  _DWORD *v5; // rbp
  unsigned int v6; // esi
  __int64 v7; // r9
  int v9; // eax
  char v11; // r8
  int v12; // eax
  __int64 v13; // rcx
  int v15; // eax
  unsigned int v16; // ebp
  unsigned int v17; // r9d
  unsigned int v18; // eax
  __int64 v19; // r8
  __int64 v20; // r11
  __int64 v21; // r10
  __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned int v24; // r14d
  int v25; // r9d
  int v26; // edx
  __int64 v27; // r10
  int v28; // ecx
  __int64 v29; // r8
  int v30; // eax
  __int64 v31; // rax
  unsigned int i; // r11d
  unsigned int v33; // r14d
  __int64 v34; // r12
  __int64 v35; // r9
  __int64 v36; // r8
  __int64 v37; // rdx

  v5 = (_DWORD *)((char *)a2 + 40928);
  *((_QWORD *)this + 60) = a4;
  *((_BYTE *)this + 477) |= 1u;
  v6 = 0;
  v7 = a3;
  v9 = *((_DWORD *)a4 + 2);
  if ( v9 )
    *v5 = v9;
  v11 = *((_BYTE *)this + 476);
  if ( (v11 & 1) != 0 )
  {
    *((_BYTE *)this + 476) = v11 ^ (v11 ^ (32
                                         * *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 2992LL)
                                                    + 344 * v7
                                                    + 48))) & 0x20;
    if ( (*(_DWORD *)a4 & 0x80u) != 0 )
    {
      v12 = *((_DWORD *)a4 + 3);
      if ( !v12 || (v12 & 0xFFF) != 0 )
      {
        WdLogSingleEntry1(1LL, *((unsigned int *)a4 + 3));
        WdLogGlobalForLineNumber = 958;
LABEL_8:
        DxgkLogInternalTriageEvent(v13, 0x40000LL);
        return 3221225485LL;
      }
    }
    v15 = *((_DWORD *)a4 + 9);
    v16 = *v5 - 12;
    *((_DWORD *)this + 18) = v15;
    if ( !v15 )
    {
      WdLogSingleEntry1(1LL, *((unsigned int *)a4 + 9));
      WdLogGlobalForLineNumber = 968;
      goto LABEL_8;
    }
    *((_DWORD *)this + 18) = (v15 + 4095) & 0xFFFFF000;
    v17 = *((_DWORD *)a4 + 7);
    v18 = *((_DWORD *)this + 16);
    *((_DWORD *)this + 20) = v17;
    v19 = *((unsigned int *)a4 + 12);
    *((_DWORD *)this + 24) = v19;
    v20 = *((unsigned int *)a4 + 8);
    *((_DWORD *)this + 22) = v20;
    v21 = *((unsigned int *)a4 + 13);
    *((_DWORD *)this + 26) = v21;
    if ( v17 > v18 )
    {
      WdLogSingleEntry1(1LL, v17);
      WdLogGlobalForLineNumber = 980;
      goto LABEL_8;
    }
    if ( (unsigned int)v19 > v18 )
    {
      WdLogSingleEntry1(1LL, v19);
      WdLogGlobalForLineNumber = 985;
      goto LABEL_8;
    }
    if ( (unsigned int)v20 > v18 )
    {
      WdLogSingleEntry1(1LL, v20);
      WdLogGlobalForLineNumber = 990;
      goto LABEL_8;
    }
    if ( (unsigned int)v21 > v18 )
    {
      WdLogSingleEntry1(1LL, v21);
      WdLogGlobalForLineNumber = 995;
      goto LABEL_8;
    }
    if ( *((_DWORD *)a2 + 8) >= 0x10002u && (*(_DWORD *)a4 & 0x1000) != 0 && *((_DWORD *)a4 + 1) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1004;
      goto LABEL_8;
    }
    v22 = *((unsigned int *)a4 + 6);
    *((_DWORD *)this + 27) = v22;
    *((_DWORD *)this + 30) = (unsigned int)(1 << v22) >> 4;
    *((_DWORD *)this + 29) = 1 << v22;
    *((_DWORD *)this + 28) = (1 << v22) - 1;
    v23 = *((int *)a4 + 1);
    *((_DWORD *)this + 116) = v23;
    if ( !(_DWORD)v22 || (unsigned int)v22 >= v16 )
    {
      WdLogSingleEntry2(1LL, v22, v16);
      WdLogGlobalForLineNumber = 1017;
      goto LABEL_8;
    }
    if ( (_DWORD)v23 && (unsigned int)(v23 - 1) > 1 )
    {
      WdLogSingleEntry1(1LL, v23);
      WdLogGlobalForLineNumber = 1025;
      goto LABEL_8;
    }
    *((_DWORD *)this + 19) = v17;
    v24 = v17;
    if ( v17 && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 206) + 8LL * (v17 - 1)) + 104LL) & 1) != 0 )
    {
      *((_DWORD *)this + 19) = 0;
      v24 = 0;
    }
    *((_DWORD *)this + 23) = v19;
    v25 = v19;
    if ( (_DWORD)v19
      && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 206) + 8LL * (unsigned int)(v19 - 1)) + 104LL) & 1) != 0 )
    {
      *((_DWORD *)this + 23) = 0;
      v25 = 0;
    }
    *((_DWORD *)this + 21) = v20;
    if ( (_DWORD)v20
      && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 206) + 8LL * (unsigned int)(v20 - 1)) + 104LL) & 1) != 0 )
    {
      *((_DWORD *)this + 21) = 0;
    }
    *((_DWORD *)this + 25) = v21;
    if ( (_DWORD)v21
      && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 206) + 8LL * (unsigned int)(v21 - 1)) + 104LL) & 1) != 0 )
    {
      *((_DWORD *)this + 25) = 0;
    }
    if ( (*(_DWORD *)(*((_QWORD *)a2 + 3) + 444LL) & 0x200) == 0
      && (v24 && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 206) + 8LL * (v24 - 1)) + 104LL) & 0x1001) != 0
       || v25
       && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 206) + 8LL * (unsigned int)(v25 - 1)) + 104LL) & 0x1001) != 0)
      && !(_DWORD)v23 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    v26 = *((_DWORD *)a4 + 4) - 1;
    *((_DWORD *)this + 117) = v26;
    *((_QWORD *)this + 19) = 0LL;
    v27 = *((unsigned int *)this + 27);
    *((_DWORD *)this + 33) = v27;
    v28 = *((_DWORD *)this + 29);
    *((_QWORD *)this + 20) = 0LL;
    *((_DWORD *)this + 32) = v28;
    *((_QWORD *)this + 21) = 1LL;
    v29 = (unsigned int)(v28 - 1);
    *((_QWORD *)this + 18) = v29;
    *((_DWORD *)this + 34) = *((_DWORD *)this + 18);
    if ( v26 == 1 )
    {
      v30 = *((_DWORD *)a2 + 10232) - v27;
      *((_QWORD *)this + 26) = v29;
      *((_DWORD *)this + 45) = v30;
      *((_QWORD *)this + 25) = v27;
      *((_QWORD *)this + 27) = 1LL << v27;
      *((_QWORD *)this + 24) = ~v29;
      *((_DWORD *)this + 44) = 0;
      *((_DWORD *)this + 46) = 0;
    }
    else
    {
      for ( i = 1; i <= *((_DWORD *)this + 117); ++i )
      {
        v33 = *((_DWORD *)a4 + 5 * i + 6);
        if ( !v33 || v33 > v16 - (unsigned int)v27 )
        {
          WdLogSingleEntry1(1LL, *((unsigned int *)a4 + 5 * i + 6));
          WdLogGlobalForLineNumber = 1108;
          goto LABEL_8;
        }
        LODWORD(v27) = v33 + v27;
        v34 = 6LL * i;
        *((_DWORD *)this + 2 * v34 + 33) = v33;
        v35 = *((_QWORD *)this + 6 * i + 13) + *((unsigned int *)this + 12 * i + 21);
        *((_QWORD *)this + v34 + 19) = v35;
        v36 = *((_QWORD *)this + 6 * i + 12) | *((_QWORD *)this + 6 * i + 14);
        *((_QWORD *)this + v34 + 20) = v36;
        *((_QWORD *)this + 6 * i + 18) = ~v36 & ((1LL << v27) - 1);
        *((_DWORD *)this + 2 * v34 + 32) = 1LL << v33;
        v37 = *((unsigned int *)a4 + 5 * i + 9);
        *((_DWORD *)this + 2 * v34 + 34) = v37;
        *((_QWORD *)this + v34 + 21) = 1LL << v35;
        if ( !(_DWORD)v37 )
        {
          WdLogSingleEntry1(1LL, v37);
          WdLogGlobalForLineNumber = 1123;
          goto LABEL_8;
        }
        *((_DWORD *)this + 12 * i + 34) = (v37 + 4095) & 0xFFFFF000;
      }
      if ( (_DWORD)v27 != v16 )
      {
        WdLogSingleEntry2(1LL, (unsigned int)v27, v16);
        WdLogGlobalForLineNumber = 1130;
        goto LABEL_8;
      }
    }
    do
    {
      v31 = v6++;
      *((_DWORD *)this + 12 * v31 + 35) = *((_DWORD *)a4 + 5 * v31 + 10);
    }
    while ( v6 <= *((_DWORD *)this + 117) );
  }
  return 0LL;
}
