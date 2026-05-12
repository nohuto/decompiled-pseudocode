/*
 * XREFs of StorpTelemetryLogNvmeNamespaceErrorDataCriticalData @ 0x1400B3B60
 * Callers:
 *     StorpTelemetryNvmeSendNamespaceErrorDataSummary @ 0x1400B77DC (StorpTelemetryNvmeSendNamespaceErrorDataSummary.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140035110 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1400351C0 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgCreate1Sz_char @ 0x140035A2C (_tlgCreate1Sz_char.c)
 *     _tlgKeywordOn @ 0x14003D27C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryLogNvmeNamespaceErrorDataCriticalData(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // r8
  unsigned __int16 *v9; // r10
  int v10; // edx
  __int64 v11; // rcx
  char v12; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+34h] [rbp-CCh] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  int v15; // [rsp+3Ch] [rbp-C4h] BYREF
  int v16; // [rsp+40h] [rbp-C0h] BYREF
  int v17; // [rsp+44h] [rbp-BCh] BYREF
  int v18; // [rsp+48h] [rbp-B8h] BYREF
  int v19; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+60h] [rbp-A0h] BYREF
  char *v22; // [rsp+80h] [rbp-80h]
  __int64 v23; // [rsp+88h] [rbp-78h]
  __int64 v24; // [rsp+90h] [rbp-70h]
  __int64 v25; // [rsp+98h] [rbp-68h]
  __int64 v26; // [rsp+A0h] [rbp-60h]
  __int64 v27; // [rsp+A8h] [rbp-58h]
  int *v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  int *v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  _BYTE v32[16]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v33[16]; // [rsp+E0h] [rbp-20h] BYREF
  int *v34; // [rsp+F0h] [rbp-10h]
  __int64 v35; // [rsp+F8h] [rbp-8h]
  _BYTE v36[16]; // [rsp+100h] [rbp+0h] BYREF
  __int64 *v37; // [rsp+110h] [rbp+10h]
  __int64 v38; // [rsp+118h] [rbp+18h]
  int *v39; // [rsp+120h] [rbp+20h]
  __int64 v40; // [rsp+128h] [rbp+28h]
  int *v41; // [rsp+130h] [rbp+30h]
  __int64 v42; // [rsp+138h] [rbp+38h]
  int *v43; // [rsp+140h] [rbp+40h]
  __int64 v44; // [rsp+148h] [rbp+48h]
  int *v45; // [rsp+150h] [rbp+50h]
  __int64 v46; // [rsp+158h] [rbp+58h]
  _QWORD *v47; // [rsp+160h] [rbp+60h]
  __int64 v48; // [rsp+168h] [rbp+68h]
  __int64 v49; // [rsp+170h] [rbp+70h]
  _QWORD v50[4]; // [rsp+178h] [rbp+78h] BYREF
  _DWORD v51[2]; // [rsp+198h] [rbp+98h] BYREF
  _DWORD *v52; // [rsp+1A0h] [rbp+A0h]
  __int64 v53; // [rsp+1A8h] [rbp+A8h]
  __int64 v54; // [rsp+1B0h] [rbp+B0h]
  _DWORD v55[2]; // [rsp+1B8h] [rbp+B8h] BYREF

  if ( (unsigned int)dword_140170178 > 5 )
  {
    if ( tlgKeywordOn(a1, 0x800000000000LL) )
    {
      v2 = *(_QWORD *)(v1 + 16);
      v22 = &v12;
      v12 = 5;
      v23 = 1LL;
      v3 = *(_QWORD *)(v2 + 128);
      v25 = 16LL;
      v24 = v3 + 1032;
      v26 = v1 + 160;
      v13 = *(_DWORD *)(v1 + 56);
      v28 = &v13;
      v27 = 16LL;
      v29 = 4LL;
      v14 = *(_DWORD *)(*(_QWORD *)(v2 + 128) + 56LL);
      v30 = &v14;
      v31 = 4LL;
      tlgCreate1Sz_char((__int64)v32, *(_BYTE **)(v2 + 752));
      tlgCreate1Sz_char((__int64)v33, *(_BYTE **)(*(_QWORD *)(v4 + 16) + 792LL));
      v6 = *(_QWORD *)(v5 + 16);
      v15 = *(unsigned __int16 *)(v6 + 4);
      v34 = &v15;
      v35 = 4LL;
      tlgCreate1Sz_wchar_t((__int64)v36, *(const wchar_t **)(*(_QWORD *)(v6 + 128) + 1016LL));
      v8 = *(_QWORD *)(v7 + 608);
      v10 = v9[1];
      v37 = &v20;
      v20 = *(_QWORD *)&g_SystemUptime_s;
      v11 = *v9;
      v38 = 8LL;
      v16 = *(_DWORD *)(v8 + 112);
      v39 = &v16;
      v40 = 4LL;
      v17 = *(_DWORD *)(v8 + 116);
      v41 = &v17;
      v43 = &v18;
      v45 = &v19;
      v47 = v50;
      v49 = v8 + 120;
      v50[1] = v51;
      v50[3] = v8 + 224;
      v42 = 4LL;
      v18 = v11;
      v44 = 4LL;
      v19 = v10;
      v51[0] = 104 * v11;
      v46 = 4LL;
      v48 = 2LL;
      v50[0] = 104LL;
      v50[2] = 2LL;
      v51[1] = 0;
      v52 = v55;
      v54 = v8 + 1264;
      v53 = 2LL;
      v55[1] = 0;
      v55[0] = 104 * v10;
      tlgWriteTransfer_EtwWriteTransfer(v11, (unsigned __int8 *)dword_1401618B0, v8, v7, 0x16u, &v21);
    }
  }
}
