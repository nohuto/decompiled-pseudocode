/*
 * XREFs of PopDirectedDripsDiagRundownBroadcastTrees @ 0x140A62C8C
 * Callers:
 *     PopDirectedDripsDiagNotifySessionStop @ 0x140A62A2C (PopDirectedDripsDiagNotifySessionStop.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void PopDirectedDripsDiagRundownBroadcastTrees()
{
  char *v0; // rbx
  __int64 v1; // rax
  _QWORD *v2; // rdi
  __int64 v3; // rcx
  int v4; // ecx
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // [rsp+38h] [rbp-D0h] BYREF
  int v10; // [rsp+3Ch] [rbp-CCh] BYREF
  int v11; // [rsp+40h] [rbp-C8h] BYREF
  int v12; // [rsp+44h] [rbp-C4h] BYREF
  int v13; // [rsp+48h] [rbp-C0h] BYREF
  int v14; // [rsp+4Ch] [rbp-BCh] BYREF
  int v15; // [rsp+50h] [rbp-B8h] BYREF
  int v16; // [rsp+54h] [rbp-B4h] BYREF
  int v17; // [rsp+58h] [rbp-B0h] BYREF
  int v18; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v19; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+70h] [rbp-98h] BYREF
  __int64 v22; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 *v24; // [rsp+A8h] [rbp-60h]
  __int64 v25; // [rsp+B0h] [rbp-58h]
  int *v26; // [rsp+B8h] [rbp-50h]
  __int64 v27; // [rsp+C0h] [rbp-48h]
  int *v28; // [rsp+C8h] [rbp-40h]
  __int64 v29; // [rsp+D0h] [rbp-38h]
  int *v30; // [rsp+D8h] [rbp-30h]
  __int64 v31; // [rsp+E0h] [rbp-28h]
  int *v32; // [rsp+E8h] [rbp-20h]
  __int64 v33; // [rsp+F0h] [rbp-18h]
  int *v34; // [rsp+F8h] [rbp-10h]
  __int64 v35; // [rsp+100h] [rbp-8h]
  int *v36; // [rsp+108h] [rbp+0h]
  __int64 v37; // [rsp+110h] [rbp+8h]
  __int64 *v38; // [rsp+118h] [rbp+10h]
  __int64 v39; // [rsp+120h] [rbp+18h]
  char *v40; // [rsp+128h] [rbp+20h]
  __int64 v41; // [rsp+130h] [rbp+28h]
  char *v42; // [rsp+138h] [rbp+30h]
  __int64 v43; // [rsp+140h] [rbp+38h]
  __int64 *v44; // [rsp+148h] [rbp+40h]
  __int64 v45; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+158h] [rbp+50h] BYREF
  __int64 v47; // [rsp+168h] [rbp+60h]
  __int64 v48; // [rsp+170h] [rbp+68h]
  __int64 v49; // [rsp+178h] [rbp+70h]
  __int64 v50; // [rsp+180h] [rbp+78h]
  char *v51; // [rsp+188h] [rbp+80h]
  __int64 v52; // [rsp+190h] [rbp+88h]
  char *v53; // [rsp+198h] [rbp+90h]
  __int64 v54; // [rsp+1A0h] [rbp+98h]

  v19 = PopWnfCsEnterScenarioId;
  while ( 1 )
  {
    v0 = (char *)PopDirectedDripsDiagSessionContext;
    if ( PopDirectedDripsDiagSessionContext == &PopDirectedDripsDiagSessionContext )
      break;
    v1 = *(_QWORD *)PopDirectedDripsDiagSessionContext;
    if ( *((PVOID **)PopDirectedDripsDiagSessionContext + 1) != &PopDirectedDripsDiagSessionContext
      || *(PVOID *)(v1 + 8) != PopDirectedDripsDiagSessionContext )
    {
      __fastfail(3u);
    }
    PopDirectedDripsDiagSessionContext = *(PVOID *)PopDirectedDripsDiagSessionContext;
    *(_QWORD *)(v1 + 8) = &PopDirectedDripsDiagSessionContext;
    if ( (unsigned int)dword_140FD8900 > 5 && tlgKeywordOn((__int64)&dword_140FD8900, 0x400000000000LL) )
    {
      v3 = *((_QWORD *)v0 + 2);
      v20 = v19;
      v25 = 8LL;
      v24 = &v20;
      v9 = *(_DWORD *)(v3 + 24);
      v26 = &v9;
      v27 = 4LL;
      v10 = *(_DWORD *)(v3 + 144);
      v28 = &v10;
      v11 = *((_DWORD *)v0 + 8);
      v30 = &v11;
      v12 = *((_DWORD *)v0 + 10);
      v32 = &v12;
      v34 = (int *)(v0 + 56);
      v36 = (int *)(v0 + 80);
      v38 = (__int64 *)(v0 + 192);
      v40 = v0 + 128;
      v42 = v0 + 152;
      v44 = &v21;
      v29 = 4LL;
      v31 = 4LL;
      v33 = 4LL;
      v35 = 20LL;
      v37 = 40LL;
      v39 = 40LL;
      v41 = 20LL;
      v43 = 40LL;
      v21 = 0x1000000LL;
      v45 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140FD8900,
        (unsigned __int8 *)byte_14004F29D,
        0LL,
        0LL,
        0xDu,
        v23);
    }
    while ( 1 )
    {
      v2 = (_QWORD *)*((_QWORD *)v0 + 3);
      if ( !v2 )
        break;
      if ( (unsigned int)dword_140FD8900 > 5 && tlgKeywordOn((__int64)&dword_140FD8900, 0x400000000000LL) )
      {
        v20 = v19;
        v25 = 8LL;
        v24 = &v20;
        v4 = *(_DWORD *)(*((_QWORD *)v0 + 2) + 24LL);
        v26 = &v13;
        v14 = *((_DWORD *)v0 + 8);
        v28 = &v14;
        v15 = *((_DWORD *)v0 + 10);
        v30 = &v15;
        v5 = v2[1];
        v13 = v4;
        v27 = 4LL;
        v29 = 4LL;
        v31 = 4LL;
        v6 = *(_DWORD *)(v5 + 24);
        v32 = &v16;
        v17 = *((_DWORD *)v2 + 4);
        v34 = &v17;
        v18 = *((_DWORD *)v2 + 5);
        v36 = &v18;
        v38 = &v22;
        v16 = v6;
        v33 = 4LL;
        v35 = 4LL;
        v37 = 4LL;
        v22 = 0x1000000LL;
        v39 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140FD8900,
          (unsigned __int8 *)word_14004F492,
          0LL,
          0LL,
          0xAu,
          v23);
      }
      if ( PopDiagHandleRegistered )
      {
        if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_ERROR_RECORD) )
        {
          UserData.Ptr = (ULONGLONG)&v19;
          *(_QWORD *)&UserData.Size = 8LL;
          v7 = *((_QWORD *)v0 + 2) + 16LL;
          v48 = 8LL;
          v47 = v7;
          v8 = v2[1];
          v50 = 8LL;
          v49 = v8 + 16;
          v51 = (char *)(v2 + 2);
          v53 = (char *)v2 + 20;
          v52 = 4LL;
          v54 = 4LL;
          EtwWrite(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_ERROR_RECORD, 0LL, 5u, &UserData);
        }
      }
      *((_QWORD *)v0 + 3) = *v2;
      ExFreePoolWithTag(v2, 0x67696450u);
    }
    ExFreePoolWithTag(v0, 0x67696450u);
  }
}
