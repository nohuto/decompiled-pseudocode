/*
 * XREFs of ?HamSrvFindOrCreateHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180041AC4
 * Callers:
 *     HamRpcSrvFindOrCreateHostId @ 0x180065CD0 (HamRpcSrvFindOrCreateHostId.c)
 * Callees:
 *     ?HampHostIdStoreCheckAndSanitizeKey@@YAKPEAU_HAM_HOSTID_STORE_KEY@@@Z @ 0x180041E7C (-HampHostIdStoreCheckAndSanitizeKey@@YAKPEAU_HAM_HOSTID_STORE_KEY@@@Z.c)
 *     ?HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x1800428C8 (-HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvFindOrCreateHostId(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _HAM_HOSTID_STORE_KEY *a2,
        unsigned __int64 *a3)
{
  DWORD v6; // edi
  __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  int v9; // eax
  unsigned int v10; // r15d
  DWORD v11; // r14d
  const wchar_t *v12; // rdx
  int v13; // eax
  __int64 v14; // rax
  int v15; // eax
  int v16; // esi
  unsigned int v18; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v20; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DESCRIPTOR v23; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE TlsValue[144]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+100h] [rbp+0h] BYREF
  void *v26; // [rsp+110h] [rbp+10h]
  int v27; // [rsp+118h] [rbp+18h]
  int v28; // [rsp+11Ch] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+120h] [rbp+20h] BYREF
  void *v30; // [rsp+130h] [rbp+30h]
  int v31; // [rsp+138h] [rbp+38h]
  int v32; // [rsp+13Ch] [rbp+3Ch]
  unsigned int *v33; // [rsp+140h] [rbp+40h]
  __int64 v34; // [rsp+148h] [rbp+48h]
  struct _HAM_HOSTID_STORE_KEY *v35; // [rsp+150h] [rbp+50h]
  int v36; // [rsp+158h] [rbp+58h]
  int v37; // [rsp+15Ch] [rbp+5Ch]
  const wchar_t *v38; // [rsp+160h] [rbp+60h]
  int v39; // [rsp+168h] [rbp+68h]
  int v40; // [rsp+16Ch] [rbp+6Ch]
  unsigned __int64 *v41; // [rsp+170h] [rbp+70h]
  __int64 v42; // [rsp+178h] [rbp+78h]
  char *v43; // [rsp+180h] [rbp+80h]
  int v44; // [rsp+188h] [rbp+88h]
  int v45; // [rsp+18Ch] [rbp+8Ch]
  unsigned int *v46; // [rsp+190h] [rbp+90h]
  __int64 v47; // [rsp+198h] [rbp+98h]

  memset_0(TlsValue, 0, 0x88uLL);
  v6 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker == 0");
    TlsSetValue(v6, TlsValue);
  }
  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 0x40) != 0 && (qword_1800E82C8 & 0x40) == qword_1800E82C8 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800E82B8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1800E82B8;
    v26 = &unk_1800D5C97;
    UserData.Reserved = 2;
    v27 = 23;
    v28 = 1;
    v18 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v7 = -1LL;
  v8 = -1LL;
  v19 = -1LL;
  if ( HampHostIdStoreCheckAndSanitizeKey(a2) )
  {
    v9 = HampHostIdStoreFindOrCreateIdForKey((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 800), a2, &v19);
    v8 = v19;
    v10 = v9;
    if ( v9 >= 0 )
    {
      *a3 = v19;
      v10 = 0;
    }
  }
  else
  {
    v10 = -1073741585;
  }
  v11 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v11, 0LL);
  }
  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 8) != 0 && (qword_1800E82C8 & 8) == qword_1800E82C8 )
  {
    v18 = *((_DWORD *)a2 + 133);
    v12 = (const wchar_t *)((char *)a2 + 536);
    v21 = v8;
    v46 = &v18;
    v20 = v10;
    v47 = 4LL;
    v13 = *((unsigned __int8 *)a2 + 465);
    v43 = (char *)a2 + 464;
    v45 = 0;
    v42 = 8LL;
    v44 = 4 * v13 + 8;
    v41 = &v21;
    if ( a2 == (struct _HAM_HOSTID_STORE_KEY *)-536LL )
    {
      v12 = &word_1800C1FFC;
      v15 = 2;
    }
    else
    {
      v14 = -1LL;
      do
        ++v14;
      while ( v12[v14] );
      v15 = 2 * v14 + 2;
    }
    v38 = v12;
    v39 = v15;
    v40 = 0;
    if ( a2 )
    {
      do
        ++v7;
      while ( *((_WORD *)a2 + v7) );
      v16 = 2 * v7 + 2;
    }
    else
    {
      a2 = (struct _HAM_HOSTID_STORE_KEY *)&word_1800C1FFC;
      v16 = 2;
    }
    v34 = 4LL;
    v33 = &v20;
    *(_DWORD *)&v23.Level = 516;
    v29.Ptr = (ULONGLONG)off_1800E82B8;
    v23.Keyword = 8LL;
    v35 = a2;
    v36 = v16;
    v37 = 0;
    *(_DWORD *)&v23.Id = 184549376;
    v29.Size = *(unsigned __int16 *)off_1800E82B8;
    v30 = &unk_1800D4A34;
    v29.Reserved = 2;
    v31 = 83;
    v32 = 1;
    LODWORD(v19) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &v23, 0LL, 0LL, 8u, &v29);
  }
  return v10;
}
