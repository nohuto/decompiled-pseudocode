/*
 * XREFs of SmpConfigureSharedSessionData @ 0x14000A3D0
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x140015DF4 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     SmpFreeSavedRegistryEntry @ 0x14000D6BC (SmpFreeSavedRegistryEntry.c)
 *     SmpLogFailure @ 0x14000D7F0 (SmpLogFailure.c)
 *     memcpy_0 @ 0x14001EF87 (memcpy_0.c)
 *     __security_check_cookie @ 0x14001EFC0 (__security_check_cookie.c)
 */

__int64 SmpConfigureSharedSessionData()
{
  __int64 result; // rax
  __int64 *v1; // rbx
  __int64 *v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // r8
  NTSTATUS v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rax
  _QWORD *v8; // rcx
  NTSTATUS v9; // eax
  unsigned int v10; // edi
  bool v11; // zf
  char *v12; // rbx
  char *v13; // rbx
  __int64 v14; // rdi
  char *v15; // rbx
  char *v16; // rbx
  unsigned int v17; // edi
  _BYTE *v18; // rdx
  char *v19; // rbx
  PVOID *v20; // r14
  _BYTE *v21; // r15
  char *v22; // rsi
  PVOID *v23; // r12
  __int64 v24; // rcx
  _WORD *v25; // r15
  _QWORD *v26; // rcx
  void **v27; // rax
  __int64 *v28; // r15
  _BYTE *v29; // r12
  unsigned int v30; // r14d
  __int64 *v31; // rdi
  __int64 v32; // rcx
  unsigned int v33; // r14d
  char *v34; // r12
  __int64 v35; // rcx
  char *v36; // r12
  PVOID *v37; // rdi
  unsigned int v38; // r14d
  PVOID *v39; // r15
  __int64 v40; // rcx
  char *v41; // rbx
  _QWORD *v42; // rcx
  void **v43; // rax
  NTSTATUS v44; // eax
  unsigned int v45; // ebx
  __int64 v46; // r8
  __int64 v47; // rdx
  NTSTATUS v48; // eax
  ULONG_PTR ViewSize; // [rsp+50h] [rbp-B0h] BYREF
  char *v50; // [rsp+58h] [rbp-A8h]
  union _LARGE_INTEGER MaximumSize; // [rsp+60h] [rbp-A0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  __int64 (__usercall *v53)@<rax>(wchar_t *@<rcx>, int, __int64); // [rsp+A0h] [rbp-60h] BYREF
  int v54; // [rsp+A8h] [rbp-58h]
  const wchar_t *v55; // [rsp+B0h] [rbp-50h]
  int *v56; // [rsp+B8h] [rbp-48h]
  int v57; // [rsp+C0h] [rbp-40h]
  __int64 v58; // [rsp+C8h] [rbp-38h]
  int v59; // [rsp+D0h] [rbp-30h]
  void *v60; // [rsp+D8h] [rbp-28h]
  int v61; // [rsp+E0h] [rbp-20h]
  const wchar_t *v62; // [rsp+E8h] [rbp-18h]
  int *v63; // [rsp+F0h] [rbp-10h]
  int v64; // [rsp+F8h] [rbp-8h]
  __int64 v65; // [rsp+100h] [rbp+0h]
  int v66; // [rsp+108h] [rbp+8h]
  void *v67; // [rsp+110h] [rbp+10h]
  int v68; // [rsp+118h] [rbp+18h]
  const wchar_t *v69; // [rsp+120h] [rbp+20h]
  int *v70; // [rsp+128h] [rbp+28h]
  int v71; // [rsp+130h] [rbp+30h]
  __int64 v72; // [rsp+138h] [rbp+38h]
  int v73; // [rsp+140h] [rbp+40h]
  __int64 (__fastcall *v74)(int, int, int, int, int, __int64); // [rsp+148h] [rbp+48h]
  int v75; // [rsp+150h] [rbp+50h]
  const wchar_t *v76; // [rsp+158h] [rbp+58h]
  int *v77; // [rsp+160h] [rbp+60h]
  int v78; // [rsp+168h] [rbp+68h]
  __int64 v79; // [rsp+170h] [rbp+70h]
  int v80; // [rsp+178h] [rbp+78h]
  __int64 v81; // [rsp+180h] [rbp+80h]
  int v82; // [rsp+188h] [rbp+88h]
  __int128 v83; // [rsp+190h] [rbp+90h]
  int v84; // [rsp+1A0h] [rbp+A0h]
  __int64 v85; // [rsp+1A8h] [rbp+A8h]
  int v86; // [rsp+1B0h] [rbp+B0h]

  v54 = 17;
  *(&ObjectAttributes.Length + 1) = 0;
  v56 = &dword_140032388;
  v60 = &SmpBuildSubSystemLists;
  v53 = SmpConfigureSubSystems;
  v63 = &dword_140032388;
  v55 = L"SubSystems";
  v67 = &SmpBuildSubSystemLists;
  v62 = L"Required";
  v70 = &dword_140032388;
  v69 = L"Optional";
  v77 = &dword_140032388;
  v74 = SmpConfigureExecute;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v76 = L"Execute";
  v57 = 0;
  v58 = 0LL;
  v59 = 0;
  v61 = 16;
  v64 = 0;
  v65 = 0LL;
  v66 = 0;
  v68 = 16;
  v71 = 0;
  v72 = 0LL;
  v73 = 0;
  v75 = 2;
  v78 = 0;
  v79 = 0LL;
  v80 = 0;
  v81 = 0LL;
  v82 = 0;
  v83 = 0LL;
  v84 = 0;
  v85 = 0LL;
  v86 = 0;
  qword_140032398 = (__int64)&qword_140032390;
  qword_140032390 = (__int64)&qword_140032390;
  qword_1400323A8 = (__int64)&BaseAddress;
  BaseAddress = &BaseAddress;
  qword_1400323B8 = (__int64)&qword_1400323B0;
  qword_1400323B0 = &qword_1400323B0;
  result = RtlQueryRegistryValuesEx(2LL, L"Session Manager", &v53, 0LL, 0LL);
  if ( (int)result < 0 )
    return result;
  v1 = (__int64 *)qword_140032390;
  while ( v1 != &qword_140032390 )
  {
    v2 = v1;
    v1 = (__int64 *)*v1;
    SmpFreeSavedRegistryEntry(v2);
  }
  if ( qword_1400323B0 == &qword_1400323B0 )
  {
    v3 = 16LL * (unsigned int)dword_140032388 + 104;
    SmpInitExecuteCmd = 0LL;
  }
  else
  {
    v7 = qword_1400323B8;
    v8 = *(_QWORD **)(qword_1400323B8 + 8);
    if ( *(PVOID **)qword_1400323B8 != &qword_1400323B0 || *v8 != qword_1400323B8 )
      goto LABEL_43;
    qword_1400323B8 = *(_QWORD *)(qword_1400323B8 + 8);
    *v8 = &qword_1400323B0;
    v3 = 16LL * (unsigned int)dword_140032388 + 104;
    SmpInitExecuteCmd = v7;
    if ( v7 )
    {
      v4 = *(unsigned __int16 *)(v7 + 16);
      goto LABEL_7;
    }
  }
  v4 = 0LL;
LABEL_7:
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  MaximumSize.QuadPart = v3 + (unsigned int)dword_14003238C + v4 + SmpS0InitCmd.Length + SmpDefaultLibPath.Length + 6LL;
  ObjectAttributes.Attributes = 2;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = NtCreateSection(&SmpSharedSection, 6u, &ObjectAttributes, &MaximumSize, 4u, 0x8400000u, 0LL);
  v6 = v5;
  if ( v5 < 0 )
  {
    SmpLogFailure("SmpConfigureSharedSessionData", 8376LL, (unsigned int)v5);
    return v6;
  }
  ViewSize = 0LL;
  v9 = NtMapViewOfSection(
         SmpSharedSection,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &SmpMappedView,
         0LL,
         0LL,
         0LL,
         &ViewSize,
         ViewUnmap,
         0,
         4u);
  v10 = v9;
  if ( v9 < 0 )
  {
    SmpLogFailure("SmpConfigureSharedSessionData", 8401LL, (unsigned int)v9);
    return v10;
  }
  v11 = SmpS0CommandOverride == 0;
  *(_DWORD *)SmpMappedView = 0;
  if ( !v11 )
    *(_DWORD *)SmpMappedView = 1;
  v12 = (char *)SmpMappedView + v3;
  *((_QWORD *)SmpMappedView + 1) = v12 - (_BYTE *)SmpMappedView;
  *((_WORD *)SmpMappedView + 8) = SmpDefaultLibPath.Length;
  memcpy_0(v12, SmpDefaultLibPath.Buffer, SmpDefaultLibPath.Length);
  v13 = &v12[SmpDefaultLibPath.Length];
  *(_WORD *)v13 = 0;
  v13 += 2;
  *((_QWORD *)SmpMappedView + 3) = v13 - (_BYTE *)SmpMappedView;
  *((_WORD *)SmpMappedView + 16) = SmpS0InitCmd.Length;
  memcpy_0(v13, SmpS0InitCmd.Buffer, SmpS0InitCmd.Length);
  v14 = SmpInitExecuteCmd;
  v15 = &v13[SmpS0InitCmd.Length];
  *(_WORD *)v15 = 0;
  v16 = v15 + 2;
  *((_QWORD *)SmpMappedView + 5) = v16 - (_BYTE *)SmpMappedView;
  if ( v14 && *(_QWORD *)(v14 + 24) )
  {
    *((_WORD *)SmpMappedView + 24) = *(_WORD *)(v14 + 16);
    memcpy_0(v16, *(const void **)(v14 + 24), *(unsigned __int16 *)(v14 + 16));
    v16 += *(unsigned __int16 *)(v14 + 16);
  }
  else
  {
    *((_WORD *)SmpMappedView + 24) = 0;
  }
  *(_WORD *)v16 = 0;
  v17 = 0;
  v18 = SmpMappedView;
  v19 = v16 + 2;
  v20 = (PVOID *)BaseAddress;
  v21 = v19;
  v50 = v19;
  v22 = (char *)SmpMappedView + 104;
  if ( BaseAddress != &BaseAddress )
  {
    while ( 1 )
    {
      v23 = v20;
      v20 = (PVOID *)*v20;
      v24 = 2LL * v17;
      *(_QWORD *)&v22[8 * v24] = v21 - v18;
      *(_WORD *)&v22[8 * v24 + 8] = *((_WORD *)v23 + 8);
      memcpy_0(v21, v23[3], *((unsigned __int16 *)v23 + 8));
      ++v17;
      v25 = &v21[*((unsigned __int16 *)v23 + 8)];
      *v25 = 0;
      v21 = v25 + 1;
      v26 = *v23;
      if ( *((PVOID **)*v23 + 1) != v23 )
        break;
      v27 = (void **)v23[1];
      if ( *v27 != v23 )
        break;
      *v27 = v26;
      v26[1] = v27;
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v23);
      v18 = SmpMappedView;
      if ( v20 == &BaseAddress )
        goto LABEL_25;
    }
LABEL_43:
    __fastfail(3u);
  }
LABEL_25:
  *((_QWORD *)v18 + 7) = v22 - v18;
  *((_DWORD *)SmpMappedView + 16) = v17;
  *((_DWORD *)SmpMappedView + 17) = 0;
  if ( v17 )
  {
    v19 = v21;
    v22 += 16 * v17;
    v50 = v21;
  }
  v28 = (__int64 *)SmpSubSystemsRequired;
  v29 = v19;
  v30 = 0;
  if ( (__int64 *)SmpSubSystemsRequired != &SmpSubSystemsRequired )
  {
    do
    {
      v31 = v28;
      v28 = (__int64 *)*v28;
      v32 = 2LL * v30;
      *(_QWORD *)&v22[8 * v32] = v29 - (_BYTE *)SmpMappedView;
      *(_WORD *)&v22[8 * v32 + 8] = *((_WORD *)v31 + 8);
      memcpy_0(v29, (const void *)v31[3], *((unsigned __int16 *)v31 + 8));
      v33 = v30 + 1;
      v34 = &v29[*((unsigned __int16 *)v31 + 8)];
      v35 = 2LL * v33;
      *(_WORD *)v34 = 0;
      v34 += 2;
      *(_QWORD *)&v22[8 * v35] = v34 - (_BYTE *)SmpMappedView;
      *(_WORD *)&v22[8 * v35 + 8] = *((_WORD *)v31 + 16);
      memcpy_0(v34, (const void *)v31[5], *((unsigned __int16 *)v31 + 16));
      v30 = v33 + 1;
      v36 = &v34[*((unsigned __int16 *)v31 + 16)];
      *(_WORD *)v36 = 0;
      v29 = v36 + 2;
    }
    while ( v28 != &SmpSubSystemsRequired );
    v19 = v50;
  }
  *((_QWORD *)SmpMappedView + 9) = v22 - (_BYTE *)SmpMappedView;
  *((_DWORD *)SmpMappedView + 20) = v30;
  *((_DWORD *)SmpMappedView + 21) = 1;
  if ( v30 )
  {
    v19 = v29;
    v22 += 16 * v30;
  }
  v37 = (PVOID *)qword_1400323B0;
  v38 = 0;
  if ( qword_1400323B0 != &qword_1400323B0 )
  {
    do
    {
      v39 = v37;
      v37 = (PVOID *)*v37;
      v40 = 2LL * v38;
      *(_QWORD *)&v22[8 * v40] = v19 - (_BYTE *)SmpMappedView;
      *(_WORD *)&v22[8 * v40 + 8] = *((_WORD *)v39 + 8);
      memcpy_0(v19, v39[3], *((unsigned __int16 *)v39 + 8));
      ++v38;
      v41 = &v19[*((unsigned __int16 *)v39 + 8)];
      *(_WORD *)v41 = 0;
      v19 = v41 + 2;
      v42 = *v39;
      if ( *((PVOID **)*v39 + 1) != v39 )
        goto LABEL_43;
      v43 = (void **)v39[1];
      if ( *v43 != v39 )
        goto LABEL_43;
      *v43 = v42;
      v42[1] = v43;
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v39);
    }
    while ( v37 != &qword_1400323B0 );
  }
  *((_QWORD *)SmpMappedView + 11) = v22 - (_BYTE *)SmpMappedView;
  *((_DWORD *)SmpMappedView + 24) = v38;
  *((_DWORD *)SmpMappedView + 25) = 0;
  NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, SmpMappedView);
  v44 = NtDuplicateObject(
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          SmpSharedSection,
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          &SmpSharedSection,
          4u,
          2u,
          9u);
  v45 = v44;
  if ( v44 >= 0 )
  {
    ViewSize = 0LL;
    SmpMappedView = 0LL;
    v48 = NtMapViewOfSection(
            SmpSharedSection,
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            &SmpMappedView,
            0LL,
            0LL,
            0LL,
            &ViewSize,
            ViewUnmap,
            0,
            2u);
    v45 = v48;
    if ( v48 >= 0 )
      return 0LL;
    v46 = (unsigned int)v48;
    v47 = 8522LL;
  }
  else
  {
    v46 = (unsigned int)v44;
    v47 = 8501LL;
  }
  SmpLogFailure("SmpConfigureSharedSessionData", v47, v46);
  return v45;
}
