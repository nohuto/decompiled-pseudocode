/*
 * XREFs of PopFanUpdateSpeed @ 0x140A908FC
 * Callers:
 *     PopFanWorker @ 0x140A7E230 (PopFanWorker.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopSendFanNoiseChangeWnf @ 0x14075BF00 (PopSendFanNoiseChangeWnf.c)
 *     PopFanUpdateStatistics @ 0x140A90BF8 (PopFanUpdateStatistics.c)
 *     PopFanFindBucketIndex @ 0x140AABDF8 (PopFanFindBucketIndex.c)
 */

unsigned __int8 __fastcall PopFanUpdateSpeed(__int64 a1, unsigned int a2)
{
  unsigned __int8 v4; // r14
  int v5; // esi
  __int64 v6; // rax
  unsigned int *v7; // rcx
  int v8; // eax
  int v9; // ecx
  char v11; // [rsp+30h] [rbp-79h] BYREF
  char v12; // [rsp+31h] [rbp-78h] BYREF
  int v13; // [rsp+34h] [rbp-75h] BYREF
  int v14; // [rsp+38h] [rbp-71h] BYREF
  int v15; // [rsp+3Ch] [rbp-6Dh] BYREF
  int v16; // [rsp+40h] [rbp-69h] BYREF
  __int64 v17; // [rsp+48h] [rbp-61h] BYREF
  int v18; // [rsp+50h] [rbp-59h]
  int v19; // [rsp+54h] [rbp-55h]
  struct _EVENT_DATA_DESCRIPTOR v20[2]; // [rsp+60h] [rbp-49h] BYREF
  __int64 *v21; // [rsp+80h] [rbp-29h]
  __int64 v22; // [rsp+88h] [rbp-21h]
  int *v23; // [rsp+90h] [rbp-19h]
  __int64 v24; // [rsp+98h] [rbp-11h]
  int *v25; // [rsp+A0h] [rbp-9h]
  __int64 v26; // [rsp+A8h] [rbp-1h]
  char *v27; // [rsp+B0h] [rbp+7h]
  __int64 v28; // [rsp+B8h] [rbp+Fh]
  int *v29; // [rsp+C0h] [rbp+17h]
  __int64 v30; // [rsp+C8h] [rbp+1Fh]

  v17 = 0x200000001LL;
  v4 = 0;
  v15 = 0;
  v16 = 0;
  v5 = 3;
  v19 = 3;
  v18 = 2;
  if ( !*(_BYTE *)(a1 + 88) )
  {
    if ( *(_DWORD *)(a1 + 84) != a2 )
      *(_DWORD *)(a1 + 84) = a2;
    goto LABEL_24;
  }
  PopFanUpdateStatistics(a1);
  if ( *(_DWORD *)(a1 + 84) == a2 )
  {
LABEL_24:
    if ( (unsigned int)dword_140E07680 > 5 )
    {
      v17 = a1;
      v21 = &v17;
      v13 = *(_DWORD *)(a1 + 84);
      v22 = 8LL;
      v23 = &v13;
      v11 = *(_BYTE *)(a1 + 88);
      v25 = (int *)&v11;
      v12 = *(_BYTE *)(a1 + 200);
      v27 = &v12;
      v14 = v4;
      v29 = &v14;
      v24 = 4LL;
      v26 = 1LL;
      v28 = 1LL;
      v30 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07680, (unsigned __int8 *)byte_14004D598, 0LL, 0LL, 7u, v20);
    }
    return v4;
  }
  *(_DWORD *)(a1 + 84) = a2;
  if ( dword_140F0B128 == 1 )
  {
    if ( a2 )
    {
      v6 = 0LL;
      v7 = (unsigned int *)(a1 + 112);
      while ( a2 > *v7 )
      {
        v6 = (unsigned int)(v6 + 1);
        ++v7;
        if ( (unsigned int)v6 >= 4 )
          goto LABEL_13;
      }
      v5 = *((_DWORD *)&v17 + v6);
    }
    else
    {
      v5 = 0;
    }
LABEL_13:
    if ( dword_140F0B12C != v5 )
    {
      if ( (unsigned int)dword_140E07680 > 5 )
      {
        v14 = dword_140F0B12C;
        v21 = &v17;
        v23 = &v14;
        v17 = a1;
        v25 = &v13;
        v22 = 8LL;
        v24 = 4LL;
        v13 = v5;
        v26 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E07680,
          (unsigned __int8 *)word_14004D89A,
          0LL,
          0LL,
          5u,
          v20);
      }
      PopSendFanNoiseChangeWnf(v5);
      dword_140F0B12C = v5;
    }
  }
  else if ( (unsigned int)dword_140E07680 > 2 )
  {
    v17 = a1;
    v21 = &v17;
    v13 = dword_140F0B128;
    v22 = 8LL;
    v23 = &v13;
    v24 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07680, (unsigned __int8 *)byte_14004D65B, 0LL, 0LL, 4u, v20);
  }
  PopFanFindBucketIndex(a1, a2, &v16, &v15);
  v8 = v16;
  v9 = v15;
  if ( v16 != *(_DWORD *)(a1 + 100) || v15 != *(_DWORD *)(a1 + 104) )
  {
    *(_DWORD *)(a1 + 92) = v16;
    v4 = 1;
    *(_DWORD *)(a1 + 96) = v9;
  }
  if ( (unsigned int)dword_140E07680 > 5 )
  {
    v13 = v8;
    v21 = &v17;
    v23 = &v13;
    v14 = v9;
    v25 = &v14;
    v17 = a1;
    v22 = 8LL;
    v24 = 4LL;
    v26 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07680, (unsigned __int8 *)byte_14004D60D, 0LL, 0LL, 5u, v20);
    goto LABEL_24;
  }
  return v4;
}
