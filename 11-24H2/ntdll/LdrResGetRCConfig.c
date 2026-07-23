/*
 * XREFs of LdrResGetRCConfig @ 0x1800959F0
 * Callers:
 *     LdrpVerifyAlternateResourceModuleEx @ 0x180094588 (LdrpVerifyAlternateResourceModuleEx.c)
 *     RtlpResUltimateFallbackInfo @ 0x18009582C (RtlpResUltimateFallbackInfo.c)
 *     LdrpResSearchResourceMappedFile @ 0x180096010 (LdrpResSearchResourceMappedFile.c)
 *     LdrpResCompareServiceChecksum @ 0x180097E0C (LdrpResCompareServiceChecksum.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x180074D00 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpGetFromMUIMemCache @ 0x1800771B0 (LdrpGetFromMUIMemCache.c)
 *     LdrpTraceLoadMUIDll @ 0x18009540C (LdrpTraceLoadMUIDll.c)
 *     LdrpResGetMappingSize @ 0x180095500 (LdrpResGetMappingSize.c)
 *     LdrpResSearchResourceMappedFile @ 0x180096010 (LdrpResSearchResourceMappedFile.c)
 *     CheckOneBitValidFlag @ 0x1800F0D50 (CheckOneBitValidFlag.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall LdrResGetRCConfig(__int64 DllHandle, unsigned __int64 a2, __int64 *a3, int a4, char a5)
{
  int v6; // r13d
  _DWORD *SharedData; // rcx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // r15
  unsigned __int64 v11; // r12
  int v12; // eax
  int v13; // r10d
  __int64 v14; // r8
  __int64 v15; // rdx
  unsigned int v16; // ecx
  unsigned int v17; // r9d
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
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  __int64 v40; // rcx
  _DWORD *v41; // rax
  __int64 result; // rax
  _DWORD *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r9
  unsigned int v46; // [rsp+50h] [rbp-C8h]
  __int64 v47; // [rsp+58h] [rbp-C0h] BYREF
  int v48; // [rsp+60h] [rbp-B8h]
  int v49; // [rsp+64h] [rbp-B4h]
  int v50; // [rsp+68h] [rbp-B0h]
  int v51; // [rsp+6Ch] [rbp-ACh]
  int v52; // [rsp+70h] [rbp-A8h]
  unsigned __int64 v53; // [rsp+78h] [rbp-A0h] BYREF
  __int64 v54; // [rsp+80h] [rbp-98h] BYREF
  __int64 *v55; // [rsp+88h] [rbp-90h]
  _QWORD v56[2]; // [rsp+90h] [rbp-88h] BYREF
  _QWORD v57[2]; // [rsp+A0h] [rbp-78h] BYREF
  unsigned __int64 v58; // [rsp+B0h] [rbp-68h]
  __int64 v59; // [rsp+B8h] [rbp-60h]
  const wchar_t *v60; // [rsp+C0h] [rbp-58h]
  __int64 v61; // [rsp+C8h] [rbp-50h]
  __int64 v62; // [rsp+D0h] [rbp-48h]

  v52 = a4;
  v55 = a3;
  v58 = a2;
  v59 = DllHandle;
  v60 = L"MUI";
  v61 = 1LL;
  v62 = 0LL;
  v54 = 0LL;
  v53 = a2;
  v47 = 0LL;
  v56[0] = 3145774LL;
  v56[1] = L"LdrResGetRCConfig Enter";
  v57[0] = 3014700LL;
  v57[1] = L"LdrResGetRCConfig Exit";
  v6 = a4 & 0x2000;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
  {
    v8 = (__int64)NtCurrentPeb()->SharedData + 555;
    v9 = 2147353477LL;
  }
  else
  {
    v9 = 2147353477LL;
    v8 = 2147353477LL;
  }
  if ( (*(_BYTE *)v8 & 1) != 0 )
  {
    v10 = 2147353476LL;
    if ( RtlGetCurrentServiceSessionId() )
      v44 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v44 = 2147353476LL;
    LdrpTraceLoadMUIDll((unsigned __int16 *)v56, *(unsigned __int8 *)v44);
  }
  else
  {
    v10 = 2147353476LL;
  }
  if ( DllHandle )
  {
    if ( !a5 )
      goto LABEL_8;
    v43 = LdrpGetFromMUIMemCache(DllHandle, 0, 0LL, 8);
    v47 = (__int64)v43;
    if ( v43 != (_DWORD *)-1LL )
    {
      if ( v43 )
      {
        v46 = 0;
        if ( v55 )
          *v55 = (__int64)v43;
        goto LABEL_69;
      }
LABEL_8:
      if ( !v58 && !v6 )
      {
        result = LdrpResGetMappingSize(DllHandle, &v53, v52, 0);
        if ( (int)result < 0 )
          return result;
      }
      v11 = v53;
      v12 = LdrpResSearchResourceMappedFile((PVOID)DllHandle, 3, (__int64)&v47, (__int64)&v54, 0LL, 0LL);
      v13 = v12;
      v46 = v12;
      if ( v12 < 0 )
      {
        if ( v12 != -1073741701 )
        {
          v13 = -1073741686;
          v46 = -1073741686;
LABEL_67:
          v14 = 0LL;
          v47 = 0LL;
LABEL_68:
          if ( a5 )
          {
            v45 = -1LL;
            if ( v14 )
              v45 = v14;
            LdrpSetAlternateResourceModuleHandle(DllHandle, 0LL, 0LL, v45, 0, 2, v13, 0LL);
          }
          goto LABEL_69;
        }
        v14 = v47;
      }
      else
      {
        v14 = v47;
        if ( v6 )
          goto LABEL_97;
        v15 = *(unsigned int *)(v47 + 4);
        if ( v15 + v47 > v11 + (DllHandle & 0xFFFFFFFFFFFFFFFCuLL) )
        {
          v13 = -1073741701;
          v46 = -1073741701;
          goto LABEL_66;
        }
        v13 = -1073020925;
        v46 = -1073020925;
        v16 = *(_DWORD *)(v47 + 68);
        v17 = v16 + *(_DWORD *)(v47 + 72);
        if ( v17 <= (unsigned int)v15 && v17 >= v16 )
        {
          v18 = *(_DWORD *)(v47 + 76);
          v19 = v18 + *(_DWORD *)(v47 + 80);
          if ( v19 <= (unsigned int)v15 && v19 >= v18 )
          {
            v20 = *(_DWORD *)(v47 + 84);
            v21 = v20 + *(_DWORD *)(v47 + 88);
            if ( v21 <= (unsigned int)v15 && v21 >= v20 )
            {
              v22 = *(_DWORD *)(v47 + 92);
              v23 = v22 + *(_DWORD *)(v47 + 96);
              if ( v23 >= v22 && v23 <= (unsigned int)v15 )
              {
                v24 = *(_DWORD *)(v47 + 100);
                v25 = v24 + *(_DWORD *)(v47 + 104);
                if ( v25 <= (unsigned int)v15 && v25 >= v24 )
                {
                  v26 = *(_DWORD *)(v47 + 108);
                  v27 = v26 + *(_DWORD *)(v47 + 112);
                  if ( v27 <= (unsigned int)v15 && v27 >= v26 )
                  {
                    v28 = *(_DWORD *)(v47 + 116);
                    v29 = v28 + *(_DWORD *)(v47 + 120);
                    if ( v29 <= (unsigned int)v15 && v29 >= v28 )
                    {
                      v30 = *(_DWORD *)(v47 + 124);
                      v31 = v30 + *(_DWORD *)(v47 + 128);
                      if ( v31 <= (unsigned int)v15
                        && v31 >= v30
                        && *(_DWORD *)v47 == -20054323
                        && v15 == v54
                        && *(_DWORD *)(v47 + 8) == 0x10000 )
                      {
                        v32 = *(_DWORD *)(v47 + 12);
                        if ( !v32 )
                          goto LABEL_32;
                        v48 = 0;
                        if ( (v32 & 0xFFFFFFF8) == 0 )
                        {
                          v39 = v32 & 7;
                          v48 = v39;
                          if ( v39 )
                          {
                            while ( (v39 & 1) == 0 )
                            {
                              v39 >>= 1;
                              v48 = v39;
                            }
                            if ( v39 <= 1 )
                            {
LABEL_32:
                              v33 = *(_DWORD *)(v47 + 16);
                              v49 = 0;
                              if ( (v33 & 0xFFFFFFCC) == 0 )
                              {
                                v34 = v33 & 3;
                                v49 = v34;
                                if ( v34 )
                                {
                                  while ( (v34 & 1) == 0 )
                                  {
                                    v34 >>= 1;
                                    v49 = v34;
                                  }
                                  if ( v34 <= 1 )
                                  {
                                    v35 = *(_DWORD *)(v47 + 16);
                                    v50 = 0;
                                    if ( (v35 & 0xFFFFFFCC) == 0 )
                                    {
                                      v36 = v35 & 0x30;
                                      v50 = v36;
                                      if ( v36 )
                                      {
                                        while ( (v36 & 1) == 0 )
                                        {
                                          v36 >>= 1;
                                          v50 = v36;
                                        }
                                        if ( v36 <= 1 )
                                        {
                                          if ( (*(_BYTE *)(v47 + 16) & 1) == 0 )
                                            goto LABEL_97;
                                          v37 = *(_DWORD *)(v47 + 24);
                                          v51 = 0;
                                          if ( (v37 & 0xFFFFFFFC) == 0 )
                                          {
                                            v38 = v37 & 3;
                                            v51 = v38;
                                            if ( v38 )
                                            {
                                              while ( (v38 & 1) == 0 )
                                              {
                                                v38 >>= 1;
                                                v51 = v38;
                                              }
                                              if ( v38 <= 1 )
                                              {
                                                v40 = *(unsigned int *)(v47 + 20);
                                                if ( !(_DWORD)v40
                                                  || (unsigned __int8)CheckOneBitValidFlag(v40, 256LL, v47) )
                                                {
LABEL_97:
                                                  if ( v55 )
                                                    *v55 = v14;
                                                  v13 = 0;
                                                  v46 = 0;
                                                  goto LABEL_68;
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
LABEL_66:
      if ( v13 >= 0 )
        goto LABEL_68;
      goto LABEL_67;
    }
    v46 = -1073741686;
  }
  else
  {
    v46 = -1073741811;
  }
LABEL_69:
  v41 = NtCurrentPeb()->SharedData;
  if ( v41 && *v41 )
    v9 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v9 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll((unsigned __int16 *)v57, *(unsigned __int8 *)v10);
  }
  return v46;
}
