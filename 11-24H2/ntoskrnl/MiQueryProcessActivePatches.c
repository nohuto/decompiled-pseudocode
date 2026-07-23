/*
 * XREFs of MiQueryProcessActivePatches @ 0x140AA9284
 * Callers:
 *     NtManageHotPatch @ 0x140AE9BD0 (NtManageHotPatch.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MmReleaseLoadLock @ 0x1404C2E10 (MmReleaseLoadLock.c)
 *     MiGetBaseLoaderPortion @ 0x1404C96FC (MiGetBaseLoaderPortion.c)
 *     MmAcquireLoadLock @ 0x1404CBB50 (MmAcquireLoadLock.c)
 *     VslQueryActiveSecurePatches @ 0x14058ADE8 (VslQueryActiveSecurePatches.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     MiFillActivePatchesQueryBuffer @ 0x1407F2C34 (MiFillActivePatchesQueryBuffer.c)
 *     MiGetProcessHotPatchContext @ 0x1407F30A8 (MiGetProcessHotPatchContext.c)
 *     MiIsActiveSystemHotPatch @ 0x1407F3D38 (MiIsActiveSystemHotPatch.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiQueryProcessActivePatches(
        ULONG_PTR BugCheckParameter1,
        _QWORD *a2,
        _DWORD *a3,
        __int64 a4,
        unsigned int a5,
        char a6,
        unsigned int a7)
{
  __int64 v7; // r13
  _QWORD *v8; // r15
  unsigned __int64 j; // r14
  unsigned int v10; // r12d
  unsigned int v11; // ebx
  struct _KTHREAD *Lock; // rax
  __int64 v13; // r8
  _QWORD *v14; // rcx
  __int64 v15; // r10
  unsigned __int64 i; // rcx
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  _QWORD **v22; // rax
  _QWORD *v23; // rdx
  __int64 v24; // r9
  __int64 v25; // r9
  __int64 v26; // r11
  int v27; // eax
  PVOID v28; // rsi
  unsigned int v29; // edi
  int v30; // eax
  __int64 v31; // rcx
  int active; // eax
  __int64 v33; // rdx
  unsigned __int16 *v34; // rcx
  __int64 v35; // r15
  __int64 v36; // rax
  _QWORD *ProcessHotPatchContext; // rax
  signed __int64 *v38; // rdi
  char *v39; // rsi
  _QWORD *v40; // rcx
  unsigned __int64 v41; // rdx
  __int64 v42; // r15
  __int64 v43; // rax
  __int64 Pool; // rax
  __int64 v45; // r11
  _QWORD *v46; // rdi
  ULONG_PTR v47; // r10
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // r13
  _QWORD *v52; // r14
  __int64 v53; // rbx
  ULONG_PTR v54; // rsi
  __int64 v55; // r12
  __int64 v56; // rdx
  __int64 v57; // rcx
  _QWORD **v58; // rax
  unsigned __int64 v59; // rcx
  _QWORD *v60; // rcx
  PVOID *k; // r14
  __int64 BaseLoaderPortion; // rax
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 *v65; // r12
  __int64 *v66; // r14
  struct _KTHREAD *v67; // r13
  bool v68; // zf
  int v70; // [rsp+50h] [rbp-B0h]
  unsigned int v71; // [rsp+60h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+68h] [rbp-98h] BYREF
  __int64 v73; // [rsp+70h] [rbp-90h] BYREF
  int v74; // [rsp+78h] [rbp-88h]
  _QWORD *v75; // [rsp+80h] [rbp-80h]
  __int64 v76; // [rsp+88h] [rbp-78h] BYREF
  __int64 v77; // [rsp+90h] [rbp-70h] BYREF
  __int64 v78; // [rsp+98h] [rbp-68h] BYREF
  __int64 v79; // [rsp+A0h] [rbp-60h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-58h]
  PVOID P; // [rsp+B0h] [rbp-50h] BYREF
  ULONG_PTR v82; // [rsp+B8h] [rbp-48h]
  _QWORD *v83; // [rsp+C0h] [rbp-40h]
  _DWORD *v84; // [rsp+C8h] [rbp-38h]
  __int64 v85; // [rsp+D0h] [rbp-30h]
  _OWORD v86[3]; // [rsp+E0h] [rbp-20h] BYREF

  v82 = BugCheckParameter1;
  v85 = a4;
  v84 = a3;
  memset(v86, 0, sizeof(v86));
  v7 = 40LL;
  v83 = a2;
  v73 = 0LL;
  v8 = 0LL;
  j = 0LL;
  CurrentThread = KeGetCurrentThread();
  v10 = 0;
  Object = 0LL;
  if ( a7 != 2 )
    v7 = 48LL;
  P = 0LL;
  v75 = 0LL;
  v71 = 0;
  if ( !BugCheckParameter1 )
  {
    v11 = 8;
    v74 = 8;
    Lock = MmAcquireLoadLock();
    v14 = (_QWORD *)qword_140E375C8;
    CurrentThread = Lock;
    while ( v14 )
    {
      j = (unsigned __int64)v14;
      v14 = (_QWORD *)*v14;
    }
    v15 = 0LL;
    i = j;
    v17 = v7;
    if ( j )
    {
      v18 = v7;
      do
      {
        ++v10;
        v19 = 28LL;
        if ( a7 == 2 )
          v19 = 24LL;
        v20 = v18 + v19;
        v21 = i;
        v17 = v20 + *(unsigned __int16 *)(i + 48);
        v22 = *(_QWORD ***)(i + 8);
        if ( v22 )
        {
          v23 = *v22;
          for ( i = *(_QWORD *)(i + 8); v23; v23 = (_QWORD *)*v23 )
            i = (unsigned __int64)v23;
        }
        else
        {
          while ( 1 )
          {
            i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !i || *(_QWORD *)i == v21 )
              break;
            v21 = i;
          }
        }
        v18 = v17;
      }
      while ( i );
      v71 = v10;
    }
    v24 = (__int64)PsLoadedModuleList;
    if ( PsLoadedModuleList == &PsLoadedModuleList )
      goto LABEL_49;
    do
    {
      if ( (unsigned int)MiIsActiveSystemHotPatch(v24) )
      {
        v17 += *(unsigned __int16 *)(v25 + 72) + 24LL;
        ++v10;
        if ( a7 != 2 )
          v17 += 4LL;
      }
      v24 = *(_QWORD *)v25;
    }
    while ( v24 != v26 );
LABEL_48:
    v71 = v10;
LABEL_49:
    v28 = Object;
    goto LABEL_50;
  }
  v27 = ObpReferenceObjectByHandleWithTag(
          BugCheckParameter1,
          4096,
          (__int64)PsProcessType,
          a6,
          0x70486D4Du,
          &Object,
          0LL,
          0LL);
  v28 = Object;
  v29 = v27;
  if ( v27 < 0 )
    goto LABEL_102;
  v30 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 61) & 1;
  v11 = 2 * v30;
  if ( v30 )
  {
    KiStackAttachProcess((_KPROCESS *)v28, 0, (__int64)v86);
    v31 = *((_QWORD *)v28 + 46);
    v11 |= 4u;
    v74 = v11;
    if ( (v31 & 1) == 0 )
    {
      ProcessHotPatchContext = MiGetProcessHotPatchContext((__int64)v28, 0);
      v15 = 0LL;
      v75 = ProcessHotPatchContext;
      v13 = (__int64)ProcessHotPatchContext;
      v17 = v7;
      if ( !ProcessHotPatchContext )
        goto LABEL_50;
      v11 |= 1u;
      v38 = ProcessHotPatchContext + 2;
      v74 = v11;
      --CurrentThread->SpecialApcDisable;
      v39 = (char *)KeAbPreAcquire((__int64)(ProcessHotPatchContext + 2), 0LL);
      if ( _InterlockedCompareExchange64(v38, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v38, 0, v39, (__int64)v38);
      v15 = 0LL;
      if ( v39 )
        v39[10] = 1;
      v13 = (__int64)v75;
      v10 = v71;
      v40 = (_QWORD *)*v75;
      if ( (_QWORD *)*v75 == v75 )
        goto LABEL_49;
      v41 = v7;
      v24 = 24LL;
      do
      {
        v42 = *((unsigned __int16 *)v40 + 20);
        ++v10;
        v40 = (_QWORD *)*v40;
        v43 = 28LL;
        if ( a7 == 2 )
          v43 = 24LL;
        v17 = v41 + v43 + v42;
        v41 = v17;
      }
      while ( v40 != v75 );
      v15 = 0LL;
      goto LABEL_48;
    }
    active = VslQueryActiveSecurePatches(v31, (struct _MDL **)&P, &v71);
    v15 = 0LL;
    v29 = active;
    if ( active >= 0 )
    {
      v10 = v71;
      v17 = v7;
      if ( v71 )
      {
        v24 = 24LL;
        v13 = v7;
        v33 = v71;
        v34 = (unsigned __int16 *)*((_QWORD *)P + 1);
        do
        {
          v35 = *v34;
          v36 = 28LL;
          v34 += 8;
          if ( a7 == 2 )
            v36 = 24LL;
          v17 = v13 + v36 + v35;
          v13 = v17;
          --v33;
        }
        while ( v33 );
        v15 = 0LL;
      }
LABEL_50:
      if ( a5 < v17 )
      {
        if ( v17 > 0xFFFFFFFF )
        {
          v29 = -1073741675;
LABEL_88:
          v8 = v75;
          goto LABEL_89;
        }
        v29 = v15;
        *v83 = v15;
LABEL_87:
        *v84 = v17;
        goto LABEL_88;
      }
      Pool = MiAllocatePool(0x100uLL, (unsigned int)v17, 1900571981);
      v45 = 0LL;
      v46 = (_QWORD *)Pool;
      if ( !Pool )
      {
        v29 = -1073741670;
        goto LABEL_88;
      }
      v47 = v82;
      v24 = a7;
      *(_QWORD *)(Pool + 8) = v82;
      *(_DWORD *)Pool = a7;
      if ( !v10 )
      {
LABEL_86:
        *v83 = v46;
        v29 = v45;
        goto LABEL_87;
      }
      v48 = Pool + v7;
      v13 = Pool + v7 + 16LL * v10;
      v78 = Pool + v7;
      v82 = v10;
      v79 = v13;
      v49 = v13 + 8LL * v10;
      if ( a7 == 2 )
      {
        v50 = v13 + 8LL * v10;
        v49 = 0LL;
      }
      else
      {
        v50 = v49 + 4LL * v10;
      }
      v76 = v49;
      v77 = v50;
      v46[3] = v48;
      v46[4] = v13;
      if ( v49 )
        v46[5] = v49;
      v51 = (__int64)v46 - v85;
      if ( !v47 )
      {
        while ( j )
        {
          v73 = *(_QWORD *)(j + 24);
          MiFillActivePatchesQueryBuffer(
            (__int64)v46,
            v48,
            v13,
            v51,
            (_QWORD **)&v79,
            (UNICODE_STRING **)&v78,
            (wchar_t **)&v77,
            (_DWORD **)&v76,
            &v73,
            (PCUNICODE_STRING)(j + 48),
            *(_DWORD *)(j + 40));
          v58 = *(_QWORD ***)(j + 8);
          v45 = 0LL;
          v59 = j;
          if ( v58 )
          {
            v60 = *v58;
            for ( j = *(_QWORD *)(j + 8); v60; v60 = (_QWORD *)*v60 )
              j = (unsigned __int64)v60;
          }
          else
          {
            while ( 1 )
            {
              j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              if ( !j || *(_QWORD *)j == v59 )
                break;
              v59 = j;
            }
          }
        }
        for ( k = (PVOID *)PsLoadedModuleList; k != &PsLoadedModuleList; k = (PVOID *)*k )
        {
          if ( (unsigned int)MiIsActiveSystemHotPatch((__int64)k) )
          {
            BaseLoaderPortion = MiGetBaseLoaderPortion((__int64)k);
            v63 = *(_QWORD *)(BaseLoaderPortion + 248);
            v70 = *(_DWORD *)(BaseLoaderPortion + 272);
            LODWORD(v73) = *(_DWORD *)(v63 + 120);
            HIDWORD(v73) = *(_DWORD *)(v63 + 156);
            MiFillActivePatchesQueryBuffer(
              (__int64)v46,
              v63,
              v64,
              v51,
              (_QWORD **)&v79,
              (UNICODE_STRING **)&v78,
              (wchar_t **)&v77,
              (_DWORD **)&v76,
              &v73,
              (PCUNICODE_STRING)(k + 9),
              v70);
            v45 = 0LL;
          }
        }
        goto LABEL_84;
      }
      if ( (*((_BYTE *)v28 + 368) & 1) != 0 )
      {
        v52 = P;
        v53 = 0LL;
        v54 = v82;
        v55 = 0LL;
        do
        {
          v56 = v52[2];
          v57 = v52[1];
          v73 = *(_QWORD *)(v55 + v56);
          MiFillActivePatchesQueryBuffer(
            (__int64)v46,
            v56,
            v13,
            v51,
            (_QWORD **)&v79,
            (UNICODE_STRING **)&v78,
            (wchar_t **)&v77,
            (_DWORD **)&v76,
            &v73,
            (PCUNICODE_STRING)(v53 + v57),
            *(_DWORD *)(v55 + v56 + 24));
          v53 += 16LL;
          v55 += 28LL;
          --v54;
        }
        while ( v54 );
        v11 = v74;
        v28 = Object;
      }
      else
      {
        v65 = v75;
        v66 = (__int64 *)*v75;
        if ( (_QWORD *)*v75 == v75 )
          goto LABEL_84;
        do
        {
          MiFillActivePatchesQueryBuffer(
            (__int64)v46,
            (__int64)(v66 + 4),
            v13,
            v51,
            (_QWORD **)&v79,
            (UNICODE_STRING **)&v78,
            (wchar_t **)&v77,
            (_DWORD **)&v76,
            v66 + 4,
            (PCUNICODE_STRING)(v66 + 5),
            *((_DWORD *)v66 + 16));
          v66 = (__int64 *)*v66;
        }
        while ( v66 != v65 );
      }
      v45 = 0LL;
LABEL_84:
      v46[4] -= v51;
      v46[3] -= v51;
      if ( v76 != v45 )
        v46[5] -= v51;
      goto LABEL_86;
    }
  }
  else
  {
    v29 = -1073741558;
  }
LABEL_89:
  v67 = CurrentThread;
  if ( v11 >= 8 )
    MmReleaseLoadLock(CurrentThread);
  if ( (v11 & 1) != 0 )
  {
    if ( _InterlockedCompareExchange64(v8 + 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v8 + 2);
    KeAbPostRelease((ULONG_PTR)(v8 + 2));
    v68 = v67->SpecialApcDisable++ == -1;
    if ( v68 && ($727077A9B6E167EAE1398C74674DC5A5 *)v67->ApcState.ApcListHead[0].Flink != &v67->152 )
      KiCheckForKernelApcDelivery();
    v28 = Object;
  }
  if ( (v11 & 4) != 0 )
    KiUnstackDetachProcess((__int64)v86, 0, v13, v24);
  if ( (v11 & 2) != 0 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v28 + 61);
LABEL_102:
  if ( v28 )
    ObfDereferenceObjectWithTag(v28, 0x70486D4Du);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v29;
}
