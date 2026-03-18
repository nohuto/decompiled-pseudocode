/*
 * XREFs of NtSetCachedSigningLevel2 @ 0x140889860
 * Callers:
 *     NtSetCachedSigningLevel @ 0x140889830 (NtSetCachedSigningLevel.c)
 * Callees:
 *     RtlUnicodeStringValidateEx @ 0x14044AF84 (RtlUnicodeStringValidateEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     SepCaptureUnicodeStringArray @ 0x1408890B0 (SepCaptureUnicodeStringArray.c)
 *     SepReleaseUnicodeStringArray @ 0x1408894A0 (SepReleaseUnicodeStringArray.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     SeCompareSigningLevels @ 0x1409354F0 (SeCompareSigningLevels.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtSetCachedSigningLevel2(
        __int64 a1,
        __int64 a2,
        const void *a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r12
  __int16 v8; // r14
  UNICODE_STRING *Pool2; // rdi
  char PreviousMode; // r15
  size_t v11; // r12
  int v12; // ebx
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r9
  ULONG v17; // edx
  __int64 v18; // rdx
  int v19; // eax
  __int128 v20; // xmm0
  void *v21; // rbx
  _KPROCESS *Process; // rcx
  char v23; // di
  char v24; // bl
  int v25; // eax
  char v26; // cl
  char v27; // [rsp+58h] [rbp-80h]
  PVOID P; // [rsp+60h] [rbp-78h]
  PCUNICODE_STRING SourceString[2]; // [rsp+68h] [rbp-70h] BYREF
  void *Src[2]; // [rsp+78h] [rbp-60h]
  void *v31; // [rsp+98h] [rbp-40h]
  char v32; // [rsp+E8h] [rbp+10h]

  v32 = a2;
  v6 = a4;
  v8 = a1;
  Pool2 = 0LL;
  v27 = 0;
  SourceString[0] = 0LL;
  P = 0LL;
  *(_OWORD *)Src = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (a1 & 0x2000) != 0 )
  {
    if ( qword_140F04968 )
    {
      if ( !a6 || !a5 )
      {
        v12 = -1073741811;
        goto LABEL_12;
      }
      if ( PreviousMode == 1 )
      {
        if ( (BYTE2(KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1]) & 7) != 1 )
          goto LABEL_69;
        if ( (a6 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v20 = *(_OWORD *)(a6 + 8);
        *(_OWORD *)Src = v20;
        v21 = (void *)v20;
        if ( (_QWORD)v20 )
        {
          if ( ((__int64)Src[1] & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (char *)Src[1] + (unsigned __int64)v20 > (void *)0x7FFFFFFF0000LL
            || (char *)Src[1] + (unsigned __int64)v20 < Src[1] )
          {
            v21 = Src[0];
          }
        }
        v31 = v21;
        if ( !Src[1] || !v21 )
        {
          v12 = -1073741811;
          goto LABEL_12;
        }
        if ( (unsigned __int64)v21 > 0xFFFF )
        {
          v12 = -1073741811;
          goto LABEL_12;
        }
        P = (PVOID)ExAllocatePool2(0x103uLL);
        if ( !P )
        {
          v12 = -1073741670;
          goto LABEL_12;
        }
        memmove(P, Src[1], (size_t)v21);
      }
      else
      {
        v21 = *(void **)(a6 + 8);
        P = *(PVOID *)(a6 + 16);
      }
      LOBYTE(a1) = PreviousMode;
      v19 = guard_dispatch_icall_no_overrides(a1, a5, v21, P);
      goto LABEL_37;
    }
LABEL_39:
    v12 = -1073741822;
    goto LABEL_12;
  }
  if ( !qword_140F04888 )
    goto LABEL_39;
  if ( (a2 & 0x30) != 0 )
    goto LABEL_43;
  if ( a4 - 1 > 0xFFF )
    goto LABEL_42;
  if ( (a1 & 6) == 0 && (_BYTE)a2 )
  {
LABEL_43:
    v12 = -1073741584;
    goto LABEL_12;
  }
  if ( (a1 & 3) == 3 )
    goto LABEL_16;
  if ( PreviousMode == 1 )
  {
    if ( (a1 & 2) != 0 )
      goto LABEL_16;
    v8 = a1 | 1;
    if ( (a1 & 4) != 0 )
      goto LABEL_10;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( (BYTE2(Process[3].ActiveGroupsMask.Masks[1]) & 7) == 1 )
    {
      v23 = Process[3].ActiveGroupsMask.Masks[1] & 0xF;
      v24 = BYTE1(Process[3].ActiveGroupsMask.Masks[1]) & 0xF;
      LOBYTE(a2) = v23;
      LOBYTE(Process) = v24;
      v25 = SeCompareSigningLevels(Process, a2);
      v26 = v23;
      if ( !v25 )
        v26 = v24;
      v27 = v26;
      goto LABEL_10;
    }
LABEL_69:
    v12 = -1073741790;
    goto LABEL_12;
  }
  if ( (a1 & 1) == 0 )
  {
    if ( (a1 & 2) != 0 )
    {
      v27 = 8;
      goto LABEL_10;
    }
LABEL_16:
    v12 = -1073741585;
    goto LABEL_12;
  }
  v27 = 15;
LABEL_10:
  v11 = 8 * v6;
  Pool2 = (UNICODE_STRING *)ExAllocatePool2(0x100uLL);
  SourceString[1] = Pool2;
  if ( !Pool2 )
  {
    v12 = -1073741670;
    goto LABEL_12;
  }
  if ( PreviousMode == 1 )
  {
    if ( v11 && ((unsigned __int8)a3 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v14 = a6;
    if ( a6 && (a6 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  else
  {
    v14 = a6;
  }
  memmove(Pool2, a3, v11);
  if ( v14 )
  {
    if ( *(_DWORD *)v14 < 0x18u )
    {
      v12 = -1073741580;
      goto LABEL_12;
    }
    if ( *(_WORD *)(v14 + 8) )
    {
      LOBYTE(v15) = PreviousMode;
      v12 = SepCaptureUnicodeStringArray(v14 + 8, 1u, v15, SourceString);
      if ( v12 < 0 )
        goto LABEL_12;
      v12 = RtlUnicodeStringValidateEx(SourceString[0], v17);
      if ( v12 < 0 )
        goto LABEL_12;
    }
  }
  v18 = a4;
  if ( (v8 & 6) == 0 )
  {
LABEL_36:
    LOBYTE(v16) = v27;
    LOBYTE(v15) = v32;
    LOBYTE(v18) = PreviousMode;
    v19 = guard_dispatch_icall_no_overrides(v8 & 0x807, v18, v15, v16);
LABEL_37:
    v12 = v19;
    goto LABEL_12;
  }
  if ( a4 != 1 )
  {
LABEL_42:
    v12 = -1073741582;
    goto LABEL_12;
  }
  if ( a5 == *(_QWORD *)&Pool2->Length )
    goto LABEL_36;
  v12 = -1073741581;
LABEL_12:
  SepReleaseUnicodeStringArray((void *)SourceString[0], PreviousMode);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x63734943u);
  if ( P && PreviousMode == 1 )
    ExFreePoolWithTag(P, 0x63734943u);
  return (unsigned int)v12;
}
