/*
 * XREFs of MmFlushVirtualMemory @ 0x1409CEA8C
 * Callers:
 *     CMFFlushHitsFile @ 0x1407B39A0 (CMFFlushHitsFile.c)
 *     NtFlushVirtualMemory @ 0x1409CE8E0 (NtFlushVirtualMemory.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x1402454D0 (MiGetProtoPteAddress.c)
 *     KeAreAllApcsDisabled @ 0x140256FE0 (KeAreAllApcsDisabled.c)
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     MiObtainReferencedVadEx @ 0x1402A7A60 (MiObtainReferencedVadEx.c)
 *     MiFindLastSubsection @ 0x1402BC450 (MiFindLastSubsection.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140320840 (MiUnlockAndDereferenceVadShared.c)
 *     MiFlushSection @ 0x14033E540 (MiFlushSection.c)
 *     MiFlushRelease @ 0x14035A870 (MiFlushRelease.c)
 *     MiFlushDirtyBitsToPfn @ 0x140388960 (MiFlushDirtyBitsToPfn.c)
 *     MiReferenceControlAreaFile @ 0x14042F960 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x140432C40 (MiDereferenceControlAreaFile.c)
 *     MiFlushAcquire @ 0x14048A490 (MiFlushAcquire.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1409CEE20 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1409CF0D0 (FsRtlReleaseFileForCcFlush.c)
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
  void *v13; // r14
  unsigned __int64 v14; // rcx
  int v15; // edx
  __int64 v16; // r15
  struct _KTHREAD *ProtoPteAddress; // rax
  unsigned __int64 *LastSubsection; // r13
  __int64 *v19; // r12
  struct _FILE_OBJECT *v20; // r14
  unsigned __int64 *v21; // rbx
  signed int v22; // edi
  unsigned __int64 v23; // rax
  signed int *v24; // rax
  int v26; // eax
  BOOLEAN v27; // [rsp+40h] [rbp-79h]
  char v28; // [rsp+44h] [rbp-75h]
  int v29; // [rsp+48h] [rbp-71h]
  unsigned __int64 *v30; // [rsp+50h] [rbp-69h] BYREF
  __int64 v31; // [rsp+58h] [rbp-61h] BYREF
  unsigned __int64 v32; // [rsp+60h] [rbp-59h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-51h]
  unsigned __int64 *v34; // [rsp+70h] [rbp-49h] BYREF
  signed int *v35; // [rsp+78h] [rbp-41h]
  __int128 v36; // [rsp+80h] [rbp-39h] BYREF
  _OWORD v37[3]; // [rsp+90h] [rbp-29h] BYREF

  v4 = *a2;
  v5 = 0;
  v6 = *a3;
  v37[0] = 0LL;
  v7 = 0;
  v35 = a4;
  v8 = v4 - 1;
  v34 = 0LL;
  v9 = v4 & 0xFFFFFFFFFFFFF000uLL;
  v30 = 0LL;
  *a2 = v9;
  memset(&v37[1], 0, 32);
  LODWORD(v31) = 0;
  v10 = (v6 + v8) | 0xFFF;
  v11 = 0LL;
  v36 = 0LL;
  v32 = 0LL;
  v28 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process != a1 )
  {
    v7 = 2;
    v28 = 2;
    KiStackAttachProcess(a1, 0, (__int64)v37);
  }
  v29 = 0;
  v27 = KeAreAllApcsDisabled();
  v12 = MiObtainReferencedVadEx(v9, 2, (int *)&v31);
  v13 = (void *)v12;
  if ( v12 )
  {
    v14 = *(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32);
    if ( !v6 )
    {
      v10 = (v14 << 12) | 0xFFF;
      v7 |= 1u;
      v28 = v7;
    }
    v15 = *(_DWORD *)(v12 + 48);
    if ( (v15 & 0x200000) != 0 || v10 >> 12 > v14 )
    {
      v22 = -1073741799;
    }
    else
    {
      v16 = **(_QWORD **)(v12 + 72);
      v31 = v16;
      if ( !*(_QWORD *)(v16 + 64) || (v15 & 0x70) == 0x20 )
      {
        v22 = -1073741688;
      }
      else if ( *(_QWORD *)(v16 + 32) )
      {
        if ( !v27 )
        {
          v26 = 0;
          if ( (*(_DWORD *)(v16 + 56) & 0x20000) != 0 )
            v26 = 4;
          v29 = v26;
        }
        MiFlushDirtyBitsToPfn(v9, v10, (__int64)CurrentThread);
        MiGetProtoPteAddress((__int64)v13, v10 >> 12, 0, &v30);
        ProtoPteAddress = (struct _KTHREAD *)MiGetProtoPteAddress((__int64)v13, v9 >> 12, 0, &v34);
        LastSubsection = v30;
        v19 = (__int64 *)v34;
        CurrentThread = ProtoPteAddress;
        if ( v30 )
        {
          v30 = (unsigned __int64 *)MiGetProtoPteAddress((__int64)v13, v10 >> 12, 0, &v30);
        }
        else
        {
          if ( !v34 || (v7 & 1) == 0 )
          {
            v22 = (v7 & 1) == 0 ? 0xC0000019 : 0;
            goto LABEL_24;
          }
          LastSubsection = (unsigned __int64 *)MiFindLastSubsection(v16, 0);
          v30 = (unsigned __int64 *)(LastSubsection[1]
                                   + 8
                                   * (*((unsigned int *)LastSubsection + 11)
                                    - (unsigned __int64)(*((_DWORD *)LastSubsection + 13) & 0x3FFFFFFF)
                                    - 1));
        }
        if ( (unsigned int)MiFlushAcquire(v16, (__int64)v19, (__int64)LastSubsection) )
        {
          MiUnlockAndDereferenceVadShared(v13);
          if ( v7 >= 2 )
          {
            KiUnstackDetachProcess((__int64)v37, 0LL);
            v28 = -3;
          }
          v20 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v16);
          v21 = v30;
          while ( 1 )
          {
            v22 = FsRtlAcquireFileForCcFlushEx(v20);
            if ( v22 < 0 )
              break;
            v22 = MiFlushSection(
                    (unsigned __int64)CurrentThread,
                    (unsigned __int64)v21,
                    v19,
                    (__int64)LastSubsection,
                    0LL,
                    v29,
                    0LL,
                    &v36);
            FsRtlReleaseFileForCcFlush(v20);
            v23 = v32;
            if ( v32 < *((_QWORD *)&v36 + 1) )
              v23 = *((_QWORD *)&v36 + 1);
            v32 = v23;
            if ( v22 != -1073741740 )
              break;
            KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
          }
          MiDereferenceControlAreaFile(v31, (signed __int64)v20);
          MiFlushRelease(v31, v19, LastSubsection);
          LOBYTE(v7) = v28;
          v11 = v32;
          goto LABEL_25;
        }
        v22 = -1073741670;
      }
      else
      {
        v22 = 0;
      }
    }
LABEL_24:
    MiUnlockAndDereferenceVadShared(v13);
    v11 = 0LL;
    goto LABEL_25;
  }
  v22 = v31;
  if ( (_DWORD)v31 == -1073741664 )
    v22 = -1073741799;
LABEL_25:
  if ( (v7 & 2) != 0 )
    KiUnstackDetachProcess((__int64)v37, 0LL);
  if ( v22 >= 0 )
    v11 = 0LL;
  else
    v5 = v22;
  v24 = v35;
  *v35 = v5;
  *((_QWORD *)v24 + 1) = v11;
  return (unsigned int)v22;
}
