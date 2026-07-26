/*
 * XREFs of ?NdisTraceLoggingDeviceAdded@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEBUNDIS_MINIPORT_CREATION_CONFIG@@JPEB_WE@Z @ 0x14004B600
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1401771E0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingDeviceAdded(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        const wchar_t *a5,
        unsigned __int8 a6)
{
  const wchar_t *v7; // rcx
  __int16 v8; // r8
  __int16 v9; // r9
  unsigned __int16 v10; // r8
  unsigned __int16 v11; // r9
  int v12; // eax
  const wchar_t *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rax
  bool v17; // zf
  __int64 v18; // rax
  int v19; // [rsp+38h] [rbp-D0h] BYREF
  int v20; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v21; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+48h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR v23; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A8h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-90h] BYREF
  void *v26; // [rsp+88h] [rbp-80h]
  int v27; // [rsp+90h] [rbp-78h]
  int v28; // [rsp+94h] [rbp-74h]
  int *v29; // [rsp+98h] [rbp-70h]
  __int64 v30; // [rsp+A0h] [rbp-68h]
  __int64 *v31; // [rsp+A8h] [rbp-60h]
  __int64 v32; // [rsp+B0h] [rbp-58h]
  __int64 v33; // [rsp+B8h] [rbp-50h]
  __int64 v34; // [rsp+C0h] [rbp-48h] BYREF
  EVENT_DESCRIPTOR *v35; // [rsp+C8h] [rbp-40h]
  __int64 v36; // [rsp+D0h] [rbp-38h]
  const wchar_t *v37; // [rsp+D8h] [rbp-30h]
  int v38; // [rsp+E0h] [rbp-28h] BYREF
  int v39; // [rsp+E4h] [rbp-24h]
  __int64 *v40; // [rsp+E8h] [rbp-20h]
  __int64 v41; // [rsp+F0h] [rbp-18h]
  __int64 *v42; // [rsp+F8h] [rbp-10h]
  __int64 v43; // [rsp+100h] [rbp-8h]
  const wchar_t *v44; // [rsp+108h] [rbp+0h]
  int v45; // [rsp+110h] [rbp+8h]
  int v46; // [rsp+114h] [rbp+Ch]
  int *v47; // [rsp+118h] [rbp+10h]
  __int64 v48; // [rsp+120h] [rbp+18h]

  if ( a4 < 0 )
  {
    if ( (unsigned int)dword_14011A7E8 > 5
      && (qword_14011A7F8 & 0x400000000000LL) != 0
      && (qword_14011A800 & 0x400000000000LL) == qword_14011A800 )
    {
      v13 = &word_1400F5D40;
      LODWORD(v21) = a6;
      v14 = *(_QWORD *)(a3 + 16);
      if ( a5 )
        v13 = a5;
      v20 = a2;
      *(_QWORD *)&v23.Id = v14;
      v40 = &v21;
      v19 = a4;
      v41 = 4LL;
      if ( v13 )
      {
        v16 = -1LL;
        do
          v17 = v13[++v16] == 0;
        while ( !v17 );
        v15 = 2 * v16 + 2;
      }
      else
      {
        v13 = &word_1400F5D40;
        v15 = 2;
      }
      v38 = v15;
      v37 = v13;
      v35 = &v23;
      v39 = 0;
      v31 = (__int64 *)&v20;
      v33 = a3;
      v29 = &v19;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = (unsigned __int64)off_14011A7F0;
      v36 = 8LL;
      v34 = 16LL;
      v32 = 4LL;
      v30 = 4LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0x400000000000LL;
      UserData.Size = *(unsigned __int16 *)off_14011A7F0;
      v26 = &unk_140102222;
      UserData.Reserved = 2;
      v27 = 101;
      v28 = 1;
      LODWORD(v22) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 8u, &UserData);
    }
  }
  else if ( (unsigned int)dword_14011A7E8 > 5
         && (qword_14011A7F8 & 0x400000000000LL) != 0
         && (qword_14011A800 & 0x400000000000LL) == qword_14011A800 )
  {
    v7 = &word_1400F5D40;
    v8 = *(_WORD *)(a1 + 8);
    if ( a5 )
      v7 = a5;
    v9 = *(_WORD *)(a1 + 596);
    v19 = a6;
    v22 = *(_QWORD *)(a1 + 1312);
    v10 = v8 & 0xFFFE;
    v48 = 4LL;
    v11 = v9 & 0xFFFE;
    v20 = *(_DWORD *)(a1 + 4);
    v47 = &v19;
    if ( v7 )
    {
      v18 = -1LL;
      do
        v17 = v7[++v18] == 0;
      while ( !v17 );
      v12 = 2 * v18 + 2;
    }
    else
    {
      v7 = &word_1400F5D40;
      v12 = 2;
    }
    v45 = v12;
    v42 = &v22;
    v35 = (EVENT_DESCRIPTOR *)&v38;
    v44 = v7;
    v38 = v10;
    v31 = &v34;
    v34 = v11;
    v29 = &v20;
    *(_DWORD *)&v23.Level = 5;
    UserData.Ptr = (unsigned __int64)off_14011A7F0;
    v46 = 0;
    v39 = 0;
    v43 = 8LL;
    v40 = (__int64 *)(a1 + 540);
    v41 = 16LL;
    v36 = 2LL;
    v37 = (const wchar_t *)(a1 + 10);
    v32 = 2LL;
    v33 = a1 + 598;
    v30 = 4LL;
    *(_DWORD *)&v23.Id = 184549376;
    v23.Keyword = 0x400000000000LL;
    UserData.Size = *(unsigned __int16 *)off_14011A7F0;
    v26 = &unk_140102293;
    UserData.Reserved = 2;
    v27 = 134;
    v28 = 1;
    LODWORD(v21) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(RegHandle, &v23, 0LL, 0LL, 0xBu, &UserData);
  }
}
