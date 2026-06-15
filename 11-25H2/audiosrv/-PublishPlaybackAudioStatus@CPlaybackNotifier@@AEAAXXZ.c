/*
 * XREFs of ?PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ @ 0x1800164DC
 * Callers:
 *     ?UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z @ 0x180016224 (-UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z.c)
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x1800CBEA4 (--0CPowerReferenceManager@@QEAA@XZ.c)
 *     ??1CPlaybackNotifier@@QEAA@XZ @ 0x1801038E0 (--1CPlaybackNotifier@@QEAA@XZ.c)
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180014F20 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     _alloca_probe @ 0x18015E810 (_alloca_probe.c)
 */

void __fastcall CPlaybackNotifier::PublishPlaybackAudioStatus(CPlaybackNotifier *this)
{
  __int64 **v2; // rdx
  unsigned int v3; // r8d
  __int64 *j; // rdx
  _OWORD *v5; // rax
  unsigned int v6; // r9d
  int v7; // r8d
  __int64 **v8; // rax
  __int64 *i; // rax
  int v10; // ebx
  __int64 v11; // r10
  __int64 *v12; // rcx
  _DWORD v13[3]; // [rsp+34h] [rbp-CCh] BYREF
  _DWORD v14[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+48h] [rbp-B8h]
  unsigned __int16 *v16; // [rsp+50h] [rbp-B0h] BYREF
  int v17; // [rsp+58h] [rbp-A8h]
  int v18; // [rsp+5Ch] [rbp-A4h]
  void *v19; // [rsp+60h] [rbp-A0h]
  int v20; // [rsp+68h] [rbp-98h]
  int v21; // [rsp+6Ch] [rbp-94h]
  _DWORD *v22; // [rsp+70h] [rbp-90h]
  int v23; // [rsp+78h] [rbp-88h]
  int v24; // [rsp+7Ch] [rbp-84h]
  int v25; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v26[1023]; // [rsp+84h] [rbp-7Ch] BYREF

  memset_0(v26, 0, sizeof(v26));
  v2 = (__int64 **)*((_QWORD *)this + 4);
  v3 = 0;
  v25 = 1;
  j = *v2;
  while ( !*((_BYTE *)j + 25) )
  {
    if ( *((_DWORD *)j + 16) )
    {
      if ( v3 >= 0x24 )
        break;
      v5 = (_OWORD *)std::wstring::c_str((__int64)(j + 4));
      v3 = v7 + 1;
      *(_OWORD *)((char *)&v26[-1] + v6) = *v5;
      *(_OWORD *)((char *)&v26[3] + v6) = v5[1];
      *(_OWORD *)((char *)&v26[7] + v6) = v5[2];
      *(_OWORD *)((char *)&v26[11] + v6) = v5[3];
      *(_OWORD *)((char *)&v26[15] + v6) = v5[4];
      *(_OWORD *)((char *)&v26[19] + v6) = v5[5];
      *(_OWORD *)((char *)&v26[23] + v6) = v5[6];
    }
    v8 = (__int64 **)j[2];
    if ( *((_BYTE *)v8 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v12 = *v8;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v12 + 25); v12 = (__int64 *)*v12 )
        j = v12;
    }
  }
  v26[0] = v3;
  v10 = RtlPublishWnfStateData(WNF_AUDC_RENDER, 0LL, &v25, 4096LL, 0LL);
  v11 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *(_DWORD *)v11 > 4u
    && (*(_BYTE *)(v11 + 16) & 0x40) != 0
    && (*(_QWORD *)(v11 + 24) & 0x40LL) == *(_QWORD *)(v11 + 24) )
  {
    v24 = 0;
    v22 = v13;
    v14[1] = 4;
    v16 = *(unsigned __int16 **)(v11 + 8);
    v13[0] = v10;
    v23 = 4;
    v14[0] = 184549376;
    v15 = 64LL;
    v17 = *v16;
    v19 = &unk_1801A2863;
    v18 = 2;
    v20 = 57;
    v21 = 1;
    v13[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwEventWriteTransfer(*(_QWORD *)(v11 + 32), v14, 0LL, 0LL, 3, &v16);
  }
}
