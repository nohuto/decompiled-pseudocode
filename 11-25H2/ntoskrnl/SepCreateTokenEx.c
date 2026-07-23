/*
 * XREFs of SepCreateTokenEx @ 0x14036B744
 * Callers:
 *     SepCreateToken @ 0x140783CB4 (SepCreateToken.c)
 *     NtCreateTokenEx @ 0x1409974A0 (NtCreateTokenEx.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExInitializeResourceLite2 @ 0x1402D6940 (ExInitializeResourceLite2.c)
 *     RtlWalkFrameChain @ 0x140348060 (RtlWalkFrameChain.c)
 *     RtlEqualSid @ 0x14036A6E0 (RtlEqualSid.c)
 *     SeCaptureObjectAttributeSecurityDescriptorPresent @ 0x14036C2C0 (SeCaptureObjectAttributeSecurityDescriptorPresent.c)
 *     RtlSidHashInitialize @ 0x14036C330 (RtlSidHashInitialize.c)
 *     DbgPrint @ 0x1403A9600 (DbgPrint.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SepAddTokenLogonSession @ 0x1407841A0 (SepAddTokenLogonSession.c)
 *     SeDeleteAccessState @ 0x140844A10 (SeDeleteAccessState.c)
 *     ObCreateObject @ 0x140858920 (ObCreateObject.c)
 *     ObInsertObject @ 0x14089FF30 (ObInsertObject.c)
 *     SepFinalizeTokenAcls @ 0x1408A4398 (SepFinalizeTokenAcls.c)
 *     RtlCopySid @ 0x1408A5010 (RtlCopySid.c)
 *     SeCreateAccessState @ 0x1409154F0 (SeCreateAccessState.c)
 *     RtlLengthRequiredSid @ 0x140918FE0 (RtlLengthRequiredSid.c)
 *     RtlCopySidAndAttributesArray @ 0x140998A50 (RtlCopySidAndAttributesArray.c)
 *     SepSetTokenTrust @ 0x140998BB0 (SepSetTokenTrust.c)
 *     SepReferenceLogonSession @ 0x140A2B0BC (SepReferenceLogonSession.c)
 *     SepSetTokenClaims @ 0x140A53304 (SepSetTokenClaims.c)
 *     RtlIdentifierAuthoritySid @ 0x140A5D6B8 (RtlIdentifierAuthoritySid.c)
 *     SepSetTokenUserAndGroups @ 0x140AB26B4 (SepSetTokenUserAndGroups.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCreateTokenEx(
        HANDLE *a1,
        unsigned __int8 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        _QWORD *a8,
        _SID_AND_ATTRIBUTES *a9,
        ULONG Count,
        _SID_AND_ATTRIBUTES *a11,
        unsigned int a12,
        unsigned int a13,
        __int64 a14,
        PSID a15,
        PSID Sid1,
        void *a17,
        _OWORD *a18,
        __int64 a19,
        __int64 a20,
        int a21,
        __int64 a22,
        _DWORD *a23,
        char a24)
{
  PSID_AND_ATTRIBUTES v25; // rsi
  PSID v27; // rdi
  PSID v28; // r15
  ULONG v29; // r13d
  __int64 result; // rax
  PSID Sid; // r14
  ULONG v32; // ebx
  ULONG v33; // esi
  __int64 v34; // rax
  PSID v35; // rbx
  BOOLEAN v36; // al
  __int64 v37; // r10
  bool v38; // r15
  int v39; // r11d
  bool v40; // r14
  ULONG Attributes; // eax
  int v42; // r9d
  ULONG v43; // esi
  ULONG v44; // ebx
  unsigned __int8 *v45; // rdi
  PSID_IDENTIFIER_AUTHORITY v46; // rax
  __int64 v47; // rdx
  int v48; // r9d
  int v49; // ecx
  unsigned int v50; // edx
  __int64 v51; // r9
  __int64 v52; // r11
  __int64 v53; // rax
  int v54; // ecx
  unsigned __int64 v55; // r8
  _DWORD *Pool2; // rax
  _DWORD *v57; // rsi
  _QWORD *v58; // rax
  PVOID v59; // rbx
  _QWORD *v60; // rdi
  unsigned int v61; // r12d
  int v62; // ebx
  unsigned int v63; // r14d
  ULONG v64; // r15d
  unsigned int v65; // ecx
  int v66; // eax
  NTSTATUS inserted; // ebx
  _QWORD *v68; // rbx
  char *v69; // rdi
  _QWORD *v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  PVOID v73; // rax
  __int64 v74; // rcx
  int v75; // esi
  _SID_AND_ATTRIBUTES *v76; // rdx
  __int64 v77; // rax
  char *v78; // rsi
  unsigned __int8 *v79; // r14
  ULONG v80; // ebx
  char *v81; // rsi
  unsigned __int16 *v82; // rax
  char *v83; // rcx
  int v84; // edx
  int v85; // r8d
  __int64 v86; // r8
  int v87; // r9d
  BOOLEAN v88; // al
  BOOLEAN v89; // al
  BOOLEAN v90; // al
  void *v91; // rcx
  PVOID v92; // rdi
  _QWORD *v93; // rdx
  _KPROCESS *Process; // rdx
  __int64 v95; // rcx
  ULONG v96; // eax
  int v97; // edx
  unsigned int RemainingSidAreaSize; // [rsp+30h] [rbp-D0h]
  char v99; // [rsp+50h] [rbp-B0h]
  char v100; // [rsp+51h] [rbp-AFh] BYREF
  char v101; // [rsp+52h] [rbp-AEh]
  unsigned __int8 v102; // [rsp+53h] [rbp-ADh]
  int v103; // [rsp+54h] [rbp-ACh]
  ULONG SidAreaSize; // [rsp+58h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v106; // [rsp+68h] [rbp-98h]
  ULONG v107; // [rsp+70h] [rbp-90h]
  PSID v108; // [rsp+78h] [rbp-88h]
  PVOID P; // [rsp+80h] [rbp-80h]
  PSID_AND_ATTRIBUTES Src; // [rsp+88h] [rbp-78h]
  PSID SidArea; // [rsp+90h] [rbp-70h] BYREF
  PSID SourceSid; // [rsp+98h] [rbp-68h]
  unsigned int v113; // [rsp+A0h] [rbp-60h]
  __int64 v114; // [rsp+A8h] [rbp-58h]
  PHANDLE Handle; // [rsp+B0h] [rbp-50h]
  __int64 v116; // [rsp+B8h] [rbp-48h]
  __int64 v117; // [rsp+C0h] [rbp-40h]
  __int64 v118; // [rsp+C8h] [rbp-38h]
  __int64 v119; // [rsp+D0h] [rbp-30h]
  PSID_AND_ATTRIBUTES v120; // [rsp+D8h] [rbp-28h]
  void *v121; // [rsp+E0h] [rbp-20h]
  __int64 v122; // [rsp+E8h] [rbp-18h]
  __int64 v123; // [rsp+F0h] [rbp-10h]
  __int64 v124; // [rsp+F8h] [rbp-8h]
  __int64 v125; // [rsp+100h] [rbp+0h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v127[224]; // [rsp+1B0h] [rbp+B0h] BYREF

  v25 = a9;
  v27 = a15;
  v28 = Sid1;
  v29 = Count;
  SidAreaSize = -1;
  v119 = a7;
  v106 = a14;
  v121 = a17;
  v125 = a19;
  v124 = a20;
  v123 = a22;
  v113 = a3;
  v102 = a2;
  Handle = a1;
  Object = 0LL;
  SidArea = 0LL;
  v103 = 0;
  v122 = a4;
  Src = a9;
  v120 = a11;
  v108 = a15;
  SourceSid = Sid1;
  memset_0(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset_0(v127, 0, sizeof(v127));
  v114 = 0LL;
  v99 = 0;
  v101 = 0;
  v100 = 0;
  P = 0LL;
  result = SeCaptureObjectAttributeSecurityDescriptorPresent(a4, a2, &v100);
  if ( (int)result >= 0 )
  {
    Sid = a9->Sid;
    v32 = 0;
    if ( Count )
    {
      do
      {
        v33 = v32;
        while ( v33 < v29 )
        {
          if ( !RtlEqualSid(Sid, a11[v33].Sid) || (a11[v33].Attributes & 0x20) != 0 )
            ++v33;
          else
            a11[v33] = a11[--v29];
        }
        v34 = v32++;
        Sid = a11[v34].Sid;
      }
      while ( v32 < v29 );
      v27 = v108;
      v25 = Src;
      v28 = SourceSid;
    }
    v35 = v25->Sid;
    v36 = RtlEqualSid(v28, v25->Sid);
    v37 = 0LL;
    v38 = v36 != 0;
    if ( v27 )
    {
      v90 = RtlEqualSid(v27, v35);
      v37 = 0LL;
      LOBYTE(v39) = 1;
      v40 = v90 != 0;
    }
    else
    {
      LOBYTE(v39) = 1;
      v40 = 1;
    }
    Attributes = v25->Attributes;
    if ( (Attributes & 0x10) != 0 )
    {
      if ( (Attributes & 6) != 0 )
        return 3221225485LL;
      v42 = 2048;
      v103 = 2048;
    }
    else
    {
      v42 = v103;
    }
    v43 = 0;
    v107 = 0;
    while ( 1 )
    {
      if ( v43 >= v29 )
      {
        if ( !v38 )
          return 3221225563LL;
        if ( !v40 )
          return 3221225562LL;
        v116 = v37;
        v50 = 0;
        v117 = v37;
        v51 = v37;
        v118 = v37;
        v52 = v37;
        while ( v50 < a13 )
        {
          v53 = v106;
          if ( (*(_DWORD *)(v106 + 12LL * v50 + 8) & 0x7FFFFFF8) != 0 )
            return 3221225485LL;
          v54 = *(_DWORD *)(v106 + 12LL * v50 + 8) & 3;
          *(_DWORD *)(v106 + 12LL * v50 + 8) = v54;
          v55 = *(unsigned int *)(v53 + 12LL * v50);
          if ( (unsigned int)v55 > 0x24 )
            return 3221225568LL;
          if ( _bittest64(&v51, v55) )
            return 3221225894LL;
          v51 |= 1LL << v55;
          v116 = v51;
          if ( (v54 & 2) != 0 )
          {
            _bittestandset64(&v52, (unsigned int)v55);
            v117 = v52;
          }
          if ( (v54 & 1) != 0 )
          {
            v37 |= 1LL << v55;
            v118 = v37;
          }
          ++v50;
        }
        if ( a23 && (*a23 & 0xFFFFFFFC) != 0 )
          return 3221225485LL;
        Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
        v57 = Pool2;
        if ( Pool2 )
        {
          *Pool2 = 0;
          v58 = Pool2 + 2;
          v58[1] = v58;
          *v58 = v58;
          v57[6] = 0;
          *((_QWORD *)v57 + 5) = v57 + 8;
          *((_QWORD *)v57 + 4) = v57 + 8;
          if ( !SeTokenLeakTracking )
          {
            v59 = 0LL;
            goto LABEL_41;
          }
          P = (PVOID)ExAllocatePool2(0x100uLL);
          v59 = P;
          if ( !P )
          {
            v91 = v57;
            goto LABEL_122;
          }
LABEL_41:
          v114 = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
          v60 = (_QWORD *)ExAllocatePool2(0x40uLL);
          if ( v60 )
          {
            v61 = a12;
            v62 = 16 * v29;
            if ( SepTokenSidSharingEnabled )
            {
              v63 = (v62 + 23) & 0xFFFFFFF8;
            }
            else
            {
              v61 = (a12 + 7) & 0xFFFFFFF8;
              v63 = v62 + ((RtlLengthRequiredSid(*((unsigned __int8 *)Src->Sid + 1)) + 3) & 0xFFFFFFFC) + v61 + 16;
            }
            v64 = (RtlLengthRequiredSid(*((unsigned __int8 *)SourceSid + 1)) + 3) & 0xFFFFFFFC;
            if ( v121 )
              v64 += (*((unsigned __int16 *)v121 + 1) + 3) & 0xFFFFFFFC;
            v65 = v63 + 1168;
            v66 = 4096;
            if ( v64 >= 0x1000 )
              v66 = v64;
            LODWORD(v108) = v66;
            RemainingSidAreaSize = v65 + v66;
            LOBYTE(v65) = v102;
            inserted = ObCreateObject(
                         v65,
                         (_DWORD)SeTokenObjectType,
                         v122,
                         1,
                         0,
                         v63 + 1168,
                         RemainingSidAreaSize,
                         0,
                         (__int64)&Object);
            if ( inserted < 0 )
            {
              ExFreePoolWithTag(v57, 0);
              if ( SeTokenLeakTracking )
                ExFreePoolWithTag(P, 0);
              ExFreePoolWithTag(v60, 0);
            }
            else
            {
              v68 = Object;
              *((_QWORD *)Object + 6) = v60;
              ExInitializeResourceLite2(v60, -1);
              v69 = (char *)Object;
              v68[2] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
              *((_QWORD *)v69 + 4) = 0LL;
              v70 = (_QWORD *)v119;
              *((_QWORD *)v69 + 28) = 0LL;
              v106 = 0LL;
              *((_QWORD *)v69 + 3) = *v70;
              v71 = v114;
              v69[204] = 0;
              *((_QWORD *)v69 + 7) = v71;
              *((_QWORD *)v69 + 5) = *a8;
              *((_DWORD *)v69 + 48) = a5;
              *((_DWORD *)v69 + 49) = a6;
              LODWORD(v71) = v103;
              *(_OWORD *)v69 = *a18;
              *((_DWORD *)v69 + 50) = v71;
              LODWORD(v71) = (_DWORD)v108;
              *((_DWORD *)v69 + 30) = 0;
              *((_QWORD *)v69 + 145) = 0LL;
              *((_DWORD *)v69 + 34) = v71;
              LODWORD(v71) = v107;
              *((_DWORD *)v69 + 35) = 0;
              *((_DWORD *)v69 + 36) = v71;
              LODWORD(v71) = SidAreaSize;
              *((_QWORD *)v69 + 23) = 0LL;
              *((_QWORD *)v69 + 140) = 0LL;
              *((_QWORD *)v69 + 141) = 0LL;
              *((_DWORD *)v69 + 33) = v63;
              *((_DWORD *)v69 + 52) = v71;
              v72 = v116;
              *((_DWORD *)v69 + 53) = 0;
              *((_QWORD *)v69 + 8) = v72;
              *((_QWORD *)v69 + 9) = v117;
              *((_QWORD *)v69 + 10) = v118;
              *((_DWORD *)v69 + 200) = 0;
              *((_QWORD *)v69 + 99) = 0LL;
              *((_QWORD *)v69 + 98) = 0LL;
              *((_QWORD *)v69 + 135) = 0LL;
              *((_QWORD *)v69 + 136) = 0LL;
              *((_QWORD *)v69 + 144) = 0LL;
              memset_0(v69 + 808, 0, 0x110uLL);
              v73 = P;
              *((_QWORD *)v69 + 138) = 0LL;
              *((_QWORD *)v69 + 139) = 0LL;
              *((_QWORD *)v69 + 142) = 0LL;
              *((_QWORD *)v69 + 143) = v73;
              if ( a23 )
                *((_DWORD *)v69 + 53) = *a23;
              if ( !v99 )
              {
                *((_QWORD *)v69 + 9) &= 0xFFFFFFEEDFE9F97BuLL;
                *((_QWORD *)v69 + 10) &= 0xFFFFFFEEDFE9F97BuLL;
              }
              if ( v101 == 1 )
              {
                *((_QWORD *)v69 + 9) &= 0x202800000uLL;
                *((_QWORD *)v69 + 10) &= 0x202800000uLL;
              }
              v74 = v119;
              *(_OWORD *)(v69 + 88) = 0LL;
              *(_OWORD *)(v69 + 104) = 0LL;
              *((_QWORD *)v69 + 97) = v57;
              *((_QWORD *)v69 + 137) = 0LL;
              *((_QWORD *)v69 + 22) = 0LL;
              v75 = SepReferenceLogonSession(v74, v69 + 216);
              if ( v75 < 0 )
              {
                *((_DWORD *)v69 + 50) |= 0x20u;
                *((_QWORD *)v69 + 27) = 0LL;
                ObfDereferenceObjectWithTag(v69, 0x746C6644u);
                return (unsigned int)v75;
              }
              if ( SeTokenLeakTracking )
              {
                **((_QWORD **)Object + 143) = KeGetCurrentThread()[1].CycleTime;
                v93 = Object;
                *(_QWORD *)(*((_QWORD *)Object + 143) + 8LL) = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
                *(_DWORD *)(v93[143] + 32LL) = 12;
                *(_DWORD *)(v93[143] + 280LL) = 0;
                *(_DWORD *)(v93[143] + 284LL) = 0;
                v69 = (char *)Object;
                Process = KeGetCurrentThread()->ApcState.Process;
                v95 = *((_QWORD *)Object + 143);
                *(_QWORD *)(v95 + 16) = Process[1].SecureState.SecureHandle;
                *(_DWORD *)(v95 + 24) = Process[1].KernelWaitTime;
                *(_WORD *)(v95 + 28) = WORD2(Process[1].KernelWaitTime);
                *(_BYTE *)(v95 + 30) = BYTE6(Process[1].KernelWaitTime);
                v96 = RtlWalkFrameChain((PVOID *)(*((_QWORD *)v69 + 143) + 40LL), 0x1Eu, 0);
                if ( KeGetCurrentIrql() < 2u )
                  RtlWalkFrameChain((PVOID *)(*((_QWORD *)v69 + 143) + 40LL + 8LL * v96), 30 - v96, 1u);
                SepAddTokenLogonSession(v69);
              }
              v76 = Src;
              if ( !SepTokenSidSharingEnabled )
              {
                *((_QWORD *)v69 + 19) = v69 + 1168;
                *((_DWORD *)v69 + 31) = v29 + 1;
                SidArea = &v69[16 * v29 + 1184];
                SidAreaSize = v63 - 16 * v29 - 16;
                RtlCopySidAndAttributesArray(
                  1u,
                  v76,
                  SidAreaSize,
                  (PSID_AND_ATTRIBUTES)v69 + 73,
                  SidArea,
                  &SidArea,
                  &SidAreaSize);
                RtlCopySidAndAttributesArray(
                  v29,
                  v120,
                  SidAreaSize,
                  (PSID_AND_ATTRIBUTES)v69 + 74,
                  SidArea,
                  &SidArea,
                  &SidAreaSize);
                goto LABEL_59;
              }
              inserted = SepSetTokenUserAndGroups((_DWORD)v69, (_DWORD)Src, v29, (_DWORD)v120, v61);
              if ( inserted < 0 )
                goto LABEL_70;
LABEL_59:
              RtlSidHashInitialize(
                *((PSID_AND_ATTRIBUTES *)v69 + 19),
                *((_DWORD *)v69 + 31),
                (PSID_AND_ATTRIBUTES_HASH)(v69 + 232));
              *((_QWORD *)v69 + 20) = 0LL;
              *((_DWORD *)v69 + 32) = 0;
              v77 = ExAllocatePool2(0x100uLL);
              *((_QWORD *)v69 + 22) = v77;
              v78 = (char *)v77;
              if ( !v77 )
              {
                inserted = -1073741801;
                goto LABEL_70;
              }
              v79 = (unsigned __int8 *)SourceSid;
              *((_QWORD *)v69 + 21) = v77;
              v80 = RtlLengthRequiredSid(v79[1]);
              RtlCopySid(v80, v78, v79);
              v81 = &v78[(v80 + 3) & 0xFFFFFFFC];
              v82 = (unsigned __int16 *)v121;
              if ( v121 )
              {
                *((_QWORD *)v69 + 23) = v81;
                memmove(v81, v82, v82[1]);
              }
              inserted = SepSetTokenClaims((_DWORD)v69, v125, v124, a21, v123);
              if ( inserted < 0 || a24 && (inserted = SepSetTokenTrust(v69, SeProcTrustWinTcbSid), inserted < 0) )
              {
LABEL_70:
                v83 = v69;
LABEL_71:
                ObfDereferenceObjectWithTag(v83, 0x746C6644u);
              }
              else
              {
                if ( SeTokenLeakTracking && SepTokenLeakMethodWatch == 12 )
                {
                  if ( KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)SepTokenLeakProcessCid )
                  {
                    v69 = (char *)Object;
                    *(_DWORD *)(*((_QWORD *)Object + 143) + 280LL) = _InterlockedIncrement(&SepTokenLeakMethodCount);
                    v97 = *(_DWORD *)(*((_QWORD *)v69 + 143) + 280LL);
                    if ( v97 >= SepTokenLeakBreakCount )
                    {
                      DbgPrint("\nToken number 0x%x = 0x%p\n", v97, v69);
                      __debugbreak();
                    }
                  }
                  else
                  {
                    v69 = (char *)Object;
                  }
                }
                if ( a24 )
                {
                  v92 = Object;
                  if ( KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors )
                    inserted = ObInsertObject(Object, 0LL, 0, 0, 0LL, 0LL);
                  if ( inserted < 0 )
                  {
                    *Handle = 0LL;
                  }
                  else
                  {
                    if ( !v100 )
                      SepFinalizeTokenAcls(v92);
                    *Handle = v92;
                  }
                }
                else
                {
                  inserted = SeCreateAccessState(&PassedAccessState, v127, v113, (char *)SeTokenObjectType + 76);
                  v83 = v69;
                  if ( inserted < 0 )
                    goto LABEL_71;
                  inserted = ObInsertObject(v69, &PassedAccessState, 0, 1u, 0LL, Handle);
                  SeDeleteAccessState(&PassedAccessState);
                  if ( inserted >= 0 )
                  {
                    if ( !v100 )
                      SepFinalizeTokenAcls(v69);
                    goto LABEL_70;
                  }
                }
              }
            }
            return (unsigned int)inserted;
          }
          ExFreePoolWithTag(v57, 0);
          if ( SeTokenLeakTracking )
          {
            v91 = v59;
LABEL_122:
            ExFreePoolWithTag(v91, 0);
          }
        }
        return 3221225626LL;
      }
      v44 = a11[v43].Attributes;
      if ( ((unsigned __int8)v44 & (unsigned __int8)v39) != 0 )
      {
        v44 |= 6u;
        a11[v43].Attributes = v44;
      }
      if ( (v44 & 0x10) != 0 )
      {
        if ( (v44 & 6) != 0 )
          return 3221225485LL;
        v103 = v42 | 0x800;
      }
      v45 = (unsigned __int8 *)a11[v43].Sid;
      RtlIdentifierAuthoritySid(v45);
      v46 = RtlIdentifierAuthoritySid(SeUntrustedMandatorySid);
      v49 = *(_DWORD *)v46->Value - *(_DWORD *)v47;
      if ( *(_DWORD *)v46->Value == *(_DWORD *)v47 )
        v49 = *(unsigned __int16 *)&v46->Value[4] - *(unsigned __int16 *)(v47 + 4);
      if ( !v49 )
      {
        v84 = v45[1];
        if ( (_BYTE)v84 )
        {
          v85 = v45[1];
          if ( *(_DWORD *)&v45[4 * (v84 - 1) + 8] > 0x4000u )
            return 3221226566LL;
        }
        else
        {
          v85 = v37;
        }
        if ( (v44 & 0x40) != 0 )
        {
          if ( SidAreaSize != -1 )
            return 3221225485LL;
          SidAreaSize = v43 + 1;
          if ( (_BYTE)v84 )
          {
            v86 = (unsigned int)(v85 - 1);
            if ( *(_DWORD *)&v45[4 * v86 + 8] >= 0x3000u )
            {
              v99 = v39;
              v87 = v48 | 0x2000;
LABEL_81:
              v103 = v87;
              goto LABEL_21;
            }
            v99 = v37;
            if ( *(_DWORD *)&v45[4 * v86 + 8] >= 0x2000u )
            {
              v87 = v48 | 0x2000;
              goto LABEL_81;
            }
          }
          else
          {
            v99 = v37;
          }
          v101 = v39;
        }
      }
LABEL_21:
      if ( !v38 )
      {
        v89 = RtlEqualSid(SourceSid, v45);
        v37 = 0LL;
        v39 = 1;
        v38 = v89 != 0;
      }
      if ( !v40 )
      {
        v88 = RtlEqualSid(v108, v45);
        v37 = 0LL;
        if ( v88 )
        {
          if ( (v44 & 8) == 0 )
            return 3221225562LL;
          v39 = 1;
          v107 = v43 + 1;
          v40 = 1;
        }
        else
        {
          v39 = 1;
        }
      }
      v42 = v103;
      v43 += v39;
    }
  }
  return result;
}
