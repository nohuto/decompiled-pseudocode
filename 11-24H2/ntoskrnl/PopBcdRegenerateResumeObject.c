/*
 * XREFs of PopBcdRegenerateResumeObject @ 0x140763790
 * Callers:
 *     PopBcdEstablishResumeObject @ 0x1407633AC (PopBcdEstablishResumeObject.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     BcdQueryObject @ 0x1408121E4 (BcdQueryObject.c)
 *     BcdCreateObject @ 0x14085E224 (BcdCreateObject.c)
 *     BcdSetElementDataWithFlags @ 0x1409BEB2C (BcdSetElementDataWithFlags.c)
 *     BcdCloseObject @ 0x1409BF5DC (BcdCloseObject.c)
 *     BcdDeleteObject @ 0x1409C2520 (BcdDeleteObject.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140A71D1C (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdReadElement @ 0x140A72168 (PopBcdReadElement.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopBcdRegenerateResumeObject(__int64 a1, __int64 a2, _QWORD *a3)
{
  PVOID v3; // rsi
  int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  int v15; // [rsp+30h] [rbp-29h] BYREF
  int v16; // [rsp+34h] [rbp-25h] BYREF
  int v17; // [rsp+38h] [rbp-21h] BYREF
  PVOID P; // [rsp+40h] [rbp-19h] BYREF
  PVOID v19; // [rsp+48h] [rbp-11h] BYREF
  __int64 v20; // [rsp+50h] [rbp-9h] BYREF
  PVOID v21; // [rsp+58h] [rbp-1h] BYREF
  _DWORD v22[2]; // [rsp+60h] [rbp+7h] BYREF
  GUID v23; // [rsp+68h] [rbp+Fh] BYREF
  __int128 v24; // [rsp+78h] [rbp+1Fh] BYREF

  P = 0LL;
  v17 = 0;
  v3 = 0LL;
  v16 = 0;
  v20 = 0LL;
  v19 = 0LL;
  v15 = 0;
  v21 = 0LL;
  v22[0] = 1;
  v24 = 0LL;
  v22[1] = 270532612;
  v23 = 0LL;
  v6 = BcdCreateObject(a1, 0LL, v22, &v20);
  if ( v6 < 0 )
  {
    v7 = v20;
  }
  else
  {
    v6 = PopBcdReadElement(a2, 301989892LL, &v19, &v15);
    if ( v6 < 0 )
    {
      v7 = v20;
    }
    else
    {
      PopBcdReadElement(a2, 301989893LL, &v21, &v16);
      v7 = v20;
      v9 = BcdSetElementDataWithFlags(v20, 301989892LL, v8, v19, v15);
      v3 = v21;
      v6 = v9;
      if ( v9 >= 0 )
      {
        if ( !v21 || (v6 = BcdSetElementDataWithFlags(v7, 301989893LL, v10, v21, v16), v6 >= 0) )
        {
          v6 = PopBcdSetDefaultResumeObjectElements(v7, a2);
          if ( v6 >= 0 )
          {
            v23 = GUID_RESUME_LOADER_SETTINGS_GROUP;
            v6 = BcdSetElementDataWithFlags(v7, 335544326LL, v11, &v23, 16);
            if ( v6 >= 0 )
            {
              if ( (int)PopBcdReadElement(a2, 385876087LL, &P, &v17) < 0
                || (v6 = BcdSetElementDataWithFlags(v7, 385876087LL, v12, P, v17), v6 >= 0) )
              {
                v6 = BcdQueryObject(v7, 0LL, 0LL, &v24);
                if ( v6 >= 0 )
                {
                  v6 = BcdSetElementDataWithFlags(a2, 587202563LL, v13, &v24, 16);
                  if ( v6 >= 0 )
                  {
                    *a3 = v7;
                    v7 = 0LL;
                  }
                }
              }
              if ( P )
                ExFreePoolWithTag(P, 0);
            }
          }
        }
      }
    }
    if ( v19 )
      ExFreePoolWithTag(v19, 0);
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
  }
  if ( v7 )
  {
    if ( v6 < 0 )
      BcdDeleteObject(v7);
    else
      BcdCloseObject(v7);
  }
  return (unsigned int)v6;
}
