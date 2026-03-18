/*
 * XREFs of DxgkCreateBundleObjectInternal @ 0x1403F5DB0
 * Callers:
 *     DxgkCreateBundleObject @ 0x1401E21A0 (DxgkCreateBundleObject.c)
 *     ?CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z @ 0x1403F5B18 (-CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140023F70 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002DC50 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?CreateSharedKeyedMutexNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1401E07FC (-CreateSharedKeyedMutexNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1401E0B10 (-CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAP.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1403289FC (-CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x14032AEB8 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x14032B210 (-CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 */

__int64 __fastcall DxgkCreateBundleObjectInternal(
        __int64 a1,
        KPROCESSOR_MODE a2,
        __int64 a3,
        __int64 a4,
        ULONG64 a5,
        void *a6)
{
  char v6; // r12
  __int64 v7; // rcx
  int SharedResourceNtObject; // edi
  const void *v9; // rdx
  __int64 v10; // r14
  __int64 v11; // rax
  const wchar_t *v12; // r9
  size_t v13; // r8
  const void *v14; // rdx
  size_t v15; // r8
  const void *v16; // rdx
  const void *v17; // rdi
  size_t v18; // r8
  ACCESS_MASK *v19; // r8
  unsigned __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r9
  unsigned int i; // r15d
  _QWORD *v24; // rdx
  unsigned int v25; // edi
  int EntryType; // r14d
  struct DXGPROCESS *v27; // r14
  _QWORD *v28; // r10
  unsigned int v29; // r8d
  int v30; // r9d
  __int64 v31; // rax
  PVOID *v32; // rcx
  DXGSYNCOBJECT *v33; // r9
  __int64 v34; // rcx
  __int64 v35; // r9
  __int64 v36; // rdx
  KPROCESSOR_MODE v37; // al
  int v38; // eax
  void **v39; // r14
  unsigned int k; // r15d
  NTSTATUS inserted; // eax
  BOOLEAN IsKernelHandle; // al
  void *v43; // rcx
  unsigned int v44; // r14d
  unsigned int j; // eax
  PVOID v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v50; // rcx
  __int64 v51; // r8
  PHANDLE Handle; // [rsp+28h] [rbp-2C0h]
  __int64 Handlea; // [rsp+28h] [rbp-2C0h]
  __int64 v54; // [rsp+30h] [rbp-2B8h]
  char v56; // [rsp+51h] [rbp-297h]
  PVOID Object; // [rsp+60h] [rbp-288h] BYREF
  int v58; // [rsp+68h] [rbp-280h] BYREF
  __int64 v59; // [rsp+70h] [rbp-278h]
  char v60; // [rsp+78h] [rbp-270h]
  HANDLE v61; // [rsp+80h] [rbp-268h] BYREF
  struct DXGPROCESS *Current; // [rsp+88h] [rbp-260h]
  void *Src[10]; // [rsp+90h] [rbp-258h] BYREF
  PVOID *v64; // [rsp+E0h] [rbp-208h]
  _BYTE v65[24]; // [rsp+E8h] [rbp-200h] BYREF
  __int128 v66; // [rsp+100h] [rbp-1E8h]
  __int128 v67; // [rsp+110h] [rbp-1D8h]
  __int128 v68; // [rsp+120h] [rbp-1C8h]
  ACCESS_MASK v69[16]; // [rsp+130h] [rbp-1B8h] BYREF
  _DWORD v70[16]; // [rsp+170h] [rbp-178h] BYREF
  PVOID v71[16]; // [rsp+1B0h] [rbp-138h] BYREF
  _QWORD v72[16]; // [rsp+230h] [rbp-B8h] BYREF

  v6 = a1;
  v56 = a1;
  v61 = a6;
  v58 = -1;
  v59 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v60 = 1;
    v58 = 2157;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2157);
  }
  else
  {
    v60 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v58, 2157);
  Current = DXGPROCESS::GetCurrent(v7);
  if ( !Current )
  {
    SharedResourceNtObject = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 2119;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_113:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v58);
    if ( v60 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v50, (__int64)&EventProfilerExit, v51, v58);
    }
    return (unsigned int)SharedResourceNtObject;
  }
  memset(Src, 0, sizeof(Src));
  if ( v6 == 1 )
  {
    v9 = (const void *)a5;
    if ( a5 >= MmUserProbeAddress )
      v9 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(Src, v9, 0x50uLL);
  }
  else
  {
    *(_OWORD *)Src = *(_OWORD *)a5;
    *(_OWORD *)&Src[2] = *(_OWORD *)(a5 + 16);
    *(_OWORD *)&Src[4] = *(_OWORD *)(a5 + 32);
    *(_OWORD *)&Src[6] = *(_OWORD *)(a5 + 48);
    *(_OWORD *)&Src[8] = *(_OWORD *)(a5 + 64);
  }
  Src[9] = 0LL;
  v10 = LODWORD(Src[0]);
  if ( (unsigned int)(LODWORD(Src[0]) - 1) > 0xF )
  {
    SharedResourceNtObject = -1073741811;
    WdLogSingleEntry2(2LL, LODWORD(Src[0]), -1073741811LL);
    WdLogGlobalForLineNumber = 2152;
    v11 = LODWORD(Src[0]);
    v54 = 0LL;
    Handlea = -1073741811LL;
    v12 = L"Input handle count (0x%I64x) is out of range. Returning 0x%I64x";
    goto LABEL_112;
  }
  if ( ((-1 << SLOBYTE(Src[0])) & (__int64)Src[8]) != 0 )
  {
    SharedResourceNtObject = -1073741811;
    WdLogSingleEntry3(2LL, LODWORD(Src[8]), LODWORD(Src[0]), -1073741811LL);
    WdLogGlobalForLineNumber = 2162;
    v11 = LODWORD(Src[8]);
    v54 = -1073741811LL;
    Handlea = LODWORD(Src[0]);
    v12 = L"AccessInheritMask (0x%I64x) is invalid for Input handle count (0x%I64x). Returning 0x%I64x";
LABEL_112:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v12, v11, Handlea, v54, 0LL, 0LL);
    goto LABEL_113;
  }
  memset(v70, 0, sizeof(v70));
  memset(v72, 0, sizeof(v72));
  memset(v69, 0, sizeof(v69));
  if ( v6 == 1 )
  {
    v13 = 4LL * LODWORD(Src[0]);
    v14 = Src[1];
    if ( (char *)Src[1] + v13 < Src[1] || (char *)Src[1] + v13 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v70, v14, v13);
    v15 = 8LL * LODWORD(Src[0]);
    v16 = Src[2];
    if ( (char *)Src[2] + v15 < Src[2] || (char *)Src[2] + v15 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v72, v16, v15);
    v17 = Src[3];
    if ( Src[3] )
    {
      v18 = 4LL * LODWORD(Src[0]);
      if ( (char *)Src[3] + v18 < Src[3] || (char *)Src[3] + v18 > (void *)MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v69, v17, v18);
      v17 = Src[3];
    }
    LODWORD(v10) = Src[0];
LABEL_30:
    if ( v17 )
      goto LABEL_37;
    goto LABEL_31;
  }
  memmove(v70, Src[1], 4LL * LODWORD(Src[0]));
  memmove(v72, Src[2], 8 * v10);
  v17 = Src[3];
  if ( Src[3] )
  {
    memmove(v69, Src[3], 4 * v10);
    goto LABEL_30;
  }
LABEL_31:
  v19 = v69;
  v20 = (unsigned int)v10;
  if ( (_DWORD)v10 )
  {
    if ( ((unsigned __int8)v69 & 4) == 0 )
      goto LABEL_35;
    v69[0] = 0x10000000;
    v20 = (unsigned int)v10 - 1LL;
    if ( (unsigned int)v10 != 1LL )
    {
      v19 = &v69[1];
LABEL_35:
      memset64(v19, 0x1000000010000000uLL, v20 >> 1);
      if ( (v20 & 1) != 0 )
        v19[v20 - 1] = 0x10000000;
    }
  }
LABEL_37:
  Object = 0LL;
  memset(v71, 0, sizeof(v71));
  v66 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  for ( i = 0; i < (unsigned int)v10; ++i )
  {
    v24 = v61;
    if ( v61 && *((_QWORD *)v61 + i) )
    {
      v25 = v70[i];
      EntryType = v25;
    }
    else
    {
      v27 = Current;
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v65, Current);
      v25 = v70[i];
      v28 = (_QWORD *)((char *)v27 + 280);
      v29 = (v25 >> 6) & 0xFFFFFF;
      if ( v29 < *((_DWORD *)v27 + 74)
        && (v30 = *(_DWORD *)(*v28 + 16LL * v29 + 8), ((v25 >> 25) & 0x60) == (*(_BYTE *)(*v28 + 16LL * v29 + 8) & 0x60))
        && (v30 & 0x2000) == 0
        && (v30 & 0x1F) != 0 )
      {
        EntryType = HMGRTABLE::GetEntryType((__int64)v27 + 280, v29);
      }
      else
      {
        EntryType = 0;
      }
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v65);
      v24 = v61;
    }
    if ( EntryType == 4 )
    {
      v34 = v72[i];
      v35 = 0LL;
      if ( v24 )
        v35 = v24[i];
      LOBYTE(v34) = v6;
      SharedResourceNtObject = CreateSharedResourceNtObject(v34, (__int64)v24, v25, v35, v72[i], 1, &v71[i]);
      if ( SharedResourceNtObject < 0 )
      {
        if ( v71[i] )
        {
          WdLogSingleEntry0(1LL);
          v31 = 2250LL;
LABEL_72:
          WdLogGlobalForLineNumber = v31;
          DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"Objects[i] == NULL", v31, 0LL, 0LL, 0LL, 0LL);
        }
LABEL_73:
        v37 = a2;
LABEL_97:
        if ( Src[9] )
        {
          ObCloseHandle(Src[9], v37);
          Src[9] = 0LL;
        }
        else if ( Object )
        {
          ObfDereferenceObject(Object);
          Object = 0LL;
        }
        else
        {
          v44 = 0;
          for ( j = (unsigned int)Src[0]; v44 < j; ++v44 )
          {
            v46 = v71[v44];
            if ( v46 )
            {
              ObfDereferenceObject(v46);
              v71[v44] = 0LL;
              j = (unsigned int)Src[0];
            }
          }
        }
        goto LABEL_113;
      }
    }
    else
    {
      if ( EntryType != 8 )
      {
        if ( EntryType == 9 )
        {
          SharedResourceNtObject = CreateSharedKeyedMutexNtObject(
                                     v6,
                                     (__int64)v24,
                                     v25,
                                     v22,
                                     v72[i],
                                     (__int64)Handle,
                                     &v71[i]);
          if ( SharedResourceNtObject < 0 )
          {
            if ( v71[i] )
            {
              WdLogSingleEntry0(1LL);
              v31 = 2269LL;
              goto LABEL_72;
            }
            goto LABEL_73;
          }
          goto LABEL_68;
        }
        if ( EntryType != 11 )
        {
          if ( EntryType != 14 )
          {
            v36 = v25;
            SharedResourceNtObject = -1073741811;
            WdLogSingleEntry3(3LL, v36, EntryType, -1073741811LL);
            WdLogGlobalForLineNumber = 2318;
            goto LABEL_73;
          }
          SharedResourceNtObject = CreateSharedProtectedSessionNtObject(v6, 14, v25, v22, v72[i], 1, &v71[i]);
          if ( SharedResourceNtObject < 0 )
          {
            if ( v71[i] )
            {
              WdLogSingleEntry0(1LL);
              v31 = 2308LL;
              goto LABEL_72;
            }
            goto LABEL_73;
          }
          goto LABEL_68;
        }
      }
      v32 = &v71[i];
      v64 = v32;
      v33 = 0LL;
      if ( v24 )
        v33 = (DXGSYNCOBJECT *)v24[i];
      LOBYTE(v32) = v6;
      SharedResourceNtObject = CreateSharedSyncNtObject((__int64)v32, EntryType, v25, v33, v72[i], 1, &v71[i]);
      if ( SharedResourceNtObject < 0 )
      {
        if ( *v64 )
        {
          WdLogSingleEntry0(1LL);
          v31 = 2289LL;
          goto LABEL_72;
        }
        goto LABEL_73;
      }
    }
LABEL_68:
    LODWORD(v10) = Src[0];
  }
  LOBYTE(v22) = a2;
  LOBYTE(v21) = v6;
  v38 = ObCreateObject(v21, g_pDxgkSharedBundleObjectType, Src[4], v22, 0LL, 248, 0, 0, &Object);
  SharedResourceNtObject = v38;
  if ( v38 < 0 )
  {
    WdLogSingleEntry2(3LL, Current, v38);
    WdLogGlobalForLineNumber = 2341;
    if ( Object )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2343;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pBundleObject == NULL", 2343LL, 0LL, 0LL, 0LL, 0LL);
    }
    v37 = a2;
    goto LABEL_97;
  }
  v39 = (void **)Object;
  memset(Object, 0, 0xF8uLL);
  *((_DWORD *)v39 + 6) = Src[0];
  memmove(v39 + 4, v71, 8LL * LODWORD(Src[0]));
  memmove(v39 + 20, v69, 4LL * LODWORD(Src[0]));
  *(_OWORD *)v39 = *(_OWORD *)((char *)&Src[5] + 4);
  v39[2] = *(void **)((char *)&Src[7] + 4);
  *((_BYTE *)v39 + 224) = a2;
  v39[29] = 0LL;
  ExAcquirePushLockExclusiveEx(v39 + 29, 0LL);
  ObfReferenceObject(v39);
  SharedResourceNtObject = ObInsertObject(Object, 0LL, (ACCESS_MASK)Src[5], 0, 0LL, &Src[9]);
  if ( SharedResourceNtObject >= 0 && Src[3] )
  {
    for ( k = 0; k < *((_DWORD *)v39 + 6); ++k )
    {
      v61 = 0LL;
      ObfReferenceObject(v39[k + 4]);
      inserted = ObInsertObject(v39[k + 4], 0LL, v69[k], 0, 0LL, &v61);
      SharedResourceNtObject = inserted;
      if ( inserted < 0 )
      {
        WdLogSingleEntry2(3LL, v39[k + 4], inserted);
        WdLogGlobalForLineNumber = 2437;
        break;
      }
      IsKernelHandle = ObIsKernelHandle(v61);
      ObCloseHandle(v61, IsKernelHandle == 0);
    }
    v6 = v56;
    if ( SharedResourceNtObject >= 0 )
    {
      *((_BYTE *)v39 + 242) = 1;
      *((_BYTE *)v39 + 240) = 1;
      goto LABEL_87;
    }
  }
  else
  {
LABEL_87:
    if ( SharedResourceNtObject >= 0 )
      *((_BYTE *)v39 + 243) = 1;
  }
  ExReleasePushLockExclusiveEx(v39 + 29, 0LL);
  ObfDereferenceObject(v39);
  if ( SharedResourceNtObject < 0 )
  {
    if ( !Src[9] )
    {
      WdLogSingleEntry3(3LL, Object, Current, SharedResourceNtObject);
      WdLogGlobalForLineNumber = 2476;
    }
    Object = 0LL;
    memset(v71, 0, sizeof(v71));
    goto LABEL_73;
  }
  if ( v6 == 1 )
  {
    v43 = (void *)(a5 + 72);
    if ( a5 + 72 >= MmUserProbeAddress )
      v43 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v43, &Src[9], 8uLL);
  }
  else
  {
    *(void **)(a5 + 72) = Src[9];
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v58);
  if ( v60 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v47, (__int64)&EventProfilerExit, v48, v58);
  return 0LL;
}
