/*
 * XREFs of NtEnumerateBootEntries @ 0x14094DCD0
 * Callers:
 *     <none>
 * Callees:
 *     ExUnlockUserBuffer @ 0x14025FDEC (ExUnlockUserBuffer.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403CD970 (ExAcquireFastMutexUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 *     ExpIsDevicePathForRemovableMedia @ 0x140494F1C (ExpIsDevicePathForRemovableMedia.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     strcmp @ 0x1406C1300 (strcmp.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     ExpVerifyWindowsOsOptions @ 0x14094D80C (ExpVerifyWindowsOsOptions.c)
 *     ExpSafeWcslen @ 0x14094E328 (ExpSafeWcslen.c)
 *     ExpTranslateBootEntryNameToId @ 0x14094E3A8 (ExpTranslateBootEntryNameToId.c)
 *     ExpVerifyFilePath @ 0x14094E480 (ExpVerifyFilePath.c)
 *     IoEnumerateEnvironmentVariablesEx @ 0x14094F088 (IoEnumerateEnvironmentVariablesEx.c)
 *     ExLockUserBuffer @ 0x14094F5B8 (ExLockUserBuffer.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtEnumerateBootEntries(PVOID Buffer, PULONG BufferLength)
{
  PULONG v2; // r12
  __int64 v4; // r8
  KPROCESSOR_MODE v5; // si
  unsigned int v6; // ebx
  __int64 v7; // rcx
  NTSTATUS result; // eax
  int *v9; // r14
  NTSTATUS v10; // r13d
  struct _KTHREAD *v11; // rax
  __int64 Pool2; // rax
  unsigned int *v13; // r15
  unsigned int v14; // esi
  NTSTATUS v15; // edi
  unsigned int *v16; // r12
  char *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned int v20; // r13d
  unsigned int v21; // eax
  __int64 v22; // r8
  size_t v23; // r9
  unsigned int v24; // esi
  unsigned int v25; // eax
  char *v26; // rdx
  unsigned int v27; // r13d
  unsigned __int64 v28; // rax
  int v29; // ecx
  int *v30; // rsi
  int v31; // eax
  BOOL v32; // r8d
  unsigned int v33; // edx
  int v34; // eax
  BOOL v35; // eax
  BOOL v36; // r8d
  unsigned int v37; // ecx
  unsigned int v38; // eax
  int v39; // edx
  _DWORD *v40; // rcx
  char *v41; // rax
  _BYTE *v42; // rcx
  __int64 v43; // rax
  unsigned int v44; // ecx
  unsigned int v45; // eax
  unsigned int v46; // [rsp+30h] [rbp-D8h] BYREF
  KPROCESSOR_MODE PreviousMode; // [rsp+34h] [rbp-D4h]
  int v48; // [rsp+38h] [rbp-D0h]
  unsigned int v49; // [rsp+3Ch] [rbp-CCh]
  BOOL v50; // [rsp+40h] [rbp-C8h]
  unsigned int v51; // [rsp+44h] [rbp-C4h]
  int v52; // [rsp+48h] [rbp-C0h]
  int v53; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v54; // [rsp+50h] [rbp-B8h]
  unsigned int v55; // [rsp+58h] [rbp-B0h]
  unsigned int v56; // [rsp+60h] [rbp-A8h]
  int *v57; // [rsp+68h] [rbp-A0h]
  void *v58; // [rsp+70h] [rbp-98h] BYREF
  PVOID P; // [rsp+78h] [rbp-90h] BYREF
  _DWORD *v60; // [rsp+80h] [rbp-88h]
  void *Src; // [rsp+88h] [rbp-80h]
  size_t Size; // [rsp+90h] [rbp-78h]
  void *v63; // [rsp+98h] [rbp-70h]
  size_t v64; // [rsp+A0h] [rbp-68h]
  void *v65; // [rsp+A8h] [rbp-60h]
  char *v66; // [rsp+B0h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+C8h] [rbp-40h]
  char v69; // [rsp+120h] [rbp+18h]

  v2 = BufferLength;
  v58 = 0LL;
  P = 0LL;
  if ( dword_140EFEE10 != 2 )
    return -1073741822;
  if ( (PVOID)((unsigned __int64)Buffer & 0xFFFFFFFFFFFFFFFCuLL) != Buffer )
    return -1073741811;
  if ( PsIsCurrentThreadInServerSilo() )
    return -1073741822;
  CurrentThread = KeGetCurrentThread();
  v5 = CurrentThread->PreviousMode;
  PreviousMode = v5;
  if ( v5 )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v2 < 0x7FFFFFFF0000LL )
      v7 = (__int64)v2;
    *(_DWORD *)v7 = *(_DWORD *)v7;
    v6 = Buffer != 0LL ? *v2 : 0;
    v51 = v6;
    if ( v6 )
      ProbeForWrite(Buffer, v6, 4u);
    v5 = PreviousMode;
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    v6 = Buffer != 0LL ? *v2 : 0;
    v51 = v6;
  }
  if ( !v6 || (LOBYTE(v4) = v5, result = ExLockUserBuffer(Buffer, v6, v4, 1LL, &v58, &P), result >= 0) )
  {
    v9 = (int *)v58;
    v50 = v6 != 0;
    v10 = 0;
    v48 = 0;
    v57 = 0LL;
    v11 = KeGetCurrentThread();
    --v11->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
    v46 = 0x2000;
    Pool2 = ExAllocatePool2(0x40uLL, 0x2000uLL, 0x72766E45u);
    v13 = (unsigned int *)Pool2;
    if ( !Pool2 )
      v46 = 0;
    while ( 1 )
    {
      v14 = v46;
      v15 = IoEnumerateEnvironmentVariablesEx(2LL, ExpIsBootEntry, Pool2, &v46);
      if ( v15 != -1073741789 )
        break;
      v45 = v46;
      if ( v14 >= v46 )
        break;
      if ( v13 )
      {
        ExFreePoolWithTag(v13, 0);
        v45 = v46;
      }
      Pool2 = ExAllocatePool2(0x40uLL, v45, 0x72766E45u);
      v13 = (unsigned int *)Pool2;
      if ( !Pool2 )
      {
        v15 = -1073741670;
        break;
      }
    }
    ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
    KeLeaveCriticalRegion();
    if ( v15 || !v46 )
    {
      if ( v15 == -1073741789 )
        v15 = -1073741306;
    }
    else
    {
      v16 = v13;
      v17 = (char *)v13 + 2 * v46;
      v66 = v17;
      v18 = EfiBootVariablesGuid;
      while ( 1 )
      {
        v53 = 0;
        v19 = *((_QWORD *)v16 + 2) - v18;
        if ( !v19 )
          v19 = *((_QWORD *)v16 + 3) + 0x73D4FC671FFFF256LL;
        if ( !v19 )
        {
          if ( (unsigned int)ExpTranslateBootEntryNameToId(v16 + 8, &v53) )
          {
            v20 = v16[2];
            if ( v20 >= 8 )
            {
              v60 = (unsigned int *)((char *)v16 + v16[1]);
              v63 = (char *)v60 + 6;
              v21 = ExpSafeWcslen((char *)v60 + 6, v17);
              v24 = v21;
              v49 = v21;
              if ( v21 != -1 )
              {
                v24 = 2 * v21 + 2;
                v49 = v24;
              }
              v25 = v23 + v24 + 6;
              if ( v24 != -1 && (unsigned int)v23 < v20 && v20 >= v25 )
              {
                v69 = 1;
                Size = v24;
                v26 = (char *)(v22 + v24 + 6LL);
                v65 = v26;
                v64 = v23;
                Src = &v26[v23];
                v27 = v20 - v25;
                v28 = ((unsigned __int64)v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
                if ( (int *)v28 != v9 )
                {
                  v44 = v28 - (_DWORD)v9;
                  v9 = (int *)(((unsigned __int64)v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
                  if ( v6 >= v44 )
                  {
                    v6 -= v44;
                  }
                  else
                  {
                    v50 = 0;
                    v6 = 0;
                    v48 = -1073741789;
                  }
                }
                v29 = v23 + 12;
                v52 = v23 + 12;
                v30 = v9 + 1;
                if ( v6 < (int)v23 + 12 )
                {
                  v6 = 0;
                  v32 = 0;
                  v48 = -1073741789;
                }
                else
                {
                  *v9 = 1;
                  *v30 = v29;
                  v9[2] = 4;
                  memmove(v9 + 3, v26, v23);
                  v31 = ExpVerifyFilePath(v9);
                  v32 = v50;
                  if ( v31 < 0 )
                  {
                    v69 = 0;
                    v29 = 16;
                    v52 = 16;
                  }
                  else
                  {
                    v29 = v52;
                  }
                }
                v54 = (v27 + 31) & 0xFFFFFFFC;
                v49 = (v49 + 3 + v54) & 0xFFFFFFFC;
                v56 = v29 + v49;
                v33 = v29 + v49 + 4;
                v55 = v33;
                v34 = v48;
                if ( v6 < v33 )
                  v34 = -1073741789;
                v48 = v34;
                v35 = 0;
                if ( v6 >= v33 )
                  v35 = v32;
                v36 = v35;
                v50 = v35;
                v37 = v6;
                v38 = v6 - v33;
                v6 = 0;
                if ( v37 >= v33 )
                  v6 = v38;
                if ( v36 )
                {
                  memset_0(v9, 0, v33);
                  *v30 = 1;
                  v9[2] = v56;
                  v9[3] = v53;
                  v9[4] = 0;
                  v39 = 0;
                  v40 = v60;
                  if ( (*v60 & 1) != 0 )
                  {
                    v9[4] = 1;
                    v39 = 1;
                  }
                  if ( (*v40 & 8) != 0 )
                    v9[4] = v39 | 0x10;
                  v9[5] = v54;
                  v9[6] = v49;
                  v9[7] = v27;
                  memmove(v9 + 8, Src, v27);
                  if ( v27 > 0x14
                    && !strcmp((const char *)v9 + 32, "WINDOWS")
                    && (int)ExpVerifyWindowsOsOptions((__int64)(v9 + 8), v27) >= 0 )
                  {
                    v9[4] |= 4u;
                  }
                  memmove((char *)v30 + v54, v63, Size);
                  v41 = (char *)v30 + v49;
                  *(_DWORD *)v41 = 1;
                  *((_DWORD *)v41 + 1) = v52;
                  *((_DWORD *)v41 + 2) = 4;
                  v42 = v41 + 12;
                  if ( v69 )
                  {
                    memmove(v42, v65, v64);
                    if ( (unsigned int)ExpIsDevicePathForRemovableMedia(v65) )
                      v9[4] |= 8u;
                  }
                  else
                  {
                    v9[4] |= 0x20u;
                    *v42 = 127;
                    *(_WORD *)(v41 + 13) = 1279;
                    v41[15] = 0;
                  }
                  if ( v57 )
                    *v57 = (_DWORD)v9 - (_DWORD)v57;
                  v57 = v9;
                  v33 = v55;
                }
                v9 = (int *)((char *)v9 + v33);
              }
            }
          }
          v18 = EfiBootVariablesGuid;
        }
        v43 = *v16;
        if ( !(_DWORD)v43 )
          break;
        v16 = (unsigned int *)((char *)v16 + v43);
        v17 = v66;
      }
      v2 = BufferLength;
      v10 = v48;
      if ( v57 )
        *v57 = 0;
    }
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
    if ( P )
      ExUnlockUserBuffer((struct _MDL *)P);
    if ( v15 >= 0 )
      v15 = v10;
    *v2 = (_DWORD)v9 - (_DWORD)v58;
    return v15;
  }
  return result;
}
