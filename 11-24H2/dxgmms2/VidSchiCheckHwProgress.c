/*
 * XREFs of VidSchiCheckHwProgress @ 0x1400B5C20
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x140018790 (VidSchiScheduleCommandToRun.c)
 *     VidSchWaitForEvents @ 0x140048CFC (VidSchWaitForEvents.c)
 *     VidSchiWaitForSchedulerEvents @ 0x140115A90 (VidSchiWaitForSchedulerEvents.c)
 * Callees:
 *     VidSchiCheckFlipQueueTimeout @ 0x140011CC0 (VidSchiCheckFlipQueueTimeout.c)
 *     VidSchiNeedToForcePreemptNode @ 0x140021EB4 (VidSchiNeedToForcePreemptNode.c)
 *     VidSchIsTDRPending @ 0x140034DF0 (VidSchIsTDRPending.c)
 *     VidSchiCheckTimeoutForced @ 0x140034E10 (VidSchiCheckTimeoutForced.c)
 *     VidSchiReportHwHang @ 0x140044F38 (VidSchiReportHwHang.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     VidSchResetFlipQueueTimeout @ 0x1400A66B0 (VidSchResetFlipQueueTimeout.c)
 *     VidSchResetGPUTimeout @ 0x1400A6718 (VidSchResetGPUTimeout.c)
 *     VidSchiPrepareToResetEngine @ 0x1400A67D4 (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1400A690C (VidSchiResetEngines.c)
 *     VidSchiCheckNodeTimeout @ 0x1400B6030 (VidSchiCheckNodeTimeout.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1400B633C (VidSchiSubmitPreemptionCommand.c)
 */

__int64 __fastcall VidSchiCheckHwProgress(__int64 a1, _BYTE *a2)
{
  bool v2; // zf
  unsigned int v5; // r15d
  LARGE_INTEGER v6; // r8
  unsigned __int128 v7; // rax
  unsigned __int64 v8; // rbp
  unsigned int v9; // edi
  __int64 *v10; // rcx
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  unsigned int i; // edi
  struct _VIDSCH_NODE **v14; // rcx
  __int64 *v15; // rax
  __int64 v16; // rdi
  int v17; // esi
  _BYTE *v18; // r8
  _BYTE *v20; // r9
  __int64 v21; // rdx
  _BYTE *v22; // rcx
  char v23; // al
  _BYTE *v24; // rax
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v28; // [rsp+90h] [rbp+8h] BYREF
  __int64 v29; // [rsp+98h] [rbp+10h] BYREF
  int v30; // [rsp+A0h] [rbp+18h] BYREF
  union _ULARGE_INTEGER v31; // [rsp+A8h] [rbp+20h] BYREF

  v2 = *(_DWORD *)(a1 + 7052) == 0;
  *a2 = 0;
  if ( v2 )
  {
    v5 = 0;
    PerformanceFrequency.QuadPart = 0LL;
    v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
    v7 = (unsigned __int64)v6.QuadPart * (unsigned __int128)0x989680uLL;
    v29 = *((_QWORD *)&v7 + 1);
    if ( is_mul_ok(v6.QuadPart, 0x989680uLL) )
      v8 = v7 / (unsigned __int64)PerformanceFrequency.QuadPart;
    else
      v8 = 10000000 * (v6.QuadPart / (unsigned __int64)PerformanceFrequency.QuadPart)
         + 10000000 * (v6.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
    if ( *(_BYTE *)(a1 + 3384) && v8 >= *(_QWORD *)(a1 + 3368) )
      (*(void (__fastcall **)(_QWORD, _QWORD))(a1 + 3328))(*(_QWORD *)(a1 + 16), MEMORY[0xFFFFF78000000320]);
    v9 = 0;
    for ( *a2 = 0; v9 < *(_DWORD *)(a1 + 80); ++v9 )
    {
      v10 = *(__int64 **)(a1 + 688);
      if ( v9 < *(_DWORD *)(a1 + 760) )
        v10 += v9;
      v11 = *v10;
      v12 = *(_QWORD *)(*v10 + 128);
      if ( v12 && v12 <= v8 )
      {
        if ( VidSchiNeedToForcePreemptNode(*v10) )
        {
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 788));
          _InterlockedIncrement((volatile signed __int32 *)(v11 + 3024));
          VidSchiSubmitPreemptionCommand(v11);
        }
        else
        {
          *a2 = 1;
        }
        *(_QWORD *)(v11 + 128) = 0LL;
      }
    }
    if ( VidSchiCheckTimeoutForced(a1) )
    {
      VidSchiReportHwHang(a1, MEMORY[0xFFFFF78000000320], 1, 0LL);
    }
    else if ( !VidSchIsTDRPending(a1) )
    {
      v31.QuadPart = 0LL;
      for ( i = 0; i < *(_DWORD *)(a1 + 80); ++i )
      {
        v14 = *(struct _VIDSCH_NODE ***)(a1 + 688);
        if ( i < *(_DWORD *)(a1 + 760) )
          v14 += i;
        if ( (unsigned int)VidSchiCheckNodeTimeout(*v14) )
        {
          v15 = *(__int64 **)(a1 + 688);
          if ( i < *(_DWORD *)(a1 + 760) )
            v15 += i;
          v16 = *v15;
          v17 = 0;
          v26 = 0LL;
          if ( *(_DWORD *)(v16 + 2152) )
          {
            LOBYTE(v17) = *(_BYTE *)(v16 + 2145) != 0;
            v17 += 10;
          }
          else if ( !VidSchiPrepareToResetEngine(v16, (__int64 *)&v26) || !VidSchiResetEngines(v16, v26) )
          {
            v17 = 9;
          }
          *(_BYTE *)(v16 + 2145) = 0;
          v18 = (_BYTE *)(v16 + 2156);
          *(_DWORD *)(v16 + 2148) = 0;
          *(_BYTE *)(v16 + 2146) = 0;
          *(_DWORD *)(v16 + 2152) = 0;
          if ( *(_BYTE *)(v16 + 2156) )
          {
            v20 = (_BYTE *)(a1 + 3269);
            if ( v16 == -2156 )
              goto LABEL_47;
            v21 = 15LL;
            v22 = (_BYTE *)(a1 + 3269);
            do
            {
              if ( v21 == -2147483631 )
                break;
              v23 = v22[v18 - v20];
              if ( !v23 )
                break;
              *v22++ = v23;
              --v21;
            }
            while ( v21 );
            v24 = v22 - 1;
            if ( v21 )
              v24 = v22;
            *v24 = 0;
            if ( !v21 )
LABEL_47:
              *v20 = 0;
            *(_DWORD *)(a1 + 3284) = *(_DWORD *)(v16 + 2172);
            *v18 = 0;
            *(_DWORD *)(v16 + 2172) = 0;
          }
          if ( v17 && !VidSchIsTDRPending(a1) && !(unsigned int)VidSchiReportHwHang(a1, v31.QuadPart, v17, v16) )
            VidSchResetGPUTimeout(a1);
          break;
        }
      }
      v28 = 0;
      v30 = 0;
      LODWORD(v29) = 0;
      v27 = 0LL;
      if ( (unsigned int)VidSchiCheckFlipQueueTimeout((KSPIN_LOCK *)a1, &v30, (unsigned int *)&v29, &v27, &v31, &v28) )
      {
        if ( !(unsigned int)VidSchiReportHwHang(a1, v31.QuadPart, 3, (__int64)&v28) )
          VidSchResetFlipQueueTimeout(a1);
      }
    }
    LOBYTE(v5) = !VidSchIsTDRPending(a1);
    return v5;
  }
  else
  {
    *(_BYTE *)(a1 + 3384) = 0;
    return 1LL;
  }
}
