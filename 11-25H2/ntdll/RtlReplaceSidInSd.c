/*
 * XREFs of RtlReplaceSidInSd @ 0x18013AE00
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x1800E6550 (RtlGetDaclSecurityDescriptor.c)
 *     RtlGetSaclSecurityDescriptor @ 0x1800EBF90 (RtlGetSaclSecurityDescriptor.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x1800EDE40 (RtlGetOwnerSecurityDescriptor.c)
 *     RtlGetGroupSecurityDescriptor @ 0x1800F0CF0 (RtlGetGroupSecurityDescriptor.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     memcmp @ 0x180168C50 (memcmp.c)
 */

__int64 __fastcall RtlReplaceSidInSd(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int v5; // r12d
  unsigned int v7; // r12d
  __int64 v9; // r13
  __int64 result; // rax
  __int64 v11; // rdi
  int v12; // eax
  int v13; // ecx
  __int64 v14; // rdi
  int v15; // eax
  int v16; // ecx
  __int64 v17; // r14
  __int64 v18; // rdi
  __int64 v19; // r13
  __int64 v20; // rsi
  int v21; // eax
  int v22; // ecx
  __int64 v23; // r14
  __int64 v24; // rdi
  __int64 v25; // rsi
  int v26; // eax
  int v27; // ecx
  _QWORD v28[3]; // [rsp+20h] [rbp-18h] BYREF
  char v30; // [rsp+88h] [rbp+50h] BYREF
  __int64 v31; // [rsp+90h] [rbp+58h]
  bool v32; // [rsp+98h] [rbp+60h] BYREF

  v31 = a3;
  *a4 = 0;
  v5 = *(unsigned __int8 *)(a2 + 1);
  v28[0] = 0LL;
  v7 = 4 * v5;
  v30 = 0;
  v9 = a1;
  result = RtlGetOwnerSecurityDescriptor(a1, v28, &v32);
  if ( (int)result >= 0 )
  {
    v11 = v28[0];
    if ( v28[0] )
    {
      if ( *(_BYTE *)v28[0] == *(_BYTE *)a2 )
      {
        v12 = *(unsigned __int8 *)(a2 + 1);
        if ( *(_BYTE *)(v28[0] + 1LL) == (_BYTE)v12 || *(unsigned __int8 *)(v28[0] + 1LL) == v12 + 1 )
        {
          v13 = *(_DWORD *)(v28[0] + 2LL) - *(_DWORD *)(a2 + 2);
          if ( !v13 )
            v13 = *(unsigned __int16 *)(v28[0] + 6LL) - *(unsigned __int16 *)(a2 + 6);
          if ( !v13 && !memcmp((const void *)(v28[0] + 8LL), (const void *)(a2 + 8), v7) )
          {
            memmove((void *)(v11 + 8), (const void *)(a3 + 8), v7);
            ++*a4;
          }
        }
      }
    }
    v28[0] = 0LL;
    result = RtlGetGroupSecurityDescriptor(v9, v28, &v32);
    if ( (int)result >= 0 )
    {
      v14 = v28[0];
      if ( v28[0] )
      {
        if ( *(_BYTE *)v28[0] == *(_BYTE *)a2 )
        {
          v15 = *(unsigned __int8 *)(a2 + 1);
          if ( *(_BYTE *)(v28[0] + 1LL) == (_BYTE)v15 || *(unsigned __int8 *)(v28[0] + 1LL) == v15 + 1 )
          {
            v16 = *(_DWORD *)(v28[0] + 2LL) - *(_DWORD *)(a2 + 2);
            if ( !v16 )
              v16 = *(unsigned __int16 *)(v28[0] + 6LL) - *(unsigned __int16 *)(a2 + 6);
            if ( !v16 && !memcmp((const void *)(v28[0] + 8LL), (const void *)(a2 + 8), v7) )
            {
              memmove((void *)(v14 + 8), (const void *)(a3 + 8), v7);
              ++*a4;
            }
          }
        }
      }
      v28[0] = 0LL;
      result = RtlGetDaclSecurityDescriptor(v9, &v30, v28, &v32);
      if ( (int)result >= 0 )
      {
        if ( v30 )
        {
          if ( v28[0] )
          {
            v17 = *(unsigned __int16 *)(v28[0] + 4LL);
            v18 = v28[0] + 8LL;
            if ( *(_WORD *)(v28[0] + 4LL) )
            {
              v19 = v31;
              while ( *(_BYTE *)v18 > 3u )
              {
                if ( *(_BYTE *)v18 == 4 )
                {
                  v20 = v18 + 4 * (*(unsigned __int8 *)(v18 + 13) + 5LL);
                  goto LABEL_30;
                }
LABEL_38:
                v18 += *(unsigned __int16 *)(v18 + 2);
                if ( !--v17 )
                {
                  v9 = a1;
                  goto LABEL_40;
                }
              }
              v20 = v18 + 8;
LABEL_30:
              if ( *(_BYTE *)v20 == *(_BYTE *)a2 )
              {
                v21 = *(unsigned __int8 *)(a2 + 1);
                if ( *(_BYTE *)(v20 + 1) == (_BYTE)v21 || *(unsigned __int8 *)(v20 + 1) == v21 + 1 )
                {
                  v22 = *(_DWORD *)(v20 + 2) - *(_DWORD *)(a2 + 2);
                  if ( !v22 )
                    v22 = *(unsigned __int16 *)(v20 + 6) - *(unsigned __int16 *)(a2 + 6);
                  if ( !v22 && !memcmp((const void *)(v20 + 8), (const void *)(a2 + 8), v7) )
                  {
                    memmove((void *)(v20 + 8), (const void *)(v19 + 8), v7);
                    ++*a4;
                  }
                }
              }
              goto LABEL_38;
            }
          }
        }
LABEL_40:
        v28[0] = 0LL;
        result = RtlGetSaclSecurityDescriptor(v9, &v30, v28, &v32);
        if ( (int)result >= 0 && v30 && v28[0] )
        {
          v23 = *(unsigned __int16 *)(v28[0] + 4LL);
          v24 = v28[0] + 8LL;
          if ( *(_WORD *)(v28[0] + 4LL) )
          {
            while ( *(_BYTE *)v24 > 3u )
            {
              if ( *(_BYTE *)v24 == 4 )
              {
                v25 = v24 + 4 * (*(unsigned __int8 *)(v24 + 13) + 5LL);
                goto LABEL_48;
              }
LABEL_56:
              v24 += *(unsigned __int16 *)(v24 + 2);
              if ( !--v23 )
                return 0LL;
            }
            v25 = v24 + 8;
LABEL_48:
            if ( *(_BYTE *)v25 == *(_BYTE *)a2 )
            {
              v26 = *(unsigned __int8 *)(a2 + 1);
              if ( *(_BYTE *)(v25 + 1) == (_BYTE)v26 || *(unsigned __int8 *)(v25 + 1) == v26 + 1 )
              {
                v27 = *(_DWORD *)(v25 + 2) - *(_DWORD *)(a2 + 2);
                if ( !v27 )
                  v27 = *(unsigned __int16 *)(v25 + 6) - *(unsigned __int16 *)(a2 + 6);
                if ( !v27 && !memcmp((const void *)(v25 + 8), (const void *)(a2 + 8), v7) )
                {
                  memmove((void *)(v25 + 8), (const void *)(v31 + 8), v7);
                  ++*a4;
                }
              }
            }
            goto LABEL_56;
          }
          return 0LL;
        }
      }
    }
  }
  return result;
}
