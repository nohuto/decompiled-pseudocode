/*
 * XREFs of NtSetValueKey @ 0x140869680
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406EB400 (ExpWatchProductTypeWork.c)
 *     ExpWatchLicenseInfoWork @ 0x1407A7F10 (ExpWatchLicenseInfoWork.c)
 *     InitSafeBoot @ 0x140BFA900 (InitSafeBoot.c)
 *     IopStoreSystemPartitionInformation @ 0x140C0C380 (IopStoreSystemPartitionInformation.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x140C2FE0C (ExpUpdateProductSuiteTypeInRegistry.c)
 *     CmpAddDockingInfo @ 0x140C349EC (CmpAddDockingInfo.c)
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x140206FB0 (CmpIsRegistryLockAcquired.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     EtwGetKernelTraceTimestamp @ 0x14031CDD0 (EtwGetKernelTraceTimestamp.c)
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x140458628 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     CmpIsSystemEntity @ 0x1408416A0 (CmpIsSystemEntity.c)
 *     CmpCallCallBacksEx @ 0x14084C050 (CmpCallCallBacksEx.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140863588 (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x14086392C (CmKeyBodyNeedsVirtualImage.c)
 *     CmSetValueKey @ 0x140869F98 (CmSetValueKey.c)
 *     CmObReferenceObjectByHandle @ 0x140BA93B0 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140BA9460 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BA9970 (CmpReleaseShutdownRundown.c)
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
  unsigned __int8 v18; // cl
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
  int *v35; // [rsp+20h] [rbp-218h]
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
  _KAFFINITY_EX v53; // [rsp+E0h] [rbp-158h] BYREF

  v43 = Type;
  v45 = TitleIndex;
  v49 = ValueName;
  v47 = KeyHandle;
  Src = Data;
  *(_OWORD *)&v53.Count = 0LL;
  DestinationString = 0LL;
  v46 = 0LL;
  memset(&v53.StaticBitmap[21], 0, 32);
  v50 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)&v53.StaticBitmap[21], 0x20000u);
  CmpInitializeThreadInfo(&v53);
  v6 = 0;
  v7 = 0;
  Object = 0LL;
  v8 = 0;
  v48[1] = v48;
  v48[0] = v48;
  memset_0(&v53.StaticBitmap[13], 0, 0x40uLL);
  RtlInitUnicodeString(&DestinationString, 0LL);
  v41 = 0LL;
  v51 = 0LL;
  v42 = 0;
  Privileges = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v36 = PreviousMode;
  v10 = 0;
  memset(&v53.StaticBitmap[1], 0, 32);
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
    SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)&v53.StaticBitmap[1]);
    v10 = 1;
    if ( !CmpVEEnabled
      || CmpIsSystemEntity(
           KeGetCurrentThread()->PreviousMode,
           (struct _SECURITY_SUBJECT_CONTEXT *)&v53.StaticBitmap[1],
           &v42) )
    {
      goto LABEL_100;
    }
    v17 = CmObReferenceObjectByHandle((_DWORD)v47, 131097, v33, v36, (__int64)&Object, (__int64)&v46);
    v37 = v17;
    if ( v17 < 0 )
      goto LABEL_73;
    if ( !CmKeyBodyNeedsVirtualImage((__int64)Object) )
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
  if ( v18
    || *((_QWORD *)&CmpRegistryProcess + 1)
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
        Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithQuota();
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
          v41 = &v53.StaticBitmap[25];
          v26 = Privileges;
        }
        else
        {
          v41 = Privileges;
          if ( v23 == DestinationString.Length )
            v26 = (PPRIVILEGE_SET)&v53.StaticBitmap[25];
          else
            v26 = (PPRIVILEGE_SET)((char *)Privileges + v24);
        }
      }
      else
      {
LABEL_26:
        v41 = &v53.StaticBitmap[25];
        v26 = (PPRIVILEGE_SET)((char *)&v53.StaticBitmap[25] + v24);
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
      v53.StaticBitmap[13] = (unsigned __int64)Object;
      v53.StaticBitmap[14] = (unsigned __int64)&DestinationString;
      v53.StaticBitmap[15] = __PAIR64__(v43, v45);
      v53.StaticBitmap[16] = (unsigned __int64)Src;
      LODWORD(v53.StaticBitmap[17]) = v22;
      v29 = CmpCallCallBacksEx(1u, (__int64)&v53.StaticBitmap[13], 0LL, 1, 0x10u, (__int64)Object, (__int64)v48);
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
      || (v35 = &v42,
          v17 = CmKeyBodyReplicateToVirtual((_QWORD **)&Object, v36, 2u, (__int64)&v53.StaticBitmap[1]),
          v37 = v17,
          v10 = v8,
          v17 >= 0) )
    {
      LODWORD(v35) = v22;
      v17 = CmSetValueKey(
              (_DWORD)Object,
              (unsigned int)&DestinationString,
              v43,
              (_DWORD)Src,
              (size_t)v35,
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
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&v53.StaticBitmap[1]);
  if ( v6 )
  {
    if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v48[0] != v48 )
    {
      memset((char *)&v53.StaticBitmap[8] + 4, 0, 28);
      v53.StaticBitmap[5] = (unsigned __int64)Object;
      v53.StaticBitmap[6] = (unsigned int)v17;
      LODWORD(v53.StaticBitmap[8]) = v17;
      v53.StaticBitmap[7] = (unsigned __int64)&v53.StaticBitmap[13];
      CmpCallCallBacksEx(0x10u, (__int64)&v53.StaticBitmap[5], 0LL, 0, 0x10u, (__int64)Object, (__int64)v48);
      v17 = v53.StaticBitmap[8];
    }
    v37 = v17;
  }
  if ( v7 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v17 = v37;
  }
  v30 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
  if ( CmpTraceRoutine )
  {
    v32 = v50;
    LOBYTE(v32) = 14;
    guard_dispatch_icall_no_overrides(v32);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v16 )
    CmpReleaseShutdownRundown(v30);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v53);
  return v17;
}
