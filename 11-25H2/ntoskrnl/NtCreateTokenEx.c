/*
 * XREFs of NtCreateTokenEx @ 0x1409974A0
 * Callers:
 *     NtCreateToken @ 0x1407837B0 (NtCreateToken.c)
 * Callees:
 *     SepCreateTokenEx @ 0x14036B744 (SepCreateTokenEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x140868404 (SepCaptureTokenSecurityAttributesInformation.c)
 *     SeCaptureSidAndAttributesArray @ 0x1408A38E0 (SeCaptureSidAndAttributesArray.c)
 *     SeCaptureSecurityQos @ 0x1408A42A8 (SeCaptureSecurityQos.c)
 *     SeCaptureSid @ 0x140916DC8 (SeCaptureSid.c)
 *     SeCaptureLuidAndAttributesArray @ 0x140933B38 (SeCaptureLuidAndAttributesArray.c)
 *     SeReleaseAcl @ 0x140997EBC (SeReleaseAcl.c)
 *     SeReleaseLuidAndAttributesArray @ 0x140997ED8 (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureAcl @ 0x140998F9C (SeCaptureAcl.c)
 *     SeReleaseSid @ 0x140A19690 (SeReleaseSid.c)
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x140A3B64C (SepFreeCapturedTokenSecurityAttributesInformation.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtCreateTokenEx(
        _QWORD *a1,
        int a2,
        __int64 a3,
        int a4,
        __int64 *a5,
        __int64 *a6,
        char *a7,
        __int64 a8,
        int *a9,
        unsigned __int64 a10,
        unsigned __int64 a11,
        __int64 a12,
        int *a13,
        __int64 a14,
        __int64 a15,
        void **a16,
        __int64 a17)
{
  _BYTE **v17; // rbx
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v19; // rcx
  int v20; // edi
  __int64 result; // rax
  __int64 v22; // rdx
  int v23; // edi
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // ebx
  int v27; // [rsp+20h] [rbp-1F8h]
  __int64 v28; // [rsp+28h] [rbp-1F0h]
  __int64 v29; // [rsp+28h] [rbp-1F0h]
  __int64 v30; // [rsp+30h] [rbp-1E8h]
  __int64 v31; // [rsp+30h] [rbp-1E8h]
  char v32; // [rsp+C0h] [rbp-158h] BYREF
  char v33; // [rsp+C1h] [rbp-157h]
  KPROCESSOR_MODE v34; // [rsp+C2h] [rbp-156h]
  int v35; // [rsp+C4h] [rbp-154h]
  int v36; // [rsp+C8h] [rbp-150h] BYREF
  int v37; // [rsp+CCh] [rbp-14Ch] BYREF
  int v38; // [rsp+D0h] [rbp-148h] BYREF
  int v39; // [rsp+D4h] [rbp-144h]
  int v40; // [rsp+D8h] [rbp-140h]
  int v41; // [rsp+DCh] [rbp-13Ch]
  int v42; // [rsp+E0h] [rbp-138h]
  PVOID P; // [rsp+E8h] [rbp-130h] BYREF
  __int64 v44; // [rsp+F0h] [rbp-128h] BYREF
  __int64 v45; // [rsp+F8h] [rbp-120h] BYREF
  PVOID v46; // [rsp+100h] [rbp-118h] BYREF
  PVOID v47; // [rsp+108h] [rbp-110h] BYREF
  __int64 v48; // [rsp+110h] [rbp-108h] BYREF
  __int64 v49; // [rsp+118h] [rbp-100h] BYREF
  __int64 v50; // [rsp+120h] [rbp-F8h] BYREF
  PVOID v51; // [rsp+128h] [rbp-F0h] BYREF
  unsigned int v52; // [rsp+130h] [rbp-E8h] BYREF
  __int64 v53; // [rsp+134h] [rbp-E4h] BYREF
  unsigned int v54; // [rsp+13Ch] [rbp-DCh] BYREF
  int v55; // [rsp+140h] [rbp-D8h]
  __int64 *v56; // [rsp+148h] [rbp-D0h]
  __int64 *v57; // [rsp+150h] [rbp-C8h]
  __int64 v58; // [rsp+158h] [rbp-C0h]
  int *v59; // [rsp+160h] [rbp-B8h]
  __int64 v60; // [rsp+168h] [rbp-B0h]
  __int64 v61; // [rsp+170h] [rbp-A8h]
  __int64 v62; // [rsp+178h] [rbp-A0h] BYREF
  __int64 v63; // [rsp+180h] [rbp-98h] BYREF
  int v64[2]; // [rsp+188h] [rbp-90h]
  int v65[2]; // [rsp+190h] [rbp-88h] BYREF
  _QWORD *v66; // [rsp+198h] [rbp-80h]
  __int64 v67; // [rsp+1A0h] [rbp-78h] BYREF
  int v68; // [rsp+1A8h] [rbp-70h]
  char *v69; // [rsp+1B0h] [rbp-68h]
  __int64 v70; // [rsp+1B8h] [rbp-60h]
  int *v71; // [rsp+1C0h] [rbp-58h]
  __int64 v72[2]; // [rsp+1C8h] [rbp-50h] BYREF

  v42 = a4;
  *(_QWORD *)v64 = a3;
  v55 = a2;
  v66 = a1;
  v71 = a13;
  v56 = a5;
  v60 = a15;
  v17 = (_BYTE **)a14;
  v70 = a14;
  v61 = a17;
  v59 = a9;
  v58 = a8;
  v57 = a6;
  v69 = a7;
  *(_QWORD *)v65 = 0LL;
  v32 = 0;
  v67 = 0LL;
  v68 = 0;
  v63 = 0LL;
  v62 = 0LL;
  v48 = 0LL;
  v52 = 0;
  v41 = 0;
  v49 = 0LL;
  v36 = 0;
  v40 = 0;
  v50 = 0LL;
  v53 = 0LL;
  v51 = 0LL;
  P = 0LL;
  v44 = 0LL;
  *(_OWORD *)v72 = 0LL;
  v38 = 0;
  v33 = 0;
  v46 = 0LL;
  v47 = 0LL;
  v37 = 1;
  v39 = 0;
  v45 = 0LL;
  v54 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v34 = PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeCreateTokenPrivilege, PreviousMode) )
    return 3221225569LL;
  if ( PreviousMode )
  {
    v19 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v66 < 0x7FFFFFFF0000LL )
      v19 = (__int64)v66;
    *(_QWORD *)v19 = *(_QWORD *)v19;
    if ( ((unsigned __int8)v57 & 3) != 0
      || (v58 & 3) != 0
      || ((unsigned __int8)v59 & 3) != 0
      || (v61 & 3) != 0
      || a14 && (a14 & 3) != 0
      || (v60 & 3) != 0
      || a16 && ((unsigned __int8)a16 & 3) != 0
      || ((unsigned __int8)v56 & 3) != 0
      || a13 && ((unsigned __int8)a13 & 3) != 0
      || a12 && (a12 & 3) != 0
      || a11 && (a11 & 3) != 0
      || a10 && (a10 & 3) != 0 )
    {
      ExRaiseDatatypeMisalignment();
    }
  }
  v20 = v42;
  if ( (unsigned int)(v42 - 1) > 1 )
    return 3221225640LL;
  result = SeCaptureSecurityQos(*(__int64 *)v64, PreviousMode, &v32, (__int64)&v67);
  if ( (int)result >= 0 )
  {
    if ( v20 != 2 || v32 )
    {
      v35 = 0;
      v63 = *v56;
      v62 = *v57;
      v23 = SeCaptureSidAndAttributesArray(v69, 1u, PreviousMode, 0LL, 0, v28, v30, (PVOID *)&v48, &v52);
      v35 = v23;
      if ( v23 >= 0 )
      {
        v26 = *(_DWORD *)v58;
        v41 = v26;
        v23 = SeCaptureSidAndAttributesArray(
                (char *)(v58 + 8),
                v26,
                PreviousMode,
                0LL,
                0,
                v29,
                v31,
                (PVOID *)&v49,
                (unsigned int *)&v36);
        v35 = v23;
        v36 = (v36 - 16 * v26 + 3) & 0xFFFFFFFC;
        v17 = (_BYTE **)v70;
      }
      if ( v23 >= 0 )
      {
        v40 = *v59;
        v23 = SeCaptureLuidAndAttributesArray(v59 + 1, v40, PreviousMode, v25, v27, v29, v31, &v50, &v53);
        v35 = v23;
      }
      if ( v17 && v23 >= 0 )
      {
        v23 = SeCaptureSid(*v17, PreviousMode, v24, v25, v27, 1, &v51);
        v35 = v23;
      }
      if ( v23 >= 0 )
      {
        v23 = SeCaptureSid(*(_BYTE **)v60, PreviousMode, v24, v25, v27, 1, &P);
        v35 = v23;
      }
      if ( a16 && v23 >= 0 && *a16 )
      {
        v23 = SeCaptureAcl(*a16, 512, v29, (__int64)&v44, (__int64)&v53 + 4);
        v35 = v23;
      }
      *(_OWORD *)v72 = *(_OWORD *)v61;
      if ( a12 && v23 >= 0 )
      {
        v39 = *(_DWORD *)a12;
        v23 = SeCaptureSidAndAttributesArray(
                (char *)(a12 + 8),
                v39,
                PreviousMode,
                0LL,
                0,
                v29,
                v31,
                (PVOID *)&v45,
                &v54);
        v35 = v23;
      }
      if ( a10 && v23 >= 0 )
      {
        v23 = SepCaptureTokenSecurityAttributesInformation(a10, &v37, 1, PreviousMode, 0, (unsigned __int64 **)&v46);
        v35 = v23;
      }
      if ( a11 && v23 >= 0 )
      {
        v23 = SepCaptureTokenSecurityAttributesInformation(a11, &v37, 1, PreviousMode, 0, (unsigned __int64 **)&v47);
        v35 = v23;
      }
      if ( v71 && v23 >= 0 )
      {
        v38 = *v71;
        v33 = 1;
      }
      if ( v23 >= 0 )
        v23 = SepCreateTokenEx(
                (HANDLE *)v65,
                PreviousMode,
                v55,
                *(__int64 *)v64,
                v42,
                SHIDWORD(v67),
                (__int64)&v63,
                &v62,
                (void **)v48,
                v41,
                v49,
                v36,
                v40,
                v50,
                v51,
                P,
                (void *)v44,
                v72,
                (__int64)v46,
                (__int64)v47,
                v39,
                v45,
                (_DWORD *)((unsigned __int64)&v38 & -(__int64)(v33 != 0)),
                0);
      if ( v48 )
      {
        LOBYTE(v22) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v48, v22);
      }
      if ( v49 )
      {
        LOBYTE(v22) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v49, v22);
      }
      if ( v50 )
      {
        LOBYTE(v22) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v50, v22);
      }
      if ( v51 && (unsigned __int8)PreviousMode <= 1u )
        ExFreePoolWithTag(v51, 0);
      if ( P && (unsigned __int8)PreviousMode <= 1u )
        ExFreePoolWithTag(P, 0);
      if ( v44 )
      {
        LOBYTE(v22) = PreviousMode;
        SeReleaseAcl(v44, v22);
      }
      if ( v45 )
      {
        LOBYTE(v22) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v45, v22);
      }
      if ( v46 )
        SepFreeCapturedTokenSecurityAttributesInformation(v46);
      if ( v47 )
        SepFreeCapturedTokenSecurityAttributesInformation(v47);
      if ( v23 >= 0 )
        *v66 = *(_QWORD *)v65;
      return (unsigned int)v23;
    }
    else
    {
      return 3221225637LL;
    }
  }
  return result;
}
