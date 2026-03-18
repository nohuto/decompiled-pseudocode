/*
 * XREFs of EtwpCovSampContextAddSamples @ 0x140900C90
 * Callers:
 *     EtwpCovSampContextAddAddresses @ 0x140900100 (EtwpCovSampContextAddAddresses.c)
 *     EtwpCovSampCaptureBufferProcess @ 0x140900208 (EtwpCovSampCaptureBufferProcess.c)
 *     EtwpCovSampSampleBufferProcess @ 0x1409022F4 (EtwpCovSampSampleBufferProcess.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     EtwCovSampHash @ 0x14041F0E0 (EtwCovSampHash.c)
 *     EtwpCovSampHashLookupInTable @ 0x1409D33D0 (EtwpCovSampHashLookupInTable.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x140ADA720 (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rbx
  void *v23; // rcx
  ULONG_PTR v24; // r12
  unsigned int v26; // [rsp+20h] [rbp-88h]
  __int64 v27; // [rsp+30h] [rbp-78h]
  _QWORD *v28; // [rsp+40h] [rbp-68h] BYREF
  PVOID P; // [rsp+48h] [rbp-60h]
  ULONG_PTR v30; // [rsp+50h] [rbp-58h]
  unsigned __int64 v31; // [rsp+58h] [rbp-50h]
  _DWORD *v32; // [rsp+60h] [rbp-48h]
  ULONG_PTR v33; // [rsp+68h] [rbp-40h]
  unsigned int v36; // [rsp+C8h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  v33 = BugCheckParameter2;
  v6 = 0;
  v26 = 0;
  v28 = 0LL;
  v7 = 0;
  P = 0LL;
  v8 = qword_140EFEC88;
  v9 = (_DWORD *)(BugCheckParameter2 + 24);
  v30 = BugCheckParameter2 + 24;
  RoomAndAcquireLock = EtwpCovSampHashMakeRoomAndAcquireLock(BugCheckParameter2);
  v36 = RoomAndAcquireLock;
  if ( RoomAndAcquireLock < v3 && *(_DWORD *)(v8 + 1284) != 1 )
  {
    if ( (*v9 & 0x100) == 0 )
    {
      *(_DWORD *)(v8 + 1284) = 1;
      KeSetEvent(*(PRKEVENT *)(BugCheckParameter2 + 1672), 0, 0);
    }
    for ( i = *(__int64 **)(v8 + 944); i != (__int64 *)(v8 + 944); i = (__int64 *)*i )
      *((_DWORD *)i + 7) = *(_DWORD *)(v8 + 1284);
    RoomAndAcquireLock = v36;
  }
  v12 = 0LL;
LABEL_9:
  while ( RoomAndAcquireLock && (unsigned int)v12 < v3 )
  {
    v13 = (_DWORD *)(v4 + 8 * v12);
    v32 = v13;
    if ( !*(_QWORD *)(BugCheckParameter2 + 1704) )
      goto LABEL_18;
    LODWORD(v27) = *(_DWORD *)(v30 + 4);
    HIDWORD(v27) = v27;
    v14 = EtwCovSampHash(__PAIR64__(*v13, v13[1]), v27);
    v31 = v14;
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
        if ( (unsigned int)EtwpCovSampHashLookupInTable(v17, v13, &v28) )
          break;
        v17 = (_QWORD *)*v17;
        if ( v17 == (_QWORD *)(BugCheckParameter2 + 1680) )
        {
          *v28 = *(_QWORD *)v13;
          ++*((_DWORD *)v18 + 4);
          v6 = ++v26;
          RoomAndAcquireLock = --v36;
          v12 = (unsigned int)(v12 + 1);
          v3 = a3;
          v4 = a2;
          goto LABEL_9;
        }
      }
      v6 = v26;
    }
    ++v7;
    RoomAndAcquireLock = v36;
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v19, v20, v21);
  }
  v22 = P;
  if ( P )
  {
    v23 = (void *)*((_QWORD *)P + 3);
    if ( v23 )
    {
      ExFreePoolWithTag(v23, 0x56777445u);
      v22[3] = 0LL;
    }
    ExFreePoolWithTag(v22, 0x56777445u);
  }
  v24 = v33;
  _InterlockedAdd((volatile signed __int32 *)(v33 + 1132), v6);
  _InterlockedAdd((volatile signed __int32 *)(v24 + 1136), v7);
  if ( v3 > v7 + v6 )
    _InterlockedAdd((volatile signed __int32 *)(v24 + 1140), v3 - v7 - v6);
  return v6;
}
