/*
 * XREFs of SepAppendAceToTokenObjectAcl @ 0x1408E6CE0
 * Callers:
 *     SepCreateAppContainerToken @ 0x140606A30 (SepCreateAppContainerToken.c)
 *     SepCreateClientSecurityEx @ 0x1408A0160 (SepCreateClientSecurityEx.c)
 *     NtDuplicateToken @ 0x1408E67E0 (NtDuplicateToken.c)
 *     SepFinalizeTokenAcls @ 0x1408E6CA0 (SepFinalizeTokenAcls.c)
 *     SeCopyClientToken @ 0x1408E7698 (SeCopyClientToken.c)
 *     PsImpersonateClient @ 0x1408E7A20 (PsImpersonateClient.c)
 *     NtCreateLowBoxToken @ 0x140AD5A60 (NtCreateLowBoxToken.c)
 *     SeSubProcessToken @ 0x140AD660C (SeSubProcessToken.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     RtlFindAceBySid @ 0x1403EB0D0 (RtlFindAceBySid.c)
 *     RtlGetAce @ 0x140404120 (RtlGetAce.c)
 *     RtlLengthSid @ 0x14044B2D0 (RtlLengthSid.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmpSecurityMethod @ 0x14084F0D0 (CmpSecurityMethod.c)
 *     SeDefaultObjectMethod @ 0x140854470 (SeDefaultObjectMethod.c)
 *     IopGetSetSecurityObject @ 0x14087DA20 (IopGetSetSecurityObject.c)
 *     ObpReferenceSecurityDescriptor @ 0x1408E7640 (ObpReferenceSecurityDescriptor.c)
 *     RtlCopySid @ 0x1408E7870 (RtlCopySid.c)
 *     RtlValidAcl @ 0x140910580 (RtlValidAcl.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepAppendAceToTokenObjectAcl(ULONG_PTR *BugCheckParameter2, int a2, _WORD *a3)
{
  ULONG_PTR v3; // rax
  _WORD *v5; // r15
  unsigned __int64 v6; // rcx
  ULONG_PTR v7; // rsi
  char v8; // r14
  __int64 Pool2; // rdi
  int v10; // ebx
  __int64 (__fastcall *v11)(__int64, int, DWORD *, __int16 *, PULONG, int, int, __int64, char); // rax
  int SetSecurityObject; // eax
  __int16 v13; // ax
  char *v14; // r13
  char v15; // r12
  volatile signed __int64 *v16; // rdi
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  __int64 v20; // rax
  ACL *v21; // rsi
  ACL *v22; // r15
  unsigned int i; // ecx
  int AclSize; // r15d
  ULONG v25; // ebx
  ACL *v26; // r13
  NTSTATUS v27; // eax
  __int64 v28; // r15
  unsigned int AceCount; // r8d
  ACL *v30; // rbx
  unsigned int v31; // edx
  ACL *v32; // rcx
  char *v33; // rsi
  UCHAR v34; // al
  char *v35; // r8
  UCHAR v36; // di
  char *v37; // r9
  ACL *v38; // r11
  __int64 v39; // rdx
  char *v40; // r10
  int v41; // ecx
  __int64 v42; // r9
  ACL *v43; // rax
  char *v44; // r8
  unsigned __int8 *v45; // r14
  unsigned int j; // ecx
  ACL *v47; // rdx
  USHORT v48; // cx
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 *v50; // rsi
  volatile signed __int64 *v51; // r14
  char *v52; // rax
  char *v53; // r15
  signed __int64 v54; // rcx
  bool v55; // cc
  signed __int64 v56; // rcx
  volatile signed __int64 *k; // rdx
  unsigned __int8 v58; // al
  int v59; // eax
  __int64 v60; // rdx
  int v61; // eax
  __int64 v62; // r10
  UCHAR v63; // al
  __int64 v64; // [rsp+28h] [rbp-71h]
  int v65; // [rsp+30h] [rbp-69h]
  __int64 v66; // [rsp+38h] [rbp-61h]
  UCHAR AclRevision; // [rsp+50h] [rbp-49h]
  ULONG Length; // [rsp+54h] [rbp-45h] BYREF
  DWORD v69; // [rsp+58h] [rbp-41h] BYREF
  DWORD v70; // [rsp+60h] [rbp-39h] BYREF
  char *v71; // [rsp+68h] [rbp-31h]
  int v72; // [rsp+70h] [rbp-29h]
  PSID Sid; // [rsp+78h] [rbp-21h]
  PVOID Ace; // [rsp+80h] [rbp-19h] BYREF
  __int128 v75; // [rsp+88h] [rbp-11h] BYREF
  __int128 v76; // [rsp+98h] [rbp-1h]
  ACL *v77; // [rsp+A8h] [rbp+Fh]
  ULONG_PTR *v78; // [rsp+B0h] [rbp+17h]
  __int64 v79; // [rsp+B8h] [rbp+1Fh]

  v78 = BugCheckParameter2;
  v77 = 0LL;
  Length = 0;
  v3 = (unsigned __int64)(BugCheckParameter2 - 6) >> 8;
  v5 = a3;
  v6 = (unsigned __int8)v3 ^ (unsigned __int64)*((unsigned __int8 *)BugCheckParameter2 - 24);
  v79 = (unsigned __int8)v3;
  v70 = 0;
  Sid = a3;
  v75 = 0LL;
  v72 = a2;
  v7 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v6];
  v76 = 0LL;
  Ace = 0LL;
  if ( *(__int64 (__fastcall **)(__int64, int, DWORD *, unsigned __int64, ULONG *, __int64 *, int, __int64))(v7 + 152) == SeDefaultObjectMethod )
  {
    v8 = 0;
    Pool2 = ObpReferenceSecurityDescriptor(BugCheckParameter2 - 6);
    if ( !Pool2 && ((*(_BYTE *)(v7 + 66) & 8) != 0 || (*((_BYTE *)BugCheckParameter2 - 22) & 2) != 0) )
      KeBugCheckEx(0x189u, (ULONG_PTR)(BugCheckParameter2 - 6), v7, 1uLL, 0LL);
    v10 = 0;
    goto LABEL_11;
  }
  v70 = 447;
  Length = ObpDefaultSecurityDescriptorLength;
  Pool2 = ExAllocatePool2(0x100uLL, (unsigned int)ObpDefaultSecurityDescriptorLength, 0x7153624Fu);
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v11 = *(__int64 (__fastcall **)(__int64, int, DWORD *, __int16 *, PULONG, int, int, __int64, char))(v7 + 152);
  v66 = v7 + 76;
  v65 = *(_DWORD *)(v7 + 100);
  v64 = (__int64)(BugCheckParameter2 - 1);
  if ( (char *)v11 == (char *)CmpSecurityMethod )
  {
    SetSecurityObject = CmpSecurityMethod(BugCheckParameter2, 1, &v70, (void *)Pool2, &Length, v64, v65, v66);
  }
  else if ( v11 == IopGetSetSecurityObject )
  {
    SetSecurityObject = IopGetSetSecurityObject(
                          (__int64)BugCheckParameter2,
                          1,
                          &v70,
                          (__int16 *)Pool2,
                          &Length,
                          v64,
                          v65,
                          v66,
                          0);
  }
  else
  {
    SetSecurityObject = guard_dispatch_icall_no_overrides(BugCheckParameter2, 1LL);
  }
  v10 = SetSecurityObject;
  if ( SetSecurityObject == -1073741789 )
  {
    ExFreePoolWithTag((PVOID)Pool2, 0);
    ObpDefaultSecurityDescriptorLength = Length;
    Pool2 = ExAllocatePool2(0x100uLL, Length, 0x7153624Fu);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v10 = guard_dispatch_icall_no_overrides(BugCheckParameter2, 1LL);
  }
  if ( v10 < 0 )
  {
    ExFreePoolWithTag((PVOID)Pool2, 0);
    v8 = 0;
    Pool2 = 0LL;
  }
  else
  {
    v8 = 1;
  }
  if ( v10 < 0 )
  {
    v14 = (char *)Pool2;
    v15 = v8;
    if ( !Pool2 )
      return (unsigned int)v10;
    goto LABEL_15;
  }
  v5 = Sid;
LABEL_11:
  if ( !Pool2 )
    return (unsigned int)v10;
  v13 = *(_WORD *)(Pool2 + 2);
  if ( (v13 & 4) == 0 )
  {
    v14 = (char *)Pool2;
    v15 = v8;
    goto LABEL_15;
  }
  if ( v13 >= 0 )
  {
    v21 = *(ACL **)(Pool2 + 32);
  }
  else
  {
    v20 = *(unsigned int *)(Pool2 + 16);
    if ( !(_DWORD)v20 )
    {
      v14 = (char *)Pool2;
      v15 = v8;
      goto LABEL_15;
    }
    v21 = (ACL *)(Pool2 + v20);
  }
  v14 = (char *)Pool2;
  v15 = v8;
  if ( v21 && !RtlFindAceBySid((__int64)v21, v5, 0LL) )
  {
    AclRevision = v21->AclRevision;
    if ( (unsigned __int8)(v21->AclRevision - 2) > 2u )
    {
LABEL_72:
      v10 = -1073741811;
      goto LABEL_15;
    }
    v22 = v21 + 1;
    for ( i = 0; i < v21->AceCount; ++i )
    {
      if ( v22 >= (ACL *)((char *)v21 + v21->AclSize) )
        goto LABEL_72;
      v22 = (ACL *)((char *)v22 + v22->AclSize);
    }
    if ( v22 > (ACL *)((char *)v21 + v21->AclSize) )
      v22 = 0LL;
    if ( v22 )
      AclSize = (_DWORD)v22 - (_DWORD)v21;
    else
      AclSize = v21->AclSize;
    v25 = (AclSize + RtlLengthSid(Sid) + 11) & 0xFFFFFFFC;
    v26 = (ACL *)ExAllocatePool2(0x100uLL, v25, 0x63416553u);
    if ( !v26 )
    {
      v10 = -1073741670;
      v14 = (char *)Pool2;
      goto LABEL_15;
    }
    if ( v25 < 8 )
    {
      v10 = -1073741789;
    }
    else if ( (unsigned __int8)(AclRevision - 2) > 2u || v25 > 0xFFFC )
    {
      v10 = -1073741811;
    }
    else
    {
      memset_0(v26, 0, v25);
      v26->AclRevision = AclRevision;
      v26->Sbz1 = 0;
      *(_DWORD *)&v26->AceCount = 0;
      v26->AclSize = v25;
      v27 = RtlGetAce(v21, 0, &Ace);
      v71 = (char *)Pool2;
      v10 = v27;
      if ( v27 < 0 )
      {
LABEL_131:
        ExFreePoolWithTag(v26, 0);
        v14 = v71;
        goto LABEL_15;
      }
      v28 = (unsigned int)(AclSize - 8);
      if ( RtlValidAcl(v26) )
      {
        AceCount = v26->AceCount;
        v30 = v26 + 1;
        v71 = (char *)Pool2;
        v31 = 0;
        v32 = v26 + 1;
        v33 = (char *)Pool2;
        while ( v31 < AceCount )
        {
          if ( v32 >= (ACL *)((char *)v26 + v26->AclSize) )
            goto LABEL_107;
          ++v31;
          v32 = (ACL *)((char *)v32 + v32->AclSize);
        }
        v34 = v26->AclRevision;
        v35 = (char *)Ace;
        v36 = AclRevision;
        v37 = (char *)Ace;
        v38 = (ACL *)((char *)v26 + v26->AclSize);
        v69 = 0;
        v39 = (unsigned int)v28;
        if ( v32 > v38 )
          v32 = 0LL;
        v40 = (char *)Ace + v28;
        if ( AclRevision <= v34 )
          v36 = v34;
        while ( v37 < v40 )
        {
          v58 = *v37;
          if ( (unsigned __int8)*v37 > 3u )
          {
            if ( v58 <= 4u )
            {
              if ( AclRevision < 3u )
                goto LABEL_107;
            }
            else if ( v58 <= 8u )
            {
              if ( AclRevision < 4u )
                goto LABEL_107;
            }
            else if ( !*((_WORD *)v37 + 1) )
            {
              goto LABEL_107;
            }
          }
          v37 += *((unsigned __int16 *)v37 + 1);
          ++v69;
        }
        if ( v37 > v40 )
        {
LABEL_107:
          v10 = -1073741811;
          ExFreePoolWithTag(v26, 0);
          v14 = v71;
          goto LABEL_15;
        }
        if ( v32 && (ACL *)((char *)v32 + v28) <= v38 )
        {
          v41 = (_DWORD)v32 - (_DWORD)v30 - 1;
          v42 = v41;
          if ( v41 >= 0 )
          {
            v62 = (unsigned int)(v41 + v28);
            do
            {
              v63 = *(&v30->AclRevision + v42--);
              *(&v30->AclRevision + v62) = v63;
              v62 = (unsigned int)(v62 - 1);
            }
            while ( v42 >= 0 );
          }
          if ( (_DWORD)v28 )
          {
            v43 = v26 + 1;
            v44 = (char *)(v35 - (char *)v30);
            do
            {
              v43->AclRevision = *(&v43->AclRevision + (_QWORD)v44);
              v43 = (ACL *)((char *)v43 + 1);
              --v39;
            }
            while ( v39 );
          }
          v26->AceCount += v69;
          v45 = (unsigned __int8 *)Sid;
          v26->AclRevision = v36;
          if ( (unsigned __int64)v45 > 0x7FFFFFFF0000LL && (*v45 & 0xF) == 1 && v45[1] <= 0xFu )
          {
            if ( v36 > 4u )
            {
              v10 = -1073741735;
              ExFreePoolWithTag(v26, 0);
              v14 = v71;
            }
            else
            {
              if ( v36 <= AclRevision )
                v36 = AclRevision;
              if ( RtlValidAcl(v26) )
              {
                for ( j = 0; j < v26->AceCount; ++j )
                {
                  if ( v30 >= (ACL *)((char *)v26 + v26->AclSize) )
                    goto LABEL_125;
                  v30 = (ACL *)((char *)v30 + v30->AclSize);
                }
                v47 = (ACL *)((char *)v26 + v26->AclSize);
                if ( v30 > v47 )
                  v30 = 0LL;
                v48 = 4 * (v45[1] + 4);
                if ( v30 && (ACL *)((char *)v30 + v48) <= v47 )
                {
                  v59 = v72;
                  v30->AclSize = v48;
                  *(_DWORD *)&v30->AceCount = v59;
                  *(_WORD *)&v30->AclRevision = 0;
                  RtlCopySid(4 * v45[1] + 8, &v30[1], v45);
                  ++v26->AceCount;
                  v26->AclRevision = v36;
                  v75 = 0LL;
                  LOBYTE(v75) = 1;
                  v76 = 0LL;
                  v77 = v26;
                  v69 = 4;
                  WORD1(v75) = 4;
                  v60 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v79 ^ (unsigned __int64)*((unsigned __int8 *)v78 - 24)];
                  if ( *(__int64 (__fastcall **)(__int64, int, DWORD *, unsigned __int64, ULONG *, __int64 *, int, __int64))(v60 + 152) == SeDefaultObjectMethod )
                    v61 = SeDefaultObjectMethod(
                            (__int64)v78,
                            0,
                            &v69,
                            (unsigned __int64)&v75,
                            0LL,
                            (__int64 *)v78 - 1,
                            *(_DWORD *)(v60 + 100),
                            v60 + 76);
                  else
                    v61 = guard_dispatch_icall_no_overrides(v78, 0LL);
                  v71 = v33;
                  v10 = v61;
                  ExFreePoolWithTag(v26, 0);
                  v14 = v33;
                }
                else
                {
                  v10 = -1073741671;
                  ExFreePoolWithTag(v26, 0);
                  v14 = v71;
                }
              }
              else
              {
LABEL_125:
                v10 = -1073741705;
                ExFreePoolWithTag(v26, 0);
                v14 = v71;
              }
            }
          }
          else
          {
            v10 = -1073741704;
            ExFreePoolWithTag(v26, 0);
            v14 = v71;
          }
        }
        else
        {
          v10 = -1073741789;
          ExFreePoolWithTag(v26, 0);
          v14 = v71;
        }
        goto LABEL_15;
      }
      v10 = -1073741811;
    }
    v71 = (char *)Pool2;
    goto LABEL_131;
  }
LABEL_15:
  if ( v15 )
  {
    ExFreePoolWithTag(v14, 0);
  }
  else
  {
    v16 = (volatile signed __int64 *)(v14 - 32);
    _m_prefetchw(v14 - 24);
    v17 = *((_QWORD *)v14 - 3);
    while ( v17 - 1 > 0 )
    {
      v18 = v17;
      v17 = _InterlockedCompareExchange64(v16 + 1, v17 - 1, v17);
      if ( v18 == v17 )
        return (unsigned int)v10;
    }
    if ( v17 != 1 )
      __fastfail(0xEu);
    CurrentThread = KeGetCurrentThread();
    v50 = (unsigned __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * (unsigned __int8)*((_DWORD *)v16 + 4));
    --CurrentThread->KernelApcDisable;
    v51 = (volatile signed __int64 *)(v50 + 1);
    v52 = (char *)KeAbPreAcquire((__int64)v50, 0LL);
    v53 = v52;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v50, 0LL) )
      ExfAcquirePushLockExclusiveEx(v50, v52, (__int64)v50);
    if ( v53 )
      v53[10] = 1;
    v54 = _InterlockedExchangeAdd64(v16 + 1, 0xFFFFFFFFFFFFFFFFuLL);
    v55 = v54 <= 1;
    v56 = v54 - 1;
    if ( v55 )
    {
      if ( v56 )
        __fastfail(0xEu);
      for ( k = (volatile signed __int64 *)*v51; k != v16; k = (volatile signed __int64 *)*k )
        v51 = k;
      *v51 = *v16;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v50, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v50);
      KeAbPostRelease((ULONG_PTR)v50);
      KeLeaveCriticalRegionThread();
      ExFreePoolWithTag(v14 - 32, 0x6353624Fu);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v50, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v50);
      KeAbPostRelease((ULONG_PTR)v50);
      KeLeaveCriticalRegionThread();
    }
  }
  return (unsigned int)v10;
}
