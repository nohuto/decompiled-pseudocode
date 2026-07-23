/*
 * XREFs of PfSnLogPrefetchSectionsStart @ 0x1409385FC
 * Callers:
 *     PfSnPrefetchSections @ 0x140938134 (PfSnPrefetchSections.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PfSnLogPrefetchSectionsStart(__int64 a1, int a2, int a3)
{
  __int64 v4; // rax
  char v5; // [rsp+30h] [rbp-39h] BYREF
  __int16 v6; // [rsp+38h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-29h] BYREF
  __int64 v8; // [rsp+50h] [rbp-19h]
  int v9; // [rsp+58h] [rbp-11h]
  int v10; // [rsp+5Ch] [rbp-Dh]
  __int64 v11; // [rsp+60h] [rbp-9h]
  __int64 v12; // [rsp+68h] [rbp-1h]
  __int64 v13; // [rsp+70h] [rbp+7h]
  __int64 v14; // [rsp+78h] [rbp+Fh]
  int *v15; // [rsp+80h] [rbp+17h]
  __int64 v16; // [rsp+88h] [rbp+1Fh]
  int *v17; // [rsp+90h] [rbp+27h]
  __int64 v18; // [rsp+98h] [rbp+2Fh]
  char *v19; // [rsp+A0h] [rbp+37h]
  __int64 v20; // [rsp+A8h] [rbp+3Fh]
  int v21; // [rsp+D8h] [rbp+6Fh] BYREF
  int v22; // [rsp+E0h] [rbp+77h] BYREF

  if ( a1 )
  {
    v22 = a3;
    v21 = a2;
    v5 = 0;
    if ( qword_140E67258 )
    {
      if ( EtwEventEnabled(qword_140E67258, &PfSnEvt_PrefetchSections_Start) )
      {
        v4 = -1LL;
        do
          ++v4;
        while ( *(_WORD *)(a1 + 16 + 2 * v4) );
        v6 = v4;
        UserData.Ptr = (ULONGLONG)&v6;
        v9 = 2 * (unsigned __int16)v4;
        v8 = a1 + 16;
        v11 = a1 + 76;
        v13 = a1 + 80;
        v15 = &v21;
        v17 = &v22;
        v19 = &v5;
        *(_QWORD *)&UserData.Size = 2LL;
        v10 = 0;
        v12 = 4LL;
        v14 = 4LL;
        v16 = 4LL;
        v18 = 4LL;
        v20 = 1LL;
        EtwWrite(qword_140E67258, &PfSnEvt_PrefetchSections_Start, 0LL, 7u, &UserData);
      }
    }
  }
}
