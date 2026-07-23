/*
 * XREFs of PopFanUpdateStatistics @ 0x140A90BF8
 * Callers:
 *     PopFanSxEntry @ 0x1404AEC4C (PopFanSxEntry.c)
 *     PopFanReadFanNoiseInfo @ 0x140A73098 (PopFanReadFanNoiseInfo.c)
 *     PopFanUpdateSpeed @ 0x140A908FC (PopFanUpdateSpeed.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopFanFindBucketIndex @ 0x140AABDF8 (PopFanFindBucketIndex.c)
 */

void __fastcall PopFanUpdateStatistics(__int64 a1)
{
  __int64 v2; // rdi
  unsigned int BucketIndex; // r8d
  const GUID *v4; // r9
  int v5; // [rsp+30h] [rbp-49h] BYREF
  unsigned int v6; // [rsp+34h] [rbp-45h] BYREF
  __int64 v7; // [rsp+38h] [rbp-41h] BYREF
  __int64 v8; // [rsp+40h] [rbp-39h] BYREF
  __int64 v9; // [rsp+48h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v11; // [rsp+70h] [rbp-9h]
  int v12; // [rsp+78h] [rbp-1h]
  int v13; // [rsp+7Ch] [rbp+3h]
  __int64 *v14; // [rsp+80h] [rbp+7h]
  int v15; // [rsp+88h] [rbp+Fh]
  int v16; // [rsp+8Ch] [rbp+13h]
  __int64 *v17; // [rsp+90h] [rbp+17h]
  int v18; // [rsp+98h] [rbp+1Fh]
  int v19; // [rsp+9Ch] [rbp+23h]
  int *v20; // [rsp+A0h] [rbp+27h]
  int v21; // [rsp+A8h] [rbp+2Fh]
  int v22; // [rsp+ACh] [rbp+33h]
  int *v23; // [rsp+B0h] [rbp+37h]
  int v24; // [rsp+B8h] [rbp+3Fh]
  int v25; // [rsp+BCh] [rbp+43h]

  v2 = MEMORY[0xFFFFF78000000008];
  if ( !*(_BYTE *)(a1 + 200) )
  {
    if ( *(_QWORD *)(a1 + 208) )
    {
      BucketIndex = PopFanFindBucketIndex(a1, *(unsigned int *)(a1 + 84), 0LL, 0LL);
      *(_QWORD *)(a1 + 8LL * BucketIndex + 216) += v2 - *(_QWORD *)(a1 + 208);
      if ( (unsigned int)dword_140E07680 > 5 )
      {
        v13 &= (unsigned int)v4;
        v16 &= (unsigned int)v4;
        v19 &= (unsigned int)v4;
        v22 &= (unsigned int)v4;
        v25 &= (unsigned int)v4;
        v11 = &v7;
        v8 = *(_QWORD *)(a1 + 208);
        v14 = &v8;
        v17 = &v9;
        v5 = *(_DWORD *)(a1 + 84);
        v20 = &v5;
        v12 = (_DWORD)v4 + 8;
        v15 = (_DWORD)v4 + 8;
        v18 = (_DWORD)v4 + 8;
        v23 = (int *)&v6;
        v21 = (_DWORD)v4 + 4;
        v6 = BucketIndex;
        v24 = (_DWORD)v4 + 4;
        v7 = a1;
        v9 = v2;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E07680,
          (unsigned __int8 *)byte_14004D700,
          0LL,
          v4,
          7u,
          &v10);
      }
    }
    *(_QWORD *)(a1 + 208) = v2;
  }
}
