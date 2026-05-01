/*
 * XREFs of CrmLogActivityCoordinatorTelemetry @ 0x18002FC20
 * Callers:
 *     CrmGlobalsRundown @ 0x18002F93C (CrmGlobalsRundown.c)
 *     CrmGlobalsRegistrationRundownHelper @ 0x18002FACC (CrmGlobalsRegistrationRundownHelper.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x1800347F0 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180055770 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall CrmLogActivityCoordinatorTelemetry(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // r10
  __int64 v6; // r9
  __int64 v7; // rcx
  int v8; // [rsp+30h] [rbp-D0h] BYREF
  int v9; // [rsp+34h] [rbp-CCh] BYREF
  int v10; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v12; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v13; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+68h] [rbp-98h] BYREF
  __int64 v17; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v18[32]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v19[16]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v20; // [rsp+B0h] [rbp-50h]
  __int64 v21; // [rsp+B8h] [rbp-48h]
  __int64 *v22; // [rsp+C0h] [rbp-40h]
  __int64 v23; // [rsp+C8h] [rbp-38h]
  int *v24; // [rsp+D0h] [rbp-30h]
  __int64 v25; // [rsp+D8h] [rbp-28h]
  __int64 *v26; // [rsp+E0h] [rbp-20h]
  __int64 v27; // [rsp+E8h] [rbp-18h]
  __int64 *v28; // [rsp+F0h] [rbp-10h]
  __int64 v29; // [rsp+F8h] [rbp-8h]
  int *v30; // [rsp+100h] [rbp+0h]
  __int64 v31; // [rsp+108h] [rbp+8h]
  __int64 *v32; // [rsp+110h] [rbp+10h]
  __int64 v33; // [rsp+118h] [rbp+18h]
  __int64 *v34; // [rsp+120h] [rbp+20h]
  __int64 v35; // [rsp+128h] [rbp+28h]
  int *v36; // [rsp+130h] [rbp+30h]
  __int64 v37; // [rsp+138h] [rbp+38h]
  __int64 v38; // [rsp+140h] [rbp+40h]
  __int64 v39; // [rsp+148h] [rbp+48h]
  __int64 *v40; // [rsp+150h] [rbp+50h]
  __int64 v41; // [rsp+158h] [rbp+58h]

  if ( (unsigned __int64)(a3 - *a1) >= 0x430E234000LL )
  {
    *a1 = a3;
    v3 = 1;
    if ( (unsigned int)dword_1800E82E8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1800E82E8, 0x400000000004LL) )
    {
      tlgCreate1Sz_wchar_t(v19, v5);
      v7 = *(_QWORD *)(v6 + 56);
      v20 = &v11;
      v12 = *(_QWORD *)(v6 + 80);
      v22 = &v12;
      v8 = *(_DWORD *)(v6 + 104);
      v24 = &v8;
      v13 = *(_QWORD *)(v6 + 72);
      v26 = &v13;
      v14 = *(_QWORD *)(v6 + 96);
      v28 = &v14;
      v9 = *(_DWORD *)(v6 + 112);
      v30 = &v9;
      v15 = *(_QWORD *)(v6 + 64);
      v32 = &v15;
      v16 = *(_QWORD *)(v6 + 88);
      v34 = &v16;
      v10 = *(_DWORD *)(v6 + 108);
      v36 = &v10;
      v38 = v6 + 124;
      v11 = v7;
      v40 = &v17;
      v21 = 8LL;
      v23 = 8LL;
      v25 = 4LL;
      v27 = 8LL;
      v29 = 8LL;
      v31 = 4LL;
      v33 = 8LL;
      v35 = 8LL;
      v37 = 4LL;
      v39 = 8LL;
      v17 = 0x2000000LL;
      v41 = 8LL;
      tlgWriteTransfer_EventWriteTransfer(&dword_1800E82E8, &unk_1800D20DA, 0LL, 0LL, 14, v18);
    }
  }
  else
  {
    return 0;
  }
  return v3;
}
