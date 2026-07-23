/*
 * XREFs of NtOpenThreadTokenEx @ 0x140851680
 * Callers:
 *     NtOpenThreadToken @ 0x140851660 (NtOpenThreadToken.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     SeQueryTokenTrustLink @ 0x14045EEDC (SeQueryTokenTrustLink.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByPointer @ 0x1408511D0 (ObOpenObjectByPointer.c)
 *     SepCreateImpersonationTokenDacl @ 0x140852130 (SepCreateImpersonationTokenDacl.c)
 *     SepDuplicateToken @ 0x1408527E0 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     PspWriteTebImpersonationInfo @ 0x1408E87D0 (PspWriteTebImpersonationInfo.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtOpenThreadTokenEx(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  BOOLEAN v5; // r15
  int v7; // r14d
  int v8; // r12d
  KPROCESSOR_MODE PreviousMode; // bl
  int v10; // edi
  ULONG v11; // edi
  __int64 v12; // rcx
  KPROCESSOR_MODE v13; // r9
  NTSTATUS result; // eax
  void *v15; // r13
  struct _KTHREAD *v16; // rbx
  char v17; // r12
  char *v18; // rax
  char *v19; // rdi
  __int64 v20; // rcx
  void *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rbx
  ULONG_PTR v24; // r15
  NTSTATUS v25; // r12d
  signed __int64 v26; // rax
  signed __int64 v27; // rtt
  PVOID v28; // rbx
  _QWORD *v29; // r15
  void *Pool2; // rdi
  void *v31; // rcx
  NTSTATUS inserted; // eax
  struct _KTHREAD *v33; // r15
  struct _KTHREAD *v34; // rdx
  void *v35; // rbx
  __int64 v36; // rcx
  __int64 TokenTrustLink; // rdi
  unsigned __int64 v38; // rbx
  char *v39; // rax
  struct _KTHREAD *v40; // rbx
  void *v41; // rdi
  volatile signed __int32 *v42; // rbx
  struct _KTHREAD *v43; // r15
  unsigned __int64 *v44; // r15
  char *v45; // rax
  _QWORD *v46; // rdx
  __int64 v47; // rcx
  PVOID v48; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  signed __int64 *v50; // rdi
  char *v51; // rbx
  _DWORD *v52; // rbx
  unsigned int v53; // eax
  unsigned int v54; // r12d
  unsigned int v55; // eax
  __int64 v56; // rcx
  bool v57; // [rsp+40h] [rbp-F8h]
  char v58; // [rsp+40h] [rbp-F8h]
  KPROCESSOR_MODE v59; // [rsp+41h] [rbp-F7h]
  bool v60; // [rsp+42h] [rbp-F6h]
  char v61; // [rsp+43h] [rbp-F5h]
  PVOID Object; // [rsp+48h] [rbp-F0h] BYREF
  unsigned int v63; // [rsp+50h] [rbp-E8h]
  void *Src; // [rsp+58h] [rbp-E0h]
  __int128 v65; // [rsp+60h] [rbp-D8h]
  PVOID v66; // [rsp+70h] [rbp-C8h] BYREF
  PVOID Thread; // [rsp+78h] [rbp-C0h]
  ULONG HandleAttributesa[2]; // [rsp+80h] [rbp-B8h]
  struct _KTHREAD *v69; // [rsp+88h] [rbp-B0h]
  char *v70; // [rsp+90h] [rbp-A8h]
  PVOID P; // [rsp+98h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp-98h] BYREF
  __int128 v73; // [rsp+A8h] [rbp-90h] BYREF
  __int128 v74; // [rsp+B8h] [rbp-80h]
  _WORD *v75; // [rsp+C8h] [rbp-70h]
  __int64 v76; // [rsp+D0h] [rbp-68h]
  void *v77; // [rsp+D8h] [rbp-60h]
  _WORD v78[16]; // [rsp+E0h] [rbp-58h] BYREF
  PVOID v79; // [rsp+100h] [rbp-38h]

  v5 = OpenAsSelf;
  v7 = 0;
  v66 = 0LL;
  LOBYTE(v63) = 0;
  v57 = 0;
  v8 = 0;
  LODWORD(v69) = 0;
  v65 = 0LL;
  v61 = 0;
  Handle = 0LL;
  memset(v78, 0, sizeof(v78));
  v79 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  LODWORD(v76) = 0;
  P = 0LL;
  Src = 0LL;
  v60 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v59 = PreviousMode;
  v10 = 73714;
  if ( PreviousMode )
    v10 = 7666;
  v11 = HandleAttributes & v10;
  HandleAttributesa[0] = v11;
  if ( PreviousMode )
  {
    v12 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)TokenHandle < 0x7FFFFFFF0000LL )
      v12 = (__int64)TokenHandle;
    *(_QWORD *)v12 = *(_QWORD *)v12;
  }
  v13 = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  result = ObReferenceObjectByHandle(ThreadHandle, 0x800u, (POBJECT_TYPE)PsThreadType, v13, &Object, 0LL);
  if ( result >= 0 )
  {
    if ( (*((_DWORD *)Object + 360) & 8) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v50 = (signed __int64 *)((char *)Object + 1424);
      v51 = (char *)KeAbPreAcquire((__int64)Object + 1424, 0LL);
      if ( _InterlockedCompareExchange64(v50, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v50, 0, v51, (__int64)v50);
      if ( v51 )
        v51[10] = 1;
      if ( (*((_DWORD *)Object + 360) & 8) != 0 )
      {
        v52 = Object;
        v15 = (void *)(*((_QWORD *)Object + 167) & 0xFFFFFFFFFFFFFFF8uLL);
        v63 = *((_DWORD *)Object + 360);
        ObfReferenceObjectWithTag(v15, 0x74726853u);
        v8 = v52[334] & 3;
        LODWORD(v69) = v8;
        v57 = (v52[334] & 4) != 0;
        v53 = v63 >> 8;
        LOBYTE(v53) = BYTE1(v63) & 1;
        v63 = v53;
      }
      else
      {
        v15 = 0LL;
      }
      if ( _InterlockedCompareExchange64(v50, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v50);
      KeAbPostRelease((ULONG_PTR)v50);
      KeLeaveCriticalRegionThread();
      v11 = HandleAttributesa[0];
      PreviousMode = v59;
    }
    else
    {
      v15 = 0LL;
    }
    if ( !v15 )
    {
      ObfDereferenceObject(Object);
      return -1073741700;
    }
    if ( !v8 )
    {
      ObfDereferenceObjectWithTag(v15, 0x74726853u);
      ObfDereferenceObject(Object);
      return -1073741658;
    }
    if ( v5 )
    {
      v16 = KeGetCurrentThread();
      v17 = 0;
      if ( (*(_DWORD *)(&v16[1].SwapListEntry + 1) & 8) != 0 )
      {
        Thread = KeGetCurrentThread();
        --*((_WORD *)Thread + 242);
        v18 = (char *)KeAbPreAcquire((__int64)&v16[1].WaitBlockList, 0LL);
        v19 = v18;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&v16[1].WaitBlockList, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&v16[1].WaitBlockList, v18, (__int64)&v16[1].WaitBlockList);
        if ( v19 )
          v19[10] = 1;
        if ( _interlockedbittestandreset((volatile signed __int32 *)&v16[1].SwapListEntry + 2, 3u) )
        {
          v17 = 1;
          HIDWORD(v65) = *((_DWORD *)&v16[1].0 + 1) & 3;
          v20 = *(__int64 *)((char *)&v16[1].116 + 4);
          BYTE9(v65) = (v20 & 4) != 0;
          BYTE8(v65) = BYTE1(*((_DWORD *)&v16[1].SwapListEntry + 2)) & 1;
          v21 = (void *)(v20 & 0xFFFFFFFFFFFFFFF8uLL);
          if ( v16[1].WaitBlock[1].Thread )
          {
            *(_QWORD *)&v65 = v16[1].WaitBlock[1].Thread;
            v16[1].WaitBlock[1].Thread = 0LL;
            ObfDereferenceObject(v21);
          }
          else
          {
            *(_QWORD *)&v65 = v21;
          }
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v16[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&v16[1].WaitBlockList);
        KeAbPostRelease((ULONG_PTR)&v16[1].WaitBlockList);
        KeLeaveCriticalRegionThread();
        v11 = HandleAttributesa[0];
        v5 = OpenAsSelf;
      }
      PreviousMode = v59;
      if ( !v17 )
      {
        HIDWORD(v65) = 0;
        WORD4(v65) = 0;
        v22 = 0LL;
        *(_QWORD *)&v65 = 0LL;
        v61 = 0;
LABEL_29:
        if ( !(_BYTE)v63 )
        {
          inserted = ObOpenObjectByPointer(
                       v15,
                       v11,
                       0LL,
                       DesiredAccess,
                       (POBJECT_TYPE)SeTokenObjectType,
                       PreviousMode,
                       &Handle);
          v28 = P;
          goto LABEL_51;
        }
        if ( v5 )
        {
          if ( v22 )
          {
            Src = *(void **)(v22 + 1104);
            v60 = 1;
          }
        }
        else
        {
          v56 = *((_QWORD *)Object + 201);
          if ( v56 )
            Src = *(void **)(v56 + 1104);
          v60 = v56 != 0;
        }
        v23 = *((_QWORD *)Object + 68);
        v24 = PsReferencePrimaryTokenWithTag(v23, 0x746C6644u);
        v25 = SepCreateImpersonationTokenDacl(v15, v24, &P);
        _m_prefetchw((const void *)(v23 + 584));
        v26 = *(_QWORD *)(v23 + 584);
        do
        {
          if ( (v24 ^ v26) >= 0xF )
          {
            ObfDereferenceObjectWithTag((PVOID)v24, 0x746C6644u);
            goto LABEL_38;
          }
          v27 = v26;
          v26 = _InterlockedCompareExchange64((volatile signed __int64 *)(v23 + 584), v26 + 1, v26);
        }
        while ( v27 != v26 );
        if ( ObpTraceFlags )
          ObpPushStackInfo(v24 - 48, 0, 1u, 0x746C6644u);
LABEL_38:
        v28 = P;
        if ( v25 >= 0 )
        {
          if ( P )
          {
            LOBYTE(v78[0]) = 1;
            if ( v78[1] >= 0 )
            {
              v79 = P;
              v78[1] = v78[1] & 0xFFF3 | 4;
            }
          }
          LODWORD(v73) = 48;
          *((_QWORD *)&v73 + 1) = 0LL;
          DWORD2(v74) = v11;
          *(_QWORD *)&v74 = 0LL;
          v75 = P ? v78 : 0LL;
          v76 = 0LL;
          v25 = SepDuplicateToken((_DWORD)v15, (unsigned int)&v73, v57, 2, (_DWORD)v69, 0, 0, (__int64)&v66);
          if ( v25 >= 0 )
          {
            if ( !v60 )
            {
LABEL_50:
              PsReferenceSiloContext(v66);
              inserted = ObInsertObjectEx(v66, 0, 0LL, (__int64)&Handle);
LABEL_51:
              v25 = inserted;
              goto LABEL_52;
            }
            v29 = v66;
            Pool2 = 0LL;
            v77 = 0LL;
            if ( !Src )
            {
LABEL_47:
              v31 = (void *)v29[138];
              if ( v31 )
                ExFreePoolWithTag(v31, 0);
              v29[138] = Pool2;
              goto LABEL_50;
            }
            v54 = 4 * *((unsigned __int8 *)Src + 1) + 8;
            Pool2 = (void *)ExAllocatePool2(
                              0x100uLL,
                              (4 * *((unsigned __int8 *)Src + 1) + 11) & 0xFFFFFFFC,
                              0x69536553u);
            if ( Pool2 )
            {
              v55 = 4 * *((unsigned __int8 *)Src + 1) + 8;
              if ( v55 <= v54 )
                memmove(Pool2, Src, v55);
              v77 = Pool2;
              goto LABEL_47;
            }
            v25 = -1073741670;
          }
        }
LABEL_52:
        if ( v28 )
          ExFreePoolWithTag(v28, 0);
        if ( v61 )
        {
          v33 = KeGetCurrentThread();
          *(_QWORD *)HandleAttributesa = 0LL;
          Thread = 0LL;
          Src = 0LL;
          v58 = 0;
          v34 = v33;
          v69 = v33;
          v35 = (void *)v65;
          if ( (_QWORD)v65 )
          {
            if ( SeQueryTokenTrustLink(v65) )
            {
              TokenTrustLink = SeQueryTokenTrustLink(v36);
              PsReferenceSiloContext((void *)TokenTrustLink);
              Src = v35;
              v34 = v69;
            }
            else
            {
              TokenTrustLink = (__int64)v35;
            }
            v38 = (BYTE9(v65) != 0 ? 4 : 0) | TokenTrustLink & 0xFFFFFFFFFFFFFFF8uLL | BYTE12(v65) & 3;
          }
          else
          {
            v38 = 0LL;
          }
          --v34->KernelApcDisable;
          v39 = (char *)KeAbPreAcquire((__int64)&v33[1].WaitBlockList, 0LL);
          v70 = v39;
          if ( _interlockedbittestandset64((volatile signed __int32 *)&v33[1].WaitBlockList, 0LL) )
          {
            ExfAcquirePushLockExclusiveEx(
              (unsigned __int64 *)&v33[1].WaitBlockList,
              v39,
              (__int64)&v33[1].WaitBlockList);
            v39 = v70;
          }
          if ( v39 )
            v39[10] = 1;
          if ( (*(_DWORD *)(&v33[1].SwapListEntry + 1) & 8) != 0 )
          {
            *(_QWORD *)HandleAttributesa = *(_QWORD *)((char *)&v33[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL;
            Thread = v33[1].WaitBlock[1].Thread;
          }
          if ( (_QWORD)v65 )
          {
            *($F6E8E81C3EACE4482EE2626591212BC8 *)((char *)&v33[1].116 + 4) = ($F6E8E81C3EACE4482EE2626591212BC8)v38;
            v33[1].WaitBlock[1].Thread = (struct _KTHREAD *)Src;
            if ( BYTE8(v65) )
              _InterlockedOr((volatile signed __int32 *)&v33[1].SwapListEntry + 2, 0x100u);
            else
              _InterlockedAnd((volatile signed __int32 *)&v33[1].SwapListEntry + 2, 0xFFFFFEFF);
            _InterlockedOr((volatile signed __int32 *)&v33[1].SwapListEntry + 2, 8u);
          }
          else if ( _interlockedbittestandreset((volatile signed __int32 *)&v33[1].SwapListEntry + 2, 3u) )
          {
            v58 = 1;
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v33[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&v33[1].WaitBlockList);
          KeAbPostRelease((ULONG_PTR)&v33[1].WaitBlockList);
          v40 = v69;
          KeLeaveCriticalRegionThread();
          if ( *(_QWORD *)HandleAttributesa )
          {
            ObfDereferenceObject(*(PVOID *)HandleAttributesa);
            if ( Thread )
              ObfDereferenceObject(Thread);
            if ( v58 )
              PspWriteTebImpersonationInfo(v33, v40);
          }
        }
        if ( v25 < 0 )
          goto LABEL_89;
        if ( !(_BYTE)v63 )
          goto LABEL_89;
        Thread = v66;
        v41 = 0LL;
        v42 = (volatile signed __int32 *)Object;
        if ( (*((_DWORD *)Object + 360) & 8) == 0 )
          goto LABEL_89;
        v43 = KeGetCurrentThread();
        Src = v43;
        PsReferenceSiloContext(v66);
        --v43->KernelApcDisable;
        v44 = (unsigned __int64 *)((char *)Object + 1424);
        v45 = (char *)KeAbPreAcquire((__int64)Object + 1424, 0LL);
        v70 = v45;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v44, 0LL) )
        {
          ExfAcquirePushLockExclusiveEx(v44, v45, (__int64)v44);
          v45 = v70;
        }
        if ( v45 )
          v45[10] = 1;
        if ( (*((_DWORD *)Object + 360) & 8) != 0 )
        {
          v46 = Object;
          v47 = *((_QWORD *)Object + 167);
          if ( (void *)(v47 & 0xFFFFFFFFFFFFFFF8uLL) == v15 && (*((_DWORD *)Object + 360) & 0x100) != 0 )
          {
            *((_QWORD *)Object + 167) = (unsigned __int64)Thread | v47 & 7;
            v41 = (void *)v46[201];
            v46[201] = 0LL;
            _InterlockedAnd(v42 + 360, 0xFFFFFEFF);
          }
          else
          {
            v7 = -1073741823;
          }
        }
        else
        {
          v7 = -1073741700;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v44, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v44);
        KeAbPostRelease((ULONG_PTR)v44);
        KeLeaveCriticalRegionThread();
        if ( v7 < 0 )
        {
          v48 = Thread;
        }
        else
        {
          ObfDereferenceObject(v15);
          if ( !v41 )
          {
LABEL_89:
            ObfDereferenceObjectWithTag(v15, 0x74726853u);
            if ( v66 )
              ObfDereferenceObject(v66);
            ObfDereferenceObject(Object);
            if ( v25 >= 0 )
              *TokenHandle = Handle;
            return v25;
          }
          v48 = v41;
        }
        ObfDereferenceObject(v48);
        goto LABEL_89;
      }
      v61 = 1;
    }
    v22 = v65;
    goto LABEL_29;
  }
  return result;
}
