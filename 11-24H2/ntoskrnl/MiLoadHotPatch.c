/*
 * XREFs of MiLoadHotPatch @ 0x140A9ADA4
 * Callers:
 *     MiApplyRequiredDriverHotPatches @ 0x1406F9884 (MiApplyRequiredDriverHotPatches.c)
 *     NtManageHotPatch @ 0x140AE9BD0 (NtManageHotPatch.c)
 *     MmRegisterHotPatches @ 0x140C58E0C (MmRegisterHotPatches.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     MiSectionControlArea @ 0x140355A80 (MiSectionControlArea.c)
 *     MmReleaseLoadLock @ 0x1404C2E10 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404CBB50 (MmAcquireLoadLock.c)
 *     VslApplyHotPatch @ 0x140589EBC (VslApplyHotPatch.c)
 *     VslRegisterSecurePatch @ 0x14058B124 (VslRegisterSecurePatch.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     VslDetermineHotPatchType @ 0x14070D29C (VslDetermineHotPatchType.c)
 *     MiAllocateHotPatchRecord @ 0x1407F1130 (MiAllocateHotPatchRecord.c)
 *     MiAllocateSecureImageActivePatch @ 0x1407F11D0 (MiAllocateSecureImageActivePatch.c)
 *     MiApplyHotPatchToDriver @ 0x1407F17A4 (MiApplyHotPatchToDriver.c)
 *     MiHotPatchAllProcesses @ 0x1407F3224 (MiHotPatchAllProcesses.c)
 *     MiInsertHotPatchRecord @ 0x1407F3934 (MiInsertHotPatchRecord.c)
 *     MiInsertSecureImageActivePatch @ 0x1407F3BEC (MiInsertSecureImageActivePatch.c)
 *     MiLogHotPatchOperationStatus @ 0x1407F4298 (MiLogHotPatchOperationStatus.c)
 *     MiPromoteControlAreaToStrongCode @ 0x1407F661C (MiPromoteControlAreaToStrongCode.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     MiOpenHotPatchFile @ 0x140A9B20C (MiOpenHotPatchFile.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiLoadHotPatch(const UNICODE_STRING *a1, char a2, int *a3, unsigned int *a4)
{
  UNICODE_STRING *SecureImageActivePatch; // r13
  int v7; // eax
  unsigned int v8; // r15d
  signed int v9; // edi
  unsigned int v10; // r12d
  int v11; // edx
  PVOID v12; // rsi
  unsigned int *v13; // rax
  char v14; // di
  unsigned int v15; // ebx
  PVOID v16; // rsi
  int inserted; // eax
  int v18; // r14d
  char v19; // al
  unsigned __int64 v20; // rax
  int v21; // r8d
  UNICODE_STRING *v22; // r14
  int v23; // edi
  int v24; // eax
  int v27; // [rsp+4Ch] [rbp-75h] BYREF
  PVOID Object; // [rsp+50h] [rbp-71h] BYREF
  __int64 v29; // [rsp+58h] [rbp-69h] BYREF
  unsigned int *v30; // [rsp+60h] [rbp-61h]
  PCUNICODE_STRING SourceString; // [rsp+68h] [rbp-59h]
  struct _KTHREAD *Lock; // [rsp+70h] [rbp-51h]
  HANDLE Handle; // [rsp+78h] [rbp-49h] BYREF
  unsigned int *v34; // [rsp+80h] [rbp-41h]
  PVOID P; // [rsp+88h] [rbp-39h]
  PVOID v36; // [rsp+90h] [rbp-31h] BYREF
  __int64 v37[2]; // [rsp+98h] [rbp-29h] BYREF
  __int64 v38; // [rsp+A8h] [rbp-19h]
  int v39; // [rsp+B0h] [rbp-11h]
  __int64 v40; // [rsp+B8h] [rbp-9h] BYREF
  __int64 v41; // [rsp+C0h] [rbp-1h]
  __int128 v42; // [rsp+C8h] [rbp+7h] BYREF
  __int64 v43; // [rsp+D8h] [rbp+17h]
  unsigned int v44; // [rsp+E0h] [rbp+1Fh]

  SourceString = a1;
  v30 = a4;
  v41 = 0LL;
  v43 = 0LL;
  v44 = 0;
  v38 = 0LL;
  v39 = 0;
  v34 = (unsigned int *)a3;
  v27 = 0;
  SecureImageActivePatch = 0LL;
  v40 = 0LL;
  v42 = 0LL;
  v29 = 0x100000000LL;
  Lock = 0LL;
  P = 0LL;
  Object = 0LL;
  v36 = 0LL;
  Handle = 0LL;
  *(_OWORD *)v37 = 0LL;
  v7 = MiOpenHotPatchFile((_DWORD)a1, 1, 0, (unsigned int)&Handle, (__int64)&Object, 0LL, (__int64)v37, (__int64)&v29);
  v8 = HIDWORD(v37[0]);
  v9 = v7;
  v10 = v37[0];
  if ( v7 < 0 )
    goto LABEL_44;
  if ( (a2 & 8) != 0 )
  {
    if ( *a3 != LODWORD(v37[0]) || (v11 = *v30, *v30 != HIDWORD(v37[0])) )
    {
      v9 = -1073740748;
LABEL_6:
      v12 = Object;
LABEL_46:
      MiLogHotPatchOperationStatus(v10, v8, (UNICODE_STRING *)SourceString, v9, 1);
      goto LABEL_47;
    }
  }
  else
  {
    v13 = v30;
    v11 = HIDWORD(v37[0]);
    *a3 = v37[0];
    *v13 = v8;
  }
  v14 = a2;
  v15 = v29;
  if ( (a2 & 1) != 0 )
  {
    P = (PVOID)MiAllocateHotPatchRecord(*a3, v11, v39, (const void **)SourceString, v29);
    v16 = P;
    if ( !P )
    {
      v9 = -1073741670;
      goto LABEL_6;
    }
    Lock = MmAcquireLoadLock();
    inserted = MiInsertHotPatchRecord((unsigned __int64 *)&qword_140E375B8, (__int64)v16, 0);
    v9 = inserted;
    if ( inserted < 0 )
      goto LABEL_44;
    if ( inserted != 255 )
    {
      P = 0LL;
      if ( (MiFlags & 0x4000) != 0 )
      {
        VslRegisterSecurePatch((unsigned int *)v37, (struct _MDL **)SourceString);
        v8 = HIDWORD(v37[0]);
        v10 = v37[0];
      }
    }
    v14 = a2;
  }
  else
  {
    Lock = MmAcquireLoadLock();
  }
  v18 = 1073741879;
  if ( (MiFlags & 0x4000) == 0 )
  {
    v12 = Object;
    goto LABEL_40;
  }
  if ( (v14 & 4) == 0 )
  {
    v9 = VslDetermineHotPatchType(*v34, *v30, &v27);
    if ( v9 < 0 )
    {
LABEL_44:
      v12 = Object;
      goto LABEL_45;
    }
  }
  v19 = v27;
  v12 = Object;
  if ( (v27 & 1) != 0 )
  {
    v9 = ObpReferenceObjectByHandleWithTag(
           (ULONG_PTR)Handle,
           1,
           (__int64)IoFileObjectType,
           0,
           0x70486D4Du,
           &v36,
           0LL,
           0LL);
    if ( v9 < 0 )
      goto LABEL_45;
    v20 = MiSectionControlArea((__int64)v12);
    v9 = MiPromoteControlAreaToStrongCode(v20, (int)v36, v21, &v40);
    if ( v9 < 0 )
      goto LABEL_45;
    v19 = v27;
  }
  HIDWORD(v29) = 0;
  if ( (v19 & 2) != 0 )
  {
    v22 = (UNICODE_STRING *)SourceString;
    SecureImageActivePatch = MiAllocateSecureImageActivePatch(SourceString);
    if ( SecureImageActivePatch )
    {
      v9 = VslApplyHotPatch(v40, (__int64)v12, 0LL, 0LL, 0LL, 0LL, 0, (__int64)&v42);
      v41 = v44;
    }
    else
    {
      v9 = -1073741670;
    }
    MiLogHotPatchOperationStatus(v10, v8, v22, v9, 2);
    if ( v9 < 0 )
    {
LABEL_47:
      if ( Lock )
        MmReleaseLoadLock(Lock);
      goto LABEL_49;
    }
    if ( v9 != 255 )
    {
      SecureImageActivePatch[1].Buffer = (wchar_t *)v42;
      *(_DWORD *)&SecureImageActivePatch[2].Length = HIDWORD(v42);
      *(_DWORD *)(&SecureImageActivePatch[2].MaximumLength + 1) = v43;
      LODWORD(SecureImageActivePatch[2].Buffer) = v41;
      MiInsertSecureImageActivePatch(SecureImageActivePatch);
      SecureImageActivePatch = 0LL;
    }
    v18 = v9;
  }
  v23 = v18;
  ObfDereferenceObjectWithTag(v12, 0x70486D4Du);
  v12 = 0LL;
  if ( (a2 & 2) == 0 )
  {
    v24 = MiApplyHotPatchToDriver(*v34, *v30, (__int64)SourceString, v15, (__int64)Handle);
    v18 = v24;
    if ( v24 == -1073741515 )
    {
      v18 = 1073741879;
    }
    else if ( v24 < 0 )
    {
      goto LABEL_40;
    }
    if ( v23 == 1073741879 )
      v23 = v18;
    v18 = v23;
  }
LABEL_40:
  MmReleaseLoadLock(Lock);
  Lock = 0LL;
  if ( (a2 & 6) == 0 )
    MiHotPatchAllProcesses(*v34, *v30, v15);
  v9 = v18;
  if ( HIDWORD(v29) )
  {
LABEL_45:
    if ( v9 == 1073741879 )
      goto LABEL_47;
    goto LABEL_46;
  }
LABEL_49:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v12 )
    ObfDereferenceObjectWithTag(v12, 0x63536D4Du);
  if ( v36 )
    ObfDereferenceObjectWithTag(v36, 0x70486D4Du);
  if ( Handle )
    ObCloseHandle(Handle, 0);
  if ( SecureImageActivePatch )
    ExFreePoolWithTag(SecureImageActivePatch, 0);
  return (unsigned int)v9;
}
