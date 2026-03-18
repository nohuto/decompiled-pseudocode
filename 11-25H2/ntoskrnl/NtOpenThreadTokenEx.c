/*
 * XREFs of NtOpenThreadTokenEx @ 0x1408A17B0
 * Callers:
 *     NtOpenThreadToken @ 0x1408A1790 (NtOpenThreadToken.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     SeQueryTokenTrustLink @ 0x140468F38 (SeQueryTokenTrustLink.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByPointer @ 0x140857EB0 (ObOpenObjectByPointer.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 *     SepCreateImpersonationTokenDacl @ 0x1408A2270 (SepCreateImpersonationTokenDacl.c)
 *     SepDuplicateToken @ 0x1408A2910 (SepDuplicateToken.c)
 *     PspWriteTebImpersonationInfo @ 0x1408A5F40 (PspWriteTebImpersonationInfo.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtOpenThreadTokenEx(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  BOOLEAN v5; // bl
  int v7; // r14d
  int v8; // edi
  KPROCESSOR_MODE PreviousMode; // r12
  int v10; // r15d
  ULONG v11; // r15d
  __int64 v12; // rcx
  KPROCESSOR_MODE v13; // r9
  NTSTATUS result; // eax
  void *v15; // r13
  struct _KTHREAD *v16; // rbx
  char v17; // r12
  __int64 *v18; // rax
  __int64 *v19; // rsi
  __int64 v20; // rcx
  void *v21; // rcx
  bool v22; // zf
  __int64 v23; // rax
  __int64 v24; // rbx
  ULONG_PTR v25; // rdi
  NTSTATUS v26; // r12d
  signed __int64 v27; // rax
  signed __int64 v28; // rtt
  PVOID v29; // rbx
  _QWORD *v30; // r15
  void *Pool2; // rdi
  void *v32; // rcx
  NTSTATUS inserted; // eax
  struct _KTHREAD *v34; // r15
  __int64 v35; // rdx
  void *v36; // rbx
  __int64 v37; // rcx
  __int64 TokenTrustLink; // rdi
  unsigned __int64 v39; // rbx
  __int64 *v40; // rax
  __int64 v41; // rbx
  void *v42; // rdi
  struct _KTHREAD *v43; // rbx
  unsigned __int64 *v44; // rbx
  __int64 *v45; // rax
  __int64 *v46; // r15
  _QWORD *v47; // rdx
  __int64 v48; // rcx
  void *v49; // r15
  void *v50; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  signed __int64 *v52; // rdi
  __int64 *v53; // rbx
  _DWORD *v54; // rbx
  unsigned int v55; // eax
  unsigned int v56; // r12d
  unsigned int v57; // eax
  __int64 v58; // rcx
  bool v59; // [rsp+40h] [rbp-F8h]
  char v60; // [rsp+40h] [rbp-F8h]
  bool v61; // [rsp+41h] [rbp-F7h]
  char v62; // [rsp+42h] [rbp-F6h]
  KPROCESSOR_MODE v63; // [rsp+43h] [rbp-F5h]
  PVOID Object; // [rsp+48h] [rbp-F0h] BYREF
  unsigned int v65; // [rsp+50h] [rbp-E8h]
  void *Src; // [rsp+58h] [rbp-E0h]
  __int128 v67; // [rsp+60h] [rbp-D8h]
  PVOID v68; // [rsp+70h] [rbp-C8h] BYREF
  struct _KTHREAD *v69; // [rsp+78h] [rbp-C0h]
  PVOID Thread; // [rsp+80h] [rbp-B8h]
  PVOID v71; // [rsp+88h] [rbp-B0h]
  PVOID P; // [rsp+90h] [rbp-A8h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-A0h] BYREF
  PVOID v74; // [rsp+A0h] [rbp-98h]
  __int128 v75; // [rsp+A8h] [rbp-90h] BYREF
  __int128 v76; // [rsp+B8h] [rbp-80h]
  _WORD *v77; // [rsp+C8h] [rbp-70h]
  __int64 v78; // [rsp+D0h] [rbp-68h]
  void *v79; // [rsp+D8h] [rbp-60h]
  _WORD v80[16]; // [rsp+E0h] [rbp-58h] BYREF
  PVOID v81; // [rsp+100h] [rbp-38h]

  v5 = OpenAsSelf;
  v7 = 0;
  v68 = 0LL;
  LOBYTE(v65) = 0;
  v59 = 0;
  v8 = 0;
  LODWORD(v69) = 0;
  v67 = 0LL;
  v62 = 0;
  Handle = 0LL;
  memset(v80, 0, sizeof(v80));
  v81 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  LODWORD(v78) = 0;
  P = 0LL;
  Src = 0LL;
  v61 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v63 = PreviousMode;
  v10 = 73714;
  if ( PreviousMode )
    v10 = 7666;
  v11 = HandleAttributes & v10;
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
      v52 = (signed __int64 *)((char *)Object + 1424);
      v53 = KeAbPreAcquire((__int64)Object + 1424, 0LL);
      if ( _InterlockedCompareExchange64(v52, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v52, 0, v53, (unsigned __int64)v52);
      if ( v53 )
        *((_BYTE *)v53 + 10) = 1;
      if ( (*((_DWORD *)Object + 360) & 8) != 0 )
      {
        v54 = Object;
        v15 = (void *)(*((_QWORD *)Object + 167) & 0xFFFFFFFFFFFFFFF8uLL);
        v65 = *((_DWORD *)Object + 360);
        ObfReferenceObjectWithTag(v15, 0x74726853u);
        LODWORD(v69) = v54[334] & 3;
        v59 = (v54[334] & 4) != 0;
        v55 = v65 >> 8;
        LOBYTE(v55) = BYTE1(v65) & 1;
        v65 = v55;
      }
      else
      {
        v15 = 0LL;
      }
      if ( _InterlockedCompareExchange64(v52, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v52);
      KeAbPostRelease((ULONG_PTR)v52);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      v5 = OpenAsSelf;
      v8 = (int)v69;
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
        v18 = KeAbPreAcquire((__int64)&v16[1].WaitBlockList, 0LL);
        v19 = v18;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&v16[1].WaitBlockList, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&v16[1].WaitBlockList, v18, (__int64)&v16[1].WaitBlockList);
        if ( v19 )
          *((_BYTE *)v19 + 10) = 1;
        if ( _interlockedbittestandreset((volatile signed __int32 *)&v16[1].SwapListEntry + 2, 3u) )
        {
          v17 = 1;
          HIDWORD(v67) = *((_DWORD *)&v16[1].0 + 1) & 3;
          v20 = *(__int64 *)((char *)&v16[1].116 + 4);
          BYTE9(v67) = (v20 & 4) != 0;
          BYTE8(v67) = BYTE1(*((_DWORD *)&v16[1].SwapListEntry + 2)) & 1;
          v21 = (void *)(v20 & 0xFFFFFFFFFFFFFFF8uLL);
          if ( v16[1].WaitBlock[1].Thread )
          {
            *(_QWORD *)&v67 = v16[1].WaitBlock[1].Thread;
            v16[1].WaitBlock[1].Thread = 0LL;
            ObfDereferenceObject(v21);
          }
          else
          {
            *(_QWORD *)&v67 = v21;
          }
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v16[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&v16[1].WaitBlockList);
        KeAbPostRelease((ULONG_PTR)&v16[1].WaitBlockList);
        KeLeaveCriticalRegionThread((__int64)Thread);
      }
      v5 = OpenAsSelf;
      v22 = v17 == 0;
      PreviousMode = v63;
      if ( v22 )
      {
        HIDWORD(v67) = 0;
        WORD4(v67) = 0;
        v23 = 0LL;
        *(_QWORD *)&v67 = 0LL;
        v62 = 0;
LABEL_29:
        if ( !(_BYTE)v65 )
        {
          inserted = ObOpenObjectByPointer(
                       v15,
                       v11,
                       0LL,
                       DesiredAccess,
                       (POBJECT_TYPE)SeTokenObjectType,
                       PreviousMode,
                       &Handle);
          v29 = P;
          goto LABEL_51;
        }
        if ( v5 )
        {
          if ( v23 )
          {
            Src = *(void **)(v23 + 1104);
            v61 = 1;
          }
        }
        else
        {
          v58 = *((_QWORD *)Object + 201);
          if ( v58 )
            Src = *(void **)(v58 + 1104);
          v61 = v58 != 0;
        }
        v24 = *((_QWORD *)Object + 68);
        v25 = PsReferencePrimaryTokenWithTag(v24, 0x746C6644u);
        v26 = SepCreateImpersonationTokenDacl(v15, v25, &P);
        _m_prefetchw((const void *)(v24 + 584));
        v27 = *(_QWORD *)(v24 + 584);
        do
        {
          if ( (v25 ^ v27) >= 0xF )
          {
            ObfDereferenceObjectWithTag((PVOID)v25, 0x746C6644u);
            goto LABEL_38;
          }
          v28 = v27;
          v27 = _InterlockedCompareExchange64((volatile signed __int64 *)(v24 + 584), v27 + 1, v27);
        }
        while ( v28 != v27 );
        if ( ObpTraceFlags )
          ObpPushStackInfo(v25 - 48, 0, 1u, 0x746C6644u);
LABEL_38:
        v29 = P;
        if ( v26 >= 0 )
        {
          if ( P )
          {
            LOBYTE(v80[0]) = 1;
            if ( v80[1] >= 0 )
            {
              v81 = P;
              v80[1] = v80[1] & 0xFFF3 | 4;
            }
          }
          LODWORD(v75) = 48;
          *((_QWORD *)&v75 + 1) = 0LL;
          DWORD2(v76) = v11;
          *(_QWORD *)&v76 = 0LL;
          v77 = P ? v80 : 0LL;
          v78 = 0LL;
          v26 = SepDuplicateToken((_DWORD)v15, (unsigned int)&v75, v59, 2, (_DWORD)v69, 0, 0, (__int64)&v68);
          if ( v26 >= 0 )
          {
            if ( !v61 )
            {
LABEL_50:
              PsReferenceSiloContext(v68);
              inserted = ObInsertObjectEx((char *)v68, 0LL, DesiredAccess, 0, 0, 0LL, (__int64)&Handle);
LABEL_51:
              v26 = inserted;
              goto LABEL_52;
            }
            v30 = v68;
            Pool2 = 0LL;
            v79 = 0LL;
            if ( !Src )
            {
LABEL_47:
              v32 = (void *)v30[138];
              if ( v32 )
                ExFreePoolWithTag(v32, 0);
              v30[138] = Pool2;
              goto LABEL_50;
            }
            v56 = 4 * *((unsigned __int8 *)Src + 1) + 8;
            Pool2 = (void *)ExAllocatePool2(0x100uLL);
            if ( Pool2 )
            {
              v57 = 4 * *((unsigned __int8 *)Src + 1) + 8;
              if ( v57 <= v56 )
                memmove(Pool2, Src, v57);
              v79 = Pool2;
              goto LABEL_47;
            }
            v26 = -1073741670;
          }
        }
LABEL_52:
        if ( v29 )
          ExFreePoolWithTag(v29, 0);
        if ( v62 )
        {
          v34 = KeGetCurrentThread();
          v74 = 0LL;
          Thread = 0LL;
          Src = 0LL;
          v60 = 0;
          v35 = (__int64)v34;
          v69 = v34;
          v36 = (void *)v67;
          if ( (_QWORD)v67 )
          {
            if ( SeQueryTokenTrustLink(v67) )
            {
              TokenTrustLink = SeQueryTokenTrustLink(v37);
              PsReferenceSiloContext((void *)TokenTrustLink);
              Src = v36;
              v35 = (__int64)v69;
            }
            else
            {
              TokenTrustLink = (__int64)v36;
            }
            v39 = (BYTE9(v67) != 0 ? 4 : 0) | TokenTrustLink & 0xFFFFFFFFFFFFFFF8uLL | BYTE12(v67) & 3;
          }
          else
          {
            v39 = 0LL;
          }
          --*(_WORD *)(v35 + 484);
          v40 = KeAbPreAcquire((__int64)&v34[1].WaitBlockList, 0LL);
          v71 = v40;
          if ( _interlockedbittestandset64((volatile signed __int32 *)&v34[1].WaitBlockList, 0LL) )
          {
            ExfAcquirePushLockExclusiveEx(
              (unsigned __int64 *)&v34[1].WaitBlockList,
              v40,
              (__int64)&v34[1].WaitBlockList);
            v40 = (__int64 *)v71;
          }
          if ( v40 )
            *((_BYTE *)v40 + 10) = 1;
          if ( (*(_DWORD *)(&v34[1].SwapListEntry + 1) & 8) != 0 )
          {
            v74 = (PVOID)(*(_QWORD *)((char *)&v34[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
            Thread = v34[1].WaitBlock[1].Thread;
          }
          if ( (_QWORD)v67 )
          {
            *($F6E8E81C3EACE4482EE2626591212BC8 *)((char *)&v34[1].116 + 4) = ($F6E8E81C3EACE4482EE2626591212BC8)v39;
            v34[1].WaitBlock[1].Thread = (struct _KTHREAD *)Src;
            if ( BYTE8(v67) )
              _InterlockedOr((volatile signed __int32 *)&v34[1].SwapListEntry + 2, 0x100u);
            else
              _InterlockedAnd((volatile signed __int32 *)&v34[1].SwapListEntry + 2, 0xFFFFFEFF);
            _InterlockedOr((volatile signed __int32 *)&v34[1].SwapListEntry + 2, 8u);
          }
          else if ( _interlockedbittestandreset((volatile signed __int32 *)&v34[1].SwapListEntry + 2, 3u) )
          {
            v60 = 1;
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v34[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&v34[1].WaitBlockList);
          KeAbPostRelease((ULONG_PTR)&v34[1].WaitBlockList);
          v41 = (__int64)v69;
          KeLeaveCriticalRegionThread((__int64)v69);
          if ( v74 )
          {
            ObfDereferenceObject(v74);
            if ( Thread )
              ObfDereferenceObject(Thread);
            if ( v60 )
              PspWriteTebImpersonationInfo(v34, v41);
          }
        }
        if ( v26 < 0 )
          goto LABEL_89;
        if ( !(_BYTE)v65 )
          goto LABEL_89;
        Src = v68;
        v42 = 0LL;
        v71 = Object;
        if ( (*((_DWORD *)Object + 360) & 8) == 0 )
          goto LABEL_89;
        v43 = KeGetCurrentThread();
        Thread = v43;
        PsReferenceSiloContext(v68);
        --v43->KernelApcDisable;
        v44 = (unsigned __int64 *)((char *)Object + 1424);
        v45 = KeAbPreAcquire((__int64)Object + 1424, 0LL);
        v46 = v45;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v44, 0LL) )
          ExfAcquirePushLockExclusiveEx(v44, v45, (__int64)v44);
        if ( v46 )
          *((_BYTE *)v46 + 10) = 1;
        if ( (*((_DWORD *)Object + 360) & 8) != 0 )
        {
          v47 = Object;
          v48 = *((_QWORD *)Object + 167);
          if ( (void *)(v48 & 0xFFFFFFFFFFFFFFF8uLL) == v15 && (*((_DWORD *)Object + 360) & 0x100) != 0 )
          {
            v49 = Src;
            *((_QWORD *)Object + 167) = (unsigned __int64)Src | v48 & 7;
            v42 = (void *)v47[201];
            v47[201] = 0LL;
            _InterlockedAnd((volatile signed __int32 *)v71 + 360, 0xFFFFFEFF);
            goto LABEL_83;
          }
          v7 = -1073741823;
        }
        else
        {
          v7 = -1073741700;
        }
        v49 = Src;
LABEL_83:
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v44, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v44);
        KeAbPostRelease((ULONG_PTR)v44);
        KeLeaveCriticalRegionThread((__int64)Thread);
        if ( v7 < 0 )
        {
          v50 = v49;
        }
        else
        {
          ObfDereferenceObject(v15);
          if ( !v42 )
          {
LABEL_89:
            ObfDereferenceObjectWithTag(v15, 0x74726853u);
            if ( v68 )
              ObfDereferenceObject(v68);
            ObfDereferenceObject(Object);
            if ( v26 >= 0 )
              *TokenHandle = Handle;
            return v26;
          }
          v50 = v42;
        }
        ObfDereferenceObject(v50);
        goto LABEL_89;
      }
      v62 = 1;
    }
    v23 = v67;
    goto LABEL_29;
  }
  return result;
}
