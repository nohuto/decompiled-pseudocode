/*
 * XREFs of DxgkExtractBundleObjectInternal @ 0x1401DD1F4
 * Callers:
 *     DxgkExtractBundleObject @ 0x1401DD170 (DxgkExtractBundleObject.c)
 *     ?ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1401ED204 (-ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

__int64 __fastcall DxgkExtractBundleObjectInternal(__int64 a1, KPROCESSOR_MODE a2, struct _KPROCESS *a3, ULONG64 a4)
{
  ULONG64 v4; // r13
  char v6; // r12
  char v7; // r15
  const void *v8; // rdx
  __int64 v9; // rdi
  int v10; // edi
  const void *v11; // rdx
  char *v12; // rcx
  NTSTATUS v13; // eax
  __int128 *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // r8
  char v22; // r12
  __int64 v23; // rcx
  unsigned int v24; // eax
  struct _KPROCESS *v25; // r15
  unsigned int j; // r15d
  DWORD v27; // r9d
  int v28; // eax
  __int64 ObjectType; // rax
  void *v30; // rcx
  NTSTATUS inserted; // eax
  unsigned __int64 *v32; // rdi
  size_t v33; // r8
  void *v34; // rcx
  unsigned int *v35; // rcx
  _OWORD *v36; // rcx
  unsigned int i; // r15d
  HANDLE v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // r8
  char v41; // [rsp+50h] [rbp-1C8h]
  char v42; // [rsp+52h] [rbp-1C6h]
  int v43; // [rsp+58h] [rbp-1C0h] BYREF
  __int64 v44; // [rsp+60h] [rbp-1B8h]
  char v45; // [rsp+68h] [rbp-1B0h]
  DWORD AccessMask; // [rsp+70h] [rbp-1A8h] BYREF
  PRKPROCESS PROCESS; // [rsp+78h] [rbp-1A0h]
  HANDLE Handle[2]; // [rsp+80h] [rbp-198h] BYREF
  void *Src[2]; // [rsp+90h] [rbp-188h]
  __int128 v50; // [rsp+A0h] [rbp-178h]
  __int64 v51; // [rsp+B0h] [rbp-168h]
  PVOID Object; // [rsp+B8h] [rbp-160h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+C0h] [rbp-158h] BYREF
  HANDLE *v54; // [rsp+C8h] [rbp-150h]
  ULONG64 v55; // [rsp+D0h] [rbp-148h]
  PVOID v56; // [rsp+D8h] [rbp-140h]
  struct _KPROCESS *v57; // [rsp+E0h] [rbp-138h]
  struct _KAPC_STATE ApcState; // [rsp+E8h] [rbp-130h] BYREF
  _DWORD v59[16]; // [rsp+120h] [rbp-F8h] BYREF
  HANDLE v60[16]; // [rsp+160h] [rbp-B8h] BYREF

  v4 = a4;
  v55 = a4;
  PROCESS = a3;
  v6 = a1;
  v42 = a1;
  v57 = a3;
  v43 = -1;
  v44 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v45 = 1;
    v43 = 2158;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, (__int64)a3, 2158);
  }
  else
  {
    v45 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v43, 2158);
  *(_OWORD *)Handle = 0LL;
  *(_OWORD *)Src = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v7 = 0;
  v41 = 0;
  if ( v6 == 1 )
  {
    v8 = (const void *)v4;
    if ( v4 >= MmUserProbeAddress )
      v8 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(Handle, v8, 0x38uLL);
  }
  else
  {
    *(_OWORD *)Handle = *(_OWORD *)v4;
    *(_OWORD *)Src = *(_OWORD *)(v4 + 16);
    v50 = *(_OWORD *)(v4 + 32);
    v51 = *(_QWORD *)(v4 + 48);
  }
  v9 = LODWORD(Handle[1]);
  if ( LODWORD(Handle[1]) > 0x10 )
  {
    v10 = -1073741811;
    WdLogSingleEntry2(2LL, LODWORD(Handle[1]), -1073741811LL);
    WdLogGlobalForLineNumber = 2623;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Input handle count (0x%I64x) is out of range. Returning 0x%I64x",
      LODWORD(Handle[1]),
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_32;
  }
  if ( !LODWORD(Handle[1]) )
  {
    if ( Src[0] || Src[1] )
    {
      v10 = -1073741811;
      WdLogSingleEntry3(3LL, Src[0], Src[1], -1073741811LL);
      WdLogGlobalForLineNumber = 2637;
      goto LABEL_32;
    }
    v7 = 1;
    v41 = 1;
  }
  memset(v59, 0, sizeof(v59));
  if ( !v7 )
  {
    v11 = Src[0];
    if ( Src[0] )
    {
      if ( v6 == 1 )
      {
        v12 = (char *)Src[0] + 4 * LODWORD(Handle[1]);
        if ( v12 < Src[0] || (unsigned __int64)v12 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v59, v11, 4 * v9);
      }
      else
      {
        memmove(v59, Src[0], 4LL * LODWORD(Handle[1]));
      }
    }
  }
  memset(v60, 0, sizeof(v60));
  HandleInformation = 0LL;
  Object = 0LL;
  v13 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedBundleObjectType, a2, &Object, &HandleInformation);
  v10 = v13;
  v14 = (__int128 *)Object;
  v56 = Object;
  if ( v13 == -1073741788 )
  {
    WdLogSingleEntry2(3LL, Handle[0], -1073741788LL);
    WdLogGlobalForLineNumber = 2689;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
    if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v43);
    return 3221225508LL;
  }
  if ( v13 < 0 )
  {
    WdLogSingleEntry2(3LL, Handle[0], v13);
    WdLogGlobalForLineNumber = 2696;
LABEL_32:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
    if ( v45 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v43);
    }
    return (unsigned int)v10;
  }
  if ( !*((_BYTE *)Object + 243) )
  {
    WdLogSingleEntry1(3LL, Handle[0]);
    WdLogGlobalForLineNumber = 2703;
    ObfDereferenceObject(v14);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
    if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit, v21, v43);
    return (unsigned int)-1073741811;
  }
  ExAcquirePushLockExclusiveEx((char *)Object + 232, 0LL);
  memset(&ApcState, 0, sizeof(ApcState));
  v22 = 0;
  v23 = *((unsigned int *)v14 + 6);
  if ( v7 )
  {
    v24 = *((_DWORD *)v14 + 6);
    LODWORD(Handle[1]) = v24;
  }
  else
  {
    v24 = (unsigned int)Handle[1];
    if ( LODWORD(Handle[1]) != (_DWORD)v23 )
    {
      v10 = -1073741811;
      WdLogSingleEntry4(3LL, LODWORD(Handle[1]), *((unsigned int *)v14 + 6), Handle[0], -1073741811LL);
      WdLogGlobalForLineNumber = 2731;
      goto LABEL_88;
    }
  }
  if ( !v7 )
  {
    if ( *((_BYTE *)v14 + 241) && !*((_BYTE *)v14 + 240) )
    {
      v10 = -1073741811;
      WdLogSingleEntry2(3LL, Handle[0], -1073741811LL);
      WdLogGlobalForLineNumber = 2744;
LABEL_88:
      if ( v60[0] )
      {
        if ( v22 )
          KeStackAttachProcess(PROCESS, &ApcState);
        for ( i = 0; i < *((_DWORD *)v14 + 6); v60[i++] = 0LL )
        {
          v38 = v60[i];
          if ( !v38 )
            break;
          ObCloseHandle(v38, 1);
        }
        if ( v22 )
          KeUnstackDetachProcess(&ApcState);
      }
      ExReleasePushLockExclusiveEx((char *)v14 + 232, 0LL);
      ObfDereferenceObject(v14);
      goto LABEL_32;
    }
    if ( !Src[0] )
      memmove(v59, v14 + 10, 4LL * *((unsigned int *)v14 + 6));
    v25 = PROCESS;
    if ( PROCESS && v25 != (struct _KPROCESS *)PsGetCurrentProcess(v23) )
    {
      KeStackAttachProcess(v25, &ApcState);
      v22 = 1;
    }
    for ( j = 0; j < *((_DWORD *)v14 + 6); ++j )
    {
      v27 = v59[j];
      AccessMask = v27;
      v28 = *((_DWORD *)v14 + 5);
      if ( _bittest(&v28, j) )
      {
        if ( (v27 & 0xF0000000) != 0 )
        {
          ObjectType = ObGetObjectType(*((_QWORD *)v14 + j + 4));
          RtlMapGenericMask(&AccessMask, (PGENERIC_MAPPING)(ObjectType + 76));
          v27 = AccessMask;
        }
        v27 &= HandleInformation.GrantedAccess;
        AccessMask = v27;
      }
      v54 = &v60[j];
      v30 = (void *)*((_QWORD *)v14 + j + 4);
      if ( *((_BYTE *)v14 + 242) )
      {
        inserted = ObOpenObjectByPointer(v30, 0, 0LL, v27, 0LL, 0, &v60[j]);
      }
      else
      {
        ObfReferenceObject(v30);
        inserted = ObInsertObject(*((PVOID *)v14 + j + 4), 0LL, AccessMask, 0, 0LL, &v60[j]);
      }
      v10 = inserted;
      if ( inserted < 0 )
      {
        WdLogSingleEntry3(3LL, *((_QWORD *)v14 + j + 4), *((unsigned __int8 *)v14 + 242), inserted);
        WdLogGlobalForLineNumber = 2834;
        break;
      }
      if ( ObIsKernelHandle(*v54) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2840;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"false == ObIsKernelHandle(hNtHandles[i])",
          2840LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    if ( v22 )
      KeUnstackDetachProcess(&ApcState);
    if ( v10 < 0 )
    {
      WdLogSingleEntry1(3LL, v10);
      WdLogGlobalForLineNumber = 2852;
      goto LABEL_88;
    }
    *(_WORD *)((char *)v14 + 241) = 257;
    v24 = (unsigned int)Handle[1];
    v7 = v41;
    v4 = v55;
  }
  v50 = *v14;
  v51 = *((_QWORD *)v14 + 2);
  if ( v42 == 1 )
  {
    v32 = (unsigned __int64 *)MmUserProbeAddress;
    if ( v7 )
    {
      v35 = (unsigned int *)(v4 + 8);
      if ( v4 + 12 > MmUserProbeAddress || v4 + 12 <= (unsigned __int64)v35 )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
        v24 = (unsigned int)Handle[1];
        v32 = (unsigned __int64 *)MmUserProbeAddress;
      }
      *v35 = v24;
    }
    else
    {
      v33 = 8LL * v24;
      v34 = Src[1];
      if ( (char *)Src[1] + v33 > (void *)MmUserProbeAddress || (char *)Src[1] + v33 <= Src[1] )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
        v32 = (unsigned __int64 *)MmUserProbeAddress;
      }
      memmove(v34, v60, v33);
    }
    v36 = (_OWORD *)(v4 + 32);
    if ( v4 + 56 > *v32 || v4 + 56 <= (unsigned __int64)v36 )
      *(_BYTE *)*v32 = 0;
    *v36 = v50;
    *(_QWORD *)(v4 + 48) = v51;
  }
  else if ( !v7 )
  {
    memmove(Src[1], v60, 8LL * v24);
  }
  ExReleasePushLockExclusiveEx((char *)v14 + 232, 0LL);
  ObfDereferenceObject(v14);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
  if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v39, (__int64)&EventProfilerExit, v40, v43);
  return 0LL;
}
