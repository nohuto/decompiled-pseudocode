/*
 * XREFs of PiUEventHandleRegistration @ 0x140857A2C
 * Callers:
 *     PiUEventHandleIoctl @ 0x140857294 (PiUEventHandleIoctl.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     PsGetCurrentThreadProcessId @ 0x14041D840 (PsGetCurrentThreadProcessId.c)
 *     RtlStringCchLengthW @ 0x140420BA0 (RtlStringCchLengthW.c)
 *     PiUEventHashStringIntoBucket @ 0x140477414 (PiUEventHashStringIntoBucket.c)
 *     PiUEventHashGuidIntoBucket @ 0x140487310 (PiUEventHashGuidIntoBucket.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1408581CC (PiUEventFreeClientRegistrationContext.c)
 *     PiUEventInitClientRegistrationContext @ 0x14085835C (PiUEventInitClientRegistrationContext.c)
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x140858944 (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 *     PiDmObjectManagerReleaseLock @ 0x1408B2B2C (PiDmObjectManagerReleaseLock.c)
 *     PiDmObjectManagerAcquireSharedLock @ 0x1408B2B9C (PiDmObjectManagerAcquireSharedLock.c)
 *     PiDmLookupObject @ 0x1408B2D60 (PiDmLookupObject.c)
 *     PiDmGetObject @ 0x1408C95A0 (PiDmGetObject.c)
 */

__int64 __fastcall PiUEventHandleRegistration(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  char **inited; // rsi
  __int64 v8; // rcx
  _WORD *v9; // rax
  NTSTATUS Object; // edi
  int v11; // ecx
  int v12; // eax
  const wchar_t *v13; // rax
  const wchar_t *v14; // r10
  unsigned __int8 *v15; // rbx
  int v16; // ecx
  int v17; // ecx
  __int64 v18; // rbx
  __int64 v19; // rax
  int v20; // ecx
  unsigned int v21; // eax
  char *v22; // rdx
  char **v23; // rax
  int v24; // ecx
  char *v25; // rax
  char **v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  int v29; // ecx
  unsigned int v30; // eax
  char *v31; // rcx
  char **v32; // rax
  __int64 v34; // rcx
  unsigned int v35; // eax
  char *v36; // rcx
  char **v37; // rax
  char *v38; // [rsp+20h] [rbp-38h] BYREF
  size_t pcchLength[6]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v40; // [rsp+68h] [rbp+10h] BYREF

  v40 = 0LL;
  v38 = 0LL;
  if ( !a2 || a3 != 936 || a4 != 8 )
  {
    Object = -1073741811;
LABEL_55:
    inited = 0LL;
    goto LABEL_56;
  }
  inited = (char **)PiUEventInitClientRegistrationContext();
  if ( !inited )
  {
    Object = -1073741670;
    goto LABEL_55;
  }
  inited[6] = (char *)PsGetCurrentThreadProcessId();
  SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)(inited + 7));
  v8 = 260LL;
  v9 = (_WORD *)a2;
  do
  {
    if ( !*v9 )
      break;
    ++v9;
    --v8;
  }
  while ( v8 );
  Object = v8 == 0 ? 0xC000000D : 0;
  if ( !v8 )
    goto LABEL_44;
  if ( *(_DWORD *)(a2 + 520) != 416 )
    goto LABEL_44;
  v11 = *(_DWORD *)(a2 + 528);
  if ( v11 >= 4 )
    goto LABEL_44;
  v12 = *(_DWORD *)(a2 + 524);
  if ( (v12 & 0xFFFFFFFC) != 0 || (v12 & 1) != 0 && v11 )
    goto LABEL_44;
  if ( (v12 & 2) != 0 )
  {
    if ( (unsigned int)(v11 - 2) > 1 )
      goto LABEL_44;
  }
  else if ( v11 == 1 )
  {
    v14 = (const wchar_t *)(a2 + 536);
    v27 = *(_QWORD *)(a2 + 536);
    if ( !v27 || v27 == -1 )
      goto LABEL_44;
    v15 = (unsigned __int8 *)(a2 + 536);
    goto LABEL_17;
  }
  v13 = (const wchar_t *)(a2 + 536);
  if ( v11 == 2 )
  {
    if ( a2 == -536 )
      goto LABEL_44;
    v34 = 200LL;
    do
    {
      if ( !*v13 )
        break;
      ++v13;
      --v34;
    }
    while ( v34 );
    v13 = (const wchar_t *)(a2 + 536);
    Object = v34 == 0 ? 0xC000000D : 0;
    if ( !v34 )
      goto LABEL_44;
  }
  v14 = v13;
  v15 = (unsigned __int8 *)v13;
  if ( *(_DWORD *)(a2 + 528) == 3 )
  {
    Object = RtlStringCchLengthW(v13, 0xC8uLL, pcchLength);
    if ( Object < 0 )
      goto LABEL_44;
    v15 = (unsigned __int8 *)(a2 + 536);
  }
LABEL_17:
  *((_DWORD *)inited + 33) = *(_DWORD *)(a2 + 528);
  v16 = *(_DWORD *)(a2 + 528);
  if ( v16 )
  {
    v17 = v16 - 1;
    if ( !v17 )
    {
      if ( (int)PiUEventGetDeviceInstanceIdFromUserHandle(*(_QWORD *)v14, &v40, &v38) >= 0 )
      {
        Object = 0;
        v18 = *(_QWORD *)(v40 + 8);
        PiDmObjectManagerAcquireSharedLock(&PiDmDeviceManager);
        v19 = PiDmLookupObject(&PiDmDeviceManager, v18);
        inited[3] = (char *)v19;
        if ( v19 )
          _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
        else
          Object = -1073741772;
        PiDmObjectManagerReleaseLock(&PiDmDeviceManager);
        if ( Object < 0 )
          goto LABEL_54;
        inited[4] = v38;
        *((_BYTE *)inited + 40) = 0;
LABEL_24:
        v15 = (unsigned __int8 *)(a2 + 536);
        goto LABEL_25;
      }
LABEL_44:
      Object = -1073741811;
      goto LABEL_54;
    }
    v28 = (unsigned int)(v17 - 1);
    if ( (_DWORD)v28 )
    {
      if ( (_DWORD)v28 != 1 )
        goto LABEL_44;
      if ( (*(_DWORD *)(a2 + 524) & 2) == 0 )
      {
        Object = PiDmGetObject(v28, v14, inited + 3);
        if ( Object < 0 )
          goto LABEL_54;
      }
    }
    else if ( (*(_DWORD *)(a2 + 524) & 2) == 0 )
    {
      Object = PiDmGetObject(1LL, v14, inited + 3);
      if ( Object < 0 )
      {
LABEL_54:
        PiUEventFreeClientRegistrationContext(inited);
        goto LABEL_55;
      }
      goto LABEL_24;
    }
  }
  else if ( (*(_DWORD *)(a2 + 524) & 1) == 0 )
  {
    *(_OWORD *)(inited + 3) = *(_OWORD *)v14;
  }
LABEL_25:
  *(_QWORD *)a2 = inited[11];
  *(_QWORD *)(a5 + 8) = 8LL;
  ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
  v20 = *(_DWORD *)(a2 + 528);
  if ( v20 )
  {
    v24 = v20 - 1;
    if ( v24 )
    {
      v29 = v24 - 1;
      if ( v29 )
      {
        if ( v29 != 1 )
        {
          Object = -1073741811;
          goto LABEL_53;
        }
        if ( (*(_DWORD *)(a2 + 524) & 2) != 0 )
          v35 = 13;
        else
          v35 = PiUEventHashStringIntoBucket((wchar_t *)(a2 + 536));
        v36 = (char *)&PiUEventDevInstancePropertyClientList + 16 * v35;
        v37 = (char **)*((_QWORD *)v36 + 1);
        if ( *v37 == v36 )
        {
          ++PiUEventDevInstancePropertyClientCount;
          *inited = v36;
          inited[1] = (char *)v37;
          *v37 = (char *)inited;
          *((_QWORD *)v36 + 1) = inited;
          goto LABEL_53;
        }
      }
      else
      {
        if ( (*(_DWORD *)(a2 + 524) & 2) != 0 )
          v30 = 13;
        else
          v30 = PiUEventHashStringIntoBucket((wchar_t *)(a2 + 536));
        v31 = (char *)&PiUEventDevInstanceClientList + 16 * v30;
        v32 = (char **)*((_QWORD *)v31 + 1);
        if ( *v32 == v31 )
        {
          ++PiUEventDevInstanceClientCount;
          *inited = v31;
          inited[1] = (char *)v32;
          *v32 = (char *)inited;
          *((_QWORD *)v31 + 1) = inited;
          goto LABEL_53;
        }
      }
LABEL_29:
      __fastfail(3u);
    }
    v25 = (char *)&PiUEventDevHandleClientList
        + 16 * (unsigned int)PiUEventHashStringIntoBucket(*((wchar_t **)inited[3] + 2));
    v26 = (char **)*((_QWORD *)v25 + 1);
    if ( *v26 != v25 )
      goto LABEL_29;
    ++PiUEventDevHandleClientCount;
    *inited = v25;
    inited[1] = (char *)v26;
    *v26 = (char *)inited;
    *((_QWORD *)v25 + 1) = inited;
  }
  else
  {
    if ( (*(_DWORD *)(a2 + 524) & 1) != 0 )
      v21 = 13;
    else
      v21 = PiUEventHashGuidIntoBucket(v15);
    v22 = (char *)&PiUEventDevInterfaceClientList + 16 * v21;
    v23 = (char **)*((_QWORD *)v22 + 1);
    if ( *v23 != v22 )
      goto LABEL_29;
    ++PiUEventDevInterfaceClientCount;
    *inited = v22;
    inited[1] = (char *)v23;
    *v23 = (char *)inited;
    *((_QWORD *)v22 + 1) = inited;
  }
LABEL_53:
  KeReleaseGuardedMutex(&PiUEventClientRegistrationListLock);
  if ( Object < 0 )
    goto LABEL_54;
LABEL_56:
  *(_QWORD *)(a1 + 32) = inited;
  return (unsigned int)Object;
}
