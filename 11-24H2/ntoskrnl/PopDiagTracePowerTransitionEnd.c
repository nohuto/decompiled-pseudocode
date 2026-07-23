/*
 * XREFs of PopDiagTracePowerTransitionEnd @ 0x140AB4674
 * Callers:
 *     PopIssueActionRequest @ 0x140A84124 (PopIssueActionRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopQueryMostRecentWakeSourceInfo @ 0x14074F810 (PopQueryMostRecentWakeSourceInfo.c)
 *     EtwWriteEndScenario @ 0x140A3D500 (EtwWriteEndScenario.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PopDiagTracePowerTransitionEnd(int a1)
{
  PVOID v1; // rdi
  PVOID v2; // rbx
  _WORD v3[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v4; // [rsp+4Ch] [rbp-BCh] BYREF
  __int16 v5; // [rsp+50h] [rbp-B8h] BYREF
  __int16 v6; // [rsp+54h] [rbp-B4h] BYREF
  int v7; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v8[2]; // [rsp+60h] [rbp-A8h] BYREF
  char *v9; // [rsp+68h] [rbp-A0h]
  __int64 v10; // [rsp+70h] [rbp-98h] BYREF
  __int128 v11; // [rsp+78h] [rbp-90h] BYREF
  __int128 v12; // [rsp+88h] [rbp-80h] BYREF
  PVOID P[2]; // [rsp+98h] [rbp-70h] BYREF
  PVOID v14[2]; // [rsp+A8h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+B8h] [rbp-50h] BYREF
  __int64 *v16; // [rsp+C8h] [rbp-40h]
  __int64 v17; // [rsp+D0h] [rbp-38h]
  __int16 *v18; // [rsp+D8h] [rbp-30h]
  __int64 v19; // [rsp+E0h] [rbp-28h]
  __int16 *v20; // [rsp+E8h] [rbp-20h]
  __int64 v21; // [rsp+F0h] [rbp-18h]
  __int16 *v22; // [rsp+F8h] [rbp-10h]
  __int64 v23; // [rsp+100h] [rbp-8h]
  int *v24; // [rsp+108h] [rbp+0h]
  __int64 v25; // [rsp+110h] [rbp+8h]
  __int64 v26; // [rsp+118h] [rbp+10h]
  int v27; // [rsp+120h] [rbp+18h]
  int v28; // [rsp+124h] [rbp+1Ch]
  __int64 v29; // [rsp+128h] [rbp+20h]
  int v30; // [rsp+130h] [rbp+28h]
  int v31; // [rsp+134h] [rbp+2Ch]
  PVOID v32; // [rsp+138h] [rbp+30h]
  int v33; // [rsp+140h] [rbp+38h]
  int v34; // [rsp+144h] [rbp+3Ch]
  PVOID v35; // [rsp+148h] [rbp+40h]
  int v36; // [rsp+150h] [rbp+48h]
  int v37; // [rsp+154h] [rbp+4Ch]
  char v38; // [rsp+158h] [rbp+50h] BYREF
  int v39; // [rsp+188h] [rbp+80h] BYREF

  v39 = a1;
  v3[0] = 0;
  v8[1] = 0;
  *(_OWORD *)v14 = 0LL;
  *(_OWORD *)P = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  if ( PopDiagHandleRegistered )
  {
    v10 = MEMORY[0xFFFFF78000000014];
    v9 = &v38;
    v8[0] = 1441792;
    PopQueryMostRecentWakeSourceInfo(
      (__int64)v8,
      (__int64)&v11,
      (__int64)&v12,
      (UNICODE_STRING *)P,
      (PUNICODE_STRING)v14,
      v3,
      (_BYTE *)v3 + 1);
    v1 = P[1];
    v2 = v14[1];
    v15.Ptr = (ULONGLONG)&v39;
    v16 = &v10;
    v18 = &v4;
    v20 = &v5;
    v22 = &v6;
    v24 = &v7;
    v26 = *((_QWORD *)&v11 + 1);
    v4 = (unsigned __int16)v11 >> 1;
    v5 = (unsigned __int16)v12 >> 1;
    v6 = LOWORD(P[0]) >> 1;
    LOWORD(v7) = LOWORD(v14[0]) >> 1;
    v29 = *((_QWORD *)&v12 + 1);
    v27 = 2 * ((unsigned __int16)v11 >> 1);
    v30 = 2 * ((unsigned __int16)v12 >> 1);
    v33 = 2 * (LOWORD(P[0]) >> 1);
    v36 = 2 * (LOWORD(v14[0]) >> 1);
    *(_QWORD *)&v15.Size = 4LL;
    v17 = 8LL;
    v19 = 2LL;
    v21 = 2LL;
    v23 = 2LL;
    v25 = 2LL;
    v28 = 0;
    v31 = 0;
    v32 = P[1];
    v34 = 0;
    v35 = v14[1];
    v37 = 0;
    EtwWriteEndScenario((ULONG_PTR *)PopDiagHandle, &POP_ETW_EVENT_POWERTRANSITION_END, &PopDiagActivityId, 0xAu, &v15);
    if ( LOBYTE(v3[0]) )
      ExFreePoolWithTag(v1, 0x67696450u);
    if ( HIBYTE(v3[0]) )
      ExFreePoolWithTag(v2, 0x67696450u);
  }
}
