/*
 * XREFs of NtManageHotPatch @ 0x140AE9BD0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1403C3490 (PsGetCurrentServerSilo.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x14047F700 (PdcCreateWatchdogAroundClientCall.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiApplyImageHotPatchRequest @ 0x1407F1EEC (MiApplyImageHotPatchRequest.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     RtlValidSid @ 0x14086B530 (RtlValidSid.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     RtlDuplicateUnicodeString @ 0x1409287C0 (RtlDuplicateUnicodeString.c)
 *     MiQuerySingleLoadedPatch @ 0x140A2654C (MiQuerySingleLoadedPatch.c)
 *     MiLoadHotPatchForUserSid @ 0x140A9AA90 (MiLoadHotPatchForUserSid.c)
 *     MiLoadHotPatch @ 0x140A9ADA4 (MiLoadHotPatch.c)
 *     MiQueryLoadedPatches @ 0x140AA11D8 (MiQueryLoadedPatches.c)
 *     MiQueryProcessActivePatches @ 0x140AA9284 (MiQueryProcessActivePatches.c)
 *     MiCreatePatchSectionRequest @ 0x140AE969C (MiCreatePatchSectionRequest.c)
 *     MiLogHotPatchManagement @ 0x140AE987C (MiLogHotPatchManagement.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtManageHotPatch(int a1, volatile void *a2, unsigned int a3, unsigned __int64 a4)
{
  SIZE_T v4; // r12
  KPROCESSOR_MODE PreviousMode; // bl
  int active; // ebx
  __int64 v9; // rsi
  unsigned __int64 CurrentServerSilo; // rbx
  int v11; // edx
  unsigned int v12; // r14d
  ULONG v13; // r8d
  __int64 v14; // rcx
  unsigned int *p_Src; // rdx
  int *p_Sid; // rcx
  int v17; // eax
  KPROCESSOR_MODE v18; // r14
  _DWORD *v19; // rcx
  KPROCESSOR_MODE v21; // [rsp+40h] [rbp-118h]
  int v22; // [rsp+44h] [rbp-114h]
  unsigned int Size; // [rsp+54h] [rbp-104h] BYREF
  int Size_4; // [rsp+58h] [rbp-100h]
  unsigned __int64 v26; // [rsp+60h] [rbp-F8h]
  PVOID P; // [rsp+68h] [rbp-F0h] BYREF
  PVOID v28; // [rsp+70h] [rbp-E8h] BYREF
  PVOID v29; // [rsp+78h] [rbp-E0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-D8h] BYREF
  unsigned __int64 v31; // [rsp+90h] [rbp-C8h]
  unsigned int Src; // [rsp+A0h] [rbp-B8h] BYREF
  int Sid; // [rsp+A4h] [rbp-B4h] BYREF
  UNICODE_STRING StringIn; // [rsp+A8h] [rbp-B0h] BYREF
  _QWORD v35[8]; // [rsp+B8h] [rbp-A0h] BYREF
  int v36; // [rsp+FCh] [rbp-5Ch] BYREF
  unsigned int v37[4]; // [rsp+100h] [rbp-58h] BYREF

  v4 = a3;
  v31 = a4;
  v26 = a4;
  DestinationString = 0LL;
  Sid = 0;
  memset_0(&Src, 0, 0x64uLL);
  P = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  Size = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v21 = PreviousMode;
  if ( (dword_140E375F4 & 1) == 0 )
    goto LABEL_2;
  if ( !byte_140E375E8 )
  {
    active = -1073741661;
    goto LABEL_3;
  }
  if ( a1 != 7 && a1 != 8 && (unsigned int)(a1 - 9) >= 2 )
  {
    if ( !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
    {
      active = -1073741727;
      goto LABEL_3;
    }
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( CurrentServerSilo != PdcCreateWatchdogAroundClientCall() )
    {
      active = -1073741790;
      goto LABEL_3;
    }
    PreviousMode = v21;
  }
  v11 = 0;
  Size_4 = 0;
  if ( a1 > 5 )
  {
    if ( a1 != 6 )
    {
      switch ( a1 )
      {
        case 7:
          v11 = 1;
          v12 = 32;
          Size_4 = 1;
          goto LABEL_34;
        case 8:
          v12 = 48;
          goto LABEL_34;
        case 9:
          v11 = 1;
          v12 = 8;
          v13 = 4;
          Size_4 = 1;
          goto LABEL_35;
      }
      if ( a1 != 10 )
        goto LABEL_29;
    }
    v12 = 40;
    goto LABEL_34;
  }
  if ( a1 == 5 )
    goto LABEL_23;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
LABEL_2:
      active = -1073741637;
LABEL_3:
      v22 = active;
      v9 = 0x7FFFFFFF0000LL;
LABEL_101:
      v18 = v21;
      goto LABEL_102;
    }
    if ( a1 != 2 )
    {
      if ( a1 != 3 )
      {
        if ( a1 == 4 )
          goto LABEL_2;
LABEL_29:
        active = -1073741821;
        goto LABEL_3;
      }
      goto LABEL_22;
    }
LABEL_23:
    v12 = 96;
    goto LABEL_34;
  }
LABEL_22:
  v12 = 104;
LABEL_34:
  v13 = 8;
LABEL_35:
  if ( (unsigned int)v4 < v12 )
  {
    active = -1073741820;
    goto LABEL_3;
  }
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    v14 = 0x7FFFFFFF0000LL;
    if ( a4 < 0x7FFFFFFF0000LL )
      v14 = a4;
    *(_DWORD *)v14 = *(_DWORD *)v14;
    if ( v11 )
    {
      if ( (_DWORD)v4 && ((v13 - 1) & (unsigned int)a2) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    else
    {
      ProbeForWrite(a2, v4, v13);
    }
    memmove(&Src, (const void *)a2, v12);
  }
  else
  {
    memmove(&Src, (const void *)a2, v12);
    v9 = 0x7FFFFFFF0000LL;
  }
  if ( a1 )
  {
    if ( a1 == 2 )
      goto LABEL_78;
    if ( a1 != 3 )
    {
      if ( a1 != 5 )
      {
        switch ( a1 )
        {
          case 6:
            if ( Src == 3 || Src >= 2 && Src <= 3 )
            {
              active = MiQueryProcessActivePatches(
                         *(ULONG_PTR *)&StringIn.Length,
                         &v28,
                         &Size,
                         (__int64)a2,
                         v4,
                         PreviousMode,
                         Src);
              v22 = active;
              if ( active < 0 )
                goto LABEL_101;
              if ( Size <= (unsigned int)v4 )
              {
                p_Src = (unsigned int *)v28;
                goto LABEL_97;
              }
              goto LABEL_68;
            }
            break;
          case 7:
            active = MiApplyImageHotPatchRequest((__int64)&Src);
            v22 = active;
            MiLogHotPatchManagement(7, (__int64)&Src, 0LL, active);
            goto LABEL_71;
          case 8:
            if ( Src == 1 && *(_QWORD *)&StringIn.Length == -1LL && !LODWORD(v35[0]) && StringIn.Buffer )
            {
              active = MiQuerySingleLoadedPatch(
                         (__int64 *)&v29,
                         &Size,
                         (unsigned __int64)StringIn.Buffer,
                         0,
                         (__int64)a2,
                         v4);
              v22 = active;
              if ( active < 0 )
                goto LABEL_101;
              if ( Size <= (unsigned int)v4 )
              {
                p_Src = (unsigned int *)v29;
                goto LABEL_97;
              }
LABEL_68:
              active = -1073741789;
              goto LABEL_59;
            }
            break;
          case 9:
            if ( Src == 1 && !Sid )
            {
              active = 0;
              v22 = 0;
LABEL_71:
              p_Src = 0LL;
              goto LABEL_97;
            }
            break;
          default:
            active = MiCreatePatchSectionRequest((__int64)&Src, PreviousMode);
            v22 = active;
            if ( active < 0 )
              goto LABEL_101;
            goto LABEL_96;
        }
LABEL_58:
        active = -1073741811;
LABEL_59:
        v22 = active;
        goto LABEL_101;
      }
LABEL_78:
      if ( Src != 2 )
        goto LABEL_58;
      p_Sid = 0LL;
      if ( a1 == 5 )
      {
        if ( !RtlValidSid(&Sid) )
        {
LABEL_81:
          active = -1073741704;
          goto LABEL_59;
        }
        p_Sid = &Sid;
      }
      active = MiQueryLoadedPatches(p_Sid, &P, &Size, (__int64)a2, v4);
      v22 = active;
      if ( active < 0 )
        goto LABEL_101;
      if ( Size <= (unsigned int)v4 )
      {
        p_Src = (unsigned int *)P;
        goto LABEL_97;
      }
      goto LABEL_68;
    }
  }
  if ( Src != 2 || !StringIn.Length )
    goto LABEL_58;
  if ( PreviousMode && ((__int64)StringIn.Buffer & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  active = RtlDuplicateUnicodeString(0, &StringIn, &DestinationString);
  v22 = active;
  if ( active < 0 )
    goto LABEL_101;
  if ( a1 == 3 )
  {
    if ( !RtlValidSid(v35) )
      goto LABEL_81;
    v17 = MiLoadHotPatchForUserSid((const void **)&DestinationString, v35, &v36);
  }
  else
  {
    v17 = MiLoadHotPatch(&DestinationString, 1, &v36, v37);
  }
  v22 = v17;
  active = v17;
  MiLogHotPatchManagement(a1, (__int64)&Src, &DestinationString.Length, v17);
LABEL_96:
  Size = v12;
  p_Src = &Src;
LABEL_97:
  v18 = v21;
  if ( !Size_4 )
  {
    if ( v21 )
    {
      memmove((void *)a2, p_Src, Size);
      v19 = (_DWORD *)a4;
      goto LABEL_103;
    }
    memmove((void *)a2, p_Src, Size);
  }
LABEL_102:
  v19 = (_DWORD *)a4;
LABEL_103:
  if ( v18 )
  {
    if ( (unsigned __int64)v19 < 0x7FFFFFFF0000LL )
      v9 = v31;
    *(_DWORD *)v9 = *(_DWORD *)v9;
    *v19 = Size;
    active = v22;
  }
  else
  {
    *v19 = Size;
  }
  RtlFreeAnsiString(&DestinationString);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v28 )
    ExFreePoolWithTag(v28, 0);
  if ( v29 )
    ExFreePoolWithTag(v29, 0);
  return (unsigned int)active;
}
