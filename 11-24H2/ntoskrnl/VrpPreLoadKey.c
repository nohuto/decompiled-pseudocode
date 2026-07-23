/*
 * XREFs of VrpPreLoadKey @ 0x140A6D8DC
 * Callers:
 *     VrpRegistryCallback @ 0x1408454F0 (VrpRegistryCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     RtlAppendUnicodeToString @ 0x140403FC0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140404080 (RtlAppendUnicodeStringToString.c)
 *     EtwActivityIdControl @ 0x1404123E0 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByPointer @ 0x1408511D0 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     VrpBuildKeyPath @ 0x14092ADC0 (VrpBuildKeyPath.c)
 *     VrpDestroyNamespaceNode @ 0x14092B1C0 (VrpDestroyNamespaceNode.c)
 *     VrpUnlockJobContextExclusive @ 0x14092BC6C (VrpUnlockJobContextExclusive.c)
 *     VrpCreateNamespaceNode @ 0x14092BCA8 (VrpCreateNamespaceNode.c)
 *     VrpGetNextToken @ 0x14092BF60 (VrpGetNextToken.c)
 *     VrpStripTrailingCharacters @ 0x14092C020 (VrpStripTrailingCharacters.c)
 *     VrpLockJobContextExclusive @ 0x14092C1A4 (VrpLockJobContextExclusive.c)
 *     VrpAddNamespaceNodeToList @ 0x14092C204 (VrpAddNamespaceNodeToList.c)
 *     VrpCreateNamespaceNodePlaceholderKey @ 0x14092C328 (VrpCreateNamespaceNodePlaceholderKey.c)
 *     CmLoadDifferencingKey @ 0x14092E890 (CmLoadDifferencingKey.c)
 *     CmSetCallbackObjectContext @ 0x140975570 (CmSetCallbackObjectContext.c)
 *     RtlStringFromGUIDEx @ 0x1409A3470 (RtlStringFromGUIDEx.c)
 *     VrpFreeKeyContext @ 0x1409EACB8 (VrpFreeKeyContext.c)
 *     VrpAllocateKeyContext @ 0x1409F7A0C (VrpAllocateKeyContext.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpPreLoadKey(_QWORD *a1, GUID *a2)
{
  __int64 v3; // r14
  const UNICODE_STRING *v4; // rcx
  UNICODE_STRING *v5; // r13
  unsigned __int16 v6; // r10
  void *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r9
  int NamespaceNodePlaceholderKey; // edi
  PGUID v11; // r14
  const wchar_t *v13; // rcx
  unsigned __int16 v14; // ax
  const UNICODE_STRING *v15; // r15
  int v16; // r10d
  unsigned __int16 Length; // si
  wchar_t *Buffer; // rcx
  __int64 v19; // r15
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  ACCESS_MASK v24; // edx
  NTSTATUS v25; // eax
  PVOID v26; // rdi
  UNICODE_STRING *KeyContext; // rax
  const wchar_t *v28; // rcx
  unsigned __int16 v29; // ax
  const wchar_t *v30; // rax
  unsigned __int16 v31; // cx
  char v32; // [rsp+70h] [rbp-238h]
  int v33; // [rsp+74h] [rbp-234h] BYREF
  PGUID Guid; // [rsp+78h] [rbp-230h]
  PVOID P[2]; // [rsp+80h] [rbp-228h] BYREF
  int v36; // [rsp+90h] [rbp-218h]
  PVOID v37[2]; // [rsp+98h] [rbp-210h] BYREF
  PVOID v38; // [rsp+A8h] [rbp-200h] BYREF
  UNICODE_STRING GuidString; // [rsp+B0h] [rbp-1F8h] BYREF
  UNICODE_STRING String1; // [rsp+C0h] [rbp-1E8h] BYREF
  UNICODE_STRING *v41; // [rsp+D0h] [rbp-1D8h]
  __int64 v42; // [rsp+D8h] [rbp-1D0h] BYREF
  HANDLE Handle; // [rsp+E0h] [rbp-1C8h] BYREF
  HANDLE v44; // [rsp+E8h] [rbp-1C0h] BYREF
  HANDLE v45; // [rsp+F0h] [rbp-1B8h] BYREF
  HANDLE v46; // [rsp+F8h] [rbp-1B0h] BYREF
  HANDLE v47; // [rsp+100h] [rbp-1A8h] BYREF
  UNICODE_STRING Source; // [rsp+108h] [rbp-1A0h] BYREF
  _QWORD *v49; // [rsp+118h] [rbp-190h]
  HANDLE v50; // [rsp+120h] [rbp-188h] BYREF
  PVOID Object; // [rsp+128h] [rbp-180h]
  GUID *v52; // [rsp+130h] [rbp-178h]
  int v53[4]; // [rsp+138h] [rbp-170h] BYREF
  __int128 v54; // [rsp+148h] [rbp-160h]
  __int128 v55; // [rsp+158h] [rbp-150h]
  int v56[4]; // [rsp+168h] [rbp-140h] BYREF
  __int128 v57; // [rsp+178h] [rbp-130h]
  __int128 v58; // [rsp+188h] [rbp-120h]
  GUID v59; // [rsp+198h] [rbp-110h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v60[2]; // [rsp+1B0h] [rbp-F8h] BYREF
  int *v61; // [rsp+1D0h] [rbp-D8h]
  __int64 v62; // [rsp+1D8h] [rbp-D0h]
  const wchar_t *v63; // [rsp+1E0h] [rbp-C8h]
  int v64; // [rsp+1E8h] [rbp-C0h] BYREF
  int v65; // [rsp+1ECh] [rbp-BCh]
  _DWORD *v66; // [rsp+1F0h] [rbp-B8h]
  __int64 v67; // [rsp+1F8h] [rbp-B0h]
  const wchar_t *v68; // [rsp+200h] [rbp-A8h]
  _DWORD v69[2]; // [rsp+208h] [rbp-A0h] BYREF
  int *v70; // [rsp+210h] [rbp-98h]
  __int64 v71; // [rsp+218h] [rbp-90h]
  char v72; // [rsp+220h] [rbp-88h] BYREF

  Guid = a2;
  v49 = a1;
  v52 = a2;
  *(_OWORD *)P = 0LL;
  *(_QWORD *)&GuidString.Length = 5111808LL;
  *(_OWORD *)v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  *(_OWORD *)v37 = 0LL;
  *(_OWORD *)v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  Source = 0LL;
  *(_QWORD *)&String1.Length = 0LL;
  v59 = 0LL;
  EtwActivityIdControl(3u, &v59);
  v3 = *a1;
  GuidString.Buffer = (wchar_t *)&v72;
  v32 = 0;
  v36 = 0;
  v4 = *(const UNICODE_STRING **)(v3 + 72);
  v42 = 0LL;
  Handle = 0LL;
  v44 = 0LL;
  v47 = 0LL;
  Object = 0LL;
  v50 = 0LL;
  v5 = 0LL;
  v41 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  if ( v4 )
  {
    NamespaceNodePlaceholderKey = VrpBuildKeyPath(v4 + 1, *(PCUNICODE_STRING *)(v3 + 8), (PUNICODE_STRING)P);
    if ( NamespaceNodePlaceholderKey < 0 )
      goto LABEL_19;
    v32 = 1;
  }
  else
  {
    *(_OWORD *)P = *(_OWORD *)*(_QWORD *)(v3 + 8);
  }
  if ( (unsigned int)dword_140E0A620 > 5 )
  {
    v13 = (const wchar_t *)P[1];
    if ( P[1] )
    {
      v14 = (unsigned __int16)P[0];
    }
    else
    {
      v14 = 0;
      v13 = &cchOriginalDestLength;
    }
    v61 = &v64;
    v62 = 2LL;
    v63 = v13;
    v64 = v14;
    v65 = 0;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E0A620, (unsigned __int8 *)byte_1400599F3, &v59, 0LL, 4u, v60);
  }
  v6 = 0;
  String1.Length = 0;
  v7 = 0LL;
  if ( LOWORD(P[0]) )
  {
    v8 = 0LL;
    do
    {
      if ( *(_WORD *)((char *)P[1] + v8) != 92 )
        break;
      v7 = (char *)v7 + 1;
      v8 = 2LL * (_QWORD)v7;
    }
    while ( 2 * (__int64)v7 < (unsigned __int64)LOWORD(P[0]) );
  }
  v9 = 2LL * (_QWORD)v7;
  String1.Buffer = (wchar_t *)((char *)P[1] + 2 * (_QWORD)v7);
  if ( 2 * (__int64)v7 < (unsigned __int64)LOWORD(P[0]) )
  {
    do
    {
      if ( *(_WORD *)((char *)P[1] + v9) == 92 )
        break;
      v6 += 2;
      v7 = (char *)v7 + 1;
      v9 = 2LL * (_QWORD)v7;
    }
    while ( 2 * (__int64)v7 < (unsigned __int64)LOWORD(P[0]) );
    String1.Length = v6;
  }
  while ( 2 * (__int64)v7 < (unsigned __int64)LOWORD(P[0]) && *((_WORD *)P[1] + (_QWORD)v7) == 92 )
    v7 = (char *)v7 + 1;
  v38 = v7;
  if ( !RtlEqualUnicodeString(&String1, &VrpRegistryString, 1u) )
    goto LABEL_15;
  VrpGetNextToken((unsigned __int16 *)P, (__int64 *)&v38, (__int64)&String1);
  if ( RtlEqualUnicodeString(&String1, &VrpAppString, 1u) || RtlEqualUnicodeString(&String1, &VrpWcString, 1u) )
  {
    NamespaceNodePlaceholderKey = 0;
  }
  else
  {
    if ( (*(_DWORD *)(v3 + 24) & 0x10) != 0 )
    {
      NamespaceNodePlaceholderKey = 0;
LABEL_20:
      v11 = Guid;
      goto LABEL_21;
    }
    v15 = &VrpMachineString;
    if ( !RtlEqualUnicodeString(&String1, &VrpMachineString, 1u) )
    {
      v15 = &VrpUserString;
      if ( !RtlEqualUnicodeString(&String1, &VrpUserString, 1u) )
      {
LABEL_15:
        NamespaceNodePlaceholderKey = -1073741790;
        goto LABEL_44;
      }
    }
    Source.Buffer = (wchar_t *)((char *)P[1] + 2 * (_QWORD)v38);
    Source.Length = LOWORD(P[0]) - 2 * (_WORD)v38;
    Source.MaximumLength = Source.Length;
    VrpStripTrailingCharacters(&Source.Length);
    v16 = 0;
    Length = Source.Length;
    Buffer = Source.Buffer;
    while ( 2LL * v16 < (unsigned __int64)Source.Length )
    {
      if ( *Buffer == 92 )
        goto LABEL_15;
      ++v16;
      ++Buffer;
    }
    NamespaceNodePlaceholderKey = RtlStringFromGUIDEx(Guid, &GuidString, 0);
    if ( NamespaceNodePlaceholderKey >= 0 )
    {
      ++GuidString.Buffer;
      GuidString.Length -= 4;
      GuidString.MaximumLength -= 4;
      WORD1(v37[0]) = GuidString.Length + 40 + v15->Length + Length;
      v37[1] = (PVOID)ExAllocatePool2(0x100uLL, WORD1(v37[0]), 0x67655256u);
      if ( !v37[1] )
      {
        NamespaceNodePlaceholderKey = -1073741670;
        goto LABEL_44;
      }
      RtlAppendUnicodeStringToString((PUNICODE_STRING)v37, &VrpRootHivePath);
      RtlAppendUnicodeToString((PUNICODE_STRING)v37, L"\\Silo_");
      RtlAppendUnicodeStringToString((PUNICODE_STRING)v37, &GuidString);
      RtlAppendUnicodeToString((PUNICODE_STRING)v37, L"_");
      RtlAppendUnicodeStringToString((PUNICODE_STRING)v37, v15);
      RtlAppendUnicodeToString((PUNICODE_STRING)v37, L"_");
      RtlAppendUnicodeStringToString((PUNICODE_STRING)v37, &Source);
      VrpLockJobContextExclusive((__int64)Guid);
      v36 = 1;
      v33 = 1;
      NamespaceNodePlaceholderKey = VrpCreateNamespaceNode(
                                      (__int64)Guid,
                                      (const void **)P,
                                      0LL,
                                      (const void **)v37,
                                      0x80000000,
                                      -1,
                                      &v42);
      if ( NamespaceNodePlaceholderKey >= 0 )
      {
        v19 = v42;
        NamespaceNodePlaceholderKey = VrpAddNamespaceNodeToList((unsigned __int64 *)&Guid->Data1, v42);
        if ( NamespaceNodePlaceholderKey >= 0 )
        {
          NamespaceNodePlaceholderKey = VrpCreateNamespaceNodePlaceholderKey(v19);
          if ( NamespaceNodePlaceholderKey >= 0 )
          {
            v53[0] = 48;
            *(_QWORD *)&v53[2] = 0LL;
            DWORD2(v54) = 576;
            *(_QWORD *)&v54 = *(_QWORD *)(v3 + 16);
            v55 = 0LL;
            v56[0] = 48;
            *(_QWORD *)&v56[2] = 0LL;
            DWORD2(v57) = 576;
            *(_QWORD *)&v57 = v37;
            v58 = 0LL;
            v20 = *(void **)(v3 + 32);
            if ( !v20
              || (NamespaceNodePlaceholderKey = ObOpenObjectByPointer(
                                                  v20,
                                                  0x200u,
                                                  0LL,
                                                  0,
                                                  (POBJECT_TYPE)CmKeyObjectType,
                                                  0,
                                                  &Handle),
                  NamespaceNodePlaceholderKey >= 0) )
            {
              v21 = *(void **)(v3 + 40);
              if ( !v21
                || (NamespaceNodePlaceholderKey = ObOpenObjectByPointer(
                                                    v21,
                                                    0x200u,
                                                    0LL,
                                                    2u,
                                                    (POBJECT_TYPE)ExEventObjectType,
                                                    0,
                                                    &v44),
                    NamespaceNodePlaceholderKey >= 0) )
              {
                v22 = (void *)v49[1];
                if ( !v22
                  || (NamespaceNodePlaceholderKey = ObOpenObjectByPointer(
                                                      v22,
                                                      0x200u,
                                                      0LL,
                                                      0,
                                                      (POBJECT_TYPE)CmKeyObjectType,
                                                      0,
                                                      &v45),
                      NamespaceNodePlaceholderKey >= 0) )
                {
                  if ( *(_QWORD *)(v3 + 80) != 2LL
                    || (v23 = *(void **)(v3 + 88)) == 0LL
                    || (NamespaceNodePlaceholderKey = ObOpenObjectByPointer(
                                                        v23,
                                                        0x200u,
                                                        0LL,
                                                        0,
                                                        (POBJECT_TYPE)SeTokenObjectType,
                                                        0,
                                                        &v46),
                        NamespaceNodePlaceholderKey >= 0) )
                  {
                    NamespaceNodePlaceholderKey = CmLoadDifferencingKey(
                                                    (__int64)v56,
                                                    (__int64)v53,
                                                    *(_DWORD *)(v3 + 24),
                                                    0LL,
                                                    (__int64)Handle,
                                                    v44,
                                                    *(_DWORD *)(v3 + 48),
                                                    (HANDLE *)((unsigned __int64)&v47 & -(__int64)(*(_QWORD *)(v3 + 56) != 0LL)),
                                                    0,
                                                    (__int64)v45,
                                                    *((_BYTE *)v49 + 16),
                                                    v46,
                                                    0);
                    if ( NamespaceNodePlaceholderKey >= 0 )
                    {
                      if ( *(_QWORD *)(v3 + 56) )
                      {
                        if ( v47 )
                        {
                          v24 = *(_DWORD *)(v3 + 48);
                          v38 = 0LL;
                          v25 = ObReferenceObjectByHandle(v47, v24, (POBJECT_TYPE)CmKeyObjectType, 0, &v38, 0LL);
                          v26 = v38;
                          Object = v38;
                          if ( v25 >= 0 )
                          {
                            KeyContext = (UNICODE_STRING *)VrpAllocateKeyContext(Guid);
                            v5 = KeyContext;
                            v41 = KeyContext;
                            if ( KeyContext )
                            {
                              if ( (int)VrpBuildKeyPath(0LL, (PCUNICODE_STRING)P, KeyContext + 1) >= 0 )
                              {
                                *(_DWORD *)(&v5[2].MaximumLength + 1) = 0x20000000;
                                if ( CmSetCallbackObjectContext(v26, &VrpCallbackCookie, v5, 0LL) >= 0 )
                                {
                                  v5 = 0LL;
                                  v41 = 0LL;
                                  ObOpenObjectByPointer(
                                    v38,
                                    KeGetCurrentThread()->PreviousMode != 0 ? 64 : 576,
                                    0LL,
                                    *(_DWORD *)(v3 + 48),
                                    (POBJECT_TYPE)CmKeyObjectType,
                                    KeGetCurrentThread()->PreviousMode,
                                    &v50);
                                }
                              }
                            }
                          }
                        }
                        **(_QWORD **)(v3 + 56) = v50;
                      }
                      NamespaceNodePlaceholderKey = -1073740541;
                      if ( (unsigned int)dword_140E0A620 > 5 )
                      {
                        v28 = (const wchar_t *)P[1];
                        if ( P[1] )
                        {
                          v29 = (unsigned __int16)P[0];
                        }
                        else
                        {
                          v29 = 0;
                          v28 = &cchOriginalDestLength;
                        }
                        v61 = &v64;
                        v62 = 2LL;
                        v63 = v28;
                        v64 = v29;
                        v65 = 0;
                        v30 = (const wchar_t *)v37[1];
                        if ( v37[1] )
                        {
                          v31 = (unsigned __int16)v37[0];
                        }
                        else
                        {
                          v31 = 0;
                          v30 = &cchOriginalDestLength;
                        }
                        v66 = v69;
                        v67 = 2LL;
                        v68 = v30;
                        v69[0] = v31;
                        v69[1] = 0;
                        v33 = -1073740541;
                        v70 = &v33;
                        v71 = 4LL;
                        tlgWriteTransfer_EtwWriteTransfer(
                          (__int64)&dword_140E0A620,
                          (unsigned __int8 *)&byte_1400598AF,
                          &v59,
                          0LL,
                          7u,
                          v60);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_19:
  if ( ((NamespaceNodePlaceholderKey + 0x80000000) & 0x80000000) != 0 || NamespaceNodePlaceholderKey == -1073740541 )
    goto LABEL_20;
LABEL_44:
  v11 = Guid;
  if ( v42 )
    VrpDestroyNamespaceNode((size_t *)&Guid->Data1, v42);
LABEL_21:
  if ( v36 )
    VrpUnlockJobContextExclusive((__int64)v11);
  if ( ((NamespaceNodePlaceholderKey + 0x80000000) & 0x80000000) == 0
    && NamespaceNodePlaceholderKey != -1073740541
    && (unsigned int)dword_140E0A620 > 2 )
  {
    v33 = NamespaceNodePlaceholderKey;
    v61 = &v33;
    v62 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E0A620, (unsigned __int8 *)&word_140059B1E, &v59, 0LL, 3u, v60);
  }
  if ( v5 )
    VrpFreeKeyContext((PVOID *)v5);
  if ( Handle )
    ObCloseHandle(Handle, 0);
  if ( v44 )
    ObCloseHandle(v44, 0);
  if ( v45 )
    ObCloseHandle(v45, 0);
  if ( v46 )
    ObCloseHandle(v46, 0);
  if ( v47 )
    ObCloseHandle(v47, 0);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v32 == 1 )
    ExFreePoolWithTag(P[1], 0x67655256u);
  if ( v37[1] )
    ExFreePoolWithTag(v37[1], 0x67655256u);
  return (unsigned int)NamespaceNodePlaceholderKey;
}
