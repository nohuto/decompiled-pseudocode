/*
 * XREFs of MiQueryProcessActivePatches @ 0x140AAE3A8
 * Callers:
 *     NtManageHotPatch @ 0x140AE7000 (NtManageHotPatch.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     MmReleaseLoadLock @ 0x1404C9960 (MmReleaseLoadLock.c)
 *     MiGetBaseLoaderPortion @ 0x1404D0508 (MiGetBaseLoaderPortion.c)
 *     MmAcquireLoadLock @ 0x1404D2990 (MmAcquireLoadLock.c)
 *     VslQueryActiveSecurePatches @ 0x14058DA90 (VslQueryActiveSecurePatches.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     MiFillActivePatchesQueryBuffer @ 0x1407F2664 (MiFillActivePatchesQueryBuffer.c)
 *     MiGetProcessHotPatchContext @ 0x1407F2AD8 (MiGetProcessHotPatchContext.c)
 *     MiIsActiveSystemHotPatch @ 0x1407F3744 (MiIsActiveSystemHotPatch.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiQueryProcessActivePatches(
        ULONG_PTR BugCheckParameter1,
        _QWORD *a2,
        _DWORD *a3,
        __int64 a4,
        unsigned int a5,
        char a6,
        int a7)
{
  __int64 v7; // r13
  _QWORD *v8; // r15
  unsigned __int64 j; // r14
  unsigned int v10; // r12d
  unsigned int v11; // ebx
  struct _KTHREAD *Lock; // rax
  _QWORD *v13; // rcx
  __int64 v14; // r10
  unsigned __int64 i; // rcx
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  _QWORD **v21; // rax
  _QWORD *v22; // rdx
  PVOID v23; // r9
  __int64 v24; // r9
  PVOID v25; // r11
  int v26; // eax
  PVOID v27; // rsi
  unsigned int v28; // edi
  int v29; // eax
  __int64 v30; // rcx
  int active; // eax
  unsigned __int64 v32; // r8
  __int64 v33; // rdx
  unsigned __int16 *v34; // rcx
  __int64 v35; // r15
  __int64 v36; // rax
  _QWORD *ProcessHotPatchContext; // rax
  signed __int64 *v38; // rdi
  _QWORD *v39; // rsi
  _QWORD *v40; // rcx
  unsigned __int64 v41; // rdx
  __int64 v42; // r15
  __int64 v43; // rax
  __int64 Pool; // rax
  __int64 v45; // r11
  _QWORD *v46; // rdi
  ULONG_PTR v47; // r10
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // r13
  _QWORD *v53; // r14
  __int64 v54; // rbx
  ULONG_PTR v55; // rsi
  __int64 v56; // r12
  __int64 v57; // rdx
  __int64 v58; // rcx
  _QWORD **v59; // rax
  unsigned __int64 v60; // rcx
  _QWORD *v61; // rcx
  PVOID *k; // r14
  __int64 BaseLoaderPortion; // rax
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 *v66; // r12
  __int64 *v67; // r14
  struct _KTHREAD *v68; // r13
  __int64 v69; // rdx
  __int64 v70; // rcx
  bool v71; // zf
  int v73; // [rsp+50h] [rbp-B0h]
  unsigned int v74; // [rsp+60h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+68h] [rbp-98h] BYREF
  __int64 v76; // [rsp+70h] [rbp-90h] BYREF
  int v77; // [rsp+78h] [rbp-88h]
  _QWORD *v78; // [rsp+80h] [rbp-80h]
  __int64 v79; // [rsp+88h] [rbp-78h] BYREF
  __int64 v80; // [rsp+90h] [rbp-70h] BYREF
  __int64 v81; // [rsp+98h] [rbp-68h] BYREF
  __int64 v82; // [rsp+A0h] [rbp-60h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-58h]
  PVOID P; // [rsp+B0h] [rbp-50h] BYREF
  ULONG_PTR v85; // [rsp+B8h] [rbp-48h]
  _QWORD *v86; // [rsp+C0h] [rbp-40h]
  _DWORD *v87; // [rsp+C8h] [rbp-38h]
  __int64 v88; // [rsp+D0h] [rbp-30h]
  _OWORD v89[3]; // [rsp+E0h] [rbp-20h] BYREF

  v85 = BugCheckParameter1;
  v88 = a4;
  v87 = a3;
  memset(v89, 0, sizeof(v89));
  v7 = 40LL;
  v86 = a2;
  v76 = 0LL;
  v8 = 0LL;
  j = 0LL;
  CurrentThread = KeGetCurrentThread();
  v10 = 0;
  Object = 0LL;
  if ( a7 != 2 )
    v7 = 48LL;
  P = 0LL;
  v78 = 0LL;
  v74 = 0;
  if ( !BugCheckParameter1 )
  {
    v11 = 8;
    v77 = 8;
    Lock = MmAcquireLoadLock();
    v13 = (_QWORD *)qword_140E37488;
    CurrentThread = Lock;
    while ( v13 )
    {
      j = (unsigned __int64)v13;
      v13 = (_QWORD *)*v13;
    }
    v14 = 0LL;
    i = j;
    v16 = v7;
    if ( j )
    {
      v17 = v7;
      do
      {
        ++v10;
        v18 = 28LL;
        if ( a7 == 2 )
          v18 = 24LL;
        v19 = v17 + v18;
        v20 = i;
        v16 = v19 + *(unsigned __int16 *)(i + 48);
        v21 = *(_QWORD ***)(i + 8);
        if ( v21 )
        {
          v22 = *v21;
          for ( i = *(_QWORD *)(i + 8); v22; v22 = (_QWORD *)*v22 )
            i = (unsigned __int64)v22;
        }
        else
        {
          while ( 1 )
          {
            i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !i || *(_QWORD *)i == v20 )
              break;
            v20 = i;
          }
        }
        v17 = v16;
      }
      while ( i );
      v74 = v10;
    }
    v23 = PsLoadedModuleList;
    if ( PsLoadedModuleList == &PsLoadedModuleList )
      goto LABEL_49;
    do
    {
      if ( (unsigned int)MiIsActiveSystemHotPatch((__int64)v23) )
      {
        v16 += *(unsigned __int16 *)(v24 + 72) + 24LL;
        ++v10;
        if ( a7 != 2 )
          v16 += 4LL;
      }
      v23 = *(PVOID *)v24;
    }
    while ( v23 != v25 );
LABEL_48:
    v74 = v10;
LABEL_49:
    v27 = Object;
    goto LABEL_50;
  }
  v26 = ObpReferenceObjectByHandleWithTag(
          BugCheckParameter1,
          4096,
          (__int64)PsProcessType,
          a6,
          0x70486D4Du,
          &Object,
          0LL,
          0LL);
  v27 = Object;
  v28 = v26;
  if ( v26 < 0 )
    goto LABEL_102;
  v29 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 61) & 1;
  v11 = 2 * v29;
  if ( v29 )
  {
    KiStackAttachProcess((_KPROCESS *)v27, 0, (__int64)v89);
    v30 = *((_QWORD *)v27 + 46);
    v11 |= 4u;
    v77 = v11;
    if ( (v30 & 1) == 0 )
    {
      ProcessHotPatchContext = MiGetProcessHotPatchContext((__int64)v27, 0);
      v14 = 0LL;
      v78 = ProcessHotPatchContext;
      v16 = v7;
      if ( !ProcessHotPatchContext )
        goto LABEL_50;
      v11 |= 1u;
      v38 = ProcessHotPatchContext + 2;
      v77 = v11;
      --CurrentThread->SpecialApcDisable;
      v39 = KeAbPreAcquire((__int64)(ProcessHotPatchContext + 2), 0LL);
      if ( _InterlockedCompareExchange64(v38, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v38, 0, v39, (__int64)v38);
      v14 = 0LL;
      if ( v39 )
        *((_BYTE *)v39 + 10) = 1;
      v10 = v74;
      v40 = (_QWORD *)*v78;
      if ( (_QWORD *)*v78 == v78 )
        goto LABEL_49;
      v41 = v7;
      do
      {
        v42 = *((unsigned __int16 *)v40 + 20);
        ++v10;
        v40 = (_QWORD *)*v40;
        v43 = 28LL;
        if ( a7 == 2 )
          v43 = 24LL;
        v16 = v41 + v43 + v42;
        v41 = v16;
      }
      while ( v40 != v78 );
      v14 = 0LL;
      goto LABEL_48;
    }
    active = VslQueryActiveSecurePatches(v30, (struct _MDL **)&P, &v74);
    v14 = 0LL;
    v28 = active;
    if ( active >= 0 )
    {
      v10 = v74;
      v16 = v7;
      if ( v74 )
      {
        v32 = v7;
        v33 = v74;
        v34 = (unsigned __int16 *)*((_QWORD *)P + 1);
        do
        {
          v35 = *v34;
          v36 = 28LL;
          v34 += 8;
          if ( a7 == 2 )
            v36 = 24LL;
          v16 = v32 + v36 + v35;
          v32 = v16;
          --v33;
        }
        while ( v33 );
        v14 = 0LL;
      }
LABEL_50:
      if ( a5 < v16 )
      {
        if ( v16 > 0xFFFFFFFF )
        {
          v28 = -1073741675;
LABEL_88:
          v8 = v78;
          goto LABEL_89;
        }
        v28 = v14;
        *v86 = v14;
LABEL_87:
        *v87 = v16;
        goto LABEL_88;
      }
      Pool = MiAllocatePool(0x100uLL, (unsigned int)v16, 1900571981);
      v45 = 0LL;
      v46 = (_QWORD *)Pool;
      if ( !Pool )
      {
        v28 = -1073741670;
        goto LABEL_88;
      }
      v47 = v85;
      *(_QWORD *)(Pool + 8) = v85;
      *(_DWORD *)Pool = a7;
      if ( !v10 )
      {
LABEL_86:
        *v86 = v46;
        v28 = v45;
        goto LABEL_87;
      }
      v48 = Pool + v7;
      v49 = Pool + v7 + 16LL * v10;
      v81 = Pool + v7;
      v85 = v10;
      v82 = v49;
      v50 = v49 + 8LL * v10;
      if ( a7 == 2 )
      {
        v51 = v49 + 8LL * v10;
        v50 = 0LL;
      }
      else
      {
        v51 = v50 + 4LL * v10;
      }
      v79 = v50;
      v80 = v51;
      v46[3] = v48;
      v46[4] = v49;
      if ( v50 )
        v46[5] = v50;
      v52 = (__int64)v46 - v88;
      if ( !v47 )
      {
        while ( j )
        {
          v76 = *(_QWORD *)(j + 24);
          MiFillActivePatchesQueryBuffer(
            (__int64)v46,
            v48,
            v49,
            v52,
            (_QWORD **)&v82,
            (UNICODE_STRING **)&v81,
            (wchar_t **)&v80,
            (_DWORD **)&v79,
            &v76,
            (PCUNICODE_STRING)(j + 48),
            *(_DWORD *)(j + 40));
          v59 = *(_QWORD ***)(j + 8);
          v45 = 0LL;
          v60 = j;
          if ( v59 )
          {
            v61 = *v59;
            for ( j = *(_QWORD *)(j + 8); v61; v61 = (_QWORD *)*v61 )
              j = (unsigned __int64)v61;
          }
          else
          {
            while ( 1 )
            {
              j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              if ( !j || *(_QWORD *)j == v60 )
                break;
              v60 = j;
            }
          }
        }
        for ( k = (PVOID *)PsLoadedModuleList; k != &PsLoadedModuleList; k = (PVOID *)*k )
        {
          if ( (unsigned int)MiIsActiveSystemHotPatch((__int64)k) )
          {
            BaseLoaderPortion = MiGetBaseLoaderPortion((__int64)k);
            v64 = *(_QWORD *)(BaseLoaderPortion + 248);
            v73 = *(_DWORD *)(BaseLoaderPortion + 272);
            LODWORD(v76) = *(_DWORD *)(v64 + 120);
            HIDWORD(v76) = *(_DWORD *)(v64 + 156);
            MiFillActivePatchesQueryBuffer(
              (__int64)v46,
              v64,
              v65,
              v52,
              (_QWORD **)&v82,
              (UNICODE_STRING **)&v81,
              (wchar_t **)&v80,
              (_DWORD **)&v79,
              &v76,
              (PCUNICODE_STRING)(k + 9),
              v73);
            v45 = 0LL;
          }
        }
        goto LABEL_84;
      }
      if ( (*((_BYTE *)v27 + 368) & 1) != 0 )
      {
        v53 = P;
        v54 = 0LL;
        v55 = v85;
        v56 = 0LL;
        do
        {
          v57 = v53[2];
          v58 = v53[1];
          v76 = *(_QWORD *)(v56 + v57);
          MiFillActivePatchesQueryBuffer(
            (__int64)v46,
            v57,
            v49,
            v52,
            (_QWORD **)&v82,
            (UNICODE_STRING **)&v81,
            (wchar_t **)&v80,
            (_DWORD **)&v79,
            &v76,
            (PCUNICODE_STRING)(v54 + v58),
            *(_DWORD *)(v56 + v57 + 24));
          v54 += 16LL;
          v56 += 28LL;
          --v55;
        }
        while ( v55 );
        v11 = v77;
        v27 = Object;
      }
      else
      {
        v66 = v78;
        v67 = (__int64 *)*v78;
        if ( (_QWORD *)*v78 == v78 )
          goto LABEL_84;
        do
        {
          MiFillActivePatchesQueryBuffer(
            (__int64)v46,
            (__int64)(v67 + 4),
            v49,
            v52,
            (_QWORD **)&v82,
            (UNICODE_STRING **)&v81,
            (wchar_t **)&v80,
            (_DWORD **)&v79,
            v67 + 4,
            (PCUNICODE_STRING)(v67 + 5),
            *((_DWORD *)v67 + 16));
          v67 = (__int64 *)*v67;
        }
        while ( v67 != v66 );
      }
      v45 = 0LL;
LABEL_84:
      v46[4] -= v52;
      v46[3] -= v52;
      if ( v79 != v45 )
        v46[5] -= v52;
      goto LABEL_86;
    }
  }
  else
  {
    v28 = -1073741558;
  }
LABEL_89:
  v68 = CurrentThread;
  if ( v11 >= 8 )
    MmReleaseLoadLock(CurrentThread);
  if ( (v11 & 1) != 0 )
  {
    if ( _InterlockedCompareExchange64(v8 + 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v8 + 2);
    KeAbPostRelease((ULONG_PTR)(v8 + 2));
    v71 = v68->SpecialApcDisable++ == -1;
    if ( v71 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)v68->ApcState.ApcListHead[0].Flink != &v68->152 )
      KiCheckForKernelApcDelivery(v70, v69);
    v27 = Object;
  }
  if ( (v11 & 4) != 0 )
    KiUnstackDetachProcess((__int64)v89, 0);
  if ( (v11 & 2) != 0 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v27 + 61);
LABEL_102:
  if ( v27 )
    ObfDereferenceObjectWithTag(v27, 0x70486D4Du);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v28;
}
