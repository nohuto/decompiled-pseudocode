/*
 * XREFs of ObpParseSymbolicLinkEx @ 0x1408E3460
 * Callers:
 *     ObpLookupObjectName @ 0x1408A58B0 (ObpLookupObjectName.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 *     ObReferenceObjectByPointer @ 0x140424A50 (ObReferenceObjectByPointer.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x14047F700 (PdcCreateWatchdogAroundClientCall.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     RtlIsSandboxedToken @ 0x1408E3950 (RtlIsSandboxedToken.c)
 *     SeQueryInformationToken @ 0x1408E4F90 (SeQueryInformationToken.c)
 *     ObQueryNameStringMode @ 0x1409524C0 (ObQueryNameStringMode.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpParseSymbolicLinkEx(
        unsigned __int16 *Object,
        POBJECT_TYPE ObjectType,
        struct _SECURITY_SUBJECT_CONTEXT *a3,
        KPROCESSOR_MODE a4,
        int a5,
        __int64 a6,
        unsigned __int16 *a7,
        int a8,
        int a9,
        __int64 a10,
        unsigned __int16 **a11)
{
  struct _OBJECT_TYPE *v11; // r12
  bool v12; // r14
  int v15; // eax
  unsigned int v16; // edi
  __int64 v17; // rdi
  unsigned __int16 *v18; // r13
  unsigned int v19; // r14d
  unsigned int v20; // edi
  char *v21; // r12
  char *v22; // rcx
  unsigned __int16 **v23; // rcx
  unsigned __int16 *v24; // rax
  NTSTATUS v26; // eax
  int v27; // r12d
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // r13
  PACCESS_TOKEN ClientToken; // rcx
  unsigned int v30; // eax
  void *v31; // r13
  __int64 Pool2; // rax
  char IsSandboxedToken; // al
  unsigned __int16 *v34; // r8
  KPROCESSOR_MODE v35; // [rsp+30h] [rbp-D0h]
  unsigned __int16 v36; // [rsp+32h] [rbp-CEh] BYREF
  PVOID TokenInformation; // [rsp+34h] [rbp-CCh] BYREF
  _QWORD v38[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v39; // [rsp+50h] [rbp-B0h] BYREF
  POBJECT_TYPE v40; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int16 **v41; // [rsp+60h] [rbp-A0h]
  PVOID Objecta; // [rsp+68h] [rbp-98h]
  __int64 v43; // [rsp+70h] [rbp-90h]
  __int128 v44; // [rsp+78h] [rbp-88h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+88h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD *v47; // [rsp+D0h] [rbp-30h]
  __int64 v48; // [rsp+D8h] [rbp-28h]
  __int64 v49; // [rsp+E0h] [rbp-20h]
  _DWORD v50[2]; // [rsp+E8h] [rbp-18h] BYREF
  int *v51; // [rsp+F0h] [rbp-10h]
  __int64 v52; // [rsp+F8h] [rbp-8h]
  POBJECT_TYPE *v53; // [rsp+100h] [rbp+0h]
  __int64 v54; // [rsp+108h] [rbp+8h]
  unsigned __int16 *v55; // [rsp+110h] [rbp+10h]
  __int64 v56; // [rsp+118h] [rbp+18h]
  _QWORD *v57; // [rsp+120h] [rbp+20h]
  __int64 v58; // [rsp+128h] [rbp+28h]

  v11 = ObjectType;
  v12 = 0;
  v43 = a10;
  v40 = ObjectType;
  v41 = a11;
  v15 = *((_DWORD *)Object + 7);
  v35 = a4;
  LODWORD(TokenInformation) = 0;
  Objecta = 0LL;
  v44 = 0LL;
  if ( (v15 & 2) != 0 )
  {
    IsSandboxedToken = RtlIsSandboxedToken(a3 + 1);
    a4 = v35;
    v12 = IsSandboxedToken == 0;
  }
  v16 = 0x4000;
  if ( *((_DWORD *)Object + 9) < 0x4000u || v12 )
  {
    p_SubjectContext = a3 + 1;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    if ( a4 )
    {
      if ( !p_SubjectContext )
      {
        p_SubjectContext = &SubjectContext;
        SeCaptureSubjectContext(&SubjectContext);
      }
      ClientToken = p_SubjectContext->ClientToken;
      if ( !p_SubjectContext->ClientToken )
        ClientToken = p_SubjectContext->PrimaryToken;
      v27 = SeQueryInformationToken(ClientToken, TokenIntegrityLevel, &TokenInformation);
      if ( v27 < 0 )
      {
        v30 = 0;
        LODWORD(TokenInformation) = 0;
      }
      else
      {
        v30 = (unsigned int)TokenInformation;
      }
      if ( p_SubjectContext == &SubjectContext )
      {
        SeReleaseSubjectContext(p_SubjectContext);
        v30 = (unsigned int)TokenInformation;
      }
      if ( v27 < 0 )
        goto LABEL_40;
      v11 = v40;
    }
    else
    {
      v30 = 20480;
      LODWORD(TokenInformation) = 20480;
    }
    if ( v30 < 0x4000 )
      v16 = v30;
  }
  else
  {
    v16 = 0;
  }
  if ( *((_DWORD *)Object + 9) < v16 || v12 )
  {
    _m_prefetchw(Object + 14);
    if ( _InterlockedOr((volatile signed __int32 *)Object + 7, 0x80000000) >= 0 )
    {
      HIDWORD(TokenInformation) = 0;
      v31 = 0LL;
      v38[1] = L"UNKNOWN";
      v38[0] = 1048590LL;
      if ( (unsigned int)ObQueryNameStringMode((_DWORD)Object, 0, 0, (unsigned int)&TokenInformation + 4, 0) == -1073741820 )
      {
        Pool2 = ExAllocatePool2(0x100uLL, HIDWORD(TokenInformation), 0x6D4E624Fu);
        v31 = (void *)Pool2;
        if ( Pool2 )
          ObQueryNameStringMode(
            (_DWORD)Object,
            Pool2,
            HIDWORD(TokenInformation),
            (unsigned int)&TokenInformation + 4,
            0);
      }
      if ( (unsigned int)dword_140E07480 > 5 && tlgKeywordOn((__int64)&dword_140E07480, 0x400000000000LL) )
      {
        v48 = 2LL;
        v50[1] = 0;
        v47 = v50;
        v49 = *((_QWORD *)v34 + 1);
        v50[0] = *v34;
        v39 = *((_DWORD *)Object + 9);
        v51 = &v39;
        v53 = &v40;
        v55 = &v36;
        v57 = v38;
        v52 = 4LL;
        LODWORD(v40) = v16;
        v54 = 4LL;
        LOBYTE(v36) = v12;
        v56 = 1LL;
        v38[0] = 0x1000000LL;
        v58 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E07480,
          (unsigned __int8 *)byte_140048373,
          0LL,
          0LL,
          8u,
          &v46);
      }
      if ( v31 )
        ExFreePoolWithTag(v31, 0);
    }
    if ( v12 )
    {
      v27 = -1073741772;
      goto LABEL_40;
    }
  }
  if ( *a7 )
  {
    if ( **((_WORD **)a7 + 1) != 92 )
    {
      v27 = -1073741788;
      goto LABEL_40;
    }
  }
  else if ( v11 == ObpSymbolicLinkObjectType && ((*((_DWORD *)Object + 7) & 1) == 0 || !PsIsCurrentThreadInServerSilo()) )
  {
    v26 = ObReferenceObjectByPointer(Object, 0, v11, v35);
    v27 = v26;
    if ( v26 >= 0 )
    {
      *v41 = Object;
      goto LABEL_40;
    }
    if ( v26 != -1073741788 )
      goto LABEL_40;
  }
  v17 = v43;
  if ( (*((_DWORD *)Object + 7) & 8) != 0 )
    *(_DWORD *)(v43 + 4) &= *((_DWORD *)Object + 8);
  if ( (*((_DWORD *)Object + 7) & 4) != 0 )
    *(_QWORD *)(v17 + 8) = PdcCreateWatchdogAroundClientCall();
  v18 = Object + 4;
  if ( (*((_DWORD *)Object + 7) & 0x10) != 0 )
  {
    v27 = guard_dispatch_icall_no_overrides(Object, *((_QWORD *)Object + 2));
    if ( v27 < 0 )
      goto LABEL_40;
    v18 = (unsigned __int16 *)&v44;
  }
  v19 = *v18;
  if ( *v18
    && *(_WORD *)(*((_QWORD *)v18 + 1) + 2 * ((unsigned __int64)*v18 >> 1) - 2) == 92
    && *a7
    && **((_WORD **)a7 + 1) == 92 )
  {
    v19 -= 2;
  }
  v20 = v19 + *a7;
  if ( v20 > 0xFFF0 )
  {
    v27 = -1073741562;
  }
  else
  {
    v36 = *(_WORD *)(a6 + 2);
    if ( v36 > (unsigned __int16)v20 )
    {
      v21 = *(char **)(a6 + 8);
LABEL_20:
      if ( *a7 )
        memmove(&v21[v19], *((const void **)a7 + 1), *a7);
      memmove(v21, *((const void **)v18 + 1), v19);
      *(_WORD *)&v21[2 * ((unsigned __int64)(unsigned __int16)v20 >> 1)] = 0;
      v22 = *(char **)(a6 + 8);
      if ( v21 != v22 && v22 )
        ExFreePoolWithTag(v22, 0);
      v23 = v41;
      *(_WORD *)(a6 + 2) = v36;
      v24 = (unsigned __int16 *)Objecta;
      *(_QWORD *)(a6 + 8) = v21;
      *(_WORD *)a6 = v20;
      if ( v24 )
      {
        *v23 = v24;
        return 280LL;
      }
      else
      {
        *v23 = Object;
        if ( (*((_DWORD *)Object + 7) & 1) != 0 )
          return 872LL;
        else
          return 260LL;
      }
    }
    v36 = v20 + 2;
    v21 = (char *)ExAllocatePool2(0x100uLL, (unsigned __int16)(v20 + 2), 0x6D4E624Fu);
    if ( v21 )
      goto LABEL_20;
    v27 = -1073741670;
  }
LABEL_40:
  if ( Objecta )
    ObfDereferenceObject(Objecta);
  return (unsigned int)v27;
}
