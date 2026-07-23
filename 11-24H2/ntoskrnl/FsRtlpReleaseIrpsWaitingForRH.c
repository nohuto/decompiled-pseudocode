/*
 * XREFs of FsRtlpReleaseIrpsWaitingForRH @ 0x1402B8E90
 * Callers:
 *     FsRtlpOplockCleanup @ 0x1403CDA80 (FsRtlpOplockCleanup.c)
 *     FsRtlCheckOplockEx2 @ 0x1403CE7F0 (FsRtlCheckOplockEx2.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1403CF664 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpCancelOplockRHIrp @ 0x140408EA0 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1404D9C50 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1409E0F60 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1402B9194 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpOplockKeysEqual @ 0x1403CE290 (FsRtlpOplockKeysEqual.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

NTSTATUS __fastcall FsRtlpReleaseIrpsWaitingForRH(__int64 a1)
{
  NTSTATUS result; // eax
  int v2; // edx
  int v4; // r8d
  int v5; // r15d
  _QWORD *v6; // rbx
  _QWORD **v7; // r13
  _QWORD *v8; // rsi
  void *v9; // rcx
  _QWORD *v10; // r14
  _QWORD *v11; // rax
  NTSTATUS v12; // [rsp+48h] [rbp-C0h] BYREF
  int v13; // [rsp+4Ch] [rbp-BCh] BYREF
  int v14; // [rsp+50h] [rbp-B8h] BYREF
  NTSTATUS v15; // [rsp+54h] [rbp-B4h] BYREF
  void *v16; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR v19; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-80h] BYREF
  __int16 *v21; // [rsp+98h] [rbp-70h]
  int v22; // [rsp+A0h] [rbp-68h]
  int v23; // [rsp+A4h] [rbp-64h]
  void **v24; // [rsp+A8h] [rbp-60h]
  __int64 v25; // [rsp+B0h] [rbp-58h]
  NTSTATUS *v26; // [rsp+B8h] [rbp-50h]
  __int64 v27; // [rsp+C0h] [rbp-48h]
  int *v28; // [rsp+C8h] [rbp-40h]
  __int64 v29; // [rsp+D0h] [rbp-38h]
  int *v30; // [rsp+D8h] [rbp-30h]
  __int64 v31; // [rsp+E0h] [rbp-28h]
  EVENT_DESCRIPTOR *p_EventDescriptor; // [rsp+E8h] [rbp-20h]
  __int64 v33; // [rsp+F0h] [rbp-18h]
  NTSTATUS *v34; // [rsp+F8h] [rbp-10h]
  __int64 v35; // [rsp+100h] [rbp-8h]

  result = 0;
  v2 = 0;
  v12 = 0;
  v13 = 0;
  v4 = 0;
  v5 = 0;
  if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v17 = a1;
    v24 = (void **)&v17;
    v15 = *(_DWORD *)(a1 + 144);
    v26 = &v15;
    *(_DWORD *)&EventDescriptor.Level = 261;
    UserData.Ptr = (ULONGLONG)off_140E06C38;
    v25 = 8LL;
    v27 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = (unsigned __int16)*off_140E06C38;
    v21 = word_140043F12;
    UserData.Reserved = 2;
    v22 = 65;
    v23 = 1;
    LODWORD(v16) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteEx(RegHandle, &EventDescriptor, 0LL, 0, 0LL, 0LL, 4u, &UserData);
    result = 0;
    v2 = 0;
    v4 = 0;
  }
  v6 = *(_QWORD **)(a1 + 88);
  if ( v6 != (_QWORD *)(a1 + 88) )
  {
    v7 = (_QWORD **)(a1 + 72);
    while ( 1 )
    {
      v8 = *v7;
      ++v4;
      v16 = v6;
      v9 = v6;
      v14 = v4;
      if ( v8 == v7 && (*(_DWORD *)(a1 + 144) & 0x10000) == 0 )
        goto LABEL_10;
      if ( !*((_BYTE *)v6 + 52) )
        break;
LABEL_11:
      result = v12;
LABEL_12:
      v6 = (_QWORD *)*v6;
      if ( v6 == (_QWORD *)(a1 + 88) )
        goto LABEL_4;
    }
    if ( (*(_DWORD *)(a1 + 144) & 0x10000) != 0 )
    {
      v10 = (_QWORD *)(a1 + 120);
      v8 = *(_QWORD **)(a1 + 120);
    }
    else
    {
      v10 = (_QWORD *)(a1 + 72);
    }
    while ( v8 != v10 )
    {
      v11 = v8 - 7;
      if ( (*(_DWORD *)(a1 + 144) & 0x10000) == 0 )
        v11 = v8;
      if ( !(unsigned __int8)FsRtlpOplockKeysEqual(v6[7], v11[3], 0LL) )
      {
        result = v12 + 1;
        v4 = v14;
        v2 = ++v13;
        ++v12;
        goto LABEL_12;
      }
      v8 = (_QWORD *)*v8;
    }
    v9 = v16;
LABEL_10:
    v6 = (_QWORD *)v6[1];
    FsRtlpRemoveAndCompleteWaitingIrp(v9);
    v4 = v14;
    ++v5;
    v2 = v13;
    goto LABEL_11;
  }
LABEL_4:
  if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v15 = result;
    LODWORD(v16) = v4;
    v26 = &v15;
    v24 = &v16;
    v28 = &v14;
    v13 = v2;
    v30 = &v13;
    v19.Keyword = 0LL;
    p_EventDescriptor = &EventDescriptor;
    v12 = *(_DWORD *)(a1 + 144);
    v34 = &v12;
    *(_DWORD *)&v19.Level = 517;
    UserData.Ptr = (ULONGLONG)off_140E06C38;
    v25 = 4LL;
    v27 = 4LL;
    v14 = v5;
    v29 = 4LL;
    v31 = 4LL;
    *(_QWORD *)&EventDescriptor.Id = a1;
    v33 = 8LL;
    v35 = 4LL;
    *(_DWORD *)&v19.Id = 184549376;
    UserData.Size = (unsigned __int16)*off_140E06C38;
    v21 = &word_140043DAE;
    UserData.Reserved = 2;
    v22 = 146;
    v23 = 1;
    LODWORD(v17) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    return EtwWriteEx(RegHandle, &v19, 0LL, 0, 0LL, 0LL, 8u, &UserData);
  }
  return result;
}
