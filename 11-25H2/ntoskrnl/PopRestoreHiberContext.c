/*
 * XREFs of PopRestoreHiberContext @ 0x140B561BC
 * Callers:
 *     PopHandleNextState @ 0x140B55D00 (PopHandleNextState.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     IoInitializeDumpStack @ 0x14058E320 (IoInitializeDumpStack.c)
 *     IoNotifyDump @ 0x14058E430 (IoNotifyDump.c)
 *     PopInternalAddToDumpFile @ 0x1405C8990 (PopInternalAddToDumpFile.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PopDecompressHiberBlocks @ 0x140B4C904 (PopDecompressHiberBlocks.c)
 *     PopHiberReadChecksums @ 0x140B4D274 (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x140B4DB88 (PopRequestRead.c)
 *     PopCheckpointSystemSleep @ 0x140B5692C (PopCheckpointSystemSleep.c)
 *     BgLibraryInitialize @ 0x140BA0760 (BgLibraryInitialize.c)
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
  __int64 v22; // rsi
  __int64 v23; // rbp
  __int64 v24; // r11
  __int64 v25; // rdi
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  unsigned int v28; // r12d
  unsigned int v29; // r10d
  __int64 v30; // r9
  unsigned __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  __int128 v37; // [rsp+30h] [rbp-58h] BYREF
  __int64 v38; // [rsp+40h] [rbp-48h]
  unsigned __int64 v39; // [rsp+90h] [rbp+8h]
  void *v40; // [rsp+98h] [rbp+10h]

  v37 = 0LL;
  v38 = 0LL;
  result = KeGetCurrentPrcb();
  Number = result->Number;
  if ( (unsigned int)Number < *(_DWORD *)(BugCheckParameter3 + 288) )
  {
    v4 = 0LL;
    v5 = *(_QWORD *)(BugCheckParameter3 + 296) + 168 * Number;
    *(_QWORD *)(v5 + 80) = 0LL;
    if ( (_DWORD)Number == *(_DWORD *)(BugCheckParameter3 + 208) )
    {
      byte_140E65B50 = 0;
      v6 = __rdtsc();
      if ( qword_140E65B28 )
        byte_140E65B50 = (int)BgLibraryInitialize(qword_140E65B28, 0xFFFFFFFFLL) >= 0;
      v7 = __rdtsc();
      qword_140F0B248 += (((unsigned __int64)HIDWORD(v7) << 32) | (unsigned int)v7) - v6;
    }
    if ( !(_DWORD)Number )
    {
      v40 = qword_140F0AE08;
      v8 = 0LL;
      v9 = *(_QWORD **)(BugCheckParameter3 + 216);
      v39 = __rdtsc();
      if ( v9[11] == v9[70] )
        v8 = v9[73];
      *(_QWORD *)(BugCheckParameter3 + 432) = v8;
      v10 = qword_140F0AE08;
      v11 = *(_DWORD *)(BugCheckParameter3 + 312);
      v12 = *(_QWORD *)(BugCheckParameter3 + 304);
      memset_0(qword_140F0AE08, 0, 0x40uLL);
      v10[6] = 0;
      *(_QWORD *)v10 = v12;
      v10[2] = v11;
      *((_QWORD *)v10 + 2) = v8;
      *(_BYTE *)(BugCheckParameter3 + 3) = 1;
      IoNotifyDump(2LL, v13);
      if ( *(_QWORD *)(BugCheckParameter3 + 432) )
      {
        *(_DWORD *)(BugCheckParameter3 + 200) = 9;
        *(_QWORD *)(BugCheckParameter3 + 176) = &v37;
        *(_QWORD *)&v37 = qword_140F0AD78;
        *((_QWORD *)&v37 + 1) = qword_140F0AD78;
        v38 = 0LL;
        guard_dispatch_icall_no_overrides(0LL);
        v15 = IoInitializeDumpStack(*(_QWORD *)(BugCheckParameter3 + 184));
        v16 = v15;
        if ( v15 < 0 || PopSimulateHiberBugcheck == 4 )
        {
          PopCheckpointSystemSleep(28LL);
          PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 184), 0x178u, 0LL);
          KeBugCheckEx(0xA0u, 0xCuLL, v16, *(_QWORD *)(BugCheckParameter3 + 184), 0LL);
        }
        v17 = __rdtsc();
        qword_140F0B228 = (((unsigned __int64)HIDWORD(v17) << 32) | (unsigned int)v17) - v39;
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
          PopRequestRead(BugCheckParameter3, (__int64)v40, 1u);
          if ( (unsigned int)PopDecompressHiberBlocks(BugCheckParameter3, v5, 1, 0, (__int64)PopDecompressCallback) == -2147483614
            && !*(_DWORD *)(BugCheckParameter3 + 360) )
          {
            _mm_pause();
          }
        }
        PopDecompressHiberBlocks(BugCheckParameter3, v5, 1, 1, 0LL);
        if ( *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 184) + 72LL) )
          guard_dispatch_icall_no_overrides(v21);
      }
      else
      {
        v20 = 0LL;
      }
      IoNotifyDump(3LL, v14);
      guard_dispatch_icall_no_overrides(1LL);
      _InterlockedAdd((volatile signed __int32 *)(BugCheckParameter3 + 12), 1u);
      while ( *(_DWORD *)(BugCheckParameter3 + 12) != *(_DWORD *)(BugCheckParameter3 + 288) )
        _mm_pause();
      v22 = 0LL;
      v23 = 0LL;
      v24 = 0LL;
      v25 = 0LL;
      v26 = __rdtsc();
      v27 = (((unsigned __int64)HIDWORD(v26) << 32) | (unsigned int)v26) - v20;
      v28 = 0;
      qword_140F0B3B8 = v27;
      v29 = *(_DWORD *)(BugCheckParameter3 + 288);
      if ( v29 )
      {
        v30 = *(_QWORD *)(BugCheckParameter3 + 296);
        do
        {
          v31 = v4;
          v32 = 168LL * v28;
          qword_140F0B208 += *(_QWORD *)(v32 + v30 + 64);
          qword_140F0B218 += *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 296) + v32 + 72);
          qword_140F0B240 += *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 296) + v32 + 80);
          v30 = *(_QWORD *)(BugCheckParameter3 + 296);
          v29 = *(_DWORD *)(BugCheckParameter3 + 288);
          v4 = *(_QWORD *)(v30 + v32 + 64) + *(_QWORD *)(v30 + v32 + 72);
          if ( v4 <= v31 )
            v4 = v31;
          v22 += *(_QWORD *)(v30 + v32 + 128);
          v23 += *(_QWORD *)(v30 + v32 + 136);
          ++v28;
          v24 += *(_QWORD *)(v30 + v32 + 144);
          v25 += *(_QWORD *)(v30 + v32 + 152);
        }
        while ( v28 < v29 );
      }
      v33 = v22 / (v24 + 1);
      v34 = v23 / (v25 + 1);
      if ( v34 > v33 )
      {
        v35 = 100 * (qword_140F0B210 * v29 / (v24 + v25 + 1) - v33) / (v34 - v33);
        if ( v35 > 99 )
        {
          dword_140F0ADA4 = 99;
LABEL_39:
          v36 = __rdtsc();
          qword_140F0B230 = (((unsigned __int64)HIDWORD(v36) << 32) | (unsigned int)v36) - v39;
          result = (struct _KPRCB *)(qword_140F0B230 - qword_140F0B228 - v4);
          qword_140F0B200 = (__int64)result;
          return result;
        }
        dword_140F0ADA4 = v35;
        if ( (int)v35 >= 1 )
          goto LABEL_39;
      }
      dword_140F0ADA4 = 1;
      goto LABEL_39;
    }
    while ( !*(_BYTE *)(BugCheckParameter3 + 3) )
      _mm_pause();
    result = (struct _KPRCB *)PopDecompressHiberBlocks(BugCheckParameter3, v5, 0, 1, 0LL);
    _InterlockedAdd((volatile signed __int32 *)(BugCheckParameter3 + 12), 1u);
  }
  return result;
}
