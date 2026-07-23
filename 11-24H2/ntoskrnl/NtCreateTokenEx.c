/*
 * XREFs of NtCreateTokenEx @ 0x140983E20
 * Callers:
 *     NtCreateToken @ 0x140792A40 (NtCreateToken.c)
 * Callees:
 *     SepCreateTokenEx @ 0x1403E9CAC (SepCreateTokenEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSid @ 0x140869508 (SeCaptureSid.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x14088BFA8 (SepCaptureTokenSecurityAttributesInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     SeCaptureSecurityQos @ 0x1408E6BB0 (SeCaptureSecurityQos.c)
 *     SeCaptureAcl @ 0x1409837A4 (SeCaptureAcl.c)
 *     SeCaptureLuidAndAttributesArray @ 0x140984EB8 (SeCaptureLuidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x140985730 (SeCaptureSidAndAttributesArray.c)
 *     SeReleaseAcl @ 0x140985BDC (SeReleaseAcl.c)
 *     SeReleaseLuidAndAttributesArray @ 0x140985BF8 (SeReleaseLuidAndAttributesArray.c)
 *     SeReleaseSid @ 0x140A18990 (SeReleaseSid.c)
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x140A356B0 (SepFreeCapturedTokenSecurityAttributesInformation.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtCreateTokenEx(
        PHANDLE TokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        TOKEN_TYPE Type,
        PLUID AuthenticationId,
        PLARGE_INTEGER ExpirationTime,
        PTOKEN_USER User,
        PTOKEN_GROUPS Groups,
        PTOKEN_PRIVILEGES Privileges,
        PTOKEN_SECURITY_ATTRIBUTES_INFORMATION UserAttributes,
        PTOKEN_SECURITY_ATTRIBUTES_INFORMATION DeviceAttributes,
        PTOKEN_GROUPS DeviceGroups,
        PTOKEN_MANDATORY_POLICY MandatoryPolicy,
        PTOKEN_OWNER Owner,
        PTOKEN_PRIMARY_GROUP PrimaryGroup,
        PTOKEN_DEFAULT_DACL DefaultDacl,
        PTOKEN_SOURCE Source)
{
  PTOKEN_OWNER v17; // rbx
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v19; // rcx
  int v20; // edi
  NTSTATUS result; // eax
  __int64 v22; // r8
  __int64 v23; // rdx
  NTSTATUS v24; // edi
  __int64 v25; // r8
  __int64 v26; // r9
  ULONG GroupCount; // ebx
  int v28; // [rsp+20h] [rbp-1F8h]
  int v29; // [rsp+28h] [rbp-1F0h]
  int v30; // [rsp+30h] [rbp-1E8h]
  char v31; // [rsp+C0h] [rbp-158h] BYREF
  char v32; // [rsp+C1h] [rbp-157h]
  KPROCESSOR_MODE v33; // [rsp+C2h] [rbp-156h]
  NTSTATUS v34; // [rsp+C4h] [rbp-154h]
  int v35; // [rsp+C8h] [rbp-150h]
  int v36; // [rsp+CCh] [rbp-14Ch] BYREF
  unsigned int Policy; // [rsp+D0h] [rbp-148h] BYREF
  int v38; // [rsp+D4h] [rbp-144h]
  int PrivilegeCount; // [rsp+D8h] [rbp-140h]
  ULONG Count; // [rsp+DCh] [rbp-13Ch]
  int v41; // [rsp+E0h] [rbp-138h]
  PVOID P; // [rsp+E8h] [rbp-130h] BYREF
  __int64 v43; // [rsp+F0h] [rbp-128h] BYREF
  __int64 v44; // [rsp+F8h] [rbp-120h]
  PVOID v45; // [rsp+100h] [rbp-118h] BYREF
  PVOID v46; // [rsp+108h] [rbp-110h] BYREF
  __int64 v47; // [rsp+110h] [rbp-108h]
  __int64 v48; // [rsp+118h] [rbp-100h]
  __int64 v49; // [rsp+120h] [rbp-F8h] BYREF
  PVOID v50; // [rsp+128h] [rbp-F0h] BYREF
  int v51; // [rsp+130h] [rbp-E8h]
  __int64 v52; // [rsp+134h] [rbp-E4h] BYREF
  int v53; // [rsp+13Ch] [rbp-DCh]
  int v54; // [rsp+140h] [rbp-D8h]
  __int64 *v55; // [rsp+148h] [rbp-D0h]
  PLARGE_INTEGER v56; // [rsp+150h] [rbp-C8h]
  PTOKEN_GROUPS v57; // [rsp+158h] [rbp-C0h]
  PTOKEN_PRIVILEGES v58; // [rsp+160h] [rbp-B8h]
  PTOKEN_PRIMARY_GROUP v59; // [rsp+168h] [rbp-B0h]
  PTOKEN_SOURCE v60; // [rsp+170h] [rbp-A8h]
  __int64 QuadPart; // [rsp+178h] [rbp-A0h] BYREF
  __int64 v62; // [rsp+180h] [rbp-98h] BYREF
  int v63[2]; // [rsp+188h] [rbp-90h]
  int v64[2]; // [rsp+190h] [rbp-88h] BYREF
  PHANDLE v65; // [rsp+198h] [rbp-80h]
  __int64 v66; // [rsp+1A0h] [rbp-78h] BYREF
  int v67; // [rsp+1A8h] [rbp-70h]
  PTOKEN_USER v68; // [rsp+1B0h] [rbp-68h]
  PTOKEN_OWNER v69; // [rsp+1B8h] [rbp-60h]
  PTOKEN_MANDATORY_POLICY v70; // [rsp+1C0h] [rbp-58h]
  __int64 v71[2]; // [rsp+1C8h] [rbp-50h] BYREF

  v41 = Type;
  *(_QWORD *)v63 = ObjectAttributes;
  v54 = DesiredAccess;
  v65 = TokenHandle;
  v70 = MandatoryPolicy;
  v55 = (__int64 *)AuthenticationId;
  v59 = PrimaryGroup;
  v17 = Owner;
  v69 = Owner;
  v60 = Source;
  v58 = Privileges;
  v57 = Groups;
  v56 = ExpirationTime;
  v68 = User;
  *(_QWORD *)v64 = 0LL;
  v31 = 0;
  v66 = 0LL;
  v67 = 0;
  v62 = 0LL;
  QuadPart = 0LL;
  v47 = 0LL;
  v51 = 0;
  Count = 0;
  v48 = 0LL;
  v35 = 0;
  PrivilegeCount = 0;
  v49 = 0LL;
  v52 = 0LL;
  v50 = 0LL;
  P = 0LL;
  v43 = 0LL;
  *(_OWORD *)v71 = 0LL;
  Policy = 0;
  v32 = 0;
  v45 = 0LL;
  v46 = 0LL;
  v36 = 1;
  v38 = 0;
  v44 = 0LL;
  v53 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v33 = PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeCreateTokenPrivilege, PreviousMode) )
    return -1073741727;
  if ( PreviousMode )
  {
    v19 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v65 < 0x7FFFFFFF0000LL )
      v19 = (__int64)v65;
    *(_QWORD *)v19 = *(_QWORD *)v19;
    if ( ((unsigned __int8)v56 & 3) != 0
      || ((unsigned __int8)v57 & 3) != 0
      || ((unsigned __int8)v58 & 3) != 0
      || ((unsigned __int8)v60 & 3) != 0
      || Owner && ((unsigned __int8)Owner & 3) != 0
      || ((unsigned __int8)v59 & 3) != 0
      || DefaultDacl && ((unsigned __int8)DefaultDacl & 3) != 0
      || ((unsigned __int8)v55 & 3) != 0
      || MandatoryPolicy && ((unsigned __int8)MandatoryPolicy & 3) != 0
      || DeviceGroups && ((unsigned __int8)DeviceGroups & 3) != 0
      || DeviceAttributes && ((unsigned __int8)DeviceAttributes & 3) != 0
      || UserAttributes && ((unsigned __int8)UserAttributes & 3) != 0 )
    {
      ExRaiseDatatypeMisalignment();
    }
  }
  v20 = v41;
  if ( (unsigned int)(v41 - 1) > 1 )
    return -1073741656;
  result = SeCaptureSecurityQos(*(__int64 *)v63, PreviousMode, &v31, (__int64)&v66);
  if ( result >= 0 )
  {
    if ( v20 != 2 || v31 )
    {
      v34 = 0;
      v62 = *v55;
      QuadPart = v56->QuadPart;
      v28 = 0;
      LOBYTE(v22) = PreviousMode;
      v24 = SeCaptureSidAndAttributesArray(v68, 1LL, v22, 0LL);
      v34 = v24;
      if ( v24 >= 0 )
      {
        GroupCount = v57->GroupCount;
        Count = GroupCount;
        v28 = 0;
        LOBYTE(v25) = PreviousMode;
        v24 = SeCaptureSidAndAttributesArray(v57->Groups, GroupCount, v25, 0LL);
        v34 = v24;
        v35 = (v35 - 16 * GroupCount + 3) & 0xFFFFFFFC;
        v17 = v69;
      }
      if ( v24 >= 0 )
      {
        PrivilegeCount = v58->PrivilegeCount;
        v24 = SeCaptureLuidAndAttributesArray(v58->Privileges, 0, v29, v30, (__int64)&v49, (__int64)&v52);
        v34 = v24;
      }
      if ( v17 && v24 >= 0 )
      {
        v24 = SeCaptureSid(v17->Owner, PreviousMode, v25, v26, v28, 1, &v50);
        v34 = v24;
      }
      if ( v24 >= 0 )
      {
        v24 = SeCaptureSid(v59->PrimaryGroup, PreviousMode, v25, v26, v28, 1, &P);
        v34 = v24;
      }
      if ( DefaultDacl && v24 >= 0 && DefaultDacl->DefaultDacl )
      {
        v24 = SeCaptureAcl(
                (char *)DefaultDacl->DefaultDacl,
                PreviousMode,
                v25,
                v26,
                512,
                v29,
                (PVOID *)&v43,
                (unsigned int *)&v52 + 1);
        v34 = v24;
      }
      *(struct _TOKEN_SOURCE *)v71 = *v60;
      if ( DeviceGroups && v24 >= 0 )
      {
        v38 = DeviceGroups->GroupCount;
        LOBYTE(v25) = PreviousMode;
        v24 = SeCaptureSidAndAttributesArray(DeviceGroups->Groups, (unsigned int)v38, v25, 0LL);
        v34 = v24;
      }
      if ( UserAttributes && v24 >= 0 )
      {
        v24 = SepCaptureTokenSecurityAttributesInformation(
                (unsigned __int64)UserAttributes,
                &v36,
                1,
                PreviousMode,
                0,
                (unsigned __int64 **)&v45);
        v34 = v24;
      }
      if ( DeviceAttributes && v24 >= 0 )
      {
        v24 = SepCaptureTokenSecurityAttributesInformation(
                (unsigned __int64)DeviceAttributes,
                &v36,
                1,
                PreviousMode,
                0,
                (unsigned __int64 **)&v46);
        v34 = v24;
      }
      if ( v70 && v24 >= 0 )
      {
        Policy = v70->Policy;
        v32 = 1;
      }
      if ( v24 >= 0 )
        v24 = SepCreateTokenEx(
                (HANDLE *)v64,
                PreviousMode,
                v54,
                *(__int64 *)v63,
                v41,
                SHIDWORD(v66),
                (__int64)&v62,
                &QuadPart,
                (_SID_AND_ATTRIBUTES *)v47,
                Count,
                (_SID_AND_ATTRIBUTES *)v48,
                v35,
                PrivilegeCount,
                v49,
                v50,
                P,
                (void *)v43,
                v71,
                (__int64)v45,
                (__int64)v46,
                v38,
                v44,
                (_DWORD *)((unsigned __int64)&Policy & -(__int64)(v32 != 0)),
                0);
      if ( v47 )
      {
        LOBYTE(v23) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v47, v23);
      }
      if ( v48 )
      {
        LOBYTE(v23) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v48, v23);
      }
      if ( v49 )
      {
        LOBYTE(v23) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v49, v23);
      }
      if ( v50 && (unsigned __int8)PreviousMode <= 1u )
        ExFreePoolWithTag(v50, 0);
      if ( P && (unsigned __int8)PreviousMode <= 1u )
        ExFreePoolWithTag(P, 0);
      if ( v43 )
      {
        LOBYTE(v23) = PreviousMode;
        SeReleaseAcl(v43, v23);
      }
      if ( v44 )
      {
        LOBYTE(v23) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v44, v23);
      }
      if ( v45 )
        SepFreeCapturedTokenSecurityAttributesInformation(v45);
      if ( v46 )
        SepFreeCapturedTokenSecurityAttributesInformation(v46);
      if ( v24 >= 0 )
        *v65 = *(HANDLE *)v64;
      return v24;
    }
    else
    {
      return -1073741659;
    }
  }
  return result;
}
