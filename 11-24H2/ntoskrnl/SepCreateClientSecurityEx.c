/*
 * XREFs of SepCreateClientSecurityEx @ 0x1408A0160
 * Callers:
 *     SeCreateClientSecurityFromSubjectContextEx @ 0x140606840 (SeCreateClientSecurityFromSubjectContextEx.c)
 *     SeCreateClientSecurity @ 0x14089EDC0 (SeCreateClientSecurity.c)
 *     NtAlpcImpersonateClientOfPort @ 0x14089F010 (NtAlpcImpersonateClientOfPort.c)
 *     SeCreateClientSecurityEx @ 0x14089FB40 (SeCreateClientSecurityEx.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x14089FDF0 (AlpcpGetEffectiveTokenMessage.c)
 *     AlpcpExposeTokenAttribute @ 0x1408A0FD0 (AlpcpExposeTokenAttribute.c)
 *     SeCreateClientSecurityFromSubjectContext @ 0x140A35800 (SeCreateClientSecurityFromSubjectContext.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     SepGetAnonymousToken @ 0x1403B977C (SepGetAnonymousToken.c)
 *     PsGetCurrentServerSilo @ 0x1403C3490 (PsGetCurrentServerSilo.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 *     PsIsHostSilo @ 0x1404329D0 (PsIsHostSilo.c)
 *     SepCopyClientTokenAndSetSilo @ 0x14078F764 (SepCopyClientTokenAndSetSilo.c)
 *     SepDuplicateToken @ 0x1408527E0 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     SepFinalizeTokenAcls @ 0x1408E6CA0 (SepFinalizeTokenAcls.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1408E6CE0 (SepAppendAceToTokenObjectAcl.c)
 *     SeCopyClientToken @ 0x1408E7698 (SeCopyClientToken.c)
 *     RtlCopySid @ 0x1408E7870 (RtlCopySid.c)
 *     SeQueryServerSiloToken @ 0x1409A0F90 (SeQueryServerSiloToken.c)
 *     SeGetTokenControlInformation @ 0x1409CF560 (SeGetTokenControlInformation.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCreateClientSecurityEx(
        __int64 a1,
        __int64 a2,
        char a3,
        int a4,
        char a5,
        unsigned int a6,
        char a7,
        __int64 a8,
        char a9,
        unsigned __int8 *SourceSid,
        __int64 a11)
{
  char v12; // dl
  __int64 v14; // r15
  unsigned int v15; // eax
  __int64 result; // rax
  __int64 v17; // rbx
  char v18; // al
  bool v19; // al
  bool IsCurrentThreadInServerSilo; // al
  int inserted; // edi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 Process; // rcx
  ULONG_PTR v24; // rax
  void *v25; // rdi
  __int64 v26; // rcx
  int AnonymousToken; // r15d
  unsigned __int8 *v28; // r12
  void *v29; // r15
  _QWORD *v30; // rdi
  void *v31; // rcx
  PVOID v32; // rcx
  ULONG v33; // r13d
  void *Pool2; // rax
  int appended; // eax
  __int64 v36; // rdi
  int v37; // r8d
  unsigned __int64 CurrentServerSilo; // rax
  int v39; // eax
  unsigned int Src; // [rsp+20h] [rbp-60h]
  __int64 v41; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v42[4]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v43; // [rsp+68h] [rbp-18h]
  PVOID Object; // [rsp+B8h] [rbp+38h] BYREF

  v12 = 0;
  v41 = 0LL;
  Object = 0LL;
  v14 = a1;
  if ( *(_BYTE *)(a2 + 8) >= 2u )
    return 3221225485LL;
  v15 = *(_DWORD *)(a2 + 4);
  if ( v15 > 3 )
    return 3221225637LL;
  if ( a4 != 2 )
  {
    v17 = a11;
    *(_BYTE *)(a11 + 25) = *(_BYTE *)(a2 + 9);
    goto LABEL_7;
  }
  if ( (int)v15 > (int)a6 )
  {
    if ( !a7 )
      return 3221225637LL;
    v12 = 1;
  }
  if ( a6 > 1 && (!a3 || a6 == 3) )
  {
    v19 = a5 || *(_BYTE *)(a2 + 9);
    v17 = a11;
    *(_BYTE *)(a11 + 25) = v19;
    if ( !v12 )
    {
LABEL_7:
      if ( *(_BYTE *)(a2 + 8) )
      {
        *(_BYTE *)(v17 + 24) = 1;
        if ( a3 )
          SeGetTokenControlInformation(a1, v17 + 28);
LABEL_10:
        *(_DWORD *)v17 = 12;
        *(_DWORD *)(v17 + 4) = *(_DWORD *)(a2 + 4);
        *(_BYTE *)(v17 + 8) = *(_BYTE *)(a2 + 8);
        v18 = *(_BYTE *)(a2 + 9);
LABEL_11:
        *(_QWORD *)(v17 + 16) = v14;
        *(_BYTE *)(v17 + 9) = v18;
        result = 0LL;
        *(_BYTE *)(v17 + 26) = a3;
        return result;
      }
      *(_BYTE *)(v17 + 24) = 0;
      IsCurrentThreadInServerSilo = PsIsCurrentThreadInServerSilo();
      Object = 0LL;
      if ( IsCurrentThreadInServerSilo )
      {
        v36 = *(_QWORD *)(v14 + 24);
        if ( (int)SeQueryServerSiloToken(v14, &Object) >= 0 && PsIsHostSilo((__int64)Object) && v36 == 999 )
        {
          CurrentServerSilo = PsGetCurrentServerSilo();
          v39 = SepCopyClientTokenAndSetSilo(v14, *(_DWORD *)(a2 + 4), CurrentServerSilo, (PVOID *)&v41);
        }
        else
        {
          v39 = SeCopyClientToken(v14, *(_DWORD *)(a2 + 4), v37, 0, 0LL, (__int64)&v41);
        }
        v14 = v41;
        inserted = v39;
        goto LABEL_24;
      }
      Src = *(_DWORD *)(a2 + 4);
      v42[0] = 48LL;
      memset(&v42[1], 0, 24);
      v43 = 0LL;
      inserted = SepDuplicateToken(v14, (int)v42, 0, 2, Src, 0, 0, &Object);
      if ( inserted < 0 )
        goto LABEL_23;
      if ( a9 )
      {
        v28 = SourceSid;
        v29 = 0LL;
        v30 = Object;
        if ( SourceSid )
        {
          v33 = 4 * SourceSid[1] + 8;
          Pool2 = (void *)ExAllocatePool2(0x100uLL, v33, 0x69536553u);
          v29 = Pool2;
          if ( !Pool2 )
          {
            inserted = -1073741670;
            goto LABEL_23;
          }
          RtlCopySid(v33, Pool2, v28);
        }
        v31 = (void *)v30[138];
        if ( v31 )
          ExFreePoolWithTag(v31, 0);
        v30[138] = v29;
      }
      inserted = ObInsertObjectEx((struct _FILE_OBJECT *)Object, 0LL, 0, 0, 0, 0LL, 0LL);
      if ( inserted >= 0 )
      {
        v32 = Object;
        if ( (*((_DWORD *)Object + 50) & 0x4000) == 0
          || !*((_QWORD *)Object + 98)
          || (appended = SepAppendAceToTokenObjectAcl((ULONG_PTR)Object),
              v32 = Object,
              inserted = appended,
              appended >= 0) )
        {
          SepFinalizeTokenAcls(v32);
          v14 = (__int64)Object;
          goto LABEL_24;
        }
        ObfDereferenceObject(Object);
      }
LABEL_23:
      v14 = 0LL;
LABEL_24:
      if ( inserted < 0 )
        return (unsigned int)inserted;
      if ( ObpTraceFlags )
      {
        ObpPushStackInfo(v14 - 48, 0, 1u, 0x746C6644u);
        ObpPushStackInfo(v14 - 48, 1, 1u, 0x63436553u);
      }
      goto LABEL_10;
    }
  }
  else
  {
    if ( !a7 )
      return 3221225637LL;
    v17 = a11;
  }
  if ( (*(_DWORD *)(a1 + 200) & 0x4000) != 0 )
    goto LABEL_61;
  if ( !a8 )
  {
    a1 = 0LL;
LABEL_61:
    AnonymousToken = SepGetAnonymousToken(a1, &Object);
    goto LABEL_40;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (struct _KTHREAD *)a8 == CurrentThread )
    Process = (__int64)CurrentThread->ApcState.Process;
  else
    Process = *(_QWORD *)(a8 + 544);
  v24 = PsReferencePrimaryTokenWithTag(Process, 0x746C6644u);
  v25 = (void *)v24;
  if ( (*(_DWORD *)(v24 + 200) & 0x4000) != 0 )
    v26 = v24;
  else
    v26 = 0LL;
  AnonymousToken = SepGetAnonymousToken(v26, &Object);
  ObfDereferenceObject(v25);
LABEL_40:
  if ( AnonymousToken < 0 )
    return (unsigned int)AnonymousToken;
  v14 = (__int64)Object;
  result = ObInsertObjectEx((struct _FILE_OBJECT *)Object, 0LL, 0, 0, 0, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    if ( ObpTraceFlags )
    {
      ObpPushStackInfo(v14 - 48, 0, 1u, 0x746C6644u);
      ObpPushStackInfo(v14 - 48, 1, 1u, 0x63436553u);
    }
    *(_QWORD *)v17 = 12LL;
    *(_BYTE *)(v17 + 8) = 0;
    v18 = *(_BYTE *)(a2 + 9);
    *(_BYTE *)(v17 + 24) = 0;
    goto LABEL_11;
  }
  return result;
}
