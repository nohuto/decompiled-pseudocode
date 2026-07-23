/*
 * XREFs of SLUpdateLicenseDataInternal @ 0x1407BA654
 * Callers:
 *     sub_14095B190 @ 0x14095B190 (sub_14095B190.c)
 *     ExUpdateLicenseData @ 0x140A98490 (ExUpdateLicenseData.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     MiRemoveFromSystemSpace @ 0x140290E7C (MiRemoveFromSystemSpace.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PsGetCurrentServerSilo @ 0x1403C3490 (PsGetCurrentServerSilo.c)
 *     PsIsHostSilo @ 0x1404329D0 (PsIsHostSilo.c)
 *     qsort @ 0x1404FC5E0 (qsort.c)
 *     ExpGetLicenseTamperState @ 0x140653EA0 (ExpGetLicenseTamperState.c)
 *     ExpLicUpdateChecksum @ 0x14065400C (ExpLicUpdateChecksum.c)
 *     ExpSetLicenseTamperState @ 0x140654224 (ExpSetLicenseTamperState.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwCreateSection @ 0x1406A7CF0 (ZwCreateSection.c)
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ntoskrnl_24 @ 0x1407B89D0 (ntoskrnl_24.c)
 *     sub_1407B9180 @ 0x1407B9180 (sub_1407B9180.c)
 *     sub_1407B966C @ 0x1407B966C (sub_1407B966C.c)
 *     sub_1407B97AC @ 0x1407B97AC (sub_1407B97AC.c)
 *     SLSendPolicyChangeNotifications @ 0x1407BA62C (SLSendPolicyChangeNotifications.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     MmMapViewInSessionSpace @ 0x1408EB520 (MmMapViewInSessionSpace.c)
 *     ntoskrnl_20 @ 0x14095B5C0 (ntoskrnl_20.c)
 *     ExpReducedLicenseData @ 0x140A9BCA0 (ExpReducedLicenseData.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SLUpdateLicenseDataInternal(__int64 a1, int a2, unsigned int *a3)
{
  void *v6; // r12
  void *v7; // r13
  int v8; // ecx
  __int64 v9; // rdx
  unsigned int v10; // r9d
  char *v11; // r12
  char v12; // r14
  char *v13; // rbx
  _DWORD *v14; // rcx
  unsigned int v15; // edx
  struct _KTHREAD *v16; // rax
  char *v17; // rax
  char *v18; // r13
  bool v19; // si
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rdx
  unsigned int updated; // ecx
  __int64 v24; // r9
  NTSTATUS v25; // ebx
  PVOID v26; // rsi
  unsigned int *v27; // rsi
  _DWORD *v28; // rcx
  struct _KTHREAD *v29; // rax
  char *v30; // rsi
  signed __int64 *v31; // rdi
  size_t v32; // rdi
  void *Pool2; // rax
  char *v34; // rdi
  unsigned int v35; // r12d
  unsigned int v36; // r13d
  _QWORD *v37; // rdi
  int v38; // eax
  __int64 v39; // r9
  __int64 v40; // rdx
  PVOID v41; // r12
  struct _KTHREAD *v42; // rax
  char *v43; // rax
  __int64 v44; // rdx
  char *v45; // rdi
  __int64 v46; // r10
  PVOID v47; // r13
  __int64 v48; // rsi
  unsigned int v49; // ecx
  __int64 v50; // r9
  int v51; // edi
  unsigned __int64 CurrentServerSilo; // rax
  char v53; // al
  bool v54; // r12
  PVOID v55; // rax
  struct _KTHREAD *v56; // rax
  volatile signed __int64 *v57; // rdi
  char *v58; // rsi
  volatile signed __int64 *v59; // rax
  struct _KTHREAD *v60; // rax
  char *v61; // rax
  char *v62; // rsi
  signed int v64; // [rsp+40h] [rbp-1C8h]
  bool v65; // [rsp+44h] [rbp-1C4h]
  char v66; // [rsp+45h] [rbp-1C3h]
  bool v67; // [rsp+46h] [rbp-1C2h]
  size_t NumOfElements; // [rsp+48h] [rbp-1C0h] BYREF
  void *Src; // [rsp+50h] [rbp-1B8h]
  void *v70; // [rsp+58h] [rbp-1B0h]
  int v71; // [rsp+60h] [rbp-1A8h] BYREF
  unsigned int v72; // [rsp+64h] [rbp-1A4h]
  PVOID MappedBase; // [rsp+68h] [rbp-1A0h] BYREF
  int v74; // [rsp+70h] [rbp-198h]
  int v75; // [rsp+74h] [rbp-194h] BYREF
  PVOID v76; // [rsp+78h] [rbp-190h]
  LARGE_INTEGER MaximumSize; // [rsp+88h] [rbp-180h] BYREF
  HANDLE SectionHandle; // [rsp+90h] [rbp-178h] BYREF
  PVOID v79; // [rsp+98h] [rbp-170h]
  PVOID Object; // [rsp+A0h] [rbp-168h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+A8h] [rbp-160h]
  __int128 v82; // [rsp+B0h] [rbp-158h] BYREF
  __int128 v83; // [rsp+C0h] [rbp-148h]
  __int128 v84; // [rsp+D0h] [rbp-138h]
  __int128 v85; // [rsp+E0h] [rbp-128h] BYREF
  __int128 v86; // [rsp+F0h] [rbp-118h]
  __int128 v87; // [rsp+100h] [rbp-108h]
  int v88; // [rsp+110h] [rbp-F8h]
  ULONG_PTR ViewSize; // [rsp+118h] [rbp-F0h] BYREF
  __int64 v90; // [rsp+120h] [rbp-E8h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+128h] [rbp-E0h] BYREF
  __int128 v92; // [rsp+158h] [rbp-B0h] BYREF
  __int128 v93; // [rsp+168h] [rbp-A0h]
  __int128 v94; // [rsp+178h] [rbp-90h]
  struct _KTHREAD *CurrentThread; // [rsp+188h] [rbp-80h]
  struct _KTHREAD *v96; // [rsp+190h] [rbp-78h]
  __int64 v97; // [rsp+198h] [rbp-70h]
  _OWORD v98[6]; // [rsp+1A0h] [rbp-68h] BYREF
  char v99; // [rsp+220h] [rbp+18h]

  v67 = 0;
  v65 = 0;
  v99 = 0;
  SectionHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  MaximumSize.QuadPart = 0LL;
  MappedBase = 0LL;
  BugCheckParameter1 = 0LL;
  v79 = 0LL;
  v6 = 0LL;
  v70 = 0LL;
  LODWORD(NumOfElements) = 0;
  v7 = 0LL;
  Src = 0LL;
  v71 = 0;
  v75 = 0;
  v92 = 0LL;
  v93 = 0LL;
  v94 = 0LL;
  if ( !a3 || (unsigned int)(a2 - 25) > 0x13FE7 || ((unsigned __int8)a3 & 3) != 0 )
  {
    v64 = -1073741811;
    goto LABEL_152;
  }
  v8 = *a3;
  if ( *a3 > 0x14000 || (v9 = a3[1], (unsigned int)v9 > 0x14000) || (v10 = a3[2], v10 > 0x14000) )
  {
    v64 = -1073741760;
LABEL_152:
    v12 = 1;
    goto LABEL_155;
  }
  v11 = (char *)a3 + v9 + 20;
  if ( ((unsigned __int8)v11 & 3) != 0 || v10 + (_DWORD)v9 + 20 != v8 )
  {
    v12 = 1;
LABEL_9:
    v64 = -1073741811;
    goto LABEL_10;
  }
  v12 = 1;
  if ( v8 != a2 || a3[4] != 1 )
    goto LABEL_9;
  v64 = 0;
  *(_BYTE *)(a1 + 46856) = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = (char *)KeAbPreAcquire(a1 + 46840, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 46840), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 46840), 0, v13, a1 + 46840);
  if ( v13 )
    v13[10] = 1;
  v76 = *(PVOID *)a1;
  v65 = v76 == 0LL;
  if ( !(unsigned __int8)ExpReducedLicenseData() )
  {
    if ( !v76 && (a3[3] & 1) != 0 )
    {
      v64 = -1073741811;
      goto LABEL_35;
    }
LABEL_25:
    v67 = 0;
    if ( !v76 )
    {
      v14 = *(_DWORD **)(a1 + 46832);
      if ( v14 )
      {
        if ( !*(_BYTE *)(a1 + 46992) && *a3 == *v14 )
        {
          v15 = a3[1];
          if ( v15 == v14[1]
            && a3[2] == v14[2]
            && a3[3] == v14[3]
            && a3[4] == v14[4]
            && RtlCompareMemory(v14 + 5, a3 + 5, v15) == a3[1] )
          {
            v67 = RtlCompareMemory(
                    (const void *)(*(unsigned int *)(*(_QWORD *)(a1 + 46832) + 4LL) + *(_QWORD *)(a1 + 46832) + 20LL),
                    v11,
                    a3[2]) == a3[2];
          }
        }
      }
    }
    goto LABEL_35;
  }
  if ( v76 )
    goto LABEL_25;
  v64 = -1073741823;
LABEL_35:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 46840), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 46840));
  KeAbPostRelease(a1 + 46840);
  KeLeaveCriticalRegion();
  if ( v64 < 0 )
    goto LABEL_150;
  if ( v67 )
  {
    v16 = KeGetCurrentThread();
    --v16->KernelApcDisable;
    v17 = (char *)KeAbPreAcquire(a1 + 46840, 0LL);
    v18 = v17;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 46840), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 46840), v17, a1 + 46840);
    v6 = 0LL;
    if ( v18 )
      v18[10] = 1;
    ExpGetLicenseTamperState(a1, &v71);
    v19 = v71 != 0;
    v20 = *(unsigned int *)(a1 + 46824);
    HIDWORD(v82) = 0;
    *(_DWORD *)((char *)&v84 + 9) = 0;
    *(_WORD *)((char *)&v84 + 13) = 0;
    HIBYTE(v84) = 0;
    if ( (_DWORD)v20 && a1 == -24 )
    {
      v21 = -1073741811;
    }
    else
    {
      *(_QWORD *)&v82 = 0LL;
      v83 = 0uLL;
      DWORD2(v82) = 0;
      *(_QWORD *)&v84 = 10800LL;
      BYTE8(v84) = 1;
      updated = ExpLicUpdateChecksum((__int64)(a3 + 5), v20, &v82);
      if ( !updated )
      {
        if ( (_DWORD)v22 )
        {
          updated = (unsigned __int64)(16 * v22) > 0xFFFFFFFF ? 0xC0000095 : 0;
          if ( (unsigned __int64)(16 * v22) <= 0xFFFFFFFF )
            updated = ExpLicUpdateChecksum(v24, 0xFFFFFFFFLL, &v82);
        }
      }
      if ( updated )
      {
        *(_QWORD *)&v82 = 0LL;
        DWORD2(v82) = 4;
      }
      v92 = v82;
      v93 = v83;
      v94 = v84;
      v21 = 0;
      if ( !updated )
        v21 = 0;
    }
    if ( v21 >= 0 )
      ntoskrnl_20(a1, &v92, 7LL, 1LL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 46840), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 46840));
    KeAbPostRelease(a1 + 46840);
    KeLeaveCriticalRegion();
    if ( v19 )
      SLSendPolicyChangeNotifications(a1);
    v64 = 0x40000000;
    v7 = 0LL;
    goto LABEL_155;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 544;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  MaximumSize.QuadPart = *a3;
  v64 = ZwCreateSection(&SectionHandle, 0xF0007u, &ObjectAttributes, &MaximumSize, 4u, 0x8000000u, 0LL);
  if ( v64 < 0 )
    goto LABEL_150;
  Object = 0LL;
  v25 = ObReferenceObjectByHandle(SectionHandle, 0, 0LL, 0, &Object, 0LL);
  v26 = Object;
  v79 = Object;
  v64 = v25;
  ZwClose(SectionHandle);
  if ( v25 < 0 || (ViewSize = 0LL, v64 = MmMapViewInSessionSpace(v26, &MappedBase, &ViewSize), v64 < 0) )
  {
LABEL_150:
    v7 = Src;
    v6 = Src;
    goto LABEL_155;
  }
  v27 = (unsigned int *)MappedBase;
  *(_OWORD *)MappedBase = *(_OWORD *)a3;
  v27[4] = a3[4];
  memmove(v27 + 5, a3 + 5, a3[1]);
  memmove((char *)v27 + a3[1] + 20, v11, a3[2]);
  v28 = (unsigned int *)((char *)v27 + v27[1] + 20);
  if ( v27[2] != 4 || !v28 || *v28 != 69 )
  {
    v64 = -1073741761;
    v7 = Src;
    v6 = Src;
    goto LABEL_155;
  }
  v64 = sub_1407B966C((__int64)v27, 1, 0LL, 0, (unsigned int *)&NumOfElements);
  if ( v64 != -1073741789 )
  {
    v7 = 0LL;
    goto LABEL_80;
  }
  v29 = KeGetCurrentThread();
  --v29->KernelApcDisable;
  v30 = (char *)KeAbPreAcquire(a1 + 46840, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 46840), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 46840), 0, v30, a1 + 46840);
  if ( v30 )
    v30[10] = 1;
  v64 = (unsigned int)NumOfElements > 0xB6D ? 0xC000000D : 0;
  v31 = (signed __int64 *)(a1 + 46840);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 46840), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v31);
  KeAbPostRelease((ULONG_PTR)v31);
  KeLeaveCriticalRegion();
  if ( v64 < 0 )
  {
LABEL_10:
    v7 = 0LL;
LABEL_11:
    v6 = 0LL;
    goto LABEL_155;
  }
  v32 = (unsigned int)NumOfElements;
  Pool2 = (void *)ExAllocatePool2(0x100uLL, 16LL * (unsigned int)NumOfElements, 0x20534C53u);
  v7 = Pool2;
  Src = Pool2;
  if ( !Pool2 )
  {
    v64 = -1073741801;
    goto LABEL_11;
  }
  v64 = sub_1407B966C((__int64)MappedBase, 0, Pool2, NumOfElements, 0LL);
  if ( v64 >= 0 )
    qsort(v7, v32, 0x10uLL, (int (__cdecl *)(const void *, const void *))sub_1407B9180);
LABEL_80:
  if ( v64 < 0 )
  {
    v6 = v70;
    if ( v64 == -1073741762 )
      v64 = -1073741811;
    goto LABEL_155;
  }
  v66 = 0;
  v96 = KeGetCurrentThread();
  --v96->KernelApcDisable;
  v34 = (char *)KeAbPreAcquire(a1 + 46840, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 46840), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 46840), 0, v34, a1 + 46840);
  if ( v34 )
    v34[10] = 1;
  if ( !v76 )
  {
    v35 = 0;
    v72 = 0;
    v36 = 0;
    v74 = 0;
    while ( v35 < (unsigned int)NumOfElements && v36 < *(_DWORD *)(a1 + 46824) )
    {
      v37 = (char *)Src + 16 * v35;
      v38 = sub_1407B9180(v37, (_QWORD *)(a1 + 16LL * v36 + 24));
      v88 = v38;
      v39 = v37[1];
      v90 = v39;
      v40 = *(_QWORD *)(a1 + 16 * (v36 + 2LL));
      v97 = v40;
      if ( v38 >= 0 )
      {
        if ( v38 <= 0 )
        {
          if ( (*(_DWORD *)(v39 + 8) & 2) != 0
            && (*(_WORD *)(v39 + 6) != *(_WORD *)(v40 + 6)
             || memcmp(
                  (const void *)(v39 + 16 + *(unsigned __int16 *)(v39 + 2)),
                  (const void *)(*(unsigned __int16 *)(v40 + 2) + 16LL + v40),
                  *(unsigned __int16 *)(v40 + 6))) )
          {
LABEL_93:
            v66 = 1;
            goto LABEL_104;
          }
          v72 = ++v35;
        }
        v74 = ++v36;
      }
      else
      {
        if ( (*(_DWORD *)(v39 + 8) & 2) != 0 )
          goto LABEL_93;
        v72 = ++v35;
      }
    }
    while ( v35 < (unsigned int)NumOfElements )
    {
      v90 = *((_QWORD *)Src + 2 * v35 + 1);
      if ( (*(_DWORD *)(v90 + 8) & 2) != 0 )
        goto LABEL_93;
      v72 = ++v35;
    }
  }
LABEL_104:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 46840), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 46840));
  KeAbPostRelease(a1 + 46840);
  KeLeaveCriticalRegion();
  v41 = v79;
  PsReferenceSiloContext(v79);
  v42 = KeGetCurrentThread();
  --v42->KernelApcDisable;
  v43 = (char *)KeAbPreAcquire(a1 + 46840, 0LL);
  v45 = v43;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 46840), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 46840), v43, a1 + 46840);
  LOBYTE(v46) = 0;
  if ( v45 )
    v45[10] = 1;
  HIDWORD(v85) = 0;
  *(_DWORD *)((char *)&v87 + 9) = 0;
  *(_WORD *)((char *)&v87 + 13) = 0;
  HIBYTE(v87) = 0;
  v47 = MappedBase;
  if ( MappedBase )
  {
    v48 = (unsigned int)NumOfElements;
    if ( !(_DWORD)NumOfElements || Src )
    {
      *(_QWORD *)&v85 = 0LL;
      v86 = 0uLL;
      DWORD2(v85) = 0;
      *(_QWORD *)&v87 = 10800LL;
      BYTE8(v87) = 1;
      v49 = ExpLicUpdateChecksum((__int64)MappedBase + 20, v44, &v85);
      if ( !v49 )
      {
        if ( (_DWORD)v48 )
        {
          v49 = (unsigned __int64)(16 * v48) > 0xFFFFFFFF ? 0xC0000095 : 0;
          if ( (unsigned __int64)(16 * v48) <= 0xFFFFFFFF )
            v49 = ExpLicUpdateChecksum(v50, 0xFFFFFFFFLL, &v85);
        }
      }
      if ( v49 )
      {
        *(_QWORD *)&v85 = v46;
        DWORD2(v85) = 4;
      }
      v92 = v85;
      v93 = v86;
      v94 = v87;
      v51 = v46;
      if ( !v49 )
        v51 = 0;
      goto LABEL_124;
    }
  }
  else
  {
    LODWORD(v48) = NumOfElements;
  }
  v51 = -1073741811;
LABEL_124:
  v64 = v51;
  if ( v51 < 0 )
  {
    v7 = Src;
    v54 = v46;
  }
  else
  {
    ntoskrnl_20(a1, &v92, 7LL, 1LL);
    v70 = *(void **)(a1 + 16);
    BugCheckParameter1 = *(_QWORD *)(a1 + 46832);
    *(_QWORD *)(a1 + 16) = v41;
    *(_QWORD *)(a1 + 46832) = v47;
    MappedBase = 0LL;
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( !PsIsHostSilo(CurrentServerSilo) && *(_QWORD *)a1 )
      ExFreePoolWithTag(*(PVOID *)a1, 0x69534C53u);
    *(_QWORD *)a1 = 0LL;
    v99 = *(_BYTE *)(a1 + 46992);
    *(_BYTE *)(a1 + 46992) = 0;
    memset_0((void *)(a1 + 24), 0, 16LL * *(unsigned int *)(a1 + 46824));
    *(_DWORD *)(a1 + 46824) = 0;
    v7 = Src;
    if ( Src )
    {
      memmove((void *)(a1 + 24), Src, 16LL * (unsigned int)v48);
      *(_DWORD *)(a1 + 46824) = v48;
    }
    *(_BYTE *)(a1 + 46828) = 1;
    ExpGetLicenseTamperState(a1, &v75);
    v53 = v65;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 46832) + 12LL) & 1) != 0 )
      v53 = 1;
    v65 = v53;
    ExpSetLicenseTamperState(a1, 2 * (*(_DWORD *)(*(_QWORD *)(a1 + 46832) + 12LL) & 1));
    ExpGetLicenseTamperState(a1, &v71);
    v54 = v75 != v71 && (!v75 || !v71);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 46840), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 46840));
  KeAbPostRelease(a1 + 46840);
  KeLeaveCriticalRegion();
  if ( v51 < 0 )
    goto LABEL_154;
  v55 = v76;
  if ( v76 )
    goto LABEL_144;
  v64 = sub_1407B97AC(a1);
  if ( v64 < 0 )
  {
LABEL_154:
    v6 = v70;
    goto LABEL_155;
  }
  v55 = v76;
LABEL_144:
  if ( v54 || !v55 )
    SLSendPolicyChangeNotifications(a1);
  v64 = 0;
  v6 = v70;
  if ( v66 == 1 )
    v64 = 263;
LABEL_155:
  if ( v99 && !*(_BYTE *)(a1 + 46992) )
    ntoskrnl_24(&KernelLicensingCacheCorruptionFixed);
  if ( v65 )
  {
    v56 = KeGetCurrentThread();
    --v56->KernelApcDisable;
    v57 = (volatile signed __int64 *)(a1 + 46840);
    v58 = (char *)KeAbPreAcquire(a1 + 46840, 0LL);
    v59 = (volatile signed __int64 *)(a1 + 46840);
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 46840), 0LL) )
    {
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 46840), v58, a1 + 46840);
      v59 = (volatile signed __int64 *)(a1 + 46840);
    }
    if ( v58 )
    {
      v58[10] = 1;
      v57 = v59;
    }
    memset(v98, 0, 48);
    ntoskrnl_20(a1, v98, 32LL, 0LL);
    if ( (_InterlockedExchangeAdd64(v57, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v57);
    KeAbPostRelease((ULONG_PTR)v57);
    KeLeaveCriticalRegion();
  }
  if ( v79 )
    ObfDereferenceObject(v79);
  if ( v6 )
    ObfDereferenceObject(v6);
  if ( MappedBase )
    MiRemoveFromSystemSpace((ULONG_PTR)MappedBase, 1);
  if ( BugCheckParameter1 )
    MiRemoveFromSystemSpace(BugCheckParameter1, 1);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v64 == -1073741811 || (unsigned int)(v64 + 1073741761) <= 1 )
  {
    v60 = KeGetCurrentThread();
    --v60->KernelApcDisable;
    v61 = (char *)KeAbPreAcquire(a1 + 46840, 0LL);
    v62 = v61;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 46840), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 46840), v61, a1 + 46840);
    if ( v62 )
      v62[10] = 1;
    ExpGetLicenseTamperState(a1, &v71);
    if ( v71 )
      v12 = 0;
    else
      ExpSetLicenseTamperState(a1, 5);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 46840), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 46840));
    KeAbPostRelease(a1 + 46840);
    KeLeaveCriticalRegion();
    if ( v12 )
      SLSendPolicyChangeNotifications(a1);
  }
  return (unsigned int)v64;
}
