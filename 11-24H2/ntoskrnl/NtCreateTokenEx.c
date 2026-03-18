/*
 * XREFs of NtCreateTokenEx @ 0x140936AB0
 * Callers:
 *     NtCreateToken @ 0x140792A70 (NtCreateToken.c)
 * Callees:
 *     SepCreateTokenEx @ 0x1403645F4 (SepCreateTokenEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSid @ 0x140864EF8 (SeCaptureSid.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x1408880F8 (SepCaptureTokenSecurityAttributesInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     SeCaptureSecurityQos @ 0x14090F460 (SeCaptureSecurityQos.c)
 *     SeReleaseLuidAndAttributesArray @ 0x140936340 (SeReleaseLuidAndAttributesArray.c)
 *     SeReleaseAcl @ 0x140936364 (SeReleaseAcl.c)
 *     SeCaptureSidAndAttributesArray @ 0x140936600 (SeCaptureSidAndAttributesArray.c)
 *     SeCaptureLuidAndAttributesArray @ 0x140937E28 (SeCaptureLuidAndAttributesArray.c)
 *     SeCaptureAcl @ 0x14099EADC (SeCaptureAcl.c)
 *     SeReleaseSid @ 0x140A249A0 (SeReleaseSid.c)
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x140A3FDDC (SepFreeCapturedTokenSecurityAttributesInformation.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  int v22; // edi
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int v25; // ebx
  int v26; // [rsp+20h] [rbp-1F8h]
  __int64 v27; // [rsp+28h] [rbp-1F0h]
  __int64 v28; // [rsp+28h] [rbp-1F0h]
  __int64 v29; // [rsp+30h] [rbp-1E8h]
  __int64 v30; // [rsp+30h] [rbp-1E8h]
  char v31; // [rsp+C0h] [rbp-158h] BYREF
  char v32; // [rsp+C1h] [rbp-157h]
  KPROCESSOR_MODE v33; // [rsp+C2h] [rbp-156h]
  int v34; // [rsp+C4h] [rbp-154h]
  int v35; // [rsp+C8h] [rbp-150h] BYREF
  int v36; // [rsp+CCh] [rbp-14Ch] BYREF
  int v37; // [rsp+D0h] [rbp-148h] BYREF
  int v38; // [rsp+D4h] [rbp-144h]
  int v39; // [rsp+D8h] [rbp-140h]
  int v40; // [rsp+DCh] [rbp-13Ch]
  int v41; // [rsp+E0h] [rbp-138h]
  PVOID P; // [rsp+E8h] [rbp-130h] BYREF
  __int64 v43; // [rsp+F0h] [rbp-128h] BYREF
  __int64 v44; // [rsp+F8h] [rbp-120h] BYREF
  PVOID v45; // [rsp+100h] [rbp-118h] BYREF
  PVOID v46; // [rsp+108h] [rbp-110h] BYREF
  __int64 v47; // [rsp+110h] [rbp-108h] BYREF
  __int64 v48; // [rsp+118h] [rbp-100h] BYREF
  __int64 v49; // [rsp+120h] [rbp-F8h] BYREF
  PVOID v50; // [rsp+128h] [rbp-F0h] BYREF
  unsigned int v51; // [rsp+130h] [rbp-E8h] BYREF
  __int64 v52; // [rsp+134h] [rbp-E4h] BYREF
  unsigned int v53; // [rsp+13Ch] [rbp-DCh] BYREF
  int v54; // [rsp+140h] [rbp-D8h]
  __int64 *v55; // [rsp+148h] [rbp-D0h]
  __int64 *v56; // [rsp+150h] [rbp-C8h]
  __int64 v57; // [rsp+158h] [rbp-C0h]
  int *v58; // [rsp+160h] [rbp-B8h]
  __int64 v59; // [rsp+168h] [rbp-B0h]
  __int64 v60; // [rsp+170h] [rbp-A8h]
  __int64 v61; // [rsp+178h] [rbp-A0h] BYREF
  __int64 v62; // [rsp+180h] [rbp-98h] BYREF
  int v63[2]; // [rsp+188h] [rbp-90h]
  int v64[2]; // [rsp+190h] [rbp-88h] BYREF
  _QWORD *v65; // [rsp+198h] [rbp-80h]
  __int64 v66; // [rsp+1A0h] [rbp-78h] BYREF
  int v67; // [rsp+1A8h] [rbp-70h]
  char *v68; // [rsp+1B0h] [rbp-68h]
  __int64 v69; // [rsp+1B8h] [rbp-60h]
  int *v70; // [rsp+1C0h] [rbp-58h]
  __int64 v71[2]; // [rsp+1C8h] [rbp-50h] BYREF

  v41 = a4;
  *(_QWORD *)v63 = a3;
  v54 = a2;
  v65 = a1;
  v70 = a13;
  v55 = a5;
  v59 = a15;
  v17 = (_BYTE **)a14;
  v69 = a14;
  v60 = a17;
  v58 = a9;
  v57 = a8;
  v56 = a6;
  v68 = a7;
  *(_QWORD *)v64 = 0LL;
  v31 = 0;
  v66 = 0LL;
  v67 = 0;
  v62 = 0LL;
  v61 = 0LL;
  v47 = 0LL;
  v51 = 0;
  v40 = 0;
  v48 = 0LL;
  v35 = 0;
  v39 = 0;
  v49 = 0LL;
  v52 = 0LL;
  v50 = 0LL;
  P = 0LL;
  v43 = 0LL;
  *(_OWORD *)v71 = 0LL;
  v37 = 0;
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
    return 3221225569LL;
  if ( PreviousMode )
  {
    v19 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v65 < 0x7FFFFFFF0000LL )
      v19 = (__int64)v65;
    *(_QWORD *)v19 = *(_QWORD *)v19;
    if ( ((unsigned __int8)v56 & 3) != 0
      || (v57 & 3) != 0
      || ((unsigned __int8)v58 & 3) != 0
      || (v60 & 3) != 0
      || a14 && (a14 & 3) != 0
      || (v59 & 3) != 0
      || a16 && ((unsigned __int8)a16 & 3) != 0
      || ((unsigned __int8)v55 & 3) != 0
      || a13 && ((unsigned __int8)a13 & 3) != 0
      || a12 && (a12 & 3) != 0
      || a11 && (a11 & 3) != 0
      || a10 && (a10 & 3) != 0 )
    {
      ExRaiseDatatypeMisalignment();
    }
  }
  v20 = v41;
  if ( (unsigned int)(v41 - 1) > 1 )
    return 3221225640LL;
  result = SeCaptureSecurityQos(*(__int64 *)v63, PreviousMode, &v31, (__int64)&v66);
  if ( (int)result >= 0 )
  {
    if ( v20 != 2 || v31 )
    {
      v34 = 0;
      v62 = *v55;
      v61 = *v56;
      v22 = SeCaptureSidAndAttributesArray(v68, 1u, PreviousMode, 0LL, 0, v27, v29, (PVOID *)&v47, &v51);
      v34 = v22;
      if ( v22 >= 0 )
      {
        v25 = *(_DWORD *)v57;
        v40 = v25;
        v22 = SeCaptureSidAndAttributesArray(
                (char *)(v57 + 8),
                v25,
                PreviousMode,
                0LL,
                0,
                v28,
                v30,
                (PVOID *)&v48,
                (unsigned int *)&v35);
        v34 = v22;
        v35 = (v35 - 16 * v25 + 3) & 0xFFFFFFFC;
        v17 = (_BYTE **)v69;
      }
      if ( v22 >= 0 )
      {
        v39 = *v58;
        v22 = SeCaptureLuidAndAttributesArray(v58 + 1, v26, v28, v30, (__int64)&v49, (__int64)&v52);
        v34 = v22;
      }
      if ( v17 && v22 >= 0 )
      {
        v22 = SeCaptureSid(*v17, PreviousMode, v23, v24, v26, 1, &v50);
        v34 = v22;
      }
      if ( v22 >= 0 )
      {
        v22 = SeCaptureSid(*(_BYTE **)v59, PreviousMode, v23, v24, v26, 1, &P);
        v34 = v22;
      }
      if ( a16 && v22 >= 0 && *a16 )
      {
        v22 = SeCaptureAcl(*a16, 512, v28, (__int64)&v43, (__int64)&v52 + 4);
        v34 = v22;
      }
      *(_OWORD *)v71 = *(_OWORD *)v60;
      if ( a12 && v22 >= 0 )
      {
        v38 = *(_DWORD *)a12;
        v22 = SeCaptureSidAndAttributesArray(
                (char *)(a12 + 8),
                v38,
                PreviousMode,
                0LL,
                0,
                v28,
                v30,
                (PVOID *)&v44,
                &v53);
        v34 = v22;
      }
      if ( a10 && v22 >= 0 )
      {
        v22 = SepCaptureTokenSecurityAttributesInformation(a10, &v36, 1, PreviousMode, 0, (unsigned __int64 **)&v45);
        v34 = v22;
      }
      if ( a11 && v22 >= 0 )
      {
        v22 = SepCaptureTokenSecurityAttributesInformation(a11, &v36, 1, PreviousMode, 0, (unsigned __int64 **)&v46);
        v34 = v22;
      }
      if ( v70 && v22 >= 0 )
      {
        v37 = *v70;
        v32 = 1;
      }
      if ( v22 >= 0 )
        v22 = SepCreateTokenEx(
                (HANDLE *)v64,
                PreviousMode,
                v54,
                *(__int64 *)v63,
                v41,
                SHIDWORD(v66),
                (__int64)&v62,
                &v61,
                (void **)v47,
                v40,
                v48,
                v35,
                v39,
                v49,
                v50,
                P,
                (void *)v43,
                v71,
                (__int64)v45,
                (__int64)v46,
                v38,
                v44,
                (_DWORD *)((unsigned __int64)&v37 & -(__int64)(v32 != 0)),
                0);
      if ( v47 )
        SeReleaseLuidAndAttributesArray((void *)v47, PreviousMode);
      if ( v48 )
        SeReleaseLuidAndAttributesArray((void *)v48, PreviousMode);
      if ( v49 )
        SeReleaseLuidAndAttributesArray((void *)v49, PreviousMode);
      if ( v50 && (unsigned __int8)PreviousMode <= 1u )
        ExFreePoolWithTag(v50, 0);
      if ( P && (unsigned __int8)PreviousMode <= 1u )
        ExFreePoolWithTag(P, 0);
      if ( v43 )
        SeReleaseAcl((void *)v43, PreviousMode);
      if ( v44 )
        SeReleaseLuidAndAttributesArray((void *)v44, PreviousMode);
      if ( v45 )
        SepFreeCapturedTokenSecurityAttributesInformation(v45);
      if ( v46 )
        SepFreeCapturedTokenSecurityAttributesInformation(v46);
      if ( v22 >= 0 )
        *v65 = *(_QWORD *)v64;
      return (unsigned int)v22;
    }
    else
    {
      return 3221225637LL;
    }
  }
  return result;
}
