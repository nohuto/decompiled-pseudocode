/*
 * XREFs of ObpCaptureBoundaryDescriptor @ 0x140A062C8
 * Callers:
 *     NtCreatePrivateNamespace @ 0x140A05BA0 (NtCreatePrivateNamespace.c)
 *     NtOpenPrivateNamespace @ 0x140A06070 (NtOpenPrivateNamespace.c)
 * Callees:
 *     RtlLengthSid @ 0x14044B2D0 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SeCaptureSubjectContextEx @ 0x14083BF00 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x14086B5C0 (RtlEnumerateBoundaryDescriptorEntries.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     SeQueryInformationToken @ 0x1408E4F90 (SeQueryInformationToken.c)
 *     ObpCheckDuplicateEntries @ 0x140A06628 (ObpCheckDuplicateEntries.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpCaptureBoundaryDescriptor(char *Src, __int64 *a2)
{
  __int64 v3; // rdx
  unsigned int v4; // ecx
  __int64 Pool2; // rsi
  char v7; // r12
  __int64 v8; // r15
  __int64 v9; // r13
  struct _KTHREAD *CurrentThread; // rcx
  PACCESS_TOKEN PrimaryToken; // rdi
  unsigned __int64 v12; // r15
  int InformationToken; // edi
  int v14; // edx
  _DWORD *v15; // rcx
  int v16; // eax
  PVOID TokenInformation; // [rsp+30h] [rbp-88h] BYREF
  PVOID P[3]; // [rsp+38h] [rbp-80h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-68h] BYREF
  size_t Size[2]; // [rsp+70h] [rbp-48h] BYREF

  P[2] = a2;
  *(_OWORD *)Size = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  *a2 = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v3 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Src < 0x7FFFFFFF0000LL )
      v3 = (__int64)Src;
    RtlCopyVolatileMemory(Size, (const void *)v3, 0x10uLL);
    v4 = Size[1];
    if ( (unsigned int)(LODWORD(Size[1]) - 16) > 0x7FEF )
      return 3221225485LL;
    if ( LODWORD(Size[1]) )
    {
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&Src[LODWORD(Size[1])] > 0x7FFFFFFF0000LL || &Src[LODWORD(Size[1])] < Src )
        v4 = Size[1];
    }
  }
  else
  {
    *(_OWORD *)Size = *(_OWORD *)Src;
    v4 = *((_DWORD *)Src + 2);
  }
  Pool2 = 0LL;
  LODWORD(TokenInformation) = 0;
  v7 = 0;
  v8 = v4;
  P[0] = 0LL;
  LODWORD(v9) = 0;
  if ( (Size[1] & 0x100000000LL) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = 1;
    SeCaptureSubjectContextEx(CurrentThread, CurrentThread->ApcState.Process, &SubjectContext);
    PrimaryToken = SubjectContext.PrimaryToken;
    if ( SubjectContext.ClientToken )
      PrimaryToken = SubjectContext.ClientToken;
    SeQueryInformationToken(PrimaryToken, TokenIsAppContainer, &TokenInformation);
    if ( (_DWORD)TokenInformation )
    {
      InformationToken = SeQueryInformationToken(PrimaryToken, TokenAppContainerSid, P);
      if ( InformationToken < 0 )
        goto LABEL_22;
      v9 = RtlLengthSid(*(PSID *)P[0]);
      v8 += ((v9 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 8;
    }
  }
  v12 = v8 + 48;
  if ( v12 > 0xFFFFFFFF )
  {
    InformationToken = -1073741675;
    goto LABEL_22;
  }
  Pool2 = ExAllocatePool2(0x100uLL, (unsigned int)v12, 0x534E624Fu);
  P[1] = (PVOID)Pool2;
  if ( !Pool2 )
  {
    InformationToken = -1073741670;
    goto LABEL_22;
  }
  *(_QWORD *)(Pool2 + 24) = (unsigned int)v12 - 48LL;
  memmove((void *)(Pool2 + 48), Src, LODWORD(Size[1]));
  if ( P[0] )
  {
    v15 = (_DWORD *)(Pool2 + 48 + LODWORD(Size[1]));
    if ( v15 != (_DWORD *)(((unsigned __int64)v15 + 7) & 0xFFFFFFFFFFFFFFF8uLL) )
    {
LABEL_30:
      InformationToken = -1073741811;
      goto LABEL_22;
    }
    *v15 = 2;
    v16 = ((v9 + 7) & 0xFFFFFFF8) + 8;
    v15[1] = v16;
    LODWORD(Size[1]) += v16;
    ++HIDWORD(Size[0]);
    memmove(v15 + 2, *(const void **)P[0], (unsigned int)v9);
  }
  *(_DWORD *)(Pool2 + 56) = Size[1];
  *(_DWORD *)(Pool2 + 52) = HIDWORD(Size[0]);
  InformationToken = RtlEnumerateBoundaryDescriptorEntries((_DWORD *)(Pool2 + 48), 0LL, 0LL);
  if ( InformationToken >= 0 && !(unsigned int)ObpCheckDuplicateEntries(Pool2) )
    goto LABEL_30;
  *(_BYTE *)(Pool2 + 40) = 0;
  RtlEnumerateBoundaryDescriptorEntries(
    (_DWORD *)(Pool2 + 48),
    (__int64 (__fastcall *)(void *))ObpHashBoundaryFunction,
    Pool2);
  v14 = (3134165325u * (unsigned __int64)*(unsigned __int8 *)(Pool2 + 40)) >> 32;
  *(_BYTE *)(Pool2 + 40) -= 37 * ((v14 + (((unsigned int)*(unsigned __int8 *)(Pool2 + 40) - v14) >> 1)) >> 5);
LABEL_22:
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
  if ( v7 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( InformationToken < 0 )
  {
    if ( Pool2 )
      ExFreePoolWithTag((PVOID)Pool2, 0x534E624Fu);
  }
  else
  {
    *a2 = Pool2;
  }
  return (unsigned int)InformationToken;
}
