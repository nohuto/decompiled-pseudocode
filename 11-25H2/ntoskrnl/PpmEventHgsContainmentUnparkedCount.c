/*
 * XREFs of PpmEventHgsContainmentUnparkedCount @ 0x14040A4EC
 * Callers:
 *     PpmHeteroHgsCalculateContainmentCount @ 0x14040A0EC (PpmHeteroHgsCalculateContainmentCount.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PpmEventHgsContainmentUnparkedCount(
        char a1,
        char a2,
        char a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        __int64 a8)
{
  BOOLEAN result; // al
  __int64 v10; // rcx
  bool v11; // zf
  int v12; // [rsp+48h] [rbp-C0h] BYREF
  BOOL v13; // [rsp+4Ch] [rbp-BCh] BYREF
  int v14; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v15; // [rsp+54h] [rbp-B4h] BYREF
  BOOL v16; // [rsp+58h] [rbp-B0h] BYREF
  BOOL v17; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v18; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-A0h] BYREF
  BOOL *v20; // [rsp+78h] [rbp-90h]
  __int64 v21; // [rsp+80h] [rbp-88h]
  char *v22; // [rsp+88h] [rbp-80h]
  __int64 v23; // [rsp+90h] [rbp-78h]
  char *v24; // [rsp+98h] [rbp-70h]
  __int64 v25; // [rsp+A0h] [rbp-68h]
  int *v26; // [rsp+A8h] [rbp-60h]
  __int64 v27; // [rsp+B0h] [rbp-58h]
  char *v28; // [rsp+B8h] [rbp-50h]
  __int64 v29; // [rsp+C0h] [rbp-48h]
  char *v30; // [rsp+C8h] [rbp-40h]
  __int64 v31; // [rsp+D0h] [rbp-38h]
  char *v32; // [rsp+D8h] [rbp-30h]
  __int64 v33; // [rsp+E0h] [rbp-28h]
  int *v34; // [rsp+E8h] [rbp-20h]
  __int64 v35; // [rsp+F0h] [rbp-18h]
  char *v36; // [rsp+F8h] [rbp-10h]
  __int64 v37; // [rsp+100h] [rbp-8h]
  __int64 v38; // [rsp+108h] [rbp+0h]
  __int64 v39; // [rsp+110h] [rbp+8h]
  unsigned int *v40; // [rsp+118h] [rbp+10h]
  __int64 v41; // [rsp+120h] [rbp+18h]
  BOOL *v42; // [rsp+128h] [rbp+20h]
  __int64 v43; // [rsp+130h] [rbp+28h]
  BOOL *v44; // [rsp+138h] [rbp+30h]
  __int64 v45; // [rsp+140h] [rbp+38h]
  __int64 *v46; // [rsp+148h] [rbp+40h]
  __int64 v47; // [rsp+150h] [rbp+48h]
  char v48; // [rsp+188h] [rbp+80h] BYREF
  char v49; // [rsp+190h] [rbp+88h] BYREF
  char v50; // [rsp+198h] [rbp+90h] BYREF

  v50 = a3;
  v49 = a2;
  v48 = a1;
  result = PpmHeteroHgsContainmentState;
  if ( (PpmHeteroHgsContainmentState & 4) != 0 && PpmEtwRegistered )
  {
    result = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_WPS_CONTAINMENT_UNPARK_COUNT);
    if ( result )
    {
      v10 = *(_QWORD *)(a4 + 192);
      v15 = ((unsigned int)PpmHeteroHgsContainmentState >> 3) & 1;
      LOWORD(v12) = *(_WORD *)(a4 + 184);
      v14 = *(_DWORD *)(v10 + 4);
      v13 = a7 != 0;
      v16 = *(_BYTE *)(v10 + 824) != 0;
      v17 = *(_BYTE *)(v10 + 825) != 0;
      v11 = *(_BYTE *)(v10 + 826) == 0;
      v23 = 1LL;
      v25 = 1LL;
      LODWORD(v18) = !v11;
      v27 = 1LL;
      UserData.Ptr = v10 + 820;
      v29 = 1LL;
      v20 = &v13;
      v22 = &a5;
      v24 = &a6;
      v26 = &v14;
      v28 = &v48;
      v30 = &v49;
      v32 = &v50;
      v34 = &v12;
      v36 = (char *)&v12 + 1;
      v38 = a8;
      v40 = &v15;
      v42 = &v16;
      v44 = &v17;
      v46 = &v18;
      v31 = 1LL;
      v33 = 1LL;
      v35 = 1LL;
      v37 = 1LL;
      *(_QWORD *)&UserData.Size = 4LL;
      v21 = 4LL;
      v39 = 4LL;
      v41 = 4LL;
      v43 = 4LL;
      v45 = 4LL;
      v47 = 4LL;
      return EtwWriteEx(PpmEtwHandle, &PPM_ETW_WPS_CONTAINMENT_UNPARK_COUNT, 0LL, 0, 0LL, 0LL, 0xFu, &UserData);
    }
  }
  return result;
}
