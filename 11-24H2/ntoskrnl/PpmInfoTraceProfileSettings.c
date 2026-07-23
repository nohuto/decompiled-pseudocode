/*
 * XREFs of PpmInfoTraceProfileSettings @ 0x140A4F5E0
 * Callers:
 *     PpmEventTraceControlCallback @ 0x140AC8550 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char PpmInfoTraceProfileSettings()
{
  __int64 *v0; // rbx
  GUID **v1; // rdi
  __int64 *v2; // r9
  __int64 *v3; // r14
  unsigned int v4; // esi
  unsigned int v5; // r15d
  unsigned __int64 v6; // rdx
  int v7; // r8d
  char *v8; // r13
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rax
  char *v13; // r13
  __int64 v14; // r12
  __int64 v15; // rax
  unsigned __int8 i; // [rsp+38h] [rbp-D0h]
  char v18; // [rsp+40h] [rbp-C8h] BYREF
  char v19; // [rsp+48h] [rbp-C0h] BYREF
  char v20; // [rsp+50h] [rbp-B8h] BYREF
  int v21; // [rsp+58h] [rbp-B0h] BYREF
  int v22; // [rsp+60h] [rbp-A8h] BYREF
  int v23; // [rsp+68h] [rbp-A0h] BYREF
  int v24; // [rsp+70h] [rbp-98h] BYREF
  __int64 v25; // [rsp+78h] [rbp-90h] BYREF
  __int64 v26; // [rsp+80h] [rbp-88h]
  __int64 v27; // [rsp+88h] [rbp-80h]
  GUID v28; // [rsp+90h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v30; // [rsp+B8h] [rbp-50h]
  int v31; // [rsp+C0h] [rbp-48h]
  int v32; // [rsp+C4h] [rbp-44h]
  int *v33; // [rsp+C8h] [rbp-40h]
  __int64 v34; // [rsp+D0h] [rbp-38h]
  char *v35; // [rsp+D8h] [rbp-30h]
  __int64 v36; // [rsp+E0h] [rbp-28h]
  GUID *v37; // [rsp+E8h] [rbp-20h]
  __int64 v38; // [rsp+F0h] [rbp-18h]
  int *v39; // [rsp+F8h] [rbp-10h]
  __int64 v40; // [rsp+100h] [rbp-8h]
  char *v41; // [rsp+108h] [rbp+0h]
  int v42; // [rsp+110h] [rbp+8h]
  int v43; // [rsp+114h] [rbp+Ch]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+118h] [rbp+10h] BYREF
  __int64 v45; // [rsp+128h] [rbp+20h]
  int v46; // [rsp+130h] [rbp+28h]
  int v47; // [rsp+134h] [rbp+2Ch]
  int *v48; // [rsp+138h] [rbp+30h]
  __int64 v49; // [rsp+140h] [rbp+38h]
  int *v50; // [rsp+148h] [rbp+40h]
  __int64 v51; // [rsp+150h] [rbp+48h]
  GUID *v52; // [rsp+158h] [rbp+50h]
  __int64 v53; // [rsp+160h] [rbp+58h]
  __int64 *v54; // [rsp+168h] [rbp+60h]
  __int64 v55; // [rsp+170h] [rbp+68h]
  char *v56; // [rsp+178h] [rbp+70h]
  int v57; // [rsp+180h] [rbp+78h]
  int v58; // [rsp+184h] [rbp+7Ch]

  v0 = PpmDefaultProfile;
  v28 = 0LL;
  for ( i = 0; ; ++i )
  {
    v1 = &off_140FC5F68;
    v27 = 70LL;
    v2 = v0 + 5;
    v3 = v0 + 66;
    do
    {
      v4 = 0;
      v5 = ((*((_BYTE *)v1 + 29) & 4) != 0) + 1;
      v28 = **v1;
      do
      {
        v6 = *((unsigned __int8 *)v1 + 28);
        v7 = *((_DWORD *)v1 + 6);
        v26 = 2LL * v4;
        v8 = (char *)v1[2] + v4 * v7 + (_QWORD)v2;
        v9 = v2[v26 + (v6 >> 6)];
        if ( _bittest64(&v9, v6 & 0x3F) )
        {
          v10 = (__int64)*(v1 - 1);
          v23 = v7;
          v19 = v4;
          v18 = *((_BYTE *)v0 + 8);
          v22 = 0;
          if ( PpmEtwRegistered )
          {
            if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_PROFILE_SETTING_RUNDOWN) )
            {
              v22 = 0;
              UserData.Ptr = (ULONGLONG)&v18;
              v11 = -1LL;
              *(_QWORD *)&UserData.Size = 1LL;
              v30 = v10;
              do
                ++v11;
              while ( *(_BYTE *)(v10 + v11) );
              v32 = 0;
              v31 = v11 + 1;
              v34 = 4LL;
              v33 = &v22;
              v36 = 1LL;
              v35 = &v19;
              v37 = &v28;
              v39 = &v23;
              v42 = v23;
              v38 = 16LL;
              v40 = 4LL;
              v41 = v8;
              v43 = 0;
              EtwWrite(PpmEtwHandle, &PPM_ETW_PROCESSOR_PROFILE_SETTING_RUNDOWN, 0LL, 7u, &UserData);
            }
          }
        }
        v12 = v3[v26 + ((unsigned __int64)*((unsigned __int8 *)v1 + 28) >> 6)];
        v13 = (char *)v3 + v4 * *((_DWORD *)v1 + 6) + (_QWORD)v1[2];
        if ( _bittest64(&v12, *((_BYTE *)v1 + 28) & 0x3F) )
        {
          v14 = (__int64)*(v1 - 1);
          LODWORD(v25) = *((_DWORD *)v1 + 6);
          LOBYTE(v21) = v4;
          LOBYTE(v12) = *((_BYTE *)v0 + 8);
          v20 = v12;
          v24 = 0;
          if ( PpmEtwRegistered )
          {
            LOBYTE(v12) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_PROFILE_SETTING_RUNDOWN);
            if ( (_BYTE)v12 )
            {
              v45 = v14;
              v44.Ptr = (ULONGLONG)&v20;
              v15 = -1LL;
              v24 = 1;
              *(_QWORD *)&v44.Size = 1LL;
              do
                ++v15;
              while ( *(_BYTE *)(v14 + v15) );
              v51 = 1LL;
              v46 = v15 + 1;
              v47 = 0;
              v48 = &v24;
              v49 = 4LL;
              v50 = &v21;
              v52 = &v28;
              v54 = &v25;
              v57 = v25;
              v53 = 16LL;
              v55 = 4LL;
              v56 = v13;
              v58 = 0;
              LOBYTE(v12) = EtwWrite(PpmEtwHandle, &PPM_ETW_PROCESSOR_PROFILE_SETTING_RUNDOWN, 0LL, 7u, &v44);
            }
          }
        }
        ++v28.Data4[7];
        v2 = v0 + 5;
        ++v4;
      }
      while ( v4 < v5 );
      v1 += 5;
      v2 = v0 + 5;
      --v27;
    }
    while ( v27 );
    if ( i == PpmProfileCount )
      break;
    v0 = (__int64 *)(PpmProfiles + 1056LL * i);
  }
  return v12;
}
