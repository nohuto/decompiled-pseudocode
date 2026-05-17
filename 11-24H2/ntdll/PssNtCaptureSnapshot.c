/*
 * XREFs of PssNtCaptureSnapshot @ 0x1800C3790
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryPerformanceCounter @ 0x18003A620 (RtlQueryPerformanceCounter.c)
 *     PsspCaptureAuxiliaryPages @ 0x1800C2A20 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureThreadInformation @ 0x1800C2CCC (PsspCaptureThreadInformation.c)
 *     PsspCaptureProcessInformation @ 0x1800C3DAC (PsspCaptureProcessInformation.c)
 *     PsspCaptureHandleInformation @ 0x1800C3F68 (PsspCaptureHandleInformation.c)
 *     PssNtFreeSnapshot @ 0x1800C45F0 (PssNtFreeSnapshot.c)
 *     PsspCaptureVaSpaceInformation @ 0x1800C5268 (PsspCaptureVaSpaceInformation.c)
 *     PsspSampleCounters @ 0x1801118C4 (PsspSampleCounters.c)
 *     PsspCaptureIptTrace @ 0x18015CC50 (PsspCaptureIptTrace.c)
 *     ZwAllocateVirtualMemory @ 0x180161F90 (ZwAllocateVirtualMemory.c)
 *     ZwQueryInformationThread @ 0x180162130 (ZwQueryInformationThread.c)
 *     ZwCreateProcessEx @ 0x180162630 (ZwCreateProcessEx.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall PssNtCaptureSnapshot(void **a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rdi
  int v7; // r12d
  __int64 v8; // rbx
  int v9; // esi
  _DWORD *v10; // rcx
  int v11; // r13d
  __int64 v12; // rdx
  __int64 v13; // rdx
  int v14; // r13d
  __int64 v15; // r13
  int v16; // r12d
  __int64 result; // rax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  _DWORD *v21; // [rsp+50h] [rbp-69h] BYREF
  __int64 v22; // [rsp+58h] [rbp-61h] BYREF
  __int64 v23; // [rsp+60h] [rbp-59h] BYREF
  __int64 v24; // [rsp+68h] [rbp-51h] BYREF
  int i; // [rsp+70h] [rbp-49h]
  int v26; // [rsp+74h] [rbp-45h]
  __int64 v27; // [rsp+78h] [rbp-41h] BYREF
  unsigned int v28; // [rsp+80h] [rbp-39h]
  __int64 v29; // [rsp+88h] [rbp-31h] BYREF
  __int64 v30; // [rsp+90h] [rbp-29h] BYREF
  __int64 v31; // [rsp+98h] [rbp-21h] BYREF
  __int64 v32; // [rsp+A0h] [rbp-19h] BYREF
  __int128 v33; // [rsp+A8h] [rbp-11h] BYREF
  __int128 v34; // [rsp+B8h] [rbp-1h] BYREF

  v4 = 0LL;
  v28 = a4;
  *(_QWORD *)&v34 = a2;
  v29 = 0LL;
  v22 = 0LL;
  *(_QWORD *)&v33 = 0LL;
  v30 = 0LL;
  if ( (a3 & 0x3FF8000) != 0 )
    return 3221225485LL;
  v7 = a3 & 0x1C000000;
  if ( (a3 & 0x1C000000) == 0x4000000 )
    return 3221225520LL;
  v24 = 0LL;
  v32 = 0LL;
  v8 = 0LL;
  v23 = 0LL;
  v31 = 0LL;
  v9 = a3 & 0x40000000;
  if ( (a3 & 0x40000000) != 0 )
  {
    v8 = MEMORY[0x7FFE0300];
    PsspSampleCounters(&v32, &v31);
  }
  v10 = *a1;
  v11 = 0;
  v21 = v10;
  if ( !v10 )
  {
    v29 = 1144LL;
    result = ZwAllocateVirtualMemory(-1LL, &v21, 0LL, &v29, 4096, 4);
    if ( (int)result < 0 )
      return result;
    v10 = v21;
    v11 = 1;
    *a1 = v21;
  }
  memset_thunk_772440563353939046(v10, 0, 0x478uLL);
  v12 = v34;
  *v21 = 1146311504;
  v21[1] = v11;
  v21[2] = a3;
  v14 = PsspCaptureProcessInformation(v21, v12, a3);
  if ( v14 < 0 )
    goto LABEL_20;
  if ( (a3 & 2) != 0 )
  {
    if ( v9 )
      PsspSampleCounters(&v24, &v23);
    v27 = 2147352576LL;
    v14 = PsspCaptureAuxiliaryPages((__int64)v21, v34, a3, &v27);
    if ( v14 < 0 )
      goto LABEL_20;
    if ( v9 )
    {
      PsspSampleCounters(&v22, &v33);
      *((_QWORD *)v21 + 135) = v33 - v23;
      v13 = 1000000 * (v22 - v24) % v8;
      *((_QWORD *)v21 + 136) = 1000000 * (v22 - v24) / v8;
    }
  }
  if ( (a3 & 0x800) == 0 )
    goto LABEL_9;
  if ( v9 )
    PsspSampleCounters(&v24, &v23);
  v14 = PsspCaptureVaSpaceInformation(v21, v34, a3);
  if ( v14 < 0 )
  {
LABEL_20:
    PssNtFreeSnapshot(v21);
    result = (unsigned int)v14;
    *a1 = 0LL;
    return result;
  }
  if ( v9 )
  {
    v33 = 0LL;
    RtlQueryPerformanceCounter(&v22, v13);
    if ( (int)ZwQueryInformationThread(-2LL, 23LL, &v33, 16LL, 0LL) < 0 )
    {
      *(_QWORD *)&v33 = 0LL;
      v18 = 0LL;
    }
    else
    {
      v18 = v33;
    }
    *((_QWORD *)v21 + 133) = v18 - v23;
    v13 = 1000000 * (v22 - v24) % v8;
    *((_QWORD *)v21 + 134) = 1000000 * (v22 - v24) / v8;
  }
LABEL_9:
  if ( (a3 & 1) != 0 )
  {
    if ( v9 )
      PsspSampleCounters(&v24, &v23);
    v19 = ((int)a3 >> 31) & 0x1000;
    for ( i = v19; ; v19 = i )
    {
      v26 = v7 & 0x10000000;
      LODWORD(v27) = v7 & 0x8000000;
      if ( (v7 & 0x10000000) != 0 )
      {
        v19 |= 0x400u;
      }
      else if ( (v7 & 0x8000000) != 0 )
      {
        v19 |= 1u;
      }
      v14 = ZwCreateProcessEx(&v30, 5144LL, 0LL, v34, v19, 0LL, 0LL, 0LL, 0);
      if ( v14 >= 0 )
        break;
      if ( (v7 & 0x4000000) == 0 )
        goto LABEL_20;
      if ( v26 )
      {
        v7 &= ~0x10000000u;
      }
      else
      {
        if ( !(_DWORD)v27 )
          goto LABEL_20;
        v7 &= ~0x8000000u;
      }
    }
    *((_QWORD *)v21 + 110) = MEMORY[0x7FFE0014];
    *((_QWORD *)v21 + 109) = v30;
    if ( v9 )
    {
      v33 = 0LL;
      RtlQueryPerformanceCounter(&v22, v13);
      if ( (int)ZwQueryInformationThread(-2LL, 23LL, &v33, 16LL, 0LL) < 0 )
      {
        *(_QWORD *)&v33 = 0LL;
        v20 = 0LL;
      }
      else
      {
        v20 = v33;
      }
      *((_QWORD *)v21 + 131) = v20 - v23;
      v13 = 1000000 * (v22 - v24) % v8;
      *((_QWORD *)v21 + 132) = 1000000 * (v22 - v24) / v8;
    }
  }
  if ( (a3 & 4) != 0 )
  {
    if ( v9 )
      PsspSampleCounters(&v24, &v23);
    v15 = v34;
    v16 = PsspCaptureHandleInformation(v21, v34, a3);
    if ( v16 < 0 )
      goto LABEL_14;
    if ( v9 )
    {
      PsspSampleCounters(&v22, &v33);
      *((_QWORD *)v21 + 137) = v33 - v23;
      v13 = 1000000 * (v22 - v24) % v8;
      *((_QWORD *)v21 + 138) = 1000000 * (v22 - v24) / v8;
    }
  }
  else
  {
    v15 = v34;
  }
  if ( (a3 & 0x80u) != 0 )
  {
    if ( v9 )
      PsspSampleCounters(&v24, &v23);
    v16 = PsspCaptureThreadInformation((__int64)v21, v15, a3, v28);
    if ( v16 < 0 )
    {
LABEL_14:
      PssNtFreeSnapshot(v21);
      result = (unsigned int)v16;
      *a1 = 0LL;
      return result;
    }
    if ( !v9 )
      goto LABEL_28;
    PsspSampleCounters(&v22, &v33);
    *((_QWORD *)v21 + 139) = v33 - v23;
    v13 = 1000000 * (v22 - v24) % v8;
    *((_QWORD *)v21 + 140) = 1000000 * (v22 - v24) / v8;
    goto LABEL_49;
  }
  if ( v9 )
  {
LABEL_49:
    v34 = 0LL;
    RtlQueryPerformanceCounter(&v22, v13);
    if ( (int)ZwQueryInformationThread(-2LL, 23LL, &v34, 16LL, 0LL) >= 0 )
      v4 = v34;
    *((_QWORD *)v21 + 129) = v4 - v31;
    *((_QWORD *)v21 + 130) = 1000000 * (v22 - v32) / v8;
  }
LABEL_28:
  if ( (a3 & 0x2000) != 0 )
    PsspCaptureIptTrace(v21, v15);
  return 0LL;
}
