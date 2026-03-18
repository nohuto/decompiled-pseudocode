/*
 * XREFs of NtManageHotPatch @ 0x140A1D5D0
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSilo @ 0x1403D73D0 (PsGetCurrentServerSilo.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140483BB0 (PdcCreateWatchdogAroundClientCall.c)
 *     Feature_HostOnlyHotpatching__private_IsEnabledDeviceUsageNoInline @ 0x1404F2184 (Feature_HostOnlyHotpatching__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MiApplyImageHotPatchRequest @ 0x1407E1A7C (MiApplyImageHotPatchRequest.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     RtlValidSid @ 0x140918DF0 (RtlValidSid.c)
 *     RtlDuplicateUnicodeString @ 0x140932190 (RtlDuplicateUnicodeString.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 *     MiQuerySingleLoadedPatch @ 0x140A1DB54 (MiQuerySingleLoadedPatch.c)
 *     MiLoadHotPatchForUserSid @ 0x140A98B50 (MiLoadHotPatchForUserSid.c)
 *     MiLoadHotPatch @ 0x140A98E64 (MiLoadHotPatch.c)
 *     MiQueryLoadedPatches @ 0x140AA1218 (MiQueryLoadedPatches.c)
 *     MiCreatePatchSectionRequest @ 0x140AA63E8 (MiCreatePatchSectionRequest.c)
 *     MiQueryProcessActivePatches @ 0x140AA8E54 (MiQueryProcessActivePatches.c)
 *     MiLogHotPatchManagement @ 0x140AD5BD4 (MiLogHotPatchManagement.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtManageHotPatch(int a1, volatile void *a2, unsigned int a3, unsigned __int64 a4)
{
  SIZE_T v4; // r12
  KPROCESSOR_MODE PreviousMode; // bl
  int v8; // edx
  unsigned int v9; // r14d
  ULONG v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // rsi
  int LoadedPatches; // ebx
  const void *v14; // rdx
  KPROCESSOR_MODE v15; // r14
  _DWORD *v16; // rcx
  __int64 v18; // rcx
  int *p_Sid; // rcx
  unsigned __int64 CurrentServerSilo; // rbx
  unsigned int v21; // eax
  KPROCESSOR_MODE v22; // [rsp+40h] [rbp-118h]
  int v23; // [rsp+44h] [rbp-114h]
  unsigned int Size; // [rsp+54h] [rbp-104h] BYREF
  int Size_4; // [rsp+58h] [rbp-100h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-F8h] BYREF
  unsigned __int64 v28; // [rsp+70h] [rbp-E8h]
  PVOID P; // [rsp+78h] [rbp-E0h]
  PVOID v30; // [rsp+80h] [rbp-D8h]
  void *Src; // [rsp+88h] [rbp-D0h] BYREF
  unsigned __int64 v32; // [rsp+90h] [rbp-C8h]
  int v33; // [rsp+A0h] [rbp-B8h] BYREF
  int Sid; // [rsp+A4h] [rbp-B4h] BYREF
  UNICODE_STRING StringIn; // [rsp+A8h] [rbp-B0h] BYREF
  _DWORD v36[17]; // [rsp+B8h] [rbp-A0h] BYREF
  _BYTE v37[4]; // [rsp+FCh] [rbp-5Ch] BYREF
  char v38[16]; // [rsp+100h] [rbp-58h] BYREF

  v4 = a3;
  v32 = a4;
  v28 = a4;
  DestinationString = 0LL;
  Sid = 0;
  memset_0(&v33, 0, 0x64uLL);
  P = 0LL;
  v30 = 0LL;
  Src = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  Size = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v22 = PreviousMode;
  if ( (dword_140E37274 & 1) == 0 )
    goto LABEL_58;
  if ( !byte_140E37268 )
  {
    LoadedPatches = -1073741661;
    goto LABEL_59;
  }
  if ( a1 != 7 && a1 != 8 && (unsigned int)(a1 - 9) > 1 )
  {
    if ( !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
    {
      LoadedPatches = -1073741727;
      goto LABEL_59;
    }
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( CurrentServerSilo != PdcCreateWatchdogAroundClientCall() )
    {
      LoadedPatches = -1073741790;
      goto LABEL_59;
    }
    PreviousMode = v22;
  }
  v8 = 0;
  Size_4 = 0;
  if ( a1 <= 5 )
  {
    if ( a1 == 5 )
      goto LABEL_101;
    if ( !a1 )
      goto LABEL_100;
    if ( a1 != 1 )
    {
      if ( a1 != 2 )
      {
        if ( a1 != 3 )
        {
          if ( a1 != 4 )
          {
LABEL_102:
            LoadedPatches = -1073741821;
            goto LABEL_59;
          }
          goto LABEL_58;
        }
LABEL_100:
        v9 = 104;
        goto LABEL_11;
      }
LABEL_101:
      v9 = 96;
      goto LABEL_11;
    }
LABEL_58:
    LoadedPatches = -1073741637;
LABEL_59:
    v23 = LoadedPatches;
    v12 = 0x7FFFFFFF0000LL;
    goto LABEL_56;
  }
  switch ( a1 )
  {
    case 6:
      goto LABEL_53;
    case 7:
      v8 = 1;
      v9 = 32;
      Size_4 = 1;
      goto LABEL_11;
    case 8:
      v9 = 48;
LABEL_11:
      v10 = 8;
      goto LABEL_12;
  }
  if ( a1 != 9 )
  {
    if ( a1 != 10 )
      goto LABEL_102;
LABEL_53:
    v9 = 40;
    goto LABEL_11;
  }
  v8 = 1;
  v9 = 8;
  v10 = 4;
  Size_4 = 1;
LABEL_12:
  if ( (unsigned int)v4 < v9 )
  {
    LoadedPatches = -1073741820;
    goto LABEL_59;
  }
  if ( PreviousMode )
  {
    v12 = 0x7FFFFFFF0000LL;
    v18 = 0x7FFFFFFF0000LL;
    if ( a4 < 0x7FFFFFFF0000LL )
      v18 = a4;
    *(_DWORD *)v18 = *(_DWORD *)v18;
    if ( v8 )
    {
      if ( (_DWORD)v4 && ((v10 - 1) & (unsigned int)a2) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    else
    {
      ProbeForWrite(a2, v4, v10);
    }
    memmove(&v33, (const void *)a2, v9);
  }
  else
  {
    memmove(&v33, (const void *)a2, v9);
    v12 = 0x7FFFFFFF0000LL;
  }
  if ( a1 )
  {
    if ( a1 == 2 )
    {
LABEL_91:
      if ( v33 != 2 )
        goto LABEL_54;
      p_Sid = 0LL;
      if ( a1 != 5 )
      {
LABEL_109:
        LoadedPatches = MiQueryLoadedPatches(p_Sid, v4);
        v23 = LoadedPatches;
        if ( LoadedPatches < 0 )
          goto LABEL_56;
        if ( Size <= (unsigned int)v4 )
        {
          v14 = P;
          goto LABEL_29;
        }
        goto LABEL_85;
      }
      if ( RtlValidSid(&Sid) )
      {
        p_Sid = &Sid;
        goto LABEL_109;
      }
LABEL_108:
      LoadedPatches = -1073741704;
      goto LABEL_55;
    }
    if ( a1 != 3 )
    {
      if ( a1 != 5 )
      {
        if ( a1 != 6 )
        {
          switch ( a1 )
          {
            case 7:
              LoadedPatches = MiApplyImageHotPatchRequest((__int64)&v33);
              v23 = LoadedPatches;
              MiLogHotPatchManagement(7LL, &v33, 0LL, (unsigned int)LoadedPatches);
LABEL_65:
              v14 = 0LL;
              goto LABEL_29;
            case 8:
              if ( v33 == 1 && *(_QWORD *)&StringIn.Length == -1LL && !v36[0] && StringIn.Buffer )
              {
                LoadedPatches = MiQuerySingleLoadedPatch(
                                  (unsigned int)&Src,
                                  (unsigned int)&Size,
                                  StringIn.Buffer,
                                  0,
                                  (__int64)a2,
                                  v4);
                v23 = LoadedPatches;
                if ( LoadedPatches < 0 )
                {
LABEL_56:
                  v15 = v22;
                  goto LABEL_57;
                }
                if ( Size <= (unsigned int)v4 )
                {
                  v14 = Src;
                  goto LABEL_29;
                }
                goto LABEL_85;
              }
              goto LABEL_54;
            case 9:
              if ( v33 == 1 && !Sid )
              {
                if ( (unsigned int)Feature_HostOnlyHotpatching__private_IsEnabledDeviceUsageNoInline()
                  && PsIsCurrentThreadInServerSilo() )
                {
                  LoadedPatches = -1073741637;
                  goto LABEL_55;
                }
                LoadedPatches = 0;
                v23 = 0;
                goto LABEL_65;
              }
LABEL_54:
              LoadedPatches = -1073741811;
LABEL_55:
              v23 = LoadedPatches;
              goto LABEL_56;
          }
          LOBYTE(v11) = PreviousMode;
          LoadedPatches = MiCreatePatchSectionRequest(&v33, v11);
          v23 = LoadedPatches;
          if ( LoadedPatches < 0 )
            goto LABEL_56;
          goto LABEL_123;
        }
        if ( v33 != 3 && ((unsigned int)v33 < 2 || (unsigned int)v33 > 3) )
          goto LABEL_54;
        LoadedPatches = MiQueryProcessActivePatches(*(ULONG_PTR *)&StringIn.Length, v4, PreviousMode, v33);
        v23 = LoadedPatches;
        if ( LoadedPatches < 0 )
          goto LABEL_56;
        if ( Size <= (unsigned int)v4 )
        {
          v14 = v30;
          goto LABEL_29;
        }
LABEL_85:
        LoadedPatches = -1073741789;
        goto LABEL_55;
      }
      goto LABEL_91;
    }
  }
  if ( v33 != 2 || !StringIn.Length )
    goto LABEL_54;
  if ( PreviousMode && ((__int64)StringIn.Buffer & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  LoadedPatches = RtlDuplicateUnicodeString(0, &StringIn, &DestinationString);
  v23 = LoadedPatches;
  if ( LoadedPatches < 0 )
    goto LABEL_56;
  if ( a1 == 3 )
  {
    if ( !RtlValidSid(v36) )
      goto LABEL_108;
    v21 = MiLoadHotPatchForUserSid(&DestinationString, v36, v37);
  }
  else
  {
    v21 = MiLoadHotPatch(&DestinationString, 1LL, v37, v38);
  }
  v23 = v21;
  LoadedPatches = v21;
  MiLogHotPatchManagement((unsigned int)a1, &v33, &DestinationString, v21);
LABEL_123:
  Size = v9;
  v14 = &v33;
LABEL_29:
  v15 = v22;
  if ( !Size_4 )
  {
    if ( v22 )
    {
      memmove((void *)a2, v14, Size);
      v16 = (_DWORD *)a4;
      goto LABEL_32;
    }
    memmove((void *)a2, v14, Size);
  }
LABEL_57:
  v16 = (_DWORD *)a4;
LABEL_32:
  if ( v15 )
  {
    if ( (unsigned __int64)v16 < 0x7FFFFFFF0000LL )
      v12 = v32;
    *(_DWORD *)v12 = *(_DWORD *)v12;
    *v16 = Size;
    LoadedPatches = v23;
  }
  else
  {
    *v16 = Size;
  }
  if ( DestinationString.Buffer )
  {
    ExFreePool(DestinationString.Buffer);
    DestinationString = 0LL;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v30 )
    ExFreePoolWithTag(v30, 0);
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  return (unsigned int)LoadedPatches;
}
