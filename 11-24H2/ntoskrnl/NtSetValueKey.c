/*
 * XREFs of NtSetValueKey @ 0x14086EB40
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406F4C60 (ExpWatchProductTypeWork.c)
 *     ExpWatchLicenseInfoWork @ 0x1407B7800 (ExpWatchLicenseInfoWork.c)
 *     InitSafeBoot @ 0x140C0D900 (InitSafeBoot.c)
 *     IopStoreSystemPartitionInformation @ 0x140C1F590 (IopStoreSystemPartitionInformation.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x140C4326C (ExpUpdateProductSuiteTypeInRegistry.c)
 *     CmpAddDockingInfo @ 0x140C47DF8 (CmpAddDockingInfo.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     EtwGetKernelTraceTimestamp @ 0x1403AEC60 (EtwGetKernelTraceTimestamp.c)
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x140414BC0 (CmpIsRegistryLockAcquired.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x14044E170 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmpCallCallBacksEx @ 0x140843FD0 (CmpCallCallBacksEx.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     CmSetValueKey @ 0x14086F460 (CmSetValueKey.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     CmpIsSystemEntity @ 0x1408E4D80 (CmpIsSystemEntity.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140961528 (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x14096294C (CmKeyBodyNeedsVirtualImage.c)
 *     CmObReferenceObjectByHandle @ 0x140BBB350 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140BBB400 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BBB880 (CmpReleaseShutdownRundown.c)
 */

NTSTATUS __cdecl NtSetValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        ULONG TitleIndex,
        ULONG Type,
        PVOID Data,
        ULONG DataSize)
{
  char v6; // r13
  char v7; // r14
  char v8; // r15
  unsigned __int8 PreviousMode; // di
  char v10; // si
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r8d
  char v16; // r12
  NTSTATUS v17; // edi
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned __int64 v20; // r8
  unsigned __int16 Length; // dx
  ULONG v22; // r14d
  unsigned int v23; // esi
  unsigned int v24; // edi
  unsigned int v25; // eax
  PPRIVILEGE_SET v26; // rsi
  wchar_t *v27; // rdi
  struct _KTHREAD *CurrentThread; // rax
  int v29; // eax
  PVOID v30; // rcx
  __int64 v32; // rcx
  int v33; // r8d
  bool v34; // zf
  size_t v35; // [rsp+20h] [rbp-218h]
  unsigned __int8 v36; // [rsp+40h] [rbp-1F8h]
  int v37; // [rsp+44h] [rbp-1F4h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-1E8h] BYREF
  PVOID Object; // [rsp+60h] [rbp-1D8h] BYREF
  void *Src; // [rsp+68h] [rbp-1D0h]
  void *v41; // [rsp+70h] [rbp-1C8h]
  int v42; // [rsp+78h] [rbp-1C0h] BYREF
  ULONG v43; // [rsp+7Ch] [rbp-1BCh]
  PPRIVILEGE_SET Privileges; // [rsp+80h] [rbp-1B8h]
  ULONG v45; // [rsp+88h] [rbp-1B0h]
  __int64 v46; // [rsp+90h] [rbp-1A8h] BYREF
  HANDLE v47; // [rsp+98h] [rbp-1A0h]
  _QWORD v48[2]; // [rsp+A0h] [rbp-198h] BYREF
  UNICODE_STRING *v49; // [rsp+B0h] [rbp-188h]
  __int64 v50; // [rsp+B8h] [rbp-180h]
  struct _PRIVILEGE_SET *v51; // [rsp+C0h] [rbp-178h]
  __m128i v52; // [rsp+D0h] [rbp-168h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E0h] [rbp-158h] BYREF
  PVOID v54; // [rsp+100h] [rbp-138h] BYREF
  NTSTATUS v55; // [rsp+108h] [rbp-130h]
  int v56; // [rsp+10Ch] [rbp-12Ch]
  _BYTE *v57; // [rsp+110h] [rbp-128h]
  NTSTATUS v58; // [rsp+118h] [rbp-120h]
  __int128 v59; // [rsp+11Ch] [rbp-11Ch]
  __int64 v60; // [rsp+12Ch] [rbp-10Ch]
  int v61; // [rsp+134h] [rbp-104h]
  _BYTE v62[256]; // [rsp+138h] [rbp-100h] BYREF

  v43 = Type;
  v45 = TitleIndex;
  v49 = ValueName;
  v47 = KeyHandle;
  Src = Data;
  memset(v62, 0, 24);
  DestinationString = 0LL;
  v46 = 0LL;
  memset(&v62[88], 0, 32);
  v50 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)&v62[88], 0x20000u);
  CmpInitializeThreadInfo((_KAFFINITY_EX *)v62);
  v6 = 0;
  v7 = 0;
  Object = 0LL;
  v8 = 0;
  v48[1] = v48;
  v48[0] = v48;
  memset_0(&v62[24], 0, 0x40uLL);
  RtlInitUnicodeString(&DestinationString, 0LL);
  v41 = 0LL;
  v51 = 0LL;
  v42 = 0;
  Privileges = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v36 = PreviousMode;
  v10 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v16 = CmpAcquireShutdownRundown(v12, v11, v13, v14);
  if ( !v16 )
  {
    v17 = -1073741431;
    v37 = -1073741431;
    goto LABEL_73;
  }
  v17 = CmObReferenceObjectByHandle((_DWORD)v47, 2, v15, PreviousMode, (__int64)&Object, (__int64)&v46);
  v37 = v17;
  if ( v17 == -1073741790 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    v10 = 1;
    if ( !CmpVEEnabled || (unsigned __int8)CmpIsSystemEntity((unsigned __int8)KeGetCurrentThread()->PreviousMode) )
      goto LABEL_100;
    v17 = CmObReferenceObjectByHandle((_DWORD)v47, 131097, v33, v36, (__int64)&Object, (__int64)&v46);
    v37 = v17;
    if ( v17 < 0 )
      goto LABEL_73;
    if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
    {
LABEL_100:
      v17 = -1073741790;
      v37 = -1073741790;
      goto LABEL_73;
    }
    v8 = 1;
  }
  v10 = v8;
  if ( v17 < 0 )
    goto LABEL_73;
  if ( CmpTraceRoutine && Object )
    v50 = *((_QWORD *)Object + 1);
  v18 = v36;
  if ( v36 == 1 )
  {
    v52 = 0LL;
    v19 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v49 < 0x7FFFFFFF0000LL )
      v19 = (__int64)v49;
    v52.m128i_i32[0] = *(_DWORD *)v19;
    v20 = *(_QWORD *)(v19 + 8);
    v52.m128i_i64[1] = v20;
    DestinationString = (UNICODE_STRING)v52;
    DestinationString.MaximumLength = _mm_cvtsi128_si32(v52);
    Length = v52.m128i_i16[0];
    if ( v52.m128i_i16[0] )
    {
      if ( (v20 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v52.m128i_u16[0] + v20 > 0x7FFFFFFF0000LL || v52.m128i_u16[0] + v20 < v20 )
        Length = DestinationString.Length;
    }
    v22 = DataSize;
    if ( DataSize && ((unsigned __int64)Src + DataSize > 0x7FFFFFFF0000LL || (char *)Src + DataSize < Src) )
      Length = DestinationString.Length;
    goto LABEL_18;
  }
  DestinationString = *v49;
  v41 = 0LL;
  v22 = DataSize;
  if ( DataSize )
  {
    Length = DestinationString.Length;
LABEL_18:
    v18 = v36;
    goto LABEL_19;
  }
  Length = DestinationString.Length;
LABEL_19:
  if ( Length > 0x7FFFu || (Length & 1) != 0 || v22 > 0x7FFFF000 )
  {
    v17 = -1073741811;
    v37 = -1073741811;
    v10 = v8;
    v7 = 0;
    goto LABEL_73;
  }
  v23 = Length;
  v24 = (Length + 7) & 0xFFFFFFF8;
  v25 = v24 + v22;
  if ( v24 + v22 < v22 )
  {
    v17 = -1073741811;
    v37 = -1073741811;
    v10 = v8;
    v7 = 0;
    goto LABEL_73;
  }
  if ( (_BYTE)v18
    || (v18 = *((_QWORD *)&CmpRegistryProcess + 1)) != 0
    && (DestinationString.Buffer <= (wchar_t *)0x7FFFFFFEFFFFLL
     || *((_QWORD *)&CmpRegistryProcess + 1) && (unsigned __int64)Src <= 0x7FFFFFFEFFFFLL) )
  {
    if ( v25 )
    {
      if ( v25 <= 0x40 )
        goto LABEL_26;
      if ( v22 <= 0x40 )
      {
        if ( Length <= 0x40u && v22 < Length )
          v23 = v22;
      }
      else
      {
        v23 = v24 + v22;
        if ( Length <= 0x40u )
          v23 = v22;
      }
      if ( v23 )
      {
        Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithQuota(v18, v23, 0x6E566D43u);
        if ( !Privileges )
        {
          v17 = -1073741670;
          v37 = -1073741670;
          v10 = v8;
          v7 = 0;
          goto LABEL_73;
        }
        Length = DestinationString.Length;
        if ( v23 == v22 )
        {
          v41 = &v62[120];
          v26 = Privileges;
        }
        else
        {
          v41 = Privileges;
          if ( v23 == DestinationString.Length )
            v26 = (PPRIVILEGE_SET)&v62[120];
          else
            v26 = (PPRIVILEGE_SET)((char *)Privileges + v24);
        }
      }
      else
      {
LABEL_26:
        v41 = &v62[120];
        v26 = (PPRIVILEGE_SET)&v62[v24 + 120];
      }
    }
    else
    {
      v26 = v51;
    }
    if ( Length )
    {
      v27 = (wchar_t *)v41;
      memmove(v41, DestinationString.Buffer, Length);
      DestinationString.Buffer = v27;
      Length = DestinationString.Length;
    }
    else
    {
      DestinationString.Buffer = 0LL;
    }
    if ( v22 )
    {
      memmove(v26, Src, v22);
      Src = v26;
      Length = DestinationString.Length;
    }
    else
    {
      Src = 0LL;
    }
  }
  if ( Length )
  {
    do
    {
      if ( DestinationString.Buffer[((unsigned __int64)Length >> 1) - 1] )
        break;
      v34 = Length == 2;
      Length -= 2;
      DestinationString.Length = Length;
    }
    while ( !v34 );
  }
  if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 8LL) & 0x80u) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
    {
      *(_QWORD *)&v62[24] = Object;
      *(_QWORD *)&v62[32] = &DestinationString;
      *(_DWORD *)&v62[40] = v45;
      *(_DWORD *)&v62[44] = v43;
      *(_QWORD *)&v62[48] = Src;
      *(_DWORD *)&v62[56] = v22;
      v29 = CmpCallCallBacksEx(1u, (__int64)&v62[24], 0LL, 1, 0x10u, (__int64)Object, (__int64)v48);
      if ( v29 < 0 )
      {
        v10 = v8;
        v17 = 0;
        if ( v29 != -1073740541 )
          v17 = v29;
        v37 = v17;
        goto LABEL_72;
      }
      v6 = 1;
    }
    if ( !v8
      || (v17 = CmKeyBodyReplicateToVirtual(&Object, v36, 2LL, &SubjectContext, &v42), v37 = v17, v10 = v8, v17 >= 0) )
    {
      LODWORD(v35) = v22;
      v17 = CmSetValueKey(
              (_DWORD)Object,
              (unsigned int)&DestinationString,
              v43,
              (_DWORD)Src,
              v35,
              (__int64)v47,
              (v46 & 4) != 0);
      v37 = v17;
      v10 = v8;
    }
LABEL_72:
    v7 = 1;
    goto LABEL_73;
  }
  v17 = -1073741790;
  v37 = -1073741790;
  v10 = v8;
  v7 = 0;
LABEL_73:
  if ( v10 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v6 )
  {
    if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v48[0] != v48 )
    {
      v56 = 0;
      v59 = 0LL;
      v60 = 0LL;
      v61 = 0;
      v54 = Object;
      v55 = v17;
      v58 = v17;
      v57 = &v62[24];
      CmpCallCallBacksEx(0x10u, (__int64)&v54, 0LL, 0, 0x10u, (__int64)Object, (__int64)v48);
      v17 = v58;
    }
    v37 = v17;
  }
  if ( v7 )
  {
    KeLeaveCriticalRegionThread();
    v17 = v37;
  }
  v30 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
  if ( CmpTraceRoutine )
  {
    v32 = v50;
    LOBYTE(v32) = 14;
    guard_dispatch_icall_no_overrides(v32, &v62[88]);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v16 )
    CmpReleaseShutdownRundown(v30);
  CmpCleanupThreadInfo((_KAFFINITY_EX **)v62);
  return v17;
}
