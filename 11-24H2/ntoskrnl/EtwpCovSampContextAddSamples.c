/*
 * XREFs of EtwpCovSampContextAddSamples @ 0x140923570
 * Callers:
 *     EtwpCovSampContextAddAddresses @ 0x1409229E0 (EtwpCovSampContextAddAddresses.c)
 *     EtwpCovSampCaptureBufferProcess @ 0x140922AE8 (EtwpCovSampCaptureBufferProcess.c)
 *     EtwpCovSampSampleBufferProcess @ 0x140924BD4 (EtwpCovSampSampleBufferProcess.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     EtwCovSampHash @ 0x140414E20 (EtwCovSampHash.c)
 *     EtwpCovSampHashLookupInTable @ 0x1409C3200 (EtwpCovSampHashLookupInTable.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x140ADBF60 (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCovSampContextAddSamples(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int a3)
{
  unsigned int v3; // esi
  __int64 v4; // r12
  unsigned int v6; // edi
  unsigned int v7; // r15d
  __int64 v8; // rbx
  _DWORD *v9; // r13
  unsigned int RoomAndAcquireLock; // eax
  __int64 *i; // rcx
  __int64 v12; // r13
  _DWORD *v13; // r12
  unsigned __int64 v14; // rax
  int v15; // r11d
  unsigned int j; // r10d
  _QWORD *v17; // rbx
  _QWORD *v18; // rsi
  _QWORD *v19; // rbx
  void *v20; // rcx
  ULONG_PTR v21; // r12
  unsigned int v23; // [rsp+20h] [rbp-88h]
  __int64 v24; // [rsp+30h] [rbp-78h]
  _QWORD *v25; // [rsp+40h] [rbp-68h] BYREF
  PVOID P; // [rsp+48h] [rbp-60h]
  ULONG_PTR v27; // [rsp+50h] [rbp-58h]
  unsigned __int64 v28; // [rsp+58h] [rbp-50h]
  _DWORD *v29; // [rsp+60h] [rbp-48h]
  ULONG_PTR v30; // [rsp+68h] [rbp-40h]
  unsigned int v33; // [rsp+C8h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  v30 = BugCheckParameter2;
  v6 = 0;
  v23 = 0;
  v25 = 0LL;
  v7 = 0;
  P = 0LL;
  v8 = qword_140EFEFA8;
  v9 = (_DWORD *)(BugCheckParameter2 + 24);
  v27 = BugCheckParameter2 + 24;
  RoomAndAcquireLock = EtwpCovSampHashMakeRoomAndAcquireLock(BugCheckParameter2);
  v33 = RoomAndAcquireLock;
  if ( RoomAndAcquireLock < v3 && *(_DWORD *)(v8 + 1284) != 1 )
  {
    if ( (*v9 & 0x100) == 0 )
    {
      *(_DWORD *)(v8 + 1284) = 1;
      KeSetEvent(*(PRKEVENT *)(BugCheckParameter2 + 1672), 0, 0);
    }
    for ( i = *(__int64 **)(v8 + 944); i != (__int64 *)(v8 + 944); i = (__int64 *)*i )
      *((_DWORD *)i + 7) = *(_DWORD *)(v8 + 1284);
    RoomAndAcquireLock = v33;
  }
  v12 = 0LL;
LABEL_9:
  while ( RoomAndAcquireLock && (unsigned int)v12 < v3 )
  {
    v13 = (_DWORD *)(v4 + 8 * v12);
    v29 = v13;
    if ( !*(_QWORD *)(BugCheckParameter2 + 1704) )
      goto LABEL_18;
    LODWORD(v24) = *(_DWORD *)(v27 + 4);
    HIDWORD(v24) = v24;
    v14 = EtwCovSampHash(__PAIR64__(*v13, v13[1]), v24);
    v28 = v14;
    v15 = 1;
    for ( j = 0; j < *(_DWORD *)(BugCheckParameter2 + 1720); ++j )
    {
      if ( (*(_BYTE *)(((*(_DWORD *)(BugCheckParameter2 + 1716) & ((unsigned int)v14 + j * HIDWORD(v14))) >> 3)
                     + *(_QWORD *)(BugCheckParameter2 + 1704)) & (unsigned __int8)(1 << (*(_BYTE *)(BugCheckParameter2
                                                                                                  + 1716) & (v14 + j * BYTE4(v14)) & 7))) == 0 )
      {
        v15 = 0;
        break;
      }
    }
    if ( !v15 )
    {
LABEL_18:
      v17 = *(_QWORD **)(BugCheckParameter2 + 1680);
      while ( 1 )
      {
        v18 = v17;
        if ( (unsigned int)EtwpCovSampHashLookupInTable(v17, v13, &v25) )
          break;
        v17 = (_QWORD *)*v17;
        if ( v17 == (_QWORD *)(BugCheckParameter2 + 1680) )
        {
          *v25 = *(_QWORD *)v13;
          ++*((_DWORD *)v18 + 4);
          v6 = ++v23;
          RoomAndAcquireLock = --v33;
          v12 = (unsigned int)(v12 + 1);
          v3 = a3;
          v4 = a2;
          goto LABEL_9;
        }
      }
      v6 = v23;
    }
    ++v7;
    RoomAndAcquireLock = v33;
    v12 = (unsigned int)(v12 + 1);
    v3 = a3;
    v4 = a2;
  }
  if ( *(struct _KTHREAD **)(BugCheckParameter2 + 8) == KeGetCurrentThread() )
  {
    *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  v19 = P;
  if ( P )
  {
    v20 = (void *)*((_QWORD *)P + 3);
    if ( v20 )
    {
      ExFreePoolWithTag(v20, 0x56777445u);
      v19[3] = 0LL;
    }
    ExFreePoolWithTag(v19, 0x56777445u);
  }
  v21 = v30;
  _InterlockedAdd((volatile signed __int32 *)(v30 + 1132), v6);
  _InterlockedAdd((volatile signed __int32 *)(v21 + 1136), v7);
  if ( v3 > v7 + v6 )
    _InterlockedAdd((volatile signed __int32 *)(v21 + 1140), v3 - v7 - v6);
  return v6;
}
