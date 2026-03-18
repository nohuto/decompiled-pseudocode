/*
 * XREFs of PopRestoreHiberContext @ 0x140B662BC
 * Callers:
 *     PopHandleNextState @ 0x140B65E10 (PopHandleNextState.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     IoInitializeDumpStack @ 0x140591B50 (IoInitializeDumpStack.c)
 *     IoNotifyDump @ 0x140591C60 (IoNotifyDump.c)
 *     PopInternalAddToDumpFile @ 0x1405CCEA0 (PopInternalAddToDumpFile.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PopDecompressHiberBlocks @ 0x140B5C904 (PopDecompressHiberBlocks.c)
 *     PopHiberReadChecksums @ 0x140B5D304 (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x140B5DC4C (PopRequestRead.c)
 *     PopCheckpointSystemSleep @ 0x140B6675C (PopCheckpointSystemSleep.c)
 *     BgLibraryInitialize @ 0x140BB0760 (BgLibraryInitialize.c)
 */

struct _KPRCB *__fastcall PopRestoreHiberContext(ULONG_PTR BugCheckParameter3)
{
  struct _KPRCB *result; // rax
  __int64 Number; // rdi
  unsigned __int64 v4; // r15
  _QWORD *v5; // r13
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // r12
  _QWORD *v9; // rdx
  _DWORD *v10; // rsi
  int v11; // ebp
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  ULONG_PTR v21; // rdi
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // rax
  unsigned __int64 v26; // r12
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rsi
  __int64 v34; // rbp
  __int64 v35; // r11
  __int64 v36; // rdi
  unsigned __int64 v37; // rax
  __int64 v38; // rax
  unsigned int v39; // r12d
  unsigned int v40; // r10d
  __int64 v41; // r9
  unsigned __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // rax
  unsigned __int64 v47; // rax
  __int128 v48; // [rsp+30h] [rbp-58h] BYREF
  __int64 v49; // [rsp+40h] [rbp-48h]
  unsigned __int64 v50; // [rsp+90h] [rbp+8h]
  void *v51; // [rsp+98h] [rbp+10h]

  v48 = 0LL;
  v49 = 0LL;
  result = KeGetCurrentPrcb();
  Number = result->Number;
  if ( (unsigned int)Number < *(_DWORD *)(BugCheckParameter3 + 288) )
  {
    v4 = 0LL;
    v5 = (_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 296) + 168 * Number);
    v5[10] = 0LL;
    if ( (_DWORD)Number == *(_DWORD *)(BugCheckParameter3 + 208) )
    {
      byte_140E65DB0 = 0;
      v6 = __rdtsc();
      if ( qword_140E65D88 )
        byte_140E65DB0 = (int)BgLibraryInitialize(qword_140E65D88, 0xFFFFFFFFLL) >= 0;
      v7 = __rdtsc();
      qword_140F0B4E8 += (((unsigned __int64)HIDWORD(v7) << 32) | (unsigned int)v7) - v6;
    }
    if ( !(_DWORD)Number )
    {
      v51 = qword_140F0ADE8;
      v8 = 0LL;
      v9 = *(_QWORD **)(BugCheckParameter3 + 216);
      v50 = __rdtsc();
      if ( v9[11] == v9[70] )
        v8 = v9[73];
      *(_QWORD *)(BugCheckParameter3 + 432) = v8;
      v10 = qword_140F0ADE8;
      v11 = *(_DWORD *)(BugCheckParameter3 + 312);
      v12 = *(_QWORD *)(BugCheckParameter3 + 304);
      memset_0(qword_140F0ADE8, 0, 0x40uLL);
      v10[6] = 0;
      *(_QWORD *)v10 = v12;
      v10[2] = v11;
      *((_QWORD *)v10 + 2) = v8;
      *(_BYTE *)(BugCheckParameter3 + 3) = 1;
      IoNotifyDump(2LL, v13);
      if ( *(_QWORD *)(BugCheckParameter3 + 432) )
      {
        *(_DWORD *)(BugCheckParameter3 + 200) = 9;
        *(_QWORD *)(BugCheckParameter3 + 176) = &v48;
        *(_QWORD *)&v48 = qword_140F0AD58;
        *((_QWORD *)&v48 + 1) = qword_140F0AD58;
        v49 = 0LL;
        guard_dispatch_icall_no_overrides(0LL, v14, v15, v16);
        v20 = IoInitializeDumpStack(*(_QWORD *)(BugCheckParameter3 + 184), v17, v18, v19);
        v21 = v20;
        if ( v20 < 0 || PopSimulateHiberBugcheck == 4 )
        {
          PopCheckpointSystemSleep(28LL);
          PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 184), 0x178u, 0LL);
          KeBugCheckEx(0xA0u, 0xCuLL, v21, *(_QWORD *)(BugCheckParameter3 + 184), 0LL);
        }
        v22 = __rdtsc();
        qword_140F0B4C8 = (((unsigned __int64)HIDWORD(v22) << 32) | (unsigned int)v22) - v50;
        v23 = *(_QWORD *)(BugCheckParameter3 + 184);
        *(_DWORD *)(BugCheckParameter3 + 360) = 0;
        *(_QWORD *)(BugCheckParameter3 + 376) = 0LL;
        if ( *(_QWORD *)(v23 + 128) )
          *(_BYTE *)(BugCheckParameter3 + 424) = 1;
        PopHiberReadChecksums(BugCheckParameter3);
        v25 = *(_QWORD *)(BugCheckParameter3 + 216);
        *(_DWORD *)(BugCheckParameter3 + 200) = 10;
        *(_QWORD *)(BugCheckParameter3 + 408) = *(_QWORD *)(v25 + 112) << 12;
        v26 = __rdtsc();
        while ( *(_QWORD *)(BugCheckParameter3 + 432) )
        {
          PopRequestRead(BugCheckParameter3, (unsigned __int64)v51, 1LL, v24);
          if ( (unsigned int)PopDecompressHiberBlocks(BugCheckParameter3, v5, 1, 0, (__int64)PopDecompressCallback) == -2147483614
            && !*(_DWORD *)(BugCheckParameter3 + 360) )
          {
            _mm_pause();
          }
        }
        PopDecompressHiberBlocks(BugCheckParameter3, v5, 1, 1, 0LL);
        if ( *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 184) + 72LL) )
          guard_dispatch_icall_no_overrides(v27, v14, v28, v29);
      }
      else
      {
        v26 = 0LL;
      }
      IoNotifyDump(3LL, v14);
      guard_dispatch_icall_no_overrides(1LL, v30, v31, v32);
      _InterlockedAdd((volatile signed __int32 *)(BugCheckParameter3 + 12), 1u);
      while ( *(_DWORD *)(BugCheckParameter3 + 12) != *(_DWORD *)(BugCheckParameter3 + 288) )
        _mm_pause();
      v33 = 0LL;
      v34 = 0LL;
      v35 = 0LL;
      v36 = 0LL;
      v37 = __rdtsc();
      v38 = (((unsigned __int64)HIDWORD(v37) << 32) | (unsigned int)v37) - v26;
      v39 = 0;
      qword_140F0B658 = v38;
      v40 = *(_DWORD *)(BugCheckParameter3 + 288);
      if ( v40 )
      {
        v41 = *(_QWORD *)(BugCheckParameter3 + 296);
        do
        {
          v42 = v4;
          v43 = 168LL * v39;
          qword_140F0B4A8 += *(_QWORD *)(v43 + v41 + 64);
          qword_140F0B4B8 += *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 296) + v43 + 72);
          qword_140F0B4E0 += *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 296) + v43 + 80);
          v41 = *(_QWORD *)(BugCheckParameter3 + 296);
          v40 = *(_DWORD *)(BugCheckParameter3 + 288);
          v4 = *(_QWORD *)(v41 + v43 + 64) + *(_QWORD *)(v41 + v43 + 72);
          if ( v4 <= v42 )
            v4 = v42;
          v33 += *(_QWORD *)(v41 + v43 + 128);
          v34 += *(_QWORD *)(v41 + v43 + 136);
          ++v39;
          v35 += *(_QWORD *)(v41 + v43 + 144);
          v36 += *(_QWORD *)(v41 + v43 + 152);
        }
        while ( v39 < v40 );
      }
      v44 = v33 / (v35 + 1);
      v45 = v34 / (v36 + 1);
      if ( v45 > v44 )
      {
        v46 = 100 * (qword_140F0B4B0 * v40 / (v35 + v36 + 1) - v44) / (v45 - v44);
        if ( v46 > 99 )
        {
          dword_140F0AD84 = 99;
LABEL_39:
          v47 = __rdtsc();
          qword_140F0B4D0 = (((unsigned __int64)HIDWORD(v47) << 32) | (unsigned int)v47) - v50;
          result = (struct _KPRCB *)(qword_140F0B4D0 - qword_140F0B4C8 - v4);
          qword_140F0B4A0 = (__int64)result;
          return result;
        }
        dword_140F0AD84 = v46;
        if ( (int)v46 >= 1 )
          goto LABEL_39;
      }
      dword_140F0AD84 = 1;
      goto LABEL_39;
    }
    while ( !*(_BYTE *)(BugCheckParameter3 + 3) )
      _mm_pause();
    result = (struct _KPRCB *)PopDecompressHiberBlocks(BugCheckParameter3, v5, 0, 1, 0LL);
    _InterlockedAdd((volatile signed __int32 *)(BugCheckParameter3 + 12), 1u);
  }
  return result;
}
