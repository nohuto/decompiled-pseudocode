/*
 * XREFs of ?HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180019D24
 * Callers:
 *     ?HampWakeContextTryUpdateActivityState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_HOST_WAKE_CONTEXT_WORKER_STATE@@@Z @ 0x180015B8C (-HampWakeContextTryUpdateActivityState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_HOST_WAKE_CONTEX.c)
 *     ?HampInProcStartActivityAsync@@YAJPEAX_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18006A6C0 (-HampInProcStartActivityAsync@@YAJPEAX_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_ACTIVITY_PROPERTIES.c)
 *     HamRpcSrvStartExtendedExecutionAsync @ 0x18006DE10 (HamRpcSrvStartExtendedExecutionAsync.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180014EE0 (CemRcObjectDereference.c)
 *     ?HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180018200 (-HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampActCompareByHandle@@YAJPEAX0@Z @ 0x18001A700 (-HampActCompareByHandle@@YAJPEAX0@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x18001A728 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvStartActivityAsync(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // r12
  DWORD v8; // ebx
  int v9; // r15d
  __int64 v10; // rax
  unsigned __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // r12
  unsigned __int64 v14; // rbx
  int v15; // esi
  int v16; // eax
  unsigned __int64 v17; // rax
  _QWORD *v18; // rdi
  int started; // ebx
  DWORD v20; // edi
  char v22; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v23; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v24; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v25; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DESCRIPTOR v31; // [rsp+78h] [rbp-88h] BYREF
  _BYTE TlsValue[144]; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+120h] [rbp+20h] BYREF
  void *v34; // [rsp+130h] [rbp+30h]
  int v35; // [rsp+138h] [rbp+38h]
  int v36; // [rsp+13Ch] [rbp+3Ch]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+140h] [rbp+40h] BYREF
  void *v38; // [rsp+150h] [rbp+50h]
  int v39; // [rsp+158h] [rbp+58h]
  int v40; // [rsp+15Ch] [rbp+5Ch]
  __int64 *v41; // [rsp+160h] [rbp+60h]
  int v42; // [rsp+168h] [rbp+68h]
  int v43; // [rsp+16Ch] [rbp+6Ch]
  __int64 *v44; // [rsp+170h] [rbp+70h]
  int v45; // [rsp+178h] [rbp+78h]
  int v46; // [rsp+17Ch] [rbp+7Ch]
  unsigned int *v47; // [rsp+180h] [rbp+80h]
  int v48; // [rsp+188h] [rbp+88h]
  int v49; // [rsp+18Ch] [rbp+8Ch]
  __int64 *v50; // [rsp+190h] [rbp+90h]
  int v51; // [rsp+198h] [rbp+98h]
  int v52; // [rsp+19Ch] [rbp+9Ch]
  char *v53; // [rsp+1A0h] [rbp+A0h]
  int v54; // [rsp+1A8h] [rbp+A8h]
  int v55; // [rsp+1ACh] [rbp+ACh]

  v24 = a2;
  v5 = a2;
  memset_0(TlsValue, 0, 0x88uLL);
  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 0x40) != 0 && (qword_1800E82C8 & 0x40) == qword_1800E82C8 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800E82B8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1800E82B8;
    v34 = &unk_1800D4B61;
    UserData.Reserved = 2;
    v35 = 23;
    v36 = 1;
    v23 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v26 = 0LL;
  if ( HampLockTrackerId == -1 )
    goto LABEL_10;
  if ( !TlsGetValue(HampLockTrackerId) )
  {
    v8 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( TlsGetValue(HampLockTrackerId) )
        NT_ASSERT("CurrentTracker == 0");
      TlsSetValue(v8, TlsValue);
    }
LABEL_10:
    v9 = 1;
    goto LABEL_11;
  }
  v9 = 0;
LABEL_11:
  v23 = 0;
  if ( !HampClientIsActive((struct _HAM_CLIENT_CONTEXT *)a1) )
  {
    started = -1073741661;
    goto LABEL_35;
  }
  if ( a4 )
  {
    started = -1073741822;
    goto LABEL_35;
  }
  if ( a3 > 1 )
  {
    started = -1073741583;
    goto LABEL_35;
  }
  v10 = *(unsigned __int8 *)(a1 + 164);
  v11 = *(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
  v27 = v5;
  v12 = v11 - 48 * v10 + 424;
  v13 = v12 + 16;
  RtlAcquireSRWLockShared(v12 + 16);
  v14 = *(_QWORD *)v12;
  v15 = *(_BYTE *)(v12 + 8) & 1;
  if ( (*(_BYTE *)(v12 + 8) & 1) == 0 )
    goto LABEL_22;
  if ( v14 )
  {
    v14 ^= v12;
LABEL_22:
    while ( v14 )
    {
      v16 = HampActCompareByHandle(&v27, (void *)v14);
      if ( v16 < 0 )
      {
        v17 = *(_QWORD *)v14;
      }
      else
      {
        if ( v16 <= 0 )
          break;
        v17 = *(_QWORD *)(v14 + 8);
      }
      if ( v15 && v17 )
        v14 ^= v17;
      else
        v14 = v17;
    }
  }
  v18 = (_QWORD *)v14;
  if ( v14 )
  {
    if ( *(_QWORD *)(v14 + 24) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v14 + 24)) <= 1 )
        __fastfail(0xEu);
    }
    else
    {
      v18 = 0LL;
    }
  }
  RtlReleaseSRWLockShared(v13);
  if ( v18 )
  {
    if ( v18[8] == a1 )
    {
      started = HampActStartAsync(v18, a3, &v23, &v26);
      if ( started >= 0 )
        started = 0;
      CemRcObjectDereference(v18);
      goto LABEL_34;
    }
    CemRcObjectDereference(v18);
  }
  started = -1073741275;
LABEL_34:
  v5 = v24;
LABEL_35:
  if ( v9 )
  {
    v20 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        NT_ASSERT("CurrentTracker->Bitmap == 0");
      TlsSetValue(v20, 0LL);
    }
  }
  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 8) != 0 && (qword_1800E82C8 & 8) == qword_1800E82C8 )
  {
    v55 = 0;
    v52 = 0;
    v49 = 0;
    v46 = 0;
    v43 = 0;
    v28 = v26;
    v25 = v23;
    v53 = &v22;
    v50 = &v28;
    v47 = &v25;
    v44 = &v29;
    v41 = &v24;
    *(_DWORD *)&v31.Level = 516;
    v37.Ptr = (ULONGLONG)off_1800E82B8;
    v51 = 8;
    v48 = 4;
    v45 = 8;
    v42 = 4;
    v31.Keyword = 8LL;
    v22 = a3;
    v29 = v5;
    LODWORD(v24) = started;
    v54 = 1;
    *(_DWORD *)&v31.Id = 184549376;
    v37.Size = *(unsigned __int16 *)off_1800E82B8;
    v38 = &unk_1800D474F;
    v37.Reserved = 2;
    v39 = 84;
    v40 = 1;
    v23 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &v31, 0LL, 0LL, 7u, &v37);
  }
  return (unsigned int)started;
}
