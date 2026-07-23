/*
 * XREFs of PfSnLogPrefetchSectionsStop @ 0x140938394
 * Callers:
 *     PfSnPrefetchSections @ 0x140938134 (PfSnPrefetchSections.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PfSnLogPrefetchSectionsStop(__int64 a1, int a2, int a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v7; // rax
  char v8; // [rsp+30h] [rbp-79h] BYREF
  __int16 v9; // [rsp+38h] [rbp-71h] BYREF
  __int64 v10; // [rsp+40h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-59h] BYREF
  __int64 v12; // [rsp+60h] [rbp-49h]
  int v13; // [rsp+68h] [rbp-41h]
  int v14; // [rsp+6Ch] [rbp-3Dh]
  __int64 v15; // [rsp+70h] [rbp-39h]
  __int64 v16; // [rsp+78h] [rbp-31h]
  __int64 v17; // [rsp+80h] [rbp-29h]
  __int64 v18; // [rsp+88h] [rbp-21h]
  int *v19; // [rsp+90h] [rbp-19h]
  __int64 v20; // [rsp+98h] [rbp-11h]
  int *v21; // [rsp+A0h] [rbp-9h]
  __int64 v22; // [rsp+A8h] [rbp-1h]
  char *v23; // [rsp+B0h] [rbp+7h]
  __int64 v24; // [rsp+B8h] [rbp+Fh]
  __int64 *v25; // [rsp+C0h] [rbp+17h]
  __int64 v26; // [rsp+C8h] [rbp+1Fh]
  char *v27; // [rsp+D0h] [rbp+27h]
  __int64 v28; // [rsp+D8h] [rbp+2Fh]
  int v29; // [rsp+108h] [rbp+5Fh] BYREF
  int v30; // [rsp+110h] [rbp+67h] BYREF

  if ( a1 )
  {
    v30 = a3;
    v29 = a2;
    v8 = 0;
    v10 = a5;
    if ( qword_140E67258 )
    {
      if ( EtwEventEnabled(qword_140E67258, &PfSnEvt_PrefetchSections_Stop) )
      {
        v7 = -1LL;
        do
          ++v7;
        while ( *(_WORD *)(a1 + 16 + 2 * v7) );
        v9 = v7;
        UserData.Ptr = (ULONGLONG)&v9;
        v13 = 2 * (unsigned __int16)v7;
        v12 = a1 + 16;
        v15 = a1 + 76;
        v17 = a1 + 80;
        v19 = &v29;
        v21 = &v30;
        v23 = &v8;
        v25 = &v10;
        v27 = &a6;
        *(_QWORD *)&UserData.Size = 2LL;
        v14 = 0;
        v16 = 4LL;
        v18 = 4LL;
        v20 = 4LL;
        v22 = 4LL;
        v24 = 1LL;
        v26 = 8LL;
        v28 = 4LL;
        EtwWrite(qword_140E67258, &PfSnEvt_PrefetchSections_Stop, 0LL, 9u, &UserData);
      }
    }
  }
}
