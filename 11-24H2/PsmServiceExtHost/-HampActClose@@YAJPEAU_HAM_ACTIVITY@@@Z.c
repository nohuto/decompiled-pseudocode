/*
 * XREFs of ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x18001B770
 * Callers:
 *     ?HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18001997C (-HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HampDepGroupCheckCreateDependencyActivity@@YAJPEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAU_RM_HAM_ACTIVITY_HOST@@KPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x180036C08 (-HampDepGroupCheckCreateDependencyActivity@@YAJPEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAU_RM_HAM_A.c)
 *     ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800412CC (-HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@PEAPEAU_HAM_ACTIVITY@@@Z @ 0x18006DBB8 (-HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PE.c)
 *     ?HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x180082E30 (-HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180014EE0 (CemRcObjectDereference.c)
 *     ?HampActCancelExpirationTimer@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18001BAE4 (-HampActCancelExpirationTimer@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x18001BB50 (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x18001BE50 (-HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z.c)
 *     ?HampHostCheckSetCacheTimer@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001C198 (-HampHostCheckSetCacheTimer@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActSystemResourceCleanup@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18001C1EC (-HampActSystemResourceCleanup@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001C3E0 (-HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001C43C (-HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180027770 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall HampActClose(struct _HAM_ACTIVITY *a1, __int64 a2)
{
  int v3; // r14d
  struct _HAM_CLIENT_CONTEXT *v4; // rdi
  _OWORD *v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rax
  _OWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 *Value; // rax
  __int64 v15; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  const wchar_t *v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  const wchar_t *v24; // rcx
  __int64 v25; // rax
  int v26; // eax
  int v27; // edi
  _DWORD v28[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-90h] BYREF
  void *v35; // [rsp+88h] [rbp-80h]
  int v36; // [rsp+90h] [rbp-78h]
  int v37; // [rsp+94h] [rbp-74h]
  __int64 *v38; // [rsp+98h] [rbp-70h]
  __int64 v39; // [rsp+A0h] [rbp-68h]
  __int64 *v40; // [rsp+A8h] [rbp-60h]
  __int64 v41; // [rsp+B0h] [rbp-58h]
  __int64 *v42; // [rsp+B8h] [rbp-50h]
  __int64 v43; // [rsp+C0h] [rbp-48h]
  const wchar_t *v44; // [rsp+C8h] [rbp-40h]
  int v45; // [rsp+D0h] [rbp-38h]
  int v46; // [rsp+D4h] [rbp-34h]
  const wchar_t *v47; // [rsp+D8h] [rbp-30h]
  int v48; // [rsp+E0h] [rbp-28h]
  int v49; // [rsp+E4h] [rbp-24h]
  _DWORD *v50; // [rsp+E8h] [rbp-20h]
  __int64 v51; // [rsp+F0h] [rbp-18h]
  __int64 *v52; // [rsp+F8h] [rbp-10h]
  __int64 v53; // [rsp+100h] [rbp-8h]

  LOBYTE(a2) = 4;
  v3 = HampActBeginStateChange(a1, a2);
  if ( v3 < 0 )
    return (unsigned int)v3;
  v4 = (struct _HAM_CLIENT_CONTEXT *)*((_QWORD *)a1 + 8);
  if ( v4 )
  {
    HampClientAcquireLockExclusive(*((struct _HAM_CLIENT_CONTEXT **)a1 + 8));
    v5 = (_OWORD *)((char *)a1 + 48);
    v6 = *((_QWORD *)a1 + 6);
    if ( *(struct _HAM_ACTIVITY **)(v6 + 8) != (struct _HAM_ACTIVITY *)((char *)a1 + 48)
      || (v7 = (_QWORD *)*((_QWORD *)a1 + 7), (_OWORD *)*v7 != v5) )
    {
LABEL_37:
      __fastfail(3u);
    }
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    *v5 = 0LL;
    HampClientReleaseLockExclusive(v4);
  }
  v8 = (_OWORD *)((char *)a1 + 96);
  v9 = *((_QWORD *)a1 + 12);
  if ( *(struct _HAM_ACTIVITY **)(v9 + 8) != (struct _HAM_ACTIVITY *)((char *)a1 + 96) )
    goto LABEL_37;
  v10 = (_QWORD *)*((_QWORD *)a1 + 13);
  if ( (_OWORD *)*v10 != v8 )
    goto LABEL_37;
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
  *v8 = 0LL;
  v11 = *((_QWORD *)a1 + 10);
  HampHostCheckSetCacheTimer((struct _RM_HAM_ACTIVITY_HOST *)v11);
  HampActCancelExpirationTimer(a1);
  if ( *(struct _HAM_ACTIVITY **)(v11 + 1016) == a1 )
    *(_QWORD *)(v11 + 1016) = 0LL;
  HampHostUpdateActivityState((struct _RM_HAM_ACTIVITY_HOST *)v11);
  v12 = -1LL;
  v13 = *((_QWORD *)a1 + 10);
  if ( HampLockTrackerId != -1 )
  {
    Value = (__int64 *)TlsGetValue(HampLockTrackerId);
    v15 = *Value;
    if ( (*Value & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( Value[2]-- == 1 )
      *Value = v15 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *(_DWORD *)(v13 + 8) = 0;
  RtlReleaseSRWLockExclusive(v13);
  v17 = *((_QWORD *)a1 + 9);
  if ( v17 )
    v18 = *(_QWORD *)(*(_QWORD *)(v17 + 8) + 24LL);
  else
    v18 = -1LL;
  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 8) != 0 && (qword_1800E82C8 & 8) == qword_1800E82C8 )
  {
    v20 = (const wchar_t *)((char *)a1 + 124);
    v28[0] = *((_DWORD *)a1 + 28);
    v21 = 32LL;
    v30 = *((_QWORD *)a1 + 64);
    v29 = v18;
    v22 = *((_QWORD *)a1 + 10);
    v53 = 8LL;
    v51 = 4LL;
    if ( v22 )
      v21 = v22 - 32;
    v23 = *(_QWORD *)v21;
    v24 = (const wchar_t *)((char *)a1 + 252);
    v31 = v23;
    v32 = *((_QWORD *)a1 + 5);
    v52 = &v29;
    v50 = v28;
    if ( a1 == (struct _HAM_ACTIVITY *)-252LL )
    {
      v24 = &word_1800C1FFC;
      v26 = 2;
    }
    else
    {
      v25 = -1LL;
      do
        ++v25;
      while ( v24[v25] );
      v26 = 2 * v25 + 2;
    }
    v47 = v24;
    v48 = v26;
    v49 = 0;
    if ( a1 == (struct _HAM_ACTIVITY *)-124LL )
    {
      v20 = &word_1800C1FFC;
      v27 = 2;
    }
    else
    {
      do
        ++v12;
      while ( v20[v12] );
      v27 = 2 * v12 + 2;
    }
    v44 = v20;
    v42 = &v30;
    v43 = 8LL;
    v40 = &v31;
    v41 = 8LL;
    v38 = &v32;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800E82B8;
    v39 = 8LL;
    EventDescriptor.Keyword = 8LL;
    v45 = v27;
    v46 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1800E82B8;
    v35 = &unk_1800D637C;
    UserData.Reserved = 2;
    v36 = 106;
    v37 = 1;
    v28[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
  }
  HampActSystemResourceCleanup(a1);
  HampActEndStateChange(a1, 0);
  if ( *((_QWORD *)a1 + 8) )
    CemRcObjectDereference(a1);
  CemRcObjectDereference(a1);
  return (unsigned int)v3;
}
