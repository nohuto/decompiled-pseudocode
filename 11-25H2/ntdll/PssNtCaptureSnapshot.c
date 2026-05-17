/*
 * XREFs of PssNtCaptureSnapshot @ 0x1800C7F80
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryPerformanceCounter @ 0x18008E010 (RtlQueryPerformanceCounter.c)
 *     PsspCaptureAuxiliaryPages @ 0x1800C7130 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureThreadInformation @ 0x1800C73DC (PsspCaptureThreadInformation.c)
 *     PsspCaptureProcessInformation @ 0x1800C859C (PsspCaptureProcessInformation.c)
 *     PsspCaptureHandleInformation @ 0x1800C8758 (PsspCaptureHandleInformation.c)
 *     PssNtFreeSnapshot @ 0x1800C93A0 (PssNtFreeSnapshot.c)
 *     PsspCaptureVaSpaceInformation @ 0x1800CA018 (PsspCaptureVaSpaceInformation.c)
 *     PsspSampleCounters @ 0x1801149C4 (PsspSampleCounters.c)
 *     PsspCaptureIptTrace @ 0x18015E1B0 (PsspCaptureIptTrace.c)
 *     ZwAllocateVirtualMemory @ 0x180163520 (ZwAllocateVirtualMemory.c)
 *     ZwQueryInformationThread @ 0x1801636C0 (ZwQueryInformationThread.c)
 *     ZwCreateProcessEx @ 0x180163BC0 (ZwCreateProcessEx.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall PssNtCaptureSnapshot(void **a1, __int64 a2, unsigned int a3, int a4)
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
  __int64 v21; // [rsp+20h] [rbp-99h]
  _DWORD *v22; // [rsp+50h] [rbp-69h] BYREF
  __int64 v23; // [rsp+58h] [rbp-61h] BYREF
  __int64 v24; // [rsp+60h] [rbp-59h] BYREF
  __int64 v25; // [rsp+68h] [rbp-51h] BYREF
  int i; // [rsp+70h] [rbp-49h]
  int v27; // [rsp+74h] [rbp-45h]
  __int64 v28; // [rsp+78h] [rbp-41h] BYREF
  int v29; // [rsp+80h] [rbp-39h]
  __int64 v30; // [rsp+88h] [rbp-31h] BYREF
  __int64 v31; // [rsp+90h] [rbp-29h] BYREF
  __int64 v32; // [rsp+98h] [rbp-21h] BYREF
  __int64 v33; // [rsp+A0h] [rbp-19h] BYREF
  __int128 v34; // [rsp+A8h] [rbp-11h] BYREF
  __int128 v35; // [rsp+B8h] [rbp-1h] BYREF

  v4 = 0LL;
  v29 = a4;
  *(_QWORD *)&v35 = a2;
  v30 = 0LL;
  v23 = 0LL;
  *(_QWORD *)&v34 = 0LL;
  v31 = 0LL;
  if ( (a3 & 0x3FF8000) != 0 )
    return 3221225485LL;
  v7 = a3 & 0x1C000000;
  if ( (a3 & 0x1C000000) == 0x4000000 )
    return 3221225520LL;
  v25 = 0LL;
  v33 = 0LL;
  v8 = 0LL;
  v24 = 0LL;
  v32 = 0LL;
  v9 = a3 & 0x40000000;
  if ( (a3 & 0x40000000) != 0 )
  {
    v8 = MEMORY[0x7FFE0300];
    PsspSampleCounters(&v33, &v32);
  }
  v10 = *a1;
  v11 = 0;
  v22 = v10;
  if ( !v10 )
  {
    v30 = 1144LL;
    result = ZwAllocateVirtualMemory(-1LL, &v22, 0LL, &v30, 4096, 4);
    if ( (int)result < 0 )
      return result;
    v10 = v22;
    v11 = 1;
    *a1 = v22;
  }
  memset_thunk_772440563353939046(v10, 0, 0x478uLL);
  v12 = v35;
  *v22 = 1146311504;
  v22[1] = v11;
  v22[2] = a3;
  v14 = PsspCaptureProcessInformation(v22, v12, a3);
  if ( v14 < 0 )
    goto LABEL_20;
  if ( (a3 & 2) != 0 )
  {
    if ( v9 )
      PsspSampleCounters(&v25, &v24);
    v28 = 2147352576LL;
    v14 = PsspCaptureAuxiliaryPages((__int64)v22, v35, a3, &v28);
    if ( v14 < 0 )
      goto LABEL_20;
    if ( v9 )
    {
      PsspSampleCounters(&v23, &v34);
      *((_QWORD *)v22 + 135) = v34 - v24;
      v13 = 1000000 * (v23 - v25) % v8;
      *((_QWORD *)v22 + 136) = 1000000 * (v23 - v25) / v8;
    }
  }
  if ( (a3 & 0x800) == 0 )
    goto LABEL_9;
  if ( v9 )
    PsspSampleCounters(&v25, &v24);
  v14 = PsspCaptureVaSpaceInformation(v22, v35, a3);
  if ( v14 < 0 )
  {
LABEL_20:
    PssNtFreeSnapshot(v22);
    result = (unsigned int)v14;
    *a1 = 0LL;
    return result;
  }
  if ( v9 )
  {
    v34 = 0LL;
    RtlQueryPerformanceCounter(&v23, v13);
    HIDWORD(v21) = 0;
    if ( (int)ZwQueryInformationThread(-2LL, 23LL, &v34) < 0 )
    {
      *(_QWORD *)&v34 = 0LL;
      v18 = 0LL;
    }
    else
    {
      v18 = v34;
    }
    *((_QWORD *)v22 + 133) = v18 - v24;
    v13 = 1000000 * (v23 - v25) % v8;
    *((_QWORD *)v22 + 134) = 1000000 * (v23 - v25) / v8;
  }
LABEL_9:
  if ( (a3 & 1) != 0 )
  {
    if ( v9 )
      PsspSampleCounters(&v25, &v24);
    v19 = ((int)a3 >> 31) & 0x1000;
    for ( i = v19; ; v19 = i )
    {
      v27 = v7 & 0x10000000;
      LODWORD(v28) = v7 & 0x8000000;
      if ( (v7 & 0x10000000) != 0 )
      {
        v19 |= 0x400u;
      }
      else if ( (v7 & 0x8000000) != 0 )
      {
        v19 |= 1u;
      }
      LODWORD(v21) = v19;
      v14 = ZwCreateProcessEx(&v31, 0x2000000LL, 0LL, v35, v21, 0LL, 0LL, 0LL, 0);
      if ( v14 >= 0 )
        break;
      if ( (v7 & 0x4000000) == 0 )
        goto LABEL_20;
      if ( v27 )
      {
        v7 &= ~0x10000000u;
      }
      else
      {
        if ( !(_DWORD)v28 )
          goto LABEL_20;
        v7 &= ~0x8000000u;
      }
    }
    *((_QWORD *)v22 + 110) = MEMORY[0x7FFE0014];
    *((_QWORD *)v22 + 109) = v31;
    if ( v9 )
    {
      v34 = 0LL;
      RtlQueryPerformanceCounter(&v23, v13);
      if ( (int)ZwQueryInformationThread(-2LL, 23LL, &v34) < 0 )
      {
        *(_QWORD *)&v34 = 0LL;
        v20 = 0LL;
      }
      else
      {
        v20 = v34;
      }
      *((_QWORD *)v22 + 131) = v20 - v24;
      v13 = 1000000 * (v23 - v25) % v8;
      *((_QWORD *)v22 + 132) = 1000000 * (v23 - v25) / v8;
    }
  }
  if ( (a3 & 4) != 0 )
  {
    if ( v9 )
      PsspSampleCounters(&v25, &v24);
    v15 = v35;
    v16 = PsspCaptureHandleInformation(v22, v35, a3);
    if ( v16 < 0 )
      goto LABEL_14;
    if ( v9 )
    {
      PsspSampleCounters(&v23, &v34);
      *((_QWORD *)v22 + 137) = v34 - v24;
      v13 = 1000000 * (v23 - v25) % v8;
      *((_QWORD *)v22 + 138) = 1000000 * (v23 - v25) / v8;
    }
  }
  else
  {
    v15 = v35;
  }
  if ( (a3 & 0x80u) != 0 )
  {
    if ( v9 )
      PsspSampleCounters(&v25, &v24);
    v16 = PsspCaptureThreadInformation((__int64)v22, v15, a3, v29);
    if ( v16 < 0 )
    {
LABEL_14:
      PssNtFreeSnapshot(v22);
      result = (unsigned int)v16;
      *a1 = 0LL;
      return result;
    }
    if ( !v9 )
      goto LABEL_28;
    PsspSampleCounters(&v23, &v34);
    *((_QWORD *)v22 + 139) = v34 - v24;
    v13 = 1000000 * (v23 - v25) % v8;
    *((_QWORD *)v22 + 140) = 1000000 * (v23 - v25) / v8;
    goto LABEL_49;
  }
  if ( v9 )
  {
LABEL_49:
    v35 = 0LL;
    RtlQueryPerformanceCounter(&v23, v13);
    if ( (int)ZwQueryInformationThread(-2LL, 23LL, &v35) >= 0 )
      v4 = v35;
    *((_QWORD *)v22 + 129) = v4 - v32;
    *((_QWORD *)v22 + 130) = 1000000 * (v23 - v33) / v8;
  }
LABEL_28:
  if ( (a3 & 0x2000) != 0 )
    PsspCaptureIptTrace(v22, v15);
  return 0LL;
}
