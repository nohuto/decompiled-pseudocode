/*
 * XREFs of LdrResGetRCConfig @ 0x140A622BC
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x14044EAD4 (LdrpResSearchResourceMappedFile.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x1405E5304 (LdrpVerifyAlternateResourceModuleEx.c)
 * Callees:
 *     LdrpGetFromMUIMemCache @ 0x1402DCFC0 (LdrpGetFromMUIMemCache.c)
 *     LdrpResSearchResourceMappedFile @ 0x14044EAD4 (LdrpResSearchResourceMappedFile.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x140489DDC (LdrpSetAlternateResourceModuleHandle.c)
 *     CheckOneBitValidFlag @ 0x1405E6248 (CheckOneBitValidFlag.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     LdrpResGetMappingSize @ 0x140A3C6A8 (LdrpResGetMappingSize.c)
 */

NTSTATUS __fastcall LdrResGetRCConfig(__int64 a1, ULONG64 a2, _QWORD *a3, int a4, char a5)
{
  int v9; // edi
  _DWORD *v10; // rax
  int v11; // edi
  NTSTATUS result; // eax
  int v13; // ecx
  _DWORD *v14; // r8
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
  int v32; // ecx
  int v33; // r9d
  char v34; // r9
  int v35; // ecx
  __int64 v36; // r9
  _DWORD *v37; // [rsp+58h] [rbp-80h] BYREF
  ULONG64 v38; // [rsp+60h] [rbp-78h] BYREF
  __int64 v39[2]; // [rsp+68h] [rbp-70h] BYREF
  unsigned __int64 v40[3]; // [rsp+78h] [rbp-60h] BYREF

  v39[1] = a1;
  v40[0] = (unsigned __int64)L"MUI";
  v40[1] = 1LL;
  v40[2] = 0LL;
  v39[0] = 0LL;
  v38 = a2;
  v37 = 0LL;
  v9 = a4 & 0x2000;
  if ( !a1 )
    return -1073741811;
  if ( !a5 )
    goto LABEL_11;
  v10 = LdrpGetFromMUIMemCache(a1, 0, 0LL, 8);
  v37 = v10;
  if ( v10 == (_DWORD *)-1LL )
    return -1073741686;
  if ( v10 )
  {
    v11 = 0;
    if ( a3 )
      *a3 = v10;
    return v11;
  }
LABEL_11:
  if ( a2 || v9 || (result = LdrpResGetMappingSize(a1, &v38, a4), result >= 0) )
  {
    v13 = LdrpResSearchResourceMappedFile((void *)a1, v38, v9 != 0 ? 8240 : 4144, v40, 3, &v37, v39, 0LL, 0LL);
    if ( v13 < 0 )
    {
      if ( v13 != -1073741701 )
        v13 = -1073741686;
      v11 = v13;
      goto LABEL_55;
    }
    v14 = v37;
    if ( !v9 )
    {
      v15 = (unsigned int)v37[1];
      if ( (unsigned __int64)v37 + v15 > v38 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
      {
        v11 = -1073741701;
LABEL_55:
        v14 = 0LL;
        v37 = 0LL;
LABEL_56:
        if ( a5 )
        {
          v36 = -1LL;
          if ( v14 )
            v36 = (__int64)v14;
          LdrpSetAlternateResourceModuleHandle((_DWORD *)a1, 0LL, 0LL, v36, 0, 2, v11, 0LL);
        }
        return v11;
      }
      v11 = -1073020925;
      v16 = v37[17];
      v17 = v16 + v37[18];
      if ( v17 > (unsigned int)v15 )
        goto LABEL_55;
      if ( v17 < v16 )
        goto LABEL_55;
      v18 = v37[19];
      v19 = v18 + v37[20];
      if ( v19 > (unsigned int)v15 )
        goto LABEL_55;
      if ( v19 < v18 )
        goto LABEL_55;
      v20 = v37[21];
      v21 = v20 + v37[22];
      if ( v21 > (unsigned int)v15 )
        goto LABEL_55;
      if ( v21 < v20 )
        goto LABEL_55;
      v22 = v37[23];
      v23 = v22 + v37[24];
      if ( v23 > (unsigned int)v15 )
        goto LABEL_55;
      if ( v23 < v22 )
        goto LABEL_55;
      v24 = v37[25];
      v25 = v24 + v37[26];
      if ( v25 > (unsigned int)v15 )
        goto LABEL_55;
      if ( v25 < v24 )
        goto LABEL_55;
      v26 = v37[27];
      v27 = v26 + v37[28];
      if ( v27 > (unsigned int)v15 )
        goto LABEL_55;
      if ( v27 < v26 )
        goto LABEL_55;
      v28 = v37[29];
      v29 = v28 + v37[30];
      if ( v29 > (unsigned int)v15 )
        goto LABEL_55;
      if ( v29 < v28 )
        goto LABEL_55;
      v30 = v37[31];
      v31 = v30 + v37[32];
      if ( v31 > (unsigned int)v15 )
        goto LABEL_55;
      if ( v31 < v30 )
        goto LABEL_55;
      if ( *v37 != -20054323 )
        goto LABEL_55;
      if ( v15 != v39[0] )
        goto LABEL_55;
      if ( v37[2] != 0x10000 )
        goto LABEL_55;
      v32 = v37[3];
      if ( v32 )
      {
        if ( !CheckOneBitValidFlag(v32, 7) )
          goto LABEL_55;
      }
      if ( !CheckOneBitValidFlag(v14[4] & 0xFFFFFFCF, 3) )
        goto LABEL_55;
      if ( !CheckOneBitValidFlag(v33 & 0xFFFFFFFC, 48) )
        goto LABEL_55;
      if ( (v34 & 1) != 0 )
      {
        if ( !CheckOneBitValidFlag(v14[6], 3) )
          goto LABEL_55;
        v35 = v14[5];
        if ( v35 )
        {
          if ( !CheckOneBitValidFlag(v35, 256) )
            goto LABEL_55;
        }
      }
    }
    if ( a3 )
      *a3 = v14;
    v11 = 0;
    goto LABEL_56;
  }
  return result;
}
