/*
 * XREFs of PspAllocateThread @ 0x1408F2828
 * Callers:
 *     PspCreateThread @ 0x1408F1680 (PspCreateThread.c)
 *     NtCreateUserProcess @ 0x1409BC1D0 (NtCreateUserProcess.c)
 *     PspCreatePicoThread @ 0x140A90CA0 (PspCreatePicoThread.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     RtlGetExtendedContextLength @ 0x140261030 (RtlGetExtendedContextLength.c)
 *     KeSelectInitialIdealProcessorForThread @ 0x14026B540 (KeSelectInitialIdealProcessorForThread.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     KeQuerySystemTimePrecise @ 0x14031ABA0 (KeQuerySystemTimePrecise.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     PsQueryThreadStartAddress @ 0x1403F5710 (PsQueryThreadStartAddress.c)
 *     RtlLocateExtendedFeature @ 0x140406510 (RtlLocateExtendedFeature.c)
 *     KeGetProcessorNodeNumber @ 0x14043ACA0 (KeGetProcessorNodeNumber.c)
 *     KeGetProcessorNodeNumberByIndex @ 0x14043BFB0 (KeGetProcessorNodeNumberByIndex.c)
 *     PoEnergyEstimationEnabled @ 0x14044A480 (PoEnergyEstimationEnabled.c)
 *     KeInitializeSemaphore @ 0x14045D6B0 (KeInitializeSemaphore.c)
 *     PsAssignThreadId @ 0x14046BB40 (PsAssignThreadId.c)
 *     KeQuerySystemTimeUnsafe @ 0x140478190 (KeQuerySystemTimeUnsafe.c)
 *     KeQueryMaximumGroupCount @ 0x14047F9E0 (KeQueryMaximumGroupCount.c)
 *     PsInitializeThreadRngState @ 0x140481D8C (PsInitializeThreadRngState.c)
 *     Feature_IoMgr_FileObject_Process_FastRef__private_IsEnabledDeviceUsageNoInline @ 0x14059238C (Feature_IoMgr_FileObject_Process_FastRef__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ObCreateObjectEx @ 0x14085BE20 (ObCreateObjectEx.c)
 *     MmDeleteTeb @ 0x1408F6330 (MmDeleteTeb.c)
 *     MmCreateTeb @ 0x1408FA3C4 (MmCreateTeb.c)
 *     PspSetupUserStack @ 0x1409EB438 (PspSetupUserStack.c)
 *     PspWow64InitThread @ 0x1409EB93C (PspWow64InitThread.c)
 *     MmSecureVirtualMemory @ 0x1409F0050 (MmSecureVirtualMemory.c)
 *     ObInitializeFastReference @ 0x140A0CFE4 (ObInitializeFastReference.c)
 *     PspWow64SetupUserStack @ 0x140A14418 (PspWow64SetupUserStack.c)
 *     PspSetupUserShadowStack @ 0x140A14F44 (PspSetupUserShadowStack.c)
 *     PspDeleteUserStack @ 0x140A5F668 (PspDeleteUserStack.c)
 *     KeInitThread @ 0x140B59400 (KeInitThread.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  __int64 *v38; // rax
  __int64 *v39; // rbx
  char *v40; // rsi
  int Teb; // r14d
  __int64 v42; // rdx
  int v43; // r8d
  __int16 v44; // dx
  __int16 v45; // cx
  __int16 v46; // r12
  _BYTE *v47; // rcx
  int v48; // edx
  int v49; // eax
  __int64 v50; // rbx
  __int64 v51; // rax
  _QWORD *v52; // rcx
  __int64 Pool2; // rax
  _QWORD *ExtendedFeature; // rax
  SIZE_T v55; // rax
  __int16 v56; // ax
  __int16 v57; // dx
  __int16 v58; // dx
  __int64 v59; // rax
  void *v60; // rcx
  __int64 v61; // [rsp+20h] [rbp-1F8h]
  char v62; // [rsp+50h] [rbp-1C8h]
  signed int v63; // [rsp+54h] [rbp-1C4h]
  int v64; // [rsp+54h] [rbp-1C4h]
  char v65; // [rsp+58h] [rbp-1C0h]
  int v66; // [rsp+5Ch] [rbp-1BCh]
  __int64 v67; // [rsp+60h] [rbp-1B8h]
  PVOID Object; // [rsp+68h] [rbp-1B0h] BYREF
  _BYTE *v69; // [rsp+70h] [rbp-1A8h]
  __int64 v70; // [rsp+78h] [rbp-1A0h] BYREF
  __int64 v71; // [rsp+80h] [rbp-198h]
  __int64 v72; // [rsp+88h] [rbp-190h]
  ULONG ContextLength; // [rsp+90h] [rbp-188h] BYREF
  size_t Size; // [rsp+98h] [rbp-180h]
  __int64 v75; // [rsp+A0h] [rbp-178h]
  __int64 v76; // [rsp+A8h] [rbp-170h]
  SIZE_T CurrentThread; // [rsp+B0h] [rbp-168h]
  __int64 v78; // [rsp+B8h] [rbp-160h]
  __int64 v79; // [rsp+C0h] [rbp-158h]
  __int64 v80; // [rsp+C8h] [rbp-150h]
  size_t v81; // [rsp+D0h] [rbp-148h]
  ULONG_PTR v82; // [rsp+D8h] [rbp-140h]
  size_t v83; // [rsp+E0h] [rbp-138h]
  _QWORD *v84; // [rsp+E8h] [rbp-130h]
  __int64 v85; // [rsp+F0h] [rbp-128h]
  char v86; // [rsp+F8h] [rbp-120h] BYREF
  int v87; // [rsp+F9h] [rbp-11Fh]
  __int16 v88; // [rsp+FDh] [rbp-11Bh]
  char v89; // [rsp+FFh] [rbp-119h]
  __int64 v90; // [rsp+100h] [rbp-118h]
  __int64 v91; // [rsp+108h] [rbp-110h]
  __int64 v92; // [rsp+110h] [rbp-108h]
  __int64 v93; // [rsp+120h] [rbp-F8h] BYREF
  __int64 (__fastcall *v94)(__int64, __int64); // [rsp+128h] [rbp-F0h]
  __int64 v95; // [rsp+130h] [rbp-E8h]
  __int64 v96; // [rsp+138h] [rbp-E0h]
  __int128 v97; // [rsp+140h] [rbp-D8h]
  ULONG_PTR v98; // [rsp+150h] [rbp-C8h]
  int v99; // [rsp+158h] [rbp-C0h]
  int v100; // [rsp+15Ch] [rbp-BCh]
  __int64 v101; // [rsp+160h] [rbp-B8h]
  int v102; // [rsp+170h] [rbp-A8h]
  int v103; // [rsp+174h] [rbp-A4h]
  int v104; // [rsp+178h] [rbp-A0h]
  int v105; // [rsp+17Ch] [rbp-9Ch]
  __int64 v106; // [rsp+190h] [rbp-88h]
  __int64 v107; // [rsp+198h] [rbp-80h]
  _QWORD *v108; // [rsp+1A0h] [rbp-78h]
  _OWORD v109[3]; // [rsp+1A8h] [rbp-70h] BYREF

  v13 = a2;
  v71 = a2;
  v82 = BugCheckParameter1;
  v78 = a2;
  v83 = a5;
  Size = a5;
  v81 = a5;
  v84 = a6;
  v76 = a7;
  v85 = a8;
  v108 = a10;
  v69 = a11;
  v15 = a12;
  v80 = a12;
  memset(v109, 0, sizeof(v109));
  v70 = 0LL;
  Object = 0LL;
  v87 = 0;
  v88 = 0;
  v89 = 0;
  ContextLength = 0;
  CurrentThread = (SIZE_T)KeGetCurrentThread();
  v66 = 0;
  v16 = 0LL;
  v72 = 0LL;
  v75 = 0LL;
  v17 = *(_BYTE *)(BugCheckParameter1 + 368) & 1;
  v62 = v17;
  if ( a6 )
    v18 = *a6;
  else
    v18 = 0LL;
  v79 = v18;
  v67 = v18;
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
      v72 = v16;
      v75 = v16;
    }
    v13 = v71;
    if ( (v21 & 0x40000000) != 0 )
    {
      if ( *(_QWORD *)(BugCheckParameter1 + 784) )
        return 3221225485LL;
      if ( (*(_DWORD *)(BugCheckParameter1 + 1532) & 0x1000) != 0 )
        return 3221225659LL;
      v72 = *(_QWORD *)(a4 + 480) | v16;
      v75 = v72;
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
      v13 = v71;
      v15 = v80;
    }
    v66 = ProcessorNodeNumber + 1;
LABEL_29:
    v17 = v62;
  }
  *(_DWORD *)(v15 + 384) = 0;
  *(_BYTE *)(v15 + 388) = a3;
  v23 = 0;
  v63 = 0;
  if ( a5 )
  {
    if ( (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
    {
      v23 = -1073741811;
      goto LABEL_45;
    }
    v23 = v17 != 0 ? 0xC000000D : 0;
    v63 = v23;
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
      v23 = v63;
      v26 = v71;
    }
    else
    {
      *(_DWORD *)(v15 + 384) = *(_DWORD *)(v13 + 24) & 0x11FF2;
      v26 = v71;
    }
    if ( v23 < 0 )
      goto LABEL_45;
  }
  else
  {
    v26 = v71;
  }
  v65 = PoEnergyEstimationEnabled();
  v27 = v65 != 0 ? 2144 : 1944;
  MaximumGroupCount = KeQueryMaximumGroupCount();
  v29 = MaximumGroupCount;
  v30 = 0;
  if ( MaximumGroupCount > 1u )
  {
    v30 = (v65 != 0 ? 2151 : 1951) & 0xFFFFFFF8;
    v27 = v30 + 8 * MaximumGroupCount;
  }
  LODWORD(v78) = (v27 + 7) & 0xFFFFFFF8;
  LODWORD(v80) = (16 * MaximumGroupCount + 23 + v78) & 0xFFFFFFF8;
  v31 = Size != 0;
  Size = -(__int64)Size;
  LODWORD(v71) = v31 ? v80 + 544 : 0;
  v31 = v81 != 0;
  v81 = -(__int64)v81;
  LODWORD(Size) = v80 + (v31 ? 1264 : 544);
  v23 = ObCreateObjectEx(a3, PsThreadType, v26, a3, v61, Size, 0, Size, &Object, 0LL);
  if ( v23 < 0 )
  {
LABEL_45:
    ObfDereferenceObjectWithTag((PVOID)BugCheckParameter1, 0x72437350u);
    return (unsigned int)v23;
  }
  v32 = (char *)Object;
  memset_0(Object, 0, (unsigned int)Size);
  if ( v65 )
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
  v33 = &v32[(unsigned int)v80];
  *(_QWORD *)v33 = v32;
  v33[12] = 6;
  *((_QWORD *)v32 + 142) = v33;
  if ( a5 )
  {
    v34 = &v32[(unsigned int)v71];
    *(_QWORD *)v34 = v32;
    v34[12] = 8;
    *((_QWORD *)v32 + 143) = v34;
  }
  v35 = &v32[(unsigned int)v78];
  *((_QWORD *)v32 + 72) = v35;
  *(_WORD *)v35 = 1;
  *((_WORD *)v35 + 1) = v29;
  *((_DWORD *)v35 + 1) = 0;
  memset_0(v35 + 8, 0, 8 * v29);
  v36 = &v32[(unsigned int)(v78 + 8 + 8 * v29)];
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
  v38 = KeAbPreAcquire((__int64)(v32 + 1424), 0LL);
  v39 = v38;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v32 + 356, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v32 + 178, v38, (__int64)(v32 + 1424));
  if ( v39 )
    *((_BYTE *)v39 + 10) = 1;
  v40 = (char *)Object;
  Teb = PsAssignThreadId((__int64)Object);
  v64 = Teb;
  if ( Teb < 0 )
  {
    if ( (_InterlockedExchangeAdd64(v37, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v37);
    KeAbPostRelease((ULONG_PTR)v37);
    v40 = (char *)Object;
    goto LABEL_129;
  }
  if ( a5 )
  {
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
    v47 = v69;
    if ( !v69 )
    {
      if ( !*(_QWORD *)(BugCheckParameter1 + 1600) )
      {
        v50 = *(_QWORD *)(CurrentThread + 240);
        v70 = v50;
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
          v55 = 14456LL;
          if ( *(_WORD *)(BugCheckParameter1 + 1772) != 0x8664 )
            v55 = 12344LL;
          CurrentThread = v55;
        }
        else
        {
          CurrentThread = 6264LL;
        }
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v109);
        if ( MmSecureVirtualMemory((PVOID)v50, CurrentThread, 4u) )
        {
          *(_OWORD *)(v50 + 64) = *(_OWORD *)(v40 + 1288);
          *(_OWORD *)(v50 + 2008) = *(_OWORD *)(v40 + 1288);
          *(_DWORD *)(v50 + 6044) = 0;
          *(_DWORD *)(v50 + 6120) = 0;
          v56 = *(_WORD *)(v50 + 6126) & 0x62C;
          *(_WORD *)(v50 + 6126) = v56;
          *(_WORD *)(v50 + 6126) = v46 | v56 | 0x40;
          *(_QWORD *)(v50 + 6224) = 0LL;
          if ( *(_QWORD *)(BugCheckParameter1 + 784) )
          {
            if ( *(_WORD *)(BugCheckParameter1 + 1772) == 0x8664 )
            {
              v106 = v50 + 0x2000;
              *(_QWORD *)(v50 + 8256) = *((_QWORD *)v40 + 161);
              *(_QWORD *)(v50 + 8264) = *((_QWORD *)v40 + 162);
              *(_QWORD *)(v50 + 10200) = *((_QWORD *)v40 + 161);
              *(_QWORD *)(v50 + 10208) = *((_QWORD *)v40 + 162);
              *(_DWORD *)(v50 + 14236) = 0;
              *(_DWORD *)(v50 + 14312) = 0;
              *(_QWORD *)(v50 + 14416) = 0LL;
              v57 = *(_WORD *)(v50 + 14318) & 0x62C;
              *(_WORD *)(v50 + 14318) = v57;
              *(_WORD *)(v50 + 14318) = v46 | v57 | 0x40;
            }
            else
            {
              v107 = v50 + 0x2000;
              v102 = *((_DWORD *)v40 + 322);
              *(_DWORD *)(v50 + 8224) = v102;
              v103 = *((_DWORD *)v40 + 324);
              *(_DWORD *)(v50 + 8228) = v103;
              v104 = *((_DWORD *)v40 + 322);
              *(_DWORD *)(v50 + 9908) = v104;
              v105 = *((_DWORD *)v40 + 324);
              *(_DWORD *)(v50 + 9912) = v105;
              *(_DWORD *)(v50 + 12188) = 0;
              *(_DWORD *)(v50 + 12228) = 0;
              *(_DWORD *)(v50 + 12312) = 0;
              v58 = *(_WORD *)(v50 + 12234) & 0x62C;
              *(_WORD *)(v50 + 12234) = v58;
              *(_WORD *)(v50 + 12234) = v46 | v58 | 0x40;
            }
          }
        }
        else
        {
          Teb = -1073741503;
          v64 = -1073741503;
        }
LABEL_119:
        KiUnstackDetachProcess((__int64)v109, 0LL);
        if ( Teb >= 0 )
          goto LABEL_120;
LABEL_129:
        if ( v69 && *v69 )
          PspDeleteUserStack(BugCheckParameter1, v42, v67, v69);
        v60 = (void *)*((_QWORD *)v40 + 213);
        if ( v60 )
        {
          ExFreePoolWithTag(v60, 0x63537350u);
          *((_QWORD *)v40 + 213) = 0LL;
        }
        if ( *((_QWORD *)v40 + 162) )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v40 + 178, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v40 + 178);
          KeAbPostRelease((ULONG_PTR)(v40 + 1424));
          Teb = v64;
          v40 = (char *)Object;
        }
        if ( !*((_QWORD *)v40 + 68) )
          ObfDereferenceObjectWithTag((PVOID)BugCheckParameter1, 0x72437350u);
        ObfDereferenceObject(v40);
        return (unsigned int)Teb;
      }
      v51 = *(_QWORD *)(a5 + 248);
      *((_QWORD *)v40 + 156) = v51;
      *((_QWORD *)v40 + 172) = v51;
      v52 = v84;
      *((_QWORD *)v40 + 207) = v84[1];
      *((_QWORD *)v40 + 208) = v52[2];
      _interlockedbittestandset((volatile signed __int32 *)v40, 0x1Au);
      RtlGetExtendedContextLength(MEMORY[0xFFFFF780000003D8] != 0LL ? 1048671 : 1048607, &ContextLength);
      Pool2 = ExAllocatePool2(0x100uLL);
      v40 = (char *)Object;
      *((_QWORD *)Object + 213) = Pool2;
      if ( !Pool2 )
      {
        Teb = -1073741670;
        v64 = -1073741670;
        goto LABEL_129;
      }
      v50 = v70;
LABEL_120:
      v93 = 0LL;
      v94 = (__int64 (__fastcall *)(__int64, __int64))PspUserThreadStartup;
      v95 = v76;
      v96 = *((_QWORD *)v40 + 156);
      *(_QWORD *)&v97 = a5;
      *((_QWORD *)&v97 + 1) = v50;
      v98 = BugCheckParameter1;
      v99 = v66;
      v100 = 0;
      goto LABEL_125;
    }
    if ( (*(_DWORD *)(BugCheckParameter1 + 1876) & 0x4000) != 0 )
      *((_DWORD *)v40 + 29) |= 0x100000u;
    if ( *(_QWORD *)(BugCheckParameter1 + 784) )
    {
      v86 = 0;
      v91 = 0x8000LL;
      v92 = 0x40000LL;
      v90 = 0LL;
      Teb = PspSetupUserStack(BugCheckParameter1, a5, v67, &v86, v66);
      v64 = Teb;
      if ( Teb >= 0 )
      {
        v48 = (int)v69;
        *v69 = *v69 & 0xFD | v86 & 2;
        v49 = PspWow64SetupUserStack(BugCheckParameter1, v48, v67, v48, v66);
LABEL_82:
        Teb = v49;
        v64 = v49;
      }
    }
    else
    {
      Teb = PspSetupUserStack(BugCheckParameter1, a5, v67, v47, v66);
      v64 = Teb;
      if ( Teb >= 0 && (*((_DWORD *)v40 + 29) & 0x100000) != 0 )
      {
        v49 = PspSetupUserShadowStack(BugCheckParameter1, v66);
        goto LABEL_82;
      }
    }
    if ( Teb < 0 )
      goto LABEL_129;
    Teb = MmCreateTeb(BugCheckParameter1, (__int64)&v70);
    v64 = Teb;
    if ( Teb < 0 )
      goto LABEL_129;
    *((_QWORD *)v40 + 156) = *(_QWORD *)(a5 + 248);
    *((_QWORD *)v40 + 172) = *(_QWORD *)(a5 + 128);
    v50 = v70;
    if ( *(_QWORD *)(BugCheckParameter1 + 784) )
    {
      Teb = PspWow64InitThread(BugCheckParameter1);
      v64 = Teb;
      if ( Teb < 0 )
        goto LABEL_129;
    }
    if ( v46 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v109);
      *(_WORD *)(v50 + 6126) = v46;
      if ( *(_QWORD *)(BugCheckParameter1 + 784) )
      {
        if ( *(_WORD *)(BugCheckParameter1 + 1772) == 0x8664 )
        {
          v106 = v50 + 0x2000;
          *(_WORD *)(v50 + 14318) = v46;
        }
        else
        {
          v107 = v50 + 0x2000;
          *(_WORD *)(v50 + 12234) = v46;
        }
      }
      Teb = 0;
      v64 = 0;
      goto LABEL_119;
    }
    goto LABEL_120;
  }
  v59 = v76;
  *((_QWORD *)v40 + 156) = v76;
  *((_QWORD *)v40 + 172) = v59;
  v93 = 0LL;
  v95 = v59;
  v96 = v85;
  v97 = 0LL;
  v98 = BugCheckParameter1;
  v99 = v66;
  v100 = 0;
  v94 = PspSystemThreadStartup;
  if ( (*a9 & 0x400) != 0 && v62 )
  {
    v94 = (__int64 (__fastcall *)(__int64, __int64))PspSecureThreadStartup;
    v100 = 16;
    *((_DWORD *)v40 + 361) |= 0x200u;
  }
  v50 = v70;
LABEL_125:
  v101 = v72;
  Teb = KeInitThread(v40, &v93);
  v64 = Teb;
  if ( Teb < 0 )
  {
    if ( v50 && v69 )
      MmDeleteTeb(BugCheckParameter1, v50);
    goto LABEL_129;
  }
  PsInitializeThreadRngState((unsigned __int64)v40);
  if ( (unsigned int)Feature_IoMgr_FileObject_Process_FastRef__private_IsEnabledDeviceUsageNoInline() )
    ObInitializeFastReference(v40 + 1936, BugCheckParameter1);
  *v108 = v40;
  return 0LL;
}
