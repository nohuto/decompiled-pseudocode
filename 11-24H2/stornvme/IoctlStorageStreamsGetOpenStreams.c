/*
 * XREFs of IoctlStorageStreamsGetOpenStreams @ 0x14002158C
 * Callers:
 *     IoctlToNVMe @ 0x140003580 (IoctlToNVMe.c)
 * Callees:
 *     GetSrbDataBuffer @ 0x14000B970 (GetSrbDataBuffer.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1400279FC (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x140027C84 (NVMeDirectiveStreamsReturnParameters.c)
 *     __security_check_cookie @ 0x140030FC0 (__security_check_cookie.c)
 */

__int64 __fastcall IoctlStorageStreamsGetOpenStreams(__int64 a1, __int64 a2)
{
  int v4; // edi
  __int64 SrbDataBuffer; // rax
  __int64 v6; // r8
  unsigned int *v7; // r15
  _DWORD *v8; // rsi
  __int64 result; // rax
  unsigned __int8 v10; // cl
  __int64 v11; // rcx
  unsigned int v12; // r14d
  int v13; // edx
  unsigned __int64 v14; // rax
  int v15; // ecx
  unsigned int *v16; // [rsp+30h] [rbp-58h] BYREF
  __int128 v17; // [rsp+38h] [rbp-50h] BYREF
  __int128 v18; // [rsp+48h] [rbp-40h]

  v4 = 0;
  v16 = 0LL;
  SrbDataBuffer = GetSrbDataBuffer(a2, &v16);
  v7 = v16;
  v8 = (_DWORD *)SrbDataBuffer;
  if ( *v16 >= 0x24 )
  {
    if ( *(_BYTE *)(a2 + 2) == 40 )
      v10 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
    else
      v10 = *(_BYTE *)(a2 + 7);
    if ( v10 == 255 )
    {
      *(_BYTE *)(a2 + 3) = 32;
      goto LABEL_3;
    }
    if ( (*(_BYTE *)(a1 + 3728) & 3) == 3 && *(unsigned __int8 *)(a1 + 3729) == v10 )
    {
      if ( (unsigned int)v10 < *(_DWORD *)(a1 + 224) && (v11 = *(_QWORD *)(a1 + 8LL * v10 + 1672)) != 0 )
        v12 = *(_DWORD *)(v11 + 16);
      else
        v12 = 0;
      v17 = 0LL;
      v18 = 0LL;
      result = NVMeDirectiveStreamsReturnParameters(a1, v12, v6, &v17);
      if ( (_DWORD)result )
      {
LABEL_16:
        *(_BYTE *)(a2 + 3) = 4;
        goto LABEL_30;
      }
      v13 = WORD4(v18);
      v14 = *v7;
      LODWORD(v16) = WORD4(v18);
      if ( v14 < (unsigned __int64)(4 * (unsigned int)WORD4(v18) + 12) + 28 )
      {
        v8[8] = 4 * WORD4(v18) + 12;
        v4 = 8;
        v8[7] = 1;
        result = 3238002692LL;
        *(_BYTE *)(a2 + 3) = 18;
        goto LABEL_30;
      }
      if ( v8[7] == 1 )
      {
        if ( WORD4(v18) )
        {
          result = NVMeDirectiveStreamsGetStatus(a1, v12, WORD4(v18), (unsigned int)&v16, (__int64)(v8 + 10));
          if ( (_DWORD)result )
          {
            result = (unsigned int)result;
            if ( (_DWORD)result == -1056964604 )
            {
              v15 = (int)v16;
              v4 = 8;
              v8[7] = 1;
              v8[8] = 4 * v15 + 12;
              *(_BYTE *)(a2 + 3) = 18;
              goto LABEL_30;
            }
            goto LABEL_16;
          }
          v13 = (int)v16;
        }
        else
        {
          result = 0LL;
        }
        v8[9] = v13;
        v4 = 4 * v13 + 12;
        *(_BYTE *)(a2 + 3) = 1;
        goto LABEL_30;
      }
      result = 3238002694LL;
    }
    else
    {
      result = 3238002695LL;
    }
    *(_BYTE *)(a2 + 3) = 6;
    goto LABEL_30;
  }
  *(_BYTE *)(a2 + 3) = 21;
LABEL_3:
  result = 3238002694LL;
LABEL_30:
  v8[6] = v4;
  return result;
}
