/*
 * XREFs of EtwTracePsIoRateControl @ 0x140A71D94
 * Callers:
 *     PspSetJobIoRateControl @ 0x14085A388 (PspSetJobIoRateControl.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

BOOLEAN __fastcall EtwTracePsIoRateControl(int a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rsi
  const EVENT_DESCRIPTOR *v5; // rdi
  BOOLEAN result; // al
  const WCHAR *v8; // r8
  __int64 v9; // rcx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-D0h] BYREF
  __int64 *v11; // [rsp+48h] [rbp-C0h]
  __int64 v12; // [rsp+50h] [rbp-B8h]
  __int64 v13; // [rsp+58h] [rbp-B0h]
  __int64 v14; // [rsp+60h] [rbp-A8h]
  __int64 v15; // [rsp+68h] [rbp-A0h]
  __int64 v16; // [rsp+70h] [rbp-98h]
  __int64 v17; // [rsp+78h] [rbp-90h]
  __int64 v18; // [rsp+80h] [rbp-88h]
  __int64 v19; // [rsp+88h] [rbp-80h]
  __int64 v20; // [rsp+90h] [rbp-78h]
  __int64 v21; // [rsp+98h] [rbp-70h]
  __int64 v22; // [rsp+A0h] [rbp-68h]
  __int64 v23; // [rsp+A8h] [rbp-60h]
  __int64 v24; // [rsp+B0h] [rbp-58h]
  __int64 v25; // [rsp+B8h] [rbp-50h]
  __int64 v26; // [rsp+C0h] [rbp-48h]
  __int64 v27; // [rsp+C8h] [rbp-40h]
  __int64 v28; // [rsp+D0h] [rbp-38h]
  __int64 v29; // [rsp+D8h] [rbp-30h]
  __int64 v30; // [rsp+E0h] [rbp-28h]
  __int64 v31; // [rsp+E8h] [rbp-20h]
  __int64 v32; // [rsp+F0h] [rbp-18h]
  __int64 v33; // [rsp+F8h] [rbp-10h]
  __int64 v34; // [rsp+100h] [rbp-8h]
  __int64 v35; // [rsp+108h] [rbp+0h]
  __int64 v36; // [rsp+110h] [rbp+8h]
  __int64 v37; // [rsp+118h] [rbp+10h]
  __int64 v38; // [rsp+120h] [rbp+18h]
  const WCHAR *v39; // [rsp+128h] [rbp+20h]
  int v40; // [rsp+130h] [rbp+28h]
  int v41; // [rsp+134h] [rbp+2Ch]
  int *v42; // [rsp+138h] [rbp+30h]
  __int64 v43; // [rsp+140h] [rbp+38h]
  int v44; // [rsp+178h] [rbp+70h] BYREF
  __int64 v45; // [rsp+188h] [rbp+80h] BYREF
  int v46; // [rsp+190h] [rbp+88h] BYREF

  v46 = a4;
  v45 = a3;
  v44 = a1;
  v4 = a2 + 36;
  v5 = (const EVENT_DESCRIPTOR *)PsIoRateControlStart;
  if ( (*(_DWORD *)(a2 + 36) & 1) == 0 )
    v5 = &PsIoRateControlStop;
  result = EtwEventEnabled(EtwpPsProvRegHandle, v5);
  if ( result )
  {
    v8 = L"Global";
    if ( *(_QWORD *)(a2 + 24) )
      v8 = *(const WCHAR **)(a2 + 24);
    v9 = -1LL;
    do
      ++v9;
    while ( v8[v9] );
    v39 = v8;
    UserData.Ptr = (ULONGLONG)&v44;
    v40 = 2 * v9 + 2;
    v11 = &v45;
    *(_QWORD *)&UserData.Size = 4LL;
    v15 = a2 + 8;
    v12 = 8LL;
    v17 = a2 + 72;
    v19 = a2 + 16;
    v21 = a2 + 56;
    v23 = a2 + 80;
    v25 = a2 + 48;
    v27 = a2 + 64;
    v29 = a2 + 88;
    v31 = a2 + 96;
    v33 = a2 + 104;
    v35 = a2 + 112;
    v42 = &v46;
    v13 = a2;
    v14 = 8LL;
    v16 = 8LL;
    v18 = 8LL;
    v20 = 8LL;
    v22 = 8LL;
    v24 = 8LL;
    v26 = 8LL;
    v28 = 8LL;
    v30 = 8LL;
    v32 = 8LL;
    v34 = 8LL;
    v36 = 8LL;
    v37 = v4;
    v38 = 4LL;
    v41 = 0;
    v43 = 4LL;
    return EtwWrite(EtwpPsProvRegHandle, v5, 0LL, 0x11u, &UserData);
  }
  return result;
}
