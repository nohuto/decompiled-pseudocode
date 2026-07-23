/*
 * XREFs of MmFlushVirtualMemory @ 0x1409C187C
 * Callers:
 *     CMFFlushHitsFile @ 0x1407C30E0 (CMFFlushHitsFile.c)
 *     NtFlushVirtualMemory @ 0x1409C16D0 (NtFlushVirtualMemory.c)
 * Callees:
 *     MiFlushDirtyBitsToPfn @ 0x1402155E0 (MiFlushDirtyBitsToPfn.c)
 *     MiFlushRelease @ 0x1402594B0 (MiFlushRelease.c)
 *     MiFlushSection @ 0x140272630 (MiFlushSection.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     MiGetProtoPteAddress @ 0x14030BEC0 (MiGetProtoPteAddress.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140362A70 (MiUnlockAndDereferenceVadShared.c)
 *     KeAreAllApcsDisabled @ 0x1403B2000 (KeAreAllApcsDisabled.c)
 *     MiFindLastSubsection @ 0x1403F2490 (MiFindLastSubsection.c)
 *     MiReferenceControlAreaFile @ 0x14041CAA0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x14041F2B0 (MiDereferenceControlAreaFile.c)
 *     MiFlushAcquire @ 0x140484FBC (MiFlushAcquire.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1409C1C10 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1409C1EC0 (FsRtlReleaseFileForCcFlush.c)
 */

__int64 __fastcall MmFlushVirtualMemory(_KPROCESS *a1, unsigned __int64 *a2, __int64 *a3, signed int *a4)
{
  unsigned __int64 v4; // r13
  signed int v5; // esi
  __int64 v6; // r15
  unsigned int v7; // ebx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r12
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r14
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r15
  int v20; // eax
  struct _KTHREAD *ProtoPteAddress; // rax
  __int64 LastSubsection; // r13
  __int64 *v23; // r12
  __int64 v24; // r8
  __int64 v25; // r9
  struct _FILE_OBJECT *v26; // r14
  unsigned __int64 v27; // rbx
  signed int v28; // edi
  unsigned __int64 v29; // rax
  signed int *v30; // rax
  BOOLEAN v32; // [rsp+40h] [rbp-79h]
  char v33; // [rsp+44h] [rbp-75h]
  int v34; // [rsp+48h] [rbp-71h]
  __int64 v35; // [rsp+50h] [rbp-69h] BYREF
  __int64 v36; // [rsp+58h] [rbp-61h] BYREF
  unsigned __int64 v37; // [rsp+60h] [rbp-59h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-51h]
  __int64 *v39; // [rsp+70h] [rbp-49h] BYREF
  signed int *v40; // [rsp+78h] [rbp-41h]
  __int128 v41; // [rsp+80h] [rbp-39h] BYREF
  _OWORD v42[3]; // [rsp+90h] [rbp-29h] BYREF

  v4 = *a2;
  v5 = 0;
  v6 = *a3;
  v42[0] = 0LL;
  v7 = 0;
  v40 = a4;
  v8 = v4 - 1;
  v39 = 0LL;
  v9 = v4 & 0xFFFFFFFFFFFFF000uLL;
  v35 = 0LL;
  *a2 = v9;
  memset(&v42[1], 0, 32);
  LODWORD(v36) = 0;
  v10 = (v6 + v8) | 0xFFF;
  v11 = 0LL;
  v41 = 0LL;
  v37 = 0LL;
  v33 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process != a1 )
  {
    v7 = 2;
    v33 = 2;
    KiStackAttachProcess(a1, 0, (__int64)v42);
  }
  v34 = 0;
  v32 = KeAreAllApcsDisabled();
  v13 = MiObtainReferencedVadEx(v9, 2LL, (int *)&v36, v12);
  v16 = v13;
  if ( v13 )
  {
    v17 = *(unsigned int *)(v13 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 33) << 32);
    if ( !v6 )
    {
      v10 = (v17 << 12) | 0xFFF;
      v7 |= 1u;
      v33 = v7;
    }
    v18 = *(unsigned int *)(v13 + 48);
    if ( (v18 & 0x200000) != 0 || v10 >> 12 > v17 )
    {
      v28 = -1073741799;
    }
    else
    {
      v19 = **(_QWORD **)(v13 + 72);
      v36 = v19;
      if ( !*(_QWORD *)(v19 + 64) || (LOBYTE(v18) = v18 & 0x70, (_BYTE)v18 == 32) )
      {
        v28 = -1073741688;
      }
      else if ( *(_QWORD *)(v19 + 32) )
      {
        if ( !v32 )
        {
          v20 = 0;
          if ( (*(_DWORD *)(v19 + 56) & 0x20000) != 0 )
            v20 = 4;
          v34 = v20;
        }
        MiFlushDirtyBitsToPfn(v9, v10, (__int64)CurrentThread);
        MiGetProtoPteAddress(v16, v10 >> 12, 0, &v35);
        ProtoPteAddress = (struct _KTHREAD *)MiGetProtoPteAddress(v16, v9 >> 12, 0, (__int64 *)&v39);
        LastSubsection = v35;
        v23 = v39;
        CurrentThread = ProtoPteAddress;
        if ( v35 )
        {
          v35 = MiGetProtoPteAddress(v16, v10 >> 12, 0, &v35);
        }
        else
        {
          if ( !v39 || (v7 & 1) == 0 )
          {
            v28 = (v7 & 1) == 0 ? 0xC0000019 : 0;
            goto LABEL_27;
          }
          LastSubsection = MiFindLastSubsection(v19, 0);
          v35 = *(_QWORD *)(LastSubsection + 8)
              + 8
              * (*(unsigned int *)(LastSubsection + 44)
               - (unsigned __int64)(*(_DWORD *)(LastSubsection + 52) & 0x3FFFFFFF)
               - 1);
        }
        if ( (unsigned int)MiFlushAcquire(v19, (__int64)v23, LastSubsection) )
        {
          MiUnlockAndDereferenceVadShared(v16, v18, v14, v15);
          if ( v7 >= 2 )
          {
            KiUnstackDetachProcess((__int64)v42, 0, v24, v25);
            v33 = -3;
          }
          v26 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v19);
          v27 = v35;
          while ( 1 )
          {
            v28 = FsRtlAcquireFileForCcFlushEx(v26);
            if ( v28 < 0 )
              break;
            v28 = MiFlushSection(
                    (unsigned __int64)CurrentThread,
                    v27,
                    v23,
                    LastSubsection,
                    0LL,
                    v34,
                    0LL,
                    (NTSTATUS *)&v41);
            FsRtlReleaseFileForCcFlush(v26);
            v29 = v37;
            if ( v37 < *((_QWORD *)&v41 + 1) )
              v29 = *((_QWORD *)&v41 + 1);
            v37 = v29;
            if ( v28 != -1073741740 )
              break;
            KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
          }
          MiDereferenceControlAreaFile(v36, (signed __int64)v26);
          MiFlushRelease(v36, v23, (_QWORD *)LastSubsection);
          LOBYTE(v7) = v33;
          v11 = v37;
          goto LABEL_28;
        }
        v28 = -1073741670;
      }
      else
      {
        v28 = 0;
      }
    }
LABEL_27:
    MiUnlockAndDereferenceVadShared(v16, v18, v14, v15);
    v11 = 0LL;
    goto LABEL_28;
  }
  v28 = v36;
  if ( (_DWORD)v36 == -1073741664 )
    v28 = -1073741799;
LABEL_28:
  if ( (v7 & 2) != 0 )
    KiUnstackDetachProcess((__int64)v42, 0, v14, v15);
  if ( v28 >= 0 )
    v11 = 0LL;
  else
    v5 = v28;
  v30 = v40;
  *v40 = v5;
  *((_QWORD *)v30 + 1) = v11;
  return (unsigned int)v28;
}
