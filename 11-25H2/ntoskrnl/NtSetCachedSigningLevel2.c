/*
 * XREFs of NtSetCachedSigningLevel2 @ 0x140865810
 * Callers:
 *     NtSetCachedSigningLevel @ 0x1408657E0 (NtSetCachedSigningLevel.c)
 * Callees:
 *     RtlUnicodeStringValidateEx @ 0x14044BDB4 (RtlUnicodeStringValidateEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     SepReleaseUnicodeStringArray @ 0x140867664 (SepReleaseUnicodeStringArray.c)
 *     SepCaptureUnicodeStringArray @ 0x140867B30 (SepCaptureUnicodeStringArray.c)
 *     SeCompareSigningLevels @ 0x14091E260 (SeCompareSigningLevels.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtSetCachedSigningLevel2(
        __int64 a1,
        unsigned __int64 a2,
        const void *a3,
        unsigned int a4,
        __int64 a5,
        char *a6)
{
  __int64 v6; // r12
  __int16 v8; // r14
  UNICODE_STRING *Pool2; // rdi
  char PreviousMode; // r15
  size_t v11; // r12
  char *v12; // rbx
  __int64 v13; // r8
  NTSTATUS v14; // ebx
  NTSTATUS v15; // eax
  __int128 v17; // xmm0
  void *v18; // rbx
  _KPROCESS *Process; // rcx
  PVOID P; // [rsp+60h] [rbp-78h]
  PCUNICODE_STRING SourceString[2]; // [rsp+68h] [rbp-70h] BYREF
  void *Src[2]; // [rsp+78h] [rbp-60h]
  void *v23; // [rsp+98h] [rbp-40h]

  v6 = a4;
  v8 = a1;
  Pool2 = 0LL;
  SourceString[0] = 0LL;
  P = 0LL;
  *(_OWORD *)Src = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (a1 & 0x2000) != 0 )
  {
    if ( qword_140F04588 )
    {
      a2 = (unsigned __int64)a6;
      if ( !a6 || !a5 )
      {
        v14 = -1073741811;
        goto LABEL_34;
      }
      if ( PreviousMode == 1 )
      {
        if ( (BYTE2(KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1]) & 7) != 1 )
          goto LABEL_68;
        if ( ((unsigned __int8)a6 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v17 = *(_OWORD *)(a6 + 8);
        *(_OWORD *)Src = v17;
        v18 = (void *)v17;
        if ( (_QWORD)v17 )
        {
          if ( ((__int64)Src[1] & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          a2 = (unsigned __int64)Src[1] + v17;
          if ( (char *)Src[1] + (unsigned __int64)v17 > (void *)0x7FFFFFFF0000LL || (void *)a2 < Src[1] )
            v18 = Src[0];
        }
        v23 = v18;
        if ( !Src[1] || !v18 )
        {
          v14 = -1073741811;
          goto LABEL_34;
        }
        if ( (unsigned __int64)v18 > 0xFFFF )
        {
          v14 = -1073741811;
          goto LABEL_34;
        }
        P = (PVOID)ExAllocatePool2(0x103uLL);
        if ( !P )
        {
          v14 = -1073741670;
          goto LABEL_34;
        }
        memmove(P, Src[1], (size_t)v18);
      }
      else
      {
        P = (PVOID)*((_QWORD *)a6 + 2);
      }
      LOBYTE(a1) = PreviousMode;
      v15 = guard_dispatch_icall_no_overrides(a1);
      goto LABEL_31;
    }
LABEL_33:
    v14 = -1073741822;
    goto LABEL_34;
  }
  if ( !qword_140F044A8 )
    goto LABEL_33;
  if ( (a2 & 0x30) != 0 )
    goto LABEL_41;
  if ( a4 - 1 > 0xFFF )
    goto LABEL_39;
  if ( (a1 & 6) == 0 && (_BYTE)a2 )
  {
LABEL_41:
    v14 = -1073741584;
    goto LABEL_34;
  }
  if ( (a1 & 3) == 3 )
    goto LABEL_38;
  if ( PreviousMode == 1 )
  {
    if ( (a1 & 2) == 0 )
    {
      v8 = a1 | 1;
      if ( (a1 & 4) != 0 )
        goto LABEL_10;
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( (BYTE2(Process[3].ActiveGroupsMask.Masks[1]) & 7) == 1 )
      {
        LOBYTE(a2) = Process[3].ActiveGroupsMask.Masks[1] & 0xF;
        LOBYTE(Process) = BYTE1(Process[3].ActiveGroupsMask.Masks[1]) & 0xF;
        SeCompareSigningLevels(Process, a2);
        goto LABEL_10;
      }
LABEL_68:
      v14 = -1073741790;
      goto LABEL_34;
    }
LABEL_38:
    v14 = -1073741585;
    goto LABEL_34;
  }
  if ( (a1 & 1) == 0 && (a1 & 2) == 0 )
    goto LABEL_38;
LABEL_10:
  v11 = 8 * v6;
  Pool2 = (UNICODE_STRING *)ExAllocatePool2(0x100uLL);
  SourceString[1] = Pool2;
  if ( !Pool2 )
  {
    v14 = -1073741670;
    goto LABEL_34;
  }
  if ( PreviousMode == 1 )
  {
    if ( v11 && ((unsigned __int8)a3 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = a6;
    if ( a6 && ((unsigned __int8)a6 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  else
  {
    v12 = a6;
  }
  memmove(Pool2, a3, v11);
  if ( !v12 )
    goto LABEL_27;
  if ( *(_DWORD *)v12 < 0x18u )
  {
    v14 = -1073741580;
    goto LABEL_34;
  }
  if ( !*((_WORD *)v12 + 4)
    || (LOBYTE(v13) = PreviousMode, v14 = SepCaptureUnicodeStringArray(v12 + 8, 1LL, v13, SourceString), v14 >= 0)
    && (v14 = RtlUnicodeStringValidateEx(SourceString[0], a2), v14 >= 0) )
  {
LABEL_27:
    a2 = a4;
    if ( (v8 & 6) == 0 )
    {
LABEL_30:
      v15 = guard_dispatch_icall_no_overrides(v8 & 0x807);
LABEL_31:
      v14 = v15;
      goto LABEL_34;
    }
    if ( a4 == 1 )
    {
      if ( a5 == *(_QWORD *)&Pool2->Length )
        goto LABEL_30;
      v14 = -1073741581;
      goto LABEL_34;
    }
LABEL_39:
    v14 = -1073741582;
  }
LABEL_34:
  LOBYTE(a2) = PreviousMode;
  SepReleaseUnicodeStringArray(SourceString[0], a2);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x63734943u);
  if ( P && PreviousMode == 1 )
    ExFreePoolWithTag(P, 0x63734943u);
  return (unsigned int)v14;
}
