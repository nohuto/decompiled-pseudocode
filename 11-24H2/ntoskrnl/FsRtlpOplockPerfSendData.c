/*
 * XREFs of FsRtlpOplockPerfSendData @ 0x14070BDB4
 * Callers:
 *     FsRtlpCancelOplockRHIrp @ 0x1404190F0 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlUninitializeOplock @ 0x1404E0250 (FsRtlUninitializeOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1404E0638 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpOplockCleanup @ 0x1404E3BFC (FsRtlpOplockCleanup.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x140580814 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpCancelExclusiveIrp @ 0x140580A94 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x140580DB0 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14070B5DC (FsRtlpOpBatchBreakClosePending.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgWriteAgg @ 0x1403D06F8 (_tlgWriteAgg.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     FsRtlpOplockIsSubjectToTimeout @ 0x140581758 (FsRtlpOplockIsSubjectToTimeout.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     FsRtlpOplockPerfBucketize @ 0x14070BAF4 (FsRtlpOplockPerfBucketize.c)
 *     FsRtlpOplockPerfCleanupData @ 0x14070BB9C (FsRtlpOplockPerfCleanupData.c)
 *     FsRtlpOplockPerfPrepareToSendData @ 0x14070BD04 (FsRtlpOplockPerfPrepareToSendData.c)
 *     FsRtlpOplockPerfSummarizeData @ 0x14070C164 (FsRtlpOplockPerfSummarizeData.c)
 */

char __fastcall FsRtlpOplockPerfSendData(_QWORD *a1)
{
  _UNKNOWN **v1; // rax
  _DWORD *v2; // rdx
  _DWORD *v4; // rdi
  __int64 v5; // r8
  _QWORD *v6; // rcx
  __int16 v8; // [rsp+38h] [rbp-D0h] BYREF
  int v9; // [rsp+3Ch] [rbp-CCh] BYREF
  int v10; // [rsp+40h] [rbp-C8h] BYREF
  int v11; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v12; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+70h] [rbp-98h] BYREF
  __int64 v18; // [rsp+78h] [rbp-90h] BYREF
  __int64 v19; // [rsp+80h] [rbp-88h] BYREF
  __int64 v20; // [rsp+88h] [rbp-80h] BYREF
  __int64 v21; // [rsp+90h] [rbp-78h] BYREF
  __int64 v22; // [rsp+98h] [rbp-70h] BYREF
  __int64 v23; // [rsp+A0h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+A8h] [rbp-60h] BYREF
  __int64 *v25; // [rsp+C8h] [rbp-40h]
  __int64 v26; // [rsp+D0h] [rbp-38h]
  __int64 *v27; // [rsp+D8h] [rbp-30h]
  __int64 v28; // [rsp+E0h] [rbp-28h]
  __int64 *v29; // [rsp+E8h] [rbp-20h]
  __int64 v30; // [rsp+F0h] [rbp-18h]
  __int64 *v31; // [rsp+F8h] [rbp-10h]
  __int64 v32; // [rsp+100h] [rbp-8h]
  __int64 *v33; // [rsp+108h] [rbp+0h]
  __int64 v34; // [rsp+110h] [rbp+8h]
  __int64 *v35; // [rsp+118h] [rbp+10h]
  __int64 v36; // [rsp+120h] [rbp+18h]
  __int64 *v37; // [rsp+128h] [rbp+20h]
  __int64 v38; // [rsp+130h] [rbp+28h]
  __int64 *v39; // [rsp+138h] [rbp+30h]
  __int64 v40; // [rsp+140h] [rbp+38h]
  __int64 *v41; // [rsp+148h] [rbp+40h]
  __int64 v42; // [rsp+150h] [rbp+48h]
  __int64 *v43; // [rsp+158h] [rbp+50h]
  __int64 v44; // [rsp+160h] [rbp+58h]
  __int16 *v45; // [rsp+168h] [rbp+60h]
  __int64 v46; // [rsp+170h] [rbp+68h]
  void *v47; // [rsp+178h] [rbp+70h]
  __int64 v48; // [rsp+180h] [rbp+78h]
  int *v49; // [rsp+188h] [rbp+80h]
  __int64 v50; // [rsp+190h] [rbp+88h]
  __int64 v51; // [rsp+198h] [rbp+90h]
  int v52; // [rsp+1A0h] [rbp+98h]
  int v53; // [rsp+1A4h] [rbp+9Ch]
  int *v54; // [rsp+1A8h] [rbp+A0h]
  __int64 v55; // [rsp+1B0h] [rbp+A8h]
  __int64 v56; // [rsp+1B8h] [rbp+B0h]
  int v57; // [rsp+1C0h] [rbp+B8h]
  int v58; // [rsp+1C4h] [rbp+BCh]
  _BYTE v59[32]; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 *v60; // [rsp+1E8h] [rbp+E0h]
  __int64 v61; // [rsp+1F0h] [rbp+E8h]
  int *v62; // [rsp+1F8h] [rbp+F0h]
  __int64 v63; // [rsp+200h] [rbp+F8h]
  __int64 *v64; // [rsp+208h] [rbp+100h]
  __int64 v65; // [rsp+210h] [rbp+108h]
  _UNKNOWN *retaddr; // [rsp+230h] [rbp+128h] BYREF

  v1 = &retaddr;
  v2 = a1 + 1;
  if ( *a1 )
  {
    v4 = a1 + 1;
    if ( (*v2 & 1) != 0 )
    {
      if ( (unsigned int)dword_140E06C30 > 5 )
      {
        LOBYTE(v1) = tlgKeywordOn((__int64)&dword_140E06C30, 0x400000000000LL);
        if ( (_BYTE)v1 )
        {
          v13 = 1LL;
          v60 = &v13;
          v61 = 8LL;
          v62 = &v11;
          v11 = v5;
          v64 = &v14;
          v63 = 4LL;
          v14 = 0x1000000LL;
          v65 = 8LL;
          LOBYTE(v1) = tlgWriteAgg((__int64)&dword_140E06C30, (unsigned __int8 *)byte_1400438F0, v5, 5u, (__int64)v59);
        }
      }
LABEL_15:
      v2 = v4;
      goto LABEL_16;
    }
    LOBYTE(v1) = FsRtlpOplockIsSubjectToTimeout((__int64)a1);
    if ( (_BYTE)v1 )
    {
      v1 = (_UNKNOWN **)FsRtlpOplockPerfBucketize(v6);
      v2 = v4;
      if ( (__int64)v1 >= *(_QWORD *)(g_OplockPerfData + 24) )
      {
        if ( _InterlockedIncrement((volatile signed __int32 *)(g_OplockPerfData + 32)) == 1
          && FsRtlpOplockPerfPrepareToSendData() )
        {
          FsRtlpOplockPerfSummarizeData();
          if ( (unsigned int)dword_140E06C30 > 5 && tlgKeywordOn((__int64)&dword_140E06C30, 0x200000000000LL) )
          {
            v25 = &v15;
            LOWORD(v9) = word_140E65B50;
            v27 = &v12;
            v16 = qword_140E65B98;
            v29 = &v16;
            v17 = qword_140E65B58;
            v31 = &v17;
            v18 = qword_140E65B60;
            v33 = &v18;
            v19 = qword_140E65B68;
            v35 = &v19;
            v20 = qword_140E65B80;
            v37 = &v20;
            v21 = qword_140E65B88;
            v39 = &v21;
            v22 = qword_140E65B70;
            v41 = &v22;
            v23 = qword_140E65B78;
            v43 = &v23;
            v8 = 16;
            v45 = &v8;
            v47 = &unk_140E65C30;
            v49 = &v9;
            v51 = xmmword_140E65B30;
            v52 = 8 * (unsigned __int16)word_140E65B50;
            v54 = &v10;
            v56 = *((_QWORD *)&xmmword_140E65B30 + 1);
            v57 = 8 * (unsigned __int16)word_140E65B52;
            v15 = 0x1000000LL;
            v26 = 8LL;
            LODWORD(v12) = 2;
            v28 = 4LL;
            v30 = 8LL;
            v32 = 8LL;
            v34 = 8LL;
            v36 = 8LL;
            v38 = 8LL;
            v40 = 8LL;
            v42 = 8LL;
            v44 = 8LL;
            v46 = 2LL;
            v48 = 128LL;
            v50 = 2LL;
            v53 = 0;
            LOWORD(v10) = word_140E65B52;
            v55 = 2LL;
            v58 = 0;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140E06C30,
              (unsigned __int8 *)byte_140043793,
              0LL,
              0LL,
              0x12u,
              &v24);
          }
          FsRtlpOplockPerfCleanupData();
          _InterlockedExchange64((volatile __int64 *)(g_OplockPerfData + 16), 0LL);
        }
        LOBYTE(v1) = g_OplockPerfData;
        _InterlockedDecrement((volatile signed __int32 *)(g_OplockPerfData + 32));
        goto LABEL_15;
      }
    }
  }
LABEL_16:
  *a1 = 0LL;
  *v2 = 0;
  return (char)v1;
}
