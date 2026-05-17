/*
 * XREFs of LdrResGetRCConfig @ 0x1800A3B50
 * Callers:
 *     RtlpResUltimateFallbackInfo @ 0x180089920 (RtlpResUltimateFallbackInfo.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x1800A3438 (LdrpVerifyAlternateResourceModuleEx.c)
 *     LdrpResSearchResourceMappedFile @ 0x1800A4170 (LdrpResSearchResourceMappedFile.c)
 *     LdrpResCompareServiceChecksum @ 0x1800A5F6C (LdrpResCompareServiceChecksum.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x18001AD80 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpGetFromMUIMemCache @ 0x18001D230 (LdrpGetFromMUIMemCache.c)
 *     LdrpTraceLoadMUIDll @ 0x1800A3730 (LdrpTraceLoadMUIDll.c)
 *     LdrpResGetMappingSize @ 0x1800A3820 (LdrpResGetMappingSize.c)
 *     LdrpResSearchResourceMappedFile @ 0x1800A4170 (LdrpResSearchResourceMappedFile.c)
 *     CheckOneBitValidFlag @ 0x1800F84C0 (CheckOneBitValidFlag.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall LdrResGetRCConfig(__int64 a1, unsigned __int64 a2, _QWORD *a3, int a4, char a5)
{
  int v6; // r13d
  int v7; // r12d
  _DWORD *SharedData; // rcx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r15
  int v12; // r8d
  unsigned __int64 v13; // r12
  int v14; // eax
  int v15; // r10d
  _DWORD *v16; // r8
  __int64 v17; // rdx
  unsigned int v18; // ecx
  unsigned int v19; // r9d
  unsigned int v20; // ecx
  unsigned int v21; // r9d
  unsigned int v22; // ecx
  unsigned int v23; // r9d
  unsigned int v24; // ecx
  unsigned int v25; // r9d
  unsigned int v26; // ecx
  unsigned int v27; // r9d
  unsigned int v28; // ecx
  unsigned int v29; // r9d
  unsigned int v30; // ecx
  unsigned int v31; // r9d
  unsigned int v32; // ecx
  unsigned int v33; // r9d
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  __int64 v42; // rcx
  _DWORD *v43; // rax
  __int64 result; // rax
  _DWORD *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r9
  unsigned int v48; // [rsp+50h] [rbp-C8h]
  _DWORD *v49; // [rsp+58h] [rbp-C0h] BYREF
  int v50; // [rsp+60h] [rbp-B8h]
  int v51; // [rsp+64h] [rbp-B4h]
  int v52; // [rsp+68h] [rbp-B0h]
  int v53; // [rsp+6Ch] [rbp-ACh]
  int v54; // [rsp+70h] [rbp-A8h]
  unsigned __int64 v55; // [rsp+78h] [rbp-A0h] BYREF
  __int64 v56; // [rsp+80h] [rbp-98h] BYREF
  _QWORD *v57; // [rsp+88h] [rbp-90h]
  _QWORD v58[2]; // [rsp+90h] [rbp-88h] BYREF
  _QWORD v59[2]; // [rsp+A0h] [rbp-78h] BYREF
  unsigned __int64 v60; // [rsp+B0h] [rbp-68h]
  __int64 v61; // [rsp+B8h] [rbp-60h]
  _QWORD v62[3]; // [rsp+C0h] [rbp-58h] BYREF

  v54 = a4;
  v57 = a3;
  v60 = a2;
  v61 = a1;
  v62[0] = L"MUI";
  v62[1] = 1LL;
  v62[2] = 0LL;
  v56 = 0LL;
  v55 = a2;
  v49 = 0LL;
  v58[0] = 3145774LL;
  v58[1] = L"LdrResGetRCConfig Enter";
  v59[0] = 3014700LL;
  v59[1] = L"LdrResGetRCConfig Exit";
  v6 = a4 & 0x2000;
  v7 = 4144;
  if ( (a4 & 0x2000) != 0 )
    v7 = 8240;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
  {
    v9 = (__int64)NtCurrentPeb()->SharedData + 555;
    v10 = 2147353477LL;
  }
  else
  {
    v10 = 2147353477LL;
    v9 = 2147353477LL;
  }
  if ( (*(_BYTE *)v9 & 1) != 0 )
  {
    v11 = 2147353476LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v46 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v46 = 2147353476LL;
    LdrpTraceLoadMUIDll((unsigned __int16 *)v58, *(unsigned __int8 *)v46);
  }
  else
  {
    v11 = 2147353476LL;
  }
  if ( a1 )
  {
    if ( !a5 )
      goto LABEL_10;
    v45 = LdrpGetFromMUIMemCache(a1, 0, 0LL, 8);
    v49 = v45;
    if ( v45 != (_DWORD *)-1LL )
    {
      if ( v45 )
      {
        v48 = 0;
        if ( v57 )
          *v57 = v45;
        goto LABEL_71;
      }
LABEL_10:
      if ( !v60 && !v6 )
      {
        result = LdrpResGetMappingSize(a1, &v55, v54, 0);
        if ( (int)result < 0 )
          return result;
      }
      v12 = v7;
      v13 = v55;
      v14 = LdrpResSearchResourceMappedFile(a1, v55, v12, (unsigned int)v62, 3, (__int64)&v49, (__int64)&v56, 0LL, 0LL);
      v15 = v14;
      v48 = v14;
      if ( v14 < 0 )
      {
        if ( v14 != -1073741701 )
        {
          v15 = -1073741686;
          v48 = -1073741686;
LABEL_69:
          v16 = 0LL;
          v49 = 0LL;
LABEL_70:
          if ( a5 )
          {
            v47 = -1LL;
            if ( v16 )
              v47 = (__int64)v16;
            LdrpSetAlternateResourceModuleHandle(a1, 0LL, 0LL, v47, 0, 2, v15, 0LL);
          }
          goto LABEL_71;
        }
        v16 = v49;
      }
      else
      {
        v16 = v49;
        if ( v6 )
          goto LABEL_99;
        v17 = (unsigned int)v49[1];
        if ( (unsigned __int64)v49 + v17 > v13 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
        {
          v15 = -1073741701;
          v48 = -1073741701;
          goto LABEL_68;
        }
        v15 = -1073020925;
        v48 = -1073020925;
        v18 = v49[17];
        v19 = v18 + v49[18];
        if ( v19 <= (unsigned int)v17 && v19 >= v18 )
        {
          v20 = v49[19];
          v21 = v20 + v49[20];
          if ( v21 <= (unsigned int)v17 && v21 >= v20 )
          {
            v22 = v49[21];
            v23 = v22 + v49[22];
            if ( v23 <= (unsigned int)v17 && v23 >= v22 )
            {
              v24 = v49[23];
              v25 = v24 + v49[24];
              if ( v25 >= v24 && v25 <= (unsigned int)v17 )
              {
                v26 = v49[25];
                v27 = v26 + v49[26];
                if ( v27 <= (unsigned int)v17 && v27 >= v26 )
                {
                  v28 = v49[27];
                  v29 = v28 + v49[28];
                  if ( v29 <= (unsigned int)v17 && v29 >= v28 )
                  {
                    v30 = v49[29];
                    v31 = v30 + v49[30];
                    if ( v31 <= (unsigned int)v17 && v31 >= v30 )
                    {
                      v32 = v49[31];
                      v33 = v32 + v49[32];
                      if ( v33 <= (unsigned int)v17
                        && v33 >= v32
                        && *v49 == -20054323
                        && v17 == v56
                        && v49[2] == 0x10000 )
                      {
                        v34 = v49[3];
                        if ( !v34 )
                          goto LABEL_34;
                        v50 = 0;
                        if ( (v34 & 0xFFFFFFF8) == 0 )
                        {
                          v41 = v34 & 7;
                          v50 = v41;
                          if ( v41 )
                          {
                            while ( (v41 & 1) == 0 )
                            {
                              v41 >>= 1;
                              v50 = v41;
                            }
                            if ( v41 <= 1 )
                            {
LABEL_34:
                              v35 = v49[4];
                              v51 = 0;
                              if ( (v35 & 0xFFFFFFCC) == 0 )
                              {
                                v36 = v35 & 3;
                                v51 = v36;
                                if ( v36 )
                                {
                                  while ( (v36 & 1) == 0 )
                                  {
                                    v36 >>= 1;
                                    v51 = v36;
                                  }
                                  if ( v36 <= 1 )
                                  {
                                    v37 = v49[4];
                                    v52 = 0;
                                    if ( (v37 & 0xFFFFFFCC) == 0 )
                                    {
                                      v38 = v37 & 0x30;
                                      v52 = v38;
                                      if ( v38 )
                                      {
                                        while ( (v38 & 1) == 0 )
                                        {
                                          v38 >>= 1;
                                          v52 = v38;
                                        }
                                        if ( v38 <= 1 )
                                        {
                                          if ( (v49[4] & 1) == 0 )
                                            goto LABEL_99;
                                          v39 = v49[6];
                                          v53 = 0;
                                          if ( (v39 & 0xFFFFFFFC) == 0 )
                                          {
                                            v40 = v39 & 3;
                                            v53 = v40;
                                            if ( v40 )
                                            {
                                              while ( (v40 & 1) == 0 )
                                              {
                                                v40 >>= 1;
                                                v53 = v40;
                                              }
                                              if ( v40 <= 1 )
                                              {
                                                v42 = (unsigned int)v49[5];
                                                if ( !(_DWORD)v42
                                                  || (unsigned __int8)CheckOneBitValidFlag(v42, 256LL, v49) )
                                                {
LABEL_99:
                                                  if ( v57 )
                                                    *v57 = v16;
                                                  v15 = 0;
                                                  v48 = 0;
                                                  goto LABEL_70;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_68:
      if ( v15 >= 0 )
        goto LABEL_70;
      goto LABEL_69;
    }
    v48 = -1073741686;
  }
  else
  {
    v48 = -1073741811;
  }
LABEL_71:
  v43 = NtCurrentPeb()->SharedData;
  if ( v43 && *v43 )
    v10 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v10 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v11 = (__int64)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll((unsigned __int16 *)v59, *(unsigned __int8 *)v11);
  }
  return v48;
}
