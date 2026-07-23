/*
 * XREFs of PspAllocateThread @ 0x1408FAFD4
 * Callers:
 *     PspCreateThread @ 0x1408FA8F0 (PspCreateThread.c)
 *     PspCreatePicoThread @ 0x140A91570 (PspCreatePicoThread.c)
 *     NtCreateUserProcess @ 0x140AC9930 (NtCreateUserProcess.c)
 * Callees:
 *     RtlLocateExtendedFeature @ 0x140237160 (RtlLocateExtendedFeature.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeQuerySystemTimePrecise @ 0x14036D140 (KeQuerySystemTimePrecise.c)
 *     KeSelectInitialIdealProcessorForThread @ 0x1403A2604 (KeSelectInitialIdealProcessorForThread.c)
 *     RtlGetExtendedContextLength @ 0x1403D4E90 (RtlGetExtendedContextLength.c)
 *     PsQueryThreadStartAddress @ 0x1403F6A60 (PsQueryThreadStartAddress.c)
 *     KeGetProcessorNodeNumber @ 0x14042ACE0 (KeGetProcessorNodeNumber.c)
 *     KeGetProcessorNodeNumberByIndex @ 0x14042D440 (KeGetProcessorNodeNumberByIndex.c)
 *     PoEnergyEstimationEnabled @ 0x140440E80 (PoEnergyEstimationEnabled.c)
 *     KeInitializeSemaphore @ 0x1404514E0 (KeInitializeSemaphore.c)
 *     PsAssignThreadId @ 0x140463114 (PsAssignThreadId.c)
 *     KeQuerySystemTimeUnsafe @ 0x140473F10 (KeQuerySystemTimeUnsafe.c)
 *     PsInitializeThreadRngState @ 0x14047A17C (PsInitializeThreadRngState.c)
 *     KeQueryMaximumGroupCount @ 0x14047B1D0 (KeQueryMaximumGroupCount.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ObCreateObjectEx @ 0x1408A4B90 (ObCreateObjectEx.c)
 *     MmDeleteTeb @ 0x1408D96BC (MmDeleteTeb.c)
 *     MmCreateTeb @ 0x1408DE4D4 (MmCreateTeb.c)
 *     PspSetupUserShadowStack @ 0x140914B74 (PspSetupUserShadowStack.c)
 *     PspSetupUserStack @ 0x1409E0398 (PspSetupUserStack.c)
 *     PspWow64InitThread @ 0x1409E089C (PspWow64InitThread.c)
 *     MmSecureVirtualMemory @ 0x1409E5050 (MmSecureVirtualMemory.c)
 *     PspWow64SetupUserStack @ 0x140A13008 (PspWow64SetupUserStack.c)
 *     ObInitializeFastReference @ 0x140A4A4A0 (ObInitializeFastReference.c)
 *     PspDeleteUserStack @ 0x140A59AF8 (PspDeleteUserStack.c)
 *     KeInitThread @ 0x140B6A948 (KeInitThread.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspAllocateThread(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        size_t a5,
        _QWORD *a6,
        __int64 a7,
        __int64 a8,
        int *a9,
        _QWORD *a10,
        _BYTE *a11,
        __int64 a12)
{
  __int64 v13; // r9
  __int64 v15; // r11
  __int64 v16; // r12
  char v17; // r8
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  signed int v23; // ebx
  unsigned __int16 ProcessorNodeNumber; // ax
  unsigned __int16 v25; // ax
  int v26; // esi
  int v27; // ebx
  USHORT MaximumGroupCount; // ax
  __int64 v29; // r12
  unsigned int v30; // r14d
  bool v31; // cf
  char *v32; // rsi
  char *v33; // rax
  char *v34; // rax
  char *v35; // rcx
  char *v36; // rcx
  volatile signed __int64 *v37; // r12
  char *v38; // rax
  char *v39; // rbx
  char *v40; // rsi
  int inited; // r14d
  __int64 v42; // rdx
  int v43; // r8d
  unsigned __int16 v44; // dx
  unsigned __int16 v45; // cx
  unsigned __int16 v46; // r12
  _BYTE *v47; // rcx
  __int64 v48; // r9
  int v49; // edx
  __int64 v50; // rbx
  int v51; // eax
  __int64 v52; // rbx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  _QWORD *v56; // rcx
  __int64 Pool2; // rax
  _QWORD *ExtendedFeature; // rax
  SIZE_T v59; // rax
  __int16 v60; // ax
  __int16 v61; // dx
  __int16 v62; // dx
  __int64 v63; // rax
  void *v64; // rcx
  __int64 v65; // [rsp+20h] [rbp-1F8h]
  char v66; // [rsp+50h] [rbp-1C8h]
  signed int v67; // [rsp+54h] [rbp-1C4h]
  int v68; // [rsp+54h] [rbp-1C4h]
  char v69; // [rsp+58h] [rbp-1C0h]
  int v70; // [rsp+5Ch] [rbp-1BCh]
  __int64 v71; // [rsp+60h] [rbp-1B8h]
  PVOID Object; // [rsp+68h] [rbp-1B0h] BYREF
  _BYTE *v73; // [rsp+70h] [rbp-1A8h]
  __int64 v74; // [rsp+78h] [rbp-1A0h] BYREF
  __int64 v75; // [rsp+80h] [rbp-198h]
  __int64 v76; // [rsp+88h] [rbp-190h]
  ULONG ContextLength; // [rsp+90h] [rbp-188h] BYREF
  size_t Size; // [rsp+98h] [rbp-180h]
  __int64 v79; // [rsp+A0h] [rbp-178h]
  __int64 v80; // [rsp+A8h] [rbp-170h]
  SIZE_T CurrentThread; // [rsp+B0h] [rbp-168h]
  __int64 v82; // [rsp+B8h] [rbp-160h]
  __int64 v83; // [rsp+C0h] [rbp-158h]
  __int64 v84; // [rsp+C8h] [rbp-150h]
  size_t v85; // [rsp+D0h] [rbp-148h]
  ULONG_PTR v86; // [rsp+D8h] [rbp-140h]
  size_t v87; // [rsp+E0h] [rbp-138h]
  _QWORD *v88; // [rsp+E8h] [rbp-130h]
  __int64 v89; // [rsp+F0h] [rbp-128h]
  char v90; // [rsp+F8h] [rbp-120h] BYREF
  int v91; // [rsp+F9h] [rbp-11Fh]
  __int16 v92; // [rsp+FDh] [rbp-11Bh]
  char v93; // [rsp+FFh] [rbp-119h]
  __int64 v94; // [rsp+100h] [rbp-118h]
  __int64 v95; // [rsp+108h] [rbp-110h]
  __int64 v96; // [rsp+110h] [rbp-108h]
  __int64 v97; // [rsp+120h] [rbp-F8h] BYREF
  __int64 (__fastcall *v98)(__int64, __int64); // [rsp+128h] [rbp-F0h]
  __int64 v99; // [rsp+130h] [rbp-E8h]
  __int64 v100; // [rsp+138h] [rbp-E0h]
  __int128 v101; // [rsp+140h] [rbp-D8h]
  ULONG_PTR v102; // [rsp+150h] [rbp-C8h]
  int v103; // [rsp+158h] [rbp-C0h]
  int v104; // [rsp+15Ch] [rbp-BCh]
  __int64 v105; // [rsp+160h] [rbp-B8h]
  int v106; // [rsp+170h] [rbp-A8h]
  int v107; // [rsp+174h] [rbp-A4h]
  int v108; // [rsp+178h] [rbp-A0h]
  int v109; // [rsp+17Ch] [rbp-9Ch]
  __int64 v110; // [rsp+190h] [rbp-88h]
  __int64 v111; // [rsp+198h] [rbp-80h]
  _QWORD *v112; // [rsp+1A0h] [rbp-78h]
  _OWORD v113[3]; // [rsp+1A8h] [rbp-70h] BYREF

  v13 = a2;
  v75 = a2;
  v86 = BugCheckParameter1;
  v82 = a2;
  v87 = a5;
  Size = a5;
  v85 = a5;
  v88 = a6;
  v80 = a7;
  v89 = a8;
  v112 = a10;
  v73 = a11;
  v15 = a12;
  v84 = a12;
  memset(v113, 0, sizeof(v113));
  v74 = 0LL;
  Object = 0LL;
  v91 = 0;
  v92 = 0;
  v93 = 0;
  ContextLength = 0;
  CurrentThread = (SIZE_T)KeGetCurrentThread();
  v70 = 0;
  v16 = 0LL;
  v76 = 0LL;
  v79 = 0LL;
  v17 = *(_BYTE *)(BugCheckParameter1 + 368) & 1;
  v66 = v17;
  if ( a6 )
    v18 = *a6;
  else
    v18 = 0LL;
  v83 = v18;
  v71 = v18;
  if ( a4 )
  {
    v19 = 0LL;
    v20 = 0LL;
    v21 = *(_QWORD *)(a4 + 8);
    if ( (v21 & 0x1000) != 0 )
      v19 = a4 + 320;
    if ( (v21 & 0x4000) != 0 )
      v20 = KiProcessorBlock[*(unsigned int *)(a4 + 20)];
    if ( _bittest64(&KeFeatureBits, 0x37u) )
    {
      v16 = MEMORY[0xFFFFF780000003D8] & ~(unsigned int)*(_QWORD *)(BugCheckParameter1 + 408) & 0x40000;
      v76 = v16;
      v79 = v16;
    }
    v13 = v75;
    if ( (v21 & 0x40000000) != 0 )
    {
      if ( *(_QWORD *)(BugCheckParameter1 + 784) )
        return 3221225485LL;
      if ( (*(_DWORD *)(BugCheckParameter1 + 1532) & 0x1000) != 0 )
        return 3221225659LL;
      v76 = *(_QWORD *)(a4 + 480) | v16;
      v79 = v76;
    }
    if ( v20 )
    {
      if ( v19 )
      {
        if ( *(unsigned __int8 *)(v20 + 208) != *(_WORD *)(v19 + 8)
          || *(_QWORD *)v19 && (*(_QWORD *)v19 & *(_QWORD *)(v20 + 200)) == 0LL )
        {
          v23 = -1073741776;
          goto LABEL_45;
        }
      }
      else
      {
        *(_QWORD *)(a4 + 8) = v21 | 0x1000;
        *(_WORD *)(a4 + 328) = *(unsigned __int8 *)(v20 + 208);
        *(_QWORD *)(a4 + 320) = KeActiveProcessors.Bitmap[*(unsigned __int8 *)(v20 + 208)];
      }
      ProcessorNodeNumber = KeGetProcessorNodeNumber(v20);
    }
    else
    {
      if ( !v19 || !*(_QWORD *)v19 )
        goto LABEL_29;
      v25 = KeSelectInitialIdealProcessorForThread(BugCheckParameter1, v19);
      *(_DWORD *)(a4 + 20) = v25;
      *(_QWORD *)(a4 + 8) |= 0x4000uLL;
      ProcessorNodeNumber = KeGetProcessorNodeNumberByIndex(v25);
      v13 = v75;
      v15 = v84;
    }
    v70 = ProcessorNodeNumber + 1;
LABEL_29:
    v17 = v66;
  }
  *(_DWORD *)(v15 + 384) = 0;
  *(_BYTE *)(v15 + 388) = a3;
  v23 = 0;
  v67 = 0;
  if ( a5 )
  {
    if ( (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
    {
      v23 = -1073741811;
      goto LABEL_45;
    }
    v23 = v17 != 0 ? 0xC000000D : 0;
    v67 = v23;
    if ( v17 )
      goto LABEL_45;
  }
  if ( v13 )
  {
    if ( a3 == 1 )
    {
      if ( (v13 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *(_DWORD *)(v15 + 384) = *(_DWORD *)(v13 + 24) & 0x1DF2;
      v23 = v67;
      v26 = v75;
    }
    else
    {
      *(_DWORD *)(v15 + 384) = *(_DWORD *)(v13 + 24) & 0x11FF2;
      v26 = v75;
    }
    if ( v23 < 0 )
      goto LABEL_45;
  }
  else
  {
    v26 = v75;
  }
  v69 = PoEnergyEstimationEnabled();
  v27 = v69 != 0 ? 2144 : 1944;
  MaximumGroupCount = KeQueryMaximumGroupCount();
  v29 = MaximumGroupCount;
  v30 = 0;
  if ( MaximumGroupCount > 1u )
  {
    v30 = (v69 != 0 ? 2151 : 1951) & 0xFFFFFFF8;
    v27 = v30 + 8 * MaximumGroupCount;
  }
  LODWORD(v82) = (v27 + 7) & 0xFFFFFFF8;
  LODWORD(v84) = (16 * MaximumGroupCount + 23 + v82) & 0xFFFFFFF8;
  v31 = Size != 0;
  Size = -(__int64)Size;
  LODWORD(v75) = v31 ? v84 + 544 : 0;
  v31 = v85 != 0;
  v85 = -(__int64)v85;
  LODWORD(Size) = v84 + (v31 ? 1264 : 544);
  v23 = ObCreateObjectEx(a3, PsThreadType, v26, a3, v65, Size, 0, Size, &Object, 0LL);
  if ( v23 < 0 )
  {
LABEL_45:
    ObfDereferenceObjectWithTag((PVOID)BugCheckParameter1, 0x72437350u);
    return (unsigned int)v23;
  }
  v32 = (char *)Object;
  memset_0(Object, 0, (unsigned int)Size);
  if ( v69 )
  {
    *((_QWORD *)v32 + 209) = v32 + 1944;
    _interlockedbittestandset((volatile signed __int32 *)v32, 0x15u);
    v32 = (char *)Object;
  }
  if ( KiSchedulerAssistThreadFlagEnabled )
  {
    _interlockedbittestandset((volatile signed __int32 *)v32, 0x16u);
    v32 = (char *)Object;
  }
  if ( v30 )
  {
    *((_DWORD *)v32 + 360) |= 0x20000u;
    *((_QWORD *)v32 + 210) = &v32[v30];
  }
  v33 = &v32[(unsigned int)v84];
  *(_QWORD *)v33 = v32;
  v33[12] = 6;
  *((_QWORD *)v32 + 142) = v33;
  if ( a5 )
  {
    v34 = &v32[(unsigned int)v75];
    *(_QWORD *)v34 = v32;
    v34[12] = 8;
    *((_QWORD *)v32 + 143) = v34;
  }
  v35 = &v32[(unsigned int)v82];
  *((_QWORD *)v32 + 72) = v35;
  *(_WORD *)v35 = 1;
  *((_WORD *)v35 + 1) = v29;
  *((_DWORD *)v35 + 1) = 0;
  memset_0(v35 + 8, 0, 8 * v29);
  v36 = &v32[(unsigned int)(v82 + 8 + 8 * v29)];
  *((_QWORD *)v32 + 69) = v36;
  *(_WORD *)v36 = 1;
  *((_WORD *)v36 + 1) = v29;
  *((_DWORD *)v36 + 1) = 0;
  memset_0(v36 + 8, 0, 8 * v29);
  *((_QWORD *)v32 + 177) = 0LL;
  *((_QWORD *)v32 + 161) = *(_QWORD *)(BugCheckParameter1 + 464);
  if ( (*a9 & 4) != 0 )
    *((_DWORD *)v32 + 360) |= 4u;
  if ( (*a9 & 0x200) != 0 )
    *((_DWORD *)v32 + 29) |= 0x200000u;
  *((_DWORD *)v32 + 257) = 32;
  *((_QWORD *)v32 + 178) = 0LL;
  *((_DWORD *)v32 + 358) = 15;
  v32[1831] = -1;
  KeInitializeSemaphore((PRKSEMAPHORE)(v32 + 1304), 0, 1);
  *((_QWORD *)v32 + 154) = v32 + 1224;
  *((_QWORD *)v32 + 153) = v32 + 1224;
  *((_QWORD *)v32 + 191) = v32 + 1520;
  *((_QWORD *)v32 + 190) = v32 + 1520;
  *((_QWORD *)v32 + 193) = v32 + 1536;
  *((_QWORD *)v32 + 192) = v32 + 1536;
  *((_QWORD *)v32 + 194) = 0LL;
  *((_QWORD *)v32 + 204) = v32 + 1624;
  *((_QWORD *)v32 + 203) = v32 + 1624;
  *((_QWORD *)v32 + 205) = 0LL;
  *((_QWORD *)v32 + 169) = v32 + 1344;
  *((_QWORD *)v32 + 168) = v32 + 1344;
  *((_QWORD *)v32 + 195) = 0LL;
  *((_QWORD *)v32 + 158) = 0LL;
  *((_QWORD *)v32 + 160) = v32 + 1272;
  *((_QWORD *)v32 + 159) = v32 + 1272;
  *((_QWORD *)v32 + 211) = -3LL;
  if ( KeQuerySystemTimeUnsafe() )
  {
    KeQuerySystemTimePrecise((_QWORD *)v32 + 152);
  }
  else
  {
    v32 = (char *)Object;
    *((_QWORD *)Object + 152) = MEMORY[0xFFFFF78000000014];
  }
  *((_QWORD *)v32 + 216) = v32 + 1720;
  *((_QWORD *)v32 + 215) = v32 + 1720;
  *((_QWORD *)v32 + 217) = 0LL;
  *((_QWORD *)v32 + 219) = v32 + 1744;
  *((_QWORD *)v32 + 218) = v32 + 1744;
  *((_QWORD *)v32 + 239) = 0LL;
  v37 = (volatile signed __int64 *)(v32 + 1424);
  v38 = (char *)KeAbPreAcquire((__int64)(v32 + 1424), 0LL);
  v39 = v38;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v32 + 356, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v32 + 178, v38, (__int64)(v32 + 1424));
  if ( v39 )
    v39[10] = 1;
  v40 = (char *)Object;
  inited = PsAssignThreadId((__int64)Object);
  v68 = inited;
  if ( inited < 0 )
  {
    if ( (_InterlockedExchangeAdd64(v37, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v37);
    KeAbPostRelease((ULONG_PTR)v37);
    v40 = (char *)Object;
    goto LABEL_130;
  }
  if ( !a5 )
  {
    v63 = v80;
    *((_QWORD *)v40 + 156) = v80;
    *((_QWORD *)v40 + 172) = v63;
    v97 = 0LL;
    v99 = v63;
    v100 = v89;
    v101 = 0LL;
    v102 = BugCheckParameter1;
    v103 = v70;
    v104 = 0;
    v98 = PspSystemThreadStartup;
    if ( (*a9 & 0x400) != 0 && v66 )
    {
      v98 = (__int64 (__fastcall *)(__int64, __int64))PspSecureThreadStartup;
      v104 = 16;
      *((_DWORD *)v40 + 361) |= 0x200u;
    }
    v52 = v74;
    goto LABEL_126;
  }
  v43 = *a9;
  v44 = (16 * (*a9 & 0x40)) | 8;
  if ( (*a9 & 2) == 0 )
    v44 = 16 * (v43 & 0x40);
  v45 = v44 | 0x2000;
  if ( (v43 & 0x80u) == 0 )
    v45 = v44;
  v46 = v45 | 0x4000;
  if ( (v43 & 0x100) == 0 )
    v46 = v45;
  v47 = v73;
  if ( v73 )
  {
    if ( (*(_DWORD *)(BugCheckParameter1 + 1876) & 0x4000) != 0 )
      *((_DWORD *)v40 + 29) |= 0x100000u;
    if ( *(_QWORD *)(BugCheckParameter1 + 784) )
    {
      v90 = 0;
      v95 = 0x8000LL;
      v96 = 0x40000LL;
      v94 = 0LL;
      inited = PspSetupUserStack(BugCheckParameter1, a5, v71, &v90, v70);
      v68 = inited;
      if ( inited >= 0 )
      {
        v49 = (int)v73;
        *v73 = v90 & 2 | *v73 & 0xFD;
        v50 = v71;
        v51 = PspWow64SetupUserStack(BugCheckParameter1, v49, v71, v49, v70);
LABEL_82:
        inited = v51;
        v68 = v51;
LABEL_87:
        if ( inited < 0 )
          goto LABEL_130;
        inited = MmCreateTeb(BugCheckParameter1, v50, (_QWORD *)v40 + 161, v48, &v74);
        v68 = inited;
        if ( inited < 0 )
          goto LABEL_130;
        *((_QWORD *)v40 + 156) = *(_QWORD *)(a5 + 248);
        *((_QWORD *)v40 + 172) = *(_QWORD *)(a5 + 128);
        v52 = v74;
        if ( *(_QWORD *)(BugCheckParameter1 + 784) )
        {
          inited = PspWow64InitThread(BugCheckParameter1);
          v68 = inited;
          if ( inited < 0 )
            goto LABEL_130;
        }
        if ( v46 )
        {
          KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v113);
          *(_WORD *)(v52 + 6126) = v46;
          if ( *(_QWORD *)(BugCheckParameter1 + 784) )
          {
            v53 = v46;
            if ( *(_WORD *)(BugCheckParameter1 + 1772) == 0x8664 )
            {
              v110 = v52 + 0x2000;
              *(_WORD *)(v52 + 14318) = v46;
            }
            else
            {
              v111 = v52 + 0x2000;
              *(_WORD *)(v52 + 12234) = v46;
            }
          }
          inited = 0;
          v68 = 0;
          goto LABEL_120;
        }
        goto LABEL_121;
      }
    }
    else
    {
      inited = PspSetupUserStack(BugCheckParameter1, a5, v71, v47, v70);
      v68 = inited;
      if ( inited >= 0 && (*((_DWORD *)v40 + 29) & 0x100000) != 0 )
      {
        v50 = v71;
        v51 = PspSetupUserShadowStack(BugCheckParameter1, v70);
        goto LABEL_82;
      }
    }
    v50 = v71;
    goto LABEL_87;
  }
  if ( !*(_QWORD *)(BugCheckParameter1 + 1600) )
  {
    v52 = *(_QWORD *)(CurrentThread + 240);
    v74 = v52;
    *((_QWORD *)v40 + 156) = PsQueryThreadStartAddress(CurrentThread, 1);
    *((_QWORD *)v40 + 172) = *(_QWORD *)(CurrentThread + 1376);
    *((_DWORD *)v40 + 361) |= 0x10u;
    if ( (*(_DWORD *)(BugCheckParameter1 + 1876) & 0x4000) != 0
      && (*(_DWORD *)(a5 + 48) & 0x100040) == 0x100040
      && (*(_DWORD *)(*(int *)(a5 + 1248) + a5 + 1232) & 0x800LL) != 0 )
    {
      ExtendedFeature = RtlLocateExtendedFeature((PCONTEXT_EX)(a5 + 1232), 0xBu, 0LL);
      if ( ExtendedFeature )
      {
        if ( (*(_BYTE *)ExtendedFeature & 1) != 0 && ExtendedFeature[1] )
          *((_DWORD *)v40 + 29) |= 0x100000u;
      }
    }
    if ( *(_QWORD *)(BugCheckParameter1 + 784) )
    {
      v59 = 14456LL;
      if ( *(_WORD *)(BugCheckParameter1 + 1772) != 0x8664 )
        v59 = 12344LL;
      CurrentThread = v59;
    }
    else
    {
      CurrentThread = 6264LL;
    }
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v113);
    if ( MmSecureVirtualMemory((PVOID)v52, CurrentThread, 4u) )
    {
      *(_OWORD *)(v52 + 64) = *(_OWORD *)(v40 + 1288);
      *(_OWORD *)(v52 + 2008) = *(_OWORD *)(v40 + 1288);
      *(_DWORD *)(v52 + 6044) = 0;
      *(_DWORD *)(v52 + 6120) = 0;
      v60 = *(_WORD *)(v52 + 6126) & 0x62C;
      *(_WORD *)(v52 + 6126) = v60;
      v53 = v46;
      v54 = 64LL;
      *(_WORD *)(v52 + 6126) = v46 | v60 | 0x40;
      *(_QWORD *)(v52 + 6224) = 0LL;
      if ( *(_QWORD *)(BugCheckParameter1 + 784) )
      {
        if ( *(_WORD *)(BugCheckParameter1 + 1772) == 0x8664 )
        {
          v110 = v52 + 0x2000;
          *(_QWORD *)(v52 + 8256) = *((_QWORD *)v40 + 161);
          *(_QWORD *)(v52 + 8264) = *((_QWORD *)v40 + 162);
          *(_QWORD *)(v52 + 10200) = *((_QWORD *)v40 + 161);
          *(_QWORD *)(v52 + 10208) = *((_QWORD *)v40 + 162);
          *(_DWORD *)(v52 + 14236) = 0;
          *(_DWORD *)(v52 + 14312) = 0;
          *(_QWORD *)(v52 + 14416) = 0LL;
          v61 = *(_WORD *)(v52 + 14318) & 0x62C;
          *(_WORD *)(v52 + 14318) = v61;
          *(_WORD *)(v52 + 14318) = v46 | v61 | 0x40;
        }
        else
        {
          v111 = v52 + 0x2000;
          v106 = *((_DWORD *)v40 + 322);
          *(_DWORD *)(v52 + 8224) = v106;
          v107 = *((_DWORD *)v40 + 324);
          *(_DWORD *)(v52 + 8228) = v107;
          v108 = *((_DWORD *)v40 + 322);
          *(_DWORD *)(v52 + 9908) = v108;
          v109 = *((_DWORD *)v40 + 324);
          *(_DWORD *)(v52 + 9912) = v109;
          *(_DWORD *)(v52 + 12188) = 0;
          *(_DWORD *)(v52 + 12228) = 0;
          *(_DWORD *)(v52 + 12312) = 0;
          v62 = *(_WORD *)(v52 + 12234) & 0x62C;
          *(_WORD *)(v52 + 12234) = v62;
          *(_WORD *)(v52 + 12234) = v46 | v62 | 0x40;
        }
      }
    }
    else
    {
      inited = -1073741503;
      v68 = -1073741503;
    }
LABEL_120:
    KiUnstackDetachProcess((__int64)v113, 0, v53, v54);
    if ( inited < 0 )
      goto LABEL_130;
    goto LABEL_121;
  }
  v55 = *(_QWORD *)(a5 + 248);
  *((_QWORD *)v40 + 156) = v55;
  *((_QWORD *)v40 + 172) = v55;
  v56 = v88;
  *((_QWORD *)v40 + 207) = v88[1];
  *((_QWORD *)v40 + 208) = v56[2];
  _interlockedbittestandset((volatile signed __int32 *)v40, 0x1Au);
  RtlGetExtendedContextLength(MEMORY[0xFFFFF780000003D8] != 0LL ? 1048671 : 1048607, &ContextLength);
  Pool2 = ExAllocatePool2(0x100uLL, ContextLength, 0x63537350u);
  v40 = (char *)Object;
  *((_QWORD *)Object + 213) = Pool2;
  if ( !Pool2 )
  {
    inited = -1073741670;
    v68 = -1073741670;
    goto LABEL_130;
  }
  v52 = v74;
LABEL_121:
  v97 = 0LL;
  v98 = (__int64 (__fastcall *)(__int64, __int64))PspUserThreadStartup;
  v99 = v80;
  v100 = *((_QWORD *)v40 + 156);
  *(_QWORD *)&v101 = a5;
  *((_QWORD *)&v101 + 1) = v52;
  v102 = BugCheckParameter1;
  v103 = v70;
  v104 = 0;
LABEL_126:
  v105 = v76;
  inited = KeInitThread(v40, &v97);
  v68 = inited;
  if ( inited >= 0 )
  {
    PsInitializeThreadRngState((unsigned __int64)v40);
    ObInitializeFastReference(v40 + 1936, BugCheckParameter1);
    *v112 = v40;
    return 0LL;
  }
  if ( v52 && v73 )
    MmDeleteTeb((struct _KPROCESS *)BugCheckParameter1, v52);
LABEL_130:
  if ( v73 && *v73 )
    PspDeleteUserStack(BugCheckParameter1, v42, v71, v73);
  v64 = (void *)*((_QWORD *)v40 + 213);
  if ( v64 )
  {
    ExFreePoolWithTag(v64, 0x63537350u);
    *((_QWORD *)v40 + 213) = 0LL;
  }
  if ( *((_QWORD *)v40 + 162) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v40 + 178, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v40 + 178);
    KeAbPostRelease((ULONG_PTR)(v40 + 1424));
    inited = v68;
    v40 = (char *)Object;
  }
  if ( !*((_QWORD *)v40 + 68) )
    ObfDereferenceObjectWithTag((PVOID)BugCheckParameter1, 0x72437350u);
  ObfDereferenceObject(v40);
  return (unsigned int)inited;
}
