/*
 * XREFs of SepAppendAceToTokenObjectAcl @ 0x1408A43D0
 * Callers:
 *     SeCopyClientToken @ 0x14089E9B0 (SeCopyClientToken.c)
 *     NtDuplicateToken @ 0x1408A3EE0 (NtDuplicateToken.c)
 *     SepFinalizeTokenAcls @ 0x1408A4398 (SepFinalizeTokenAcls.c)
 *     PsImpersonateClient @ 0x1408A51C0 (PsImpersonateClient.c)
 *     SepCreateClientSecurityEx @ 0x1408A6AF0 (SepCreateClientSecurityEx.c)
 *     NtCreateLowBoxToken @ 0x140ACDB00 (NtCreateLowBoxToken.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     RtlFindAceBySid @ 0x14036B330 (RtlFindAceBySid.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     RtlGetAce @ 0x1404044D0 (RtlGetAce.c)
 *     RtlLengthSid @ 0x140458B00 (RtlLengthSid.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     CmpSecurityMethod @ 0x140856B80 (CmpSecurityMethod.c)
 *     IopGetSetSecurityObject @ 0x14086F330 (IopGetSetSecurityObject.c)
 *     SeDefaultObjectMethod @ 0x1408A1150 (SeDefaultObjectMethod.c)
 *     ObpReferenceSecurityDescriptor @ 0x1408A4FB0 (ObpReferenceSecurityDescriptor.c)
 *     RtlCopySid @ 0x1408A5010 (RtlCopySid.c)
 *     RtlValidAcl @ 0x14092A320 (RtlValidAcl.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepAppendAceToTokenObjectAcl(ULONG_PTR *BugCheckParameter2, DWORD a2, _WORD *a3)
{
  ULONG_PTR v3; // rax
  unsigned __int64 v6; // rcx
  ULONG_PTR v7; // rsi
  char v8; // r14
  __int64 Pool2; // rdi
  int v10; // ebx
  __int64 (__fastcall *v11)(__int64, int, DWORD *, UNICODE_STRING *, PULONG, int, int, __int64, char); // rax
  int SetSecurityObject; // eax
  __int16 v13; // ax
  char *v14; // r12
  char v15; // r15
  volatile signed __int64 *v16; // rdi
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  __int64 v20; // rax
  ACL *v21; // rsi
  ACL *v22; // r15
  char v23; // al
  unsigned int v24; // ecx
  char v25; // r14
  int AclSize; // r15d
  ULONG v27; // ebx
  ACL *v28; // r13
  __int64 v29; // r15
  ACL *v30; // rbx
  unsigned int v31; // edx
  ACL *v32; // rcx
  __int16 v33; // si
  char *v34; // r8
  UCHAR v35; // di
  char *v36; // r9
  ACL *v37; // r11
  __int64 v38; // rdx
  char *v39; // r10
  int v40; // ecx
  __int64 v41; // r9
  ACL *v42; // rax
  char *v43; // r8
  unsigned __int8 *v44; // rsi
  unsigned int j; // ecx
  ACL *v46; // rdx
  USHORT v47; // cx
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 *v49; // rsi
  volatile signed __int64 *v50; // r14
  __int64 *v51; // rax
  __int64 *v52; // r13
  signed __int64 v53; // rcx
  bool v54; // cc
  signed __int64 v55; // rcx
  volatile signed __int64 *k; // rdx
  unsigned __int8 v57; // al
  __int64 v58; // r10
  UCHAR v59; // al
  DWORD v60; // eax
  __int64 v61; // rdx
  __int64 (__fastcall *v62)(__int64, int, DWORD *, UNICODE_STRING *, PULONG, int, int, __int64, char); // r11
  int v63; // eax
  __int64 v64; // [rsp+28h] [rbp-71h]
  __int64 *v65; // [rsp+28h] [rbp-71h]
  int v66; // [rsp+30h] [rbp-69h]
  int v67; // [rsp+30h] [rbp-69h]
  __int64 v68; // [rsp+38h] [rbp-61h]
  __int64 v69; // [rsp+38h] [rbp-61h]
  char PreviousMode; // [rsp+40h] [rbp-59h]
  char i; // [rsp+50h] [rbp-49h]
  UCHAR AclRevision; // [rsp+51h] [rbp-48h]
  ULONG Length; // [rsp+54h] [rbp-45h] BYREF
  DWORD v74; // [rsp+58h] [rbp-41h] BYREF
  DWORD v75[4]; // [rsp+60h] [rbp-39h] BYREF
  PVOID Ace; // [rsp+70h] [rbp-29h] BYREF
  UNICODE_STRING v77; // [rsp+78h] [rbp-21h] BYREF
  __int128 v78; // [rsp+88h] [rbp-11h]
  ACL *v79; // [rsp+98h] [rbp-1h]
  PSID SourceSid; // [rsp+A0h] [rbp+7h]
  ULONG_PTR BugCheckParameter2a; // [rsp+A8h] [rbp+Fh]
  __int64 v82; // [rsp+B0h] [rbp+17h]

  BugCheckParameter2a = (ULONG_PTR)BugCheckParameter2;
  v79 = 0LL;
  Length = 0;
  v3 = (unsigned __int64)(BugCheckParameter2 - 6) >> 8;
  v6 = (unsigned __int8)v3 ^ (unsigned __int64)*((unsigned __int8 *)BugCheckParameter2 - 24);
  v82 = (unsigned __int8)v3;
  v75[0] = 0;
  SourceSid = a3;
  v77 = 0LL;
  v74 = a2;
  v7 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v6];
  v78 = 0LL;
  Ace = 0LL;
  if ( *(__int64 (__fastcall **)(__int64, int, DWORD *, unsigned __int64, ULONG *, __int64 *, int, __int64))(v7 + 152) == SeDefaultObjectMethod )
  {
    v8 = 0;
    Pool2 = ObpReferenceSecurityDescriptor(BugCheckParameter2 - 6);
    if ( !Pool2 && ((*(_BYTE *)(v7 + 66) & 8) != 0 || (*((_BYTE *)BugCheckParameter2 - 22) & 2) != 0) )
      KeBugCheckEx(0x189u, (ULONG_PTR)(BugCheckParameter2 - 6), v7, 1uLL, 0LL);
    v10 = 0;
    goto LABEL_10;
  }
  v75[0] = 447;
  Length = ObpDefaultSecurityDescriptorLength;
  Pool2 = ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v11 = *(__int64 (__fastcall **)(__int64, int, DWORD *, UNICODE_STRING *, PULONG, int, int, __int64, char))(v7 + 152);
  v68 = v7 + 76;
  v66 = *(_DWORD *)(v7 + 100);
  v64 = (__int64)(BugCheckParameter2 - 1);
  if ( (char *)v11 == (char *)CmpSecurityMethod )
  {
    SetSecurityObject = CmpSecurityMethod(BugCheckParameter2, 1, v75, (void *)Pool2, &Length, v64, v66, v68);
  }
  else if ( v11 == IopGetSetSecurityObject )
  {
    SetSecurityObject = IopGetSetSecurityObject(
                          (__int64)BugCheckParameter2,
                          1,
                          v75,
                          (UNICODE_STRING *)Pool2,
                          &Length,
                          v64,
                          v66,
                          v68,
                          0);
  }
  else
  {
    SetSecurityObject = guard_dispatch_icall_no_overrides(BugCheckParameter2);
  }
  v10 = SetSecurityObject;
  if ( SetSecurityObject == -1073741789 )
  {
    ExFreePoolWithTag((PVOID)Pool2, 0);
    ObpDefaultSecurityDescriptorLength = Length;
    Pool2 = ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v10 = guard_dispatch_icall_no_overrides(BugCheckParameter2);
  }
  if ( v10 < 0 )
  {
    ExFreePoolWithTag((PVOID)Pool2, 0);
    Pool2 = 0LL;
    v8 = 0;
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
    goto LABEL_14;
  }
LABEL_10:
  if ( !Pool2 )
    return (unsigned int)v10;
  v13 = *(_WORD *)(Pool2 + 2);
  if ( (v13 & 4) == 0 )
  {
    v14 = (char *)Pool2;
    v15 = v8;
    goto LABEL_14;
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
      goto LABEL_14;
    }
    v21 = (ACL *)(Pool2 + v20);
  }
  v14 = (char *)Pool2;
  v15 = v8;
  if ( !v21 || RtlFindAceBySid((__int64)v21, a3, 0LL) )
    goto LABEL_14;
  AclRevision = v21->AclRevision;
  if ( (unsigned __int8)(v21->AclRevision - 2) <= 2u )
  {
    v22 = v21 + 1;
    v23 = v8;
    v24 = 0;
    for ( i = v8; ; v23 = i )
    {
      v25 = v23;
      v14 = (char *)Pool2;
      if ( v24 >= v21->AceCount )
        break;
      if ( v22 >= (ACL *)((char *)v21 + v21->AclSize) )
      {
        v15 = i;
        v10 = -1073741811;
        v14 = (char *)Pool2;
        goto LABEL_14;
      }
      ++v24;
      v22 = (ACL *)((char *)v22 + v22->AclSize);
    }
    if ( v22 > (ACL *)((char *)v21 + v21->AclSize) )
      v22 = 0LL;
    if ( v22 )
      AclSize = (_DWORD)v22 - (_DWORD)v21;
    else
      AclSize = v21->AclSize;
    v27 = (AclSize + RtlLengthSid(a3) + 11) & 0xFFFFFFFC;
    v28 = (ACL *)ExAllocatePool2(0x100uLL);
    if ( !v28 )
    {
      v10 = -1073741670;
      v15 = v25;
      goto LABEL_14;
    }
    if ( v27 < 8 )
    {
      v10 = -1073741789;
      goto LABEL_120;
    }
    if ( (unsigned __int8)(AclRevision - 2) <= 2u && v27 <= 0xFFFC )
    {
      memset_0(v28, 0, v27);
      v28->AclRevision = AclRevision;
      v28->Sbz1 = 0;
      *(_DWORD *)&v28->AceCount = 0;
      v28->AclSize = v27;
      v10 = RtlGetAce(v21, 0, &Ace);
      if ( v10 < 0 )
      {
LABEL_120:
        v15 = v25;
        ExFreePoolWithTag(v28, 0);
        goto LABEL_14;
      }
      v29 = (unsigned int)(AclSize - 8);
      if ( RtlValidAcl(v28) )
      {
        v30 = v28 + 1;
        v31 = 0;
        v32 = v28 + 1;
        while ( v31 < v28->AceCount )
        {
          if ( v32 >= (ACL *)((char *)v28 + v28->AclSize) )
            goto LABEL_119;
          ++v31;
          v32 = (ACL *)((char *)v32 + v32->AclSize);
        }
        v33 = 0;
        v34 = (char *)Ace;
        v35 = AclRevision;
        v36 = (char *)Ace;
        v37 = (ACL *)((char *)v28 + v28->AclSize);
        v38 = (unsigned int)v29;
        if ( v32 > v37 )
          v32 = 0LL;
        v39 = (char *)Ace + v29;
        if ( AclRevision <= v28->AclRevision )
          v35 = v28->AclRevision;
        while ( v36 < v39 )
        {
          v57 = *v36;
          if ( (unsigned __int8)*v36 > 3u )
          {
            if ( v57 <= 4u )
            {
              if ( AclRevision < 3u )
                goto LABEL_109;
            }
            else if ( v57 <= 8u )
            {
              if ( AclRevision < 4u )
                goto LABEL_109;
            }
            else if ( !*((_WORD *)v36 + 1) )
            {
              goto LABEL_109;
            }
          }
          v36 += *((unsigned __int16 *)v36 + 1);
          ++v33;
        }
        if ( v36 > v39 )
        {
LABEL_109:
          v15 = v25;
          v10 = -1073741811;
          ExFreePoolWithTag(v28, 0);
          goto LABEL_14;
        }
        if ( v32 && (ACL *)((char *)v32 + v29) <= v37 )
        {
          v40 = (_DWORD)v32 - (_DWORD)v30 - 1;
          v41 = v40;
          if ( v40 >= 0 )
          {
            v58 = (unsigned int)(v40 + v29);
            do
            {
              v59 = *(&v30->AclRevision + v41--);
              *(&v30->AclRevision + v58) = v59;
              v58 = (unsigned int)(v58 - 1);
            }
            while ( v41 >= 0 );
          }
          if ( (_DWORD)v29 )
          {
            v42 = v28 + 1;
            v43 = (char *)(v34 - (char *)v30);
            do
            {
              v42->AclRevision = *(&v42->AclRevision + (_QWORD)v43);
              v42 = (ACL *)((char *)v42 + 1);
              --v38;
            }
            while ( v38 );
          }
          v28->AceCount += v33;
          v44 = (unsigned __int8 *)SourceSid;
          v28->AclRevision = v35;
          if ( (unsigned __int64)v44 > 0x7FFFFFFF0000LL && (*v44 & 0xF) == 1 && v44[1] <= 0xFu )
          {
            if ( v35 > 4u )
            {
              v15 = v25;
              v10 = -1073741735;
              ExFreePoolWithTag(v28, 0);
            }
            else
            {
              if ( v35 <= AclRevision )
                v35 = AclRevision;
              if ( RtlValidAcl(v28) )
              {
                for ( j = 0; j < v28->AceCount; ++j )
                {
                  if ( v30 >= (ACL *)((char *)v28 + v28->AclSize) )
                    goto LABEL_121;
                  v30 = (ACL *)((char *)v30 + v30->AclSize);
                }
                v46 = (ACL *)((char *)v28 + v28->AclSize);
                if ( v30 > v46 )
                  v30 = 0LL;
                v47 = 4 * (v44[1] + 4);
                if ( v30 && (ACL *)((char *)v30 + v47) <= v46 )
                {
                  v60 = v74;
                  v30->AclSize = v47;
                  *(_DWORD *)&v30->AceCount = v60;
                  *(_WORD *)&v30->AclRevision = 0;
                  RtlCopySid(4 * v44[1] + 8, &v30[1], v44);
                  ++v28->AceCount;
                  v28->AclRevision = v35;
                  v77 = 0LL;
                  LOBYTE(v77.Length) = 1;
                  v78 = 0LL;
                  v79 = v28;
                  v74 = 4;
                  v77.MaximumLength = 4;
                  v61 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v82 ^ (unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2a - 24)];
                  v62 = *(__int64 (__fastcall **)(__int64, int, DWORD *, UNICODE_STRING *, PULONG, int, int, __int64, char))(v61 + 152);
                  PreviousMode = KeGetCurrentThread()->PreviousMode;
                  v69 = v61 + 76;
                  v67 = *(_DWORD *)(v61 + 100);
                  v65 = (__int64 *)(BugCheckParameter2a - 8);
                  if ( (char *)v62 == (char *)SeDefaultObjectMethod )
                  {
                    v63 = SeDefaultObjectMethod(
                            BugCheckParameter2a,
                            0,
                            &v74,
                            (unsigned __int64)&v77,
                            0LL,
                            v65,
                            v67,
                            v69);
                  }
                  else if ( v62 == IopGetSetSecurityObject )
                  {
                    v63 = IopGetSetSecurityObject(
                            BugCheckParameter2a,
                            0,
                            &v74,
                            &v77,
                            0LL,
                            (int)v65,
                            v67,
                            v69,
                            PreviousMode);
                  }
                  else
                  {
                    v63 = guard_dispatch_icall_no_overrides(BugCheckParameter2a);
                  }
                  v15 = v25;
                  v10 = v63;
                  ExFreePoolWithTag(v28, 0);
                }
                else
                {
                  v15 = v25;
                  v10 = -1073741671;
                  ExFreePoolWithTag(v28, 0);
                }
              }
              else
              {
LABEL_121:
                v15 = v25;
                v10 = -1073741705;
                ExFreePoolWithTag(v28, 0);
              }
            }
          }
          else
          {
            v15 = v25;
            v10 = -1073741704;
            ExFreePoolWithTag(v28, 0);
          }
        }
        else
        {
          v15 = v25;
          v10 = -1073741789;
          ExFreePoolWithTag(v28, 0);
        }
        goto LABEL_14;
      }
    }
LABEL_119:
    v10 = -1073741811;
    goto LABEL_120;
  }
  v10 = -1073741811;
LABEL_14:
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
    v49 = (unsigned __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * (unsigned __int8)*((_DWORD *)v16 + 4));
    --CurrentThread->KernelApcDisable;
    v50 = (volatile signed __int64 *)(v49 + 1);
    v51 = KeAbPreAcquire((__int64)v49, 0LL);
    v52 = v51;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v49, 0LL) )
      ExfAcquirePushLockExclusiveEx(v49, v51, (__int64)v49);
    if ( v52 )
      *((_BYTE *)v52 + 10) = 1;
    v53 = _InterlockedExchangeAdd64(v16 + 1, 0xFFFFFFFFFFFFFFFFuLL);
    v54 = v53 <= 1;
    v55 = v53 - 1;
    if ( v54 )
    {
      if ( v55 )
        __fastfail(0xEu);
      for ( k = (volatile signed __int64 *)*v50; k != v16; k = (volatile signed __int64 *)*k )
        v50 = k;
      *v50 = *v16;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v49, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v49);
      KeAbPostRelease((ULONG_PTR)v49);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      ExFreePoolWithTag(v14 - 32, 0x6353624Fu);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v49, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v49);
      KeAbPostRelease((ULONG_PTR)v49);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
  }
  return (unsigned int)v10;
}
