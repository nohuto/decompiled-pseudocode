/*
 * XREFs of PopRestoreHiberContext @ 0x140B683FC
 * Callers:
 *     PopHandleNextState @ 0x140B67F50 (PopHandleNextState.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     IoInitializeDumpStack @ 0x14058EB70 (IoInitializeDumpStack.c)
 *     IoNotifyDump @ 0x14058EC80 (IoNotifyDump.c)
 *     PopInternalAddToDumpFile @ 0x1405CA610 (PopInternalAddToDumpFile.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopDecompressHiberBlocks @ 0x140B5E974 (PopDecompressHiberBlocks.c)
 *     PopHiberReadChecksums @ 0x140B5F384 (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x140B5FCCC (PopRequestRead.c)
 *     PopCheckpointSystemSleep @ 0x140B6889C (PopCheckpointSystemSleep.c)
 *     BgLibraryInitialize @ 0x140BB2760 (BgLibraryInitialize.c)
 */

struct _KPRCB *__fastcall PopRestoreHiberContext(ULONG_PTR BugCheckParameter3)
{
  struct _KPRCB *result; // rax
  __int64 Number; // rdi
  unsigned __int64 v4; // r15
  __int64 v5; // r13
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // r12
  _QWORD *v9; // rdx
  _DWORD *v10; // rsi
  int v11; // ebp
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rdx
  int v15; // eax
  ULONG_PTR v16; // rdi
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // r12
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rbp
  __int64 v25; // r11
  __int64 v26; // rdi
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  unsigned int v29; // r12d
  unsigned int v30; // r10d
  __int64 v31; // r9
  unsigned __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  __int128 v38; // [rsp+30h] [rbp-58h] BYREF
  __int64 v39; // [rsp+40h] [rbp-48h]
  unsigned __int64 v40; // [rsp+90h] [rbp+8h]
  void *v41; // [rsp+98h] [rbp+10h]

  v38 = 0LL;
  v39 = 0LL;
  result = KeGetCurrentPrcb();
  Number = result->Number;
  if ( (unsigned int)Number < *(_DWORD *)(BugCheckParameter3 + 288) )
  {
    v4 = 0LL;
    v5 = *(_QWORD *)(BugCheckParameter3 + 296) + 168 * Number;
    *(_QWORD *)(v5 + 80) = 0LL;
    if ( (_DWORD)Number == *(_DWORD *)(BugCheckParameter3 + 208) )
    {
      byte_140E65EE2 = 0;
      v6 = __rdtsc();
      if ( qword_140E65EC8 )
        byte_140E65EE2 = (int)BgLibraryInitialize(qword_140E65EC8, 0xFFFFFFFFLL) >= 0;
      v7 = __rdtsc();
      qword_140F0C128 += (((unsigned __int64)HIDWORD(v7) << 32) | (unsigned int)v7) - v6;
    }
    if ( !(_DWORD)Number )
    {
      v41 = qword_140F0BC28;
      v8 = 0LL;
      v9 = *(_QWORD **)(BugCheckParameter3 + 216);
      v40 = __rdtsc();
      if ( v9[11] == v9[70] )
        v8 = v9[73];
      *(_QWORD *)(BugCheckParameter3 + 432) = v8;
      v10 = qword_140F0BC28;
      v11 = *(_DWORD *)(BugCheckParameter3 + 312);
      v12 = *(_QWORD *)(BugCheckParameter3 + 304);
      memset_0(qword_140F0BC28, 0, 0x40uLL);
      v10[6] = 0;
      *(_QWORD *)v10 = v12;
      v10[2] = v11;
      *((_QWORD *)v10 + 2) = v8;
      *(_BYTE *)(BugCheckParameter3 + 3) = 1;
      IoNotifyDump(2LL, v13);
      if ( *(_QWORD *)(BugCheckParameter3 + 432) )
      {
        *(_DWORD *)(BugCheckParameter3 + 200) = 9;
        *(_QWORD *)(BugCheckParameter3 + 176) = &v38;
        *(_QWORD *)&v38 = qword_140F0BB98;
        *((_QWORD *)&v38 + 1) = qword_140F0BB98;
        v39 = 0LL;
        guard_dispatch_icall_no_overrides(0LL, v14);
        v15 = IoInitializeDumpStack(*(_QWORD *)(BugCheckParameter3 + 184));
        v16 = v15;
        if ( v15 < 0 || PopSimulateHiberBugcheck == 4 )
        {
          PopCheckpointSystemSleep(28LL);
          PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 184), 0x178u, 0LL);
          KeBugCheckEx(0xA0u, 0xCuLL, v16, *(_QWORD *)(BugCheckParameter3 + 184), 0LL);
        }
        v17 = __rdtsc();
        qword_140F0C108 = (((unsigned __int64)HIDWORD(v17) << 32) | (unsigned int)v17) - v40;
        v18 = *(_QWORD *)(BugCheckParameter3 + 184);
        *(_DWORD *)(BugCheckParameter3 + 360) = 0;
        *(_QWORD *)(BugCheckParameter3 + 376) = 0LL;
        if ( *(_QWORD *)(v18 + 128) )
          *(_BYTE *)(BugCheckParameter3 + 424) = 1;
        PopHiberReadChecksums(BugCheckParameter3);
        v19 = *(_QWORD *)(BugCheckParameter3 + 216);
        *(_DWORD *)(BugCheckParameter3 + 200) = 10;
        *(_QWORD *)(BugCheckParameter3 + 408) = *(_QWORD *)(v19 + 112) << 12;
        v20 = __rdtsc();
        while ( *(_QWORD *)(BugCheckParameter3 + 432) )
        {
          PopRequestRead(BugCheckParameter3, (unsigned __int64)v41, 1u);
          if ( (unsigned int)PopDecompressHiberBlocks(BugCheckParameter3, v5, 1, 0, (__int64)PopDecompressCallback) == -2147483614
            && !*(_DWORD *)(BugCheckParameter3 + 360) )
          {
            _mm_pause();
          }
        }
        PopDecompressHiberBlocks(BugCheckParameter3, v5, 1, 1, 0LL);
        if ( *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 184) + 72LL) )
          guard_dispatch_icall_no_overrides(v21, v14);
      }
      else
      {
        v20 = 0LL;
      }
      IoNotifyDump(3LL, v14);
      guard_dispatch_icall_no_overrides(1LL, v22);
      _InterlockedAdd((volatile signed __int32 *)(BugCheckParameter3 + 12), 1u);
      while ( *(_DWORD *)(BugCheckParameter3 + 12) != *(_DWORD *)(BugCheckParameter3 + 288) )
        _mm_pause();
      v23 = 0LL;
      v24 = 0LL;
      v25 = 0LL;
      v26 = 0LL;
      v27 = __rdtsc();
      v28 = (((unsigned __int64)HIDWORD(v27) << 32) | (unsigned int)v27) - v20;
      v29 = 0;
      qword_140F0C298 = v28;
      v30 = *(_DWORD *)(BugCheckParameter3 + 288);
      if ( v30 )
      {
        v31 = *(_QWORD *)(BugCheckParameter3 + 296);
        do
        {
          v32 = v4;
          v33 = 168LL * v29;
          qword_140F0C0E8 += *(_QWORD *)(v33 + v31 + 64);
          qword_140F0C0F8 += *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 296) + v33 + 72);
          qword_140F0C120 += *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 296) + v33 + 80);
          v31 = *(_QWORD *)(BugCheckParameter3 + 296);
          v30 = *(_DWORD *)(BugCheckParameter3 + 288);
          v4 = *(_QWORD *)(v31 + v33 + 64) + *(_QWORD *)(v31 + v33 + 72);
          if ( v4 <= v32 )
            v4 = v32;
          v23 += *(_QWORD *)(v31 + v33 + 128);
          v24 += *(_QWORD *)(v31 + v33 + 136);
          ++v29;
          v25 += *(_QWORD *)(v31 + v33 + 144);
          v26 += *(_QWORD *)(v31 + v33 + 152);
        }
        while ( v29 < v30 );
      }
      v34 = v23 / (v25 + 1);
      v35 = v24 / (v26 + 1);
      if ( v35 > v34 )
      {
        v36 = 100 * (qword_140F0C0F0 * v30 / (v25 + v26 + 1) - v34) / (v35 - v34);
        if ( v36 > 99 )
        {
          dword_140F0BBC4 = 99;
LABEL_39:
          v37 = __rdtsc();
          qword_140F0C110 = (((unsigned __int64)HIDWORD(v37) << 32) | (unsigned int)v37) - v40;
          result = (struct _KPRCB *)(qword_140F0C110 - qword_140F0C108 - v4);
          qword_140F0C0E0 = (__int64)result;
          return result;
        }
        dword_140F0BBC4 = v36;
        if ( (int)v36 >= 1 )
          goto LABEL_39;
      }
      dword_140F0BBC4 = 1;
      goto LABEL_39;
    }
    while ( !*(_BYTE *)(BugCheckParameter3 + 3) )
      _mm_pause();
    result = (struct _KPRCB *)PopDecompressHiberBlocks(BugCheckParameter3, v5, 0, 1, 0LL);
    _InterlockedAdd((volatile signed __int32 *)(BugCheckParameter3 + 12), 1u);
  }
  return result;
}
