/*
 * XREFs of MmFlushVirtualMemory @ 0x1409D1A4C
 * Callers:
 *     CMFFlushHitsFile @ 0x1407C1EAC (CMFFlushHitsFile.c)
 *     NtFlushVirtualMemory @ 0x1409D18A0 (NtFlushVirtualMemory.c)
 * Callees:
 *     MiFlushDirtyBitsToPfn @ 0x140233F80 (MiFlushDirtyBitsToPfn.c)
 *     MiFlushSection @ 0x14023A550 (MiFlushSection.c)
 *     MiReferenceControlAreaFile @ 0x1402464D0 (MiReferenceControlAreaFile.c)
 *     MiUnlockAndDereferenceVadShared @ 0x1402BB330 (MiUnlockAndDereferenceVadShared.c)
 *     MiObtainReferencedVadEx @ 0x1402FBE30 (MiObtainReferencedVadEx.c)
 *     MiGetProtoPteAddress @ 0x140301740 (MiGetProtoPteAddress.c)
 *     MiFindLastSubsection @ 0x140314EB0 (MiFindLastSubsection.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     MiFlushRelease @ 0x1403710F0 (MiFlushRelease.c)
 *     KeAreAllApcsDisabled @ 0x1403C3440 (KeAreAllApcsDisabled.c)
 *     MiDereferenceControlAreaFile @ 0x14042C500 (MiDereferenceControlAreaFile.c)
 *     MiFlushAcquire @ 0x140489CC0 (MiFlushAcquire.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1409D1DE0 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1409D2090 (FsRtlReleaseFileForCcFlush.c)
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
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r14
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r15
  int v19; // eax
  struct _KTHREAD *ProtoPteAddress; // rax
  unsigned __int64 *LastSubsection; // r13
  __int64 *v22; // r12
  struct _FILE_OBJECT *v23; // r14
  unsigned __int64 *v24; // rbx
  signed int v25; // edi
  unsigned __int64 v26; // rax
  signed int *v27; // rax
  BOOLEAN v29; // [rsp+40h] [rbp-79h]
  char v30; // [rsp+44h] [rbp-75h]
  int v31; // [rsp+48h] [rbp-71h]
  unsigned __int64 *v32; // [rsp+50h] [rbp-69h] BYREF
  __int64 v33; // [rsp+58h] [rbp-61h] BYREF
  unsigned __int64 v34; // [rsp+60h] [rbp-59h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-51h]
  unsigned __int64 *v36; // [rsp+70h] [rbp-49h] BYREF
  signed int *v37; // [rsp+78h] [rbp-41h]
  __int128 v38; // [rsp+80h] [rbp-39h] BYREF
  _OWORD v39[3]; // [rsp+90h] [rbp-29h] BYREF

  v4 = *a2;
  v5 = 0;
  v6 = *a3;
  v39[0] = 0LL;
  v7 = 0;
  v37 = a4;
  v8 = v4 - 1;
  v36 = 0LL;
  v9 = v4 & 0xFFFFFFFFFFFFF000uLL;
  v32 = 0LL;
  *a2 = v9;
  memset(&v39[1], 0, 32);
  LODWORD(v33) = 0;
  v10 = (v6 + v8) | 0xFFF;
  v11 = 0LL;
  v38 = 0LL;
  v34 = 0LL;
  v30 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process != a1 )
  {
    v7 = 2;
    v30 = 2;
    KiStackAttachProcess(a1, 0, (__int64)v39);
  }
  v31 = 0;
  v29 = KeAreAllApcsDisabled();
  v12 = MiObtainReferencedVadEx(v9, 2LL, (int *)&v33);
  v15 = v12;
  if ( v12 )
  {
    v16 = *(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32);
    if ( !v6 )
    {
      v10 = (v16 << 12) | 0xFFF;
      v7 |= 1u;
      v30 = v7;
    }
    v17 = *(unsigned int *)(v12 + 48);
    if ( (v17 & 0x200000) != 0 || v10 >> 12 > v16 )
    {
      v25 = -1073741799;
    }
    else
    {
      v18 = **(_QWORD **)(v12 + 72);
      v33 = v18;
      if ( !*(_QWORD *)(v18 + 64) || (LOBYTE(v17) = v17 & 0x70, (_BYTE)v17 == 32) )
      {
        v25 = -1073741688;
      }
      else if ( *(_QWORD *)(v18 + 32) )
      {
        if ( !v29 )
        {
          v19 = 0;
          if ( (*(_DWORD *)(v18 + 56) & 0x20000) != 0 )
            v19 = 4;
          v31 = v19;
        }
        MiFlushDirtyBitsToPfn(v9, v10, (__int64)CurrentThread);
        MiGetProtoPteAddress(v15, v10 >> 12, 0, &v32);
        ProtoPteAddress = (struct _KTHREAD *)MiGetProtoPteAddress(v15, v9 >> 12, 0, &v36);
        LastSubsection = v32;
        v22 = (__int64 *)v36;
        CurrentThread = ProtoPteAddress;
        if ( v32 )
        {
          v32 = (unsigned __int64 *)MiGetProtoPteAddress(v15, v10 >> 12, 0, &v32);
        }
        else
        {
          if ( !v36 || (v7 & 1) == 0 )
          {
            v25 = (v7 & 1) == 0 ? 0xC0000019 : 0;
            goto LABEL_27;
          }
          LastSubsection = (unsigned __int64 *)MiFindLastSubsection(v18, 0);
          v32 = (unsigned __int64 *)(LastSubsection[1]
                                   + 8
                                   * (*((unsigned int *)LastSubsection + 11)
                                    - (unsigned __int64)(*((_DWORD *)LastSubsection + 13) & 0x3FFFFFFF)
                                    - 1));
        }
        if ( (unsigned int)MiFlushAcquire(v18, v22, (__int64 *)LastSubsection) )
        {
          MiUnlockAndDereferenceVadShared(v15, v17, v13, v14);
          if ( v7 >= 2 )
          {
            KiUnstackDetachProcess((__int64)v39, 0);
            v30 = -3;
          }
          v23 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v18);
          v24 = v32;
          while ( 1 )
          {
            v25 = FsRtlAcquireFileForCcFlushEx(v23);
            if ( v25 < 0 )
              break;
            v25 = MiFlushSection(
                    (unsigned __int64)CurrentThread,
                    (unsigned __int64)v24,
                    v22,
                    (__int64)LastSubsection,
                    0LL,
                    v31,
                    0LL,
                    &v38);
            FsRtlReleaseFileForCcFlush(v23);
            v26 = v34;
            if ( v34 < *((_QWORD *)&v38 + 1) )
              v26 = *((_QWORD *)&v38 + 1);
            v34 = v26;
            if ( v25 != -1073741740 )
              break;
            KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
          }
          MiDereferenceControlAreaFile(v33, (signed __int64)v23);
          MiFlushRelease(v33, v22, LastSubsection);
          LOBYTE(v7) = v30;
          v11 = v34;
          goto LABEL_28;
        }
        v25 = -1073741670;
      }
      else
      {
        v25 = 0;
      }
    }
LABEL_27:
    MiUnlockAndDereferenceVadShared(v15, v17, v13, v14);
    v11 = 0LL;
    goto LABEL_28;
  }
  v25 = v33;
  if ( (_DWORD)v33 == -1073741664 )
    v25 = -1073741799;
LABEL_28:
  if ( (v7 & 2) != 0 )
    KiUnstackDetachProcess((__int64)v39, 0);
  if ( v25 >= 0 )
    v11 = 0LL;
  else
    v5 = v25;
  v27 = v37;
  *v37 = v5;
  *((_QWORD *)v27 + 1) = v11;
  return (unsigned int)v25;
}
