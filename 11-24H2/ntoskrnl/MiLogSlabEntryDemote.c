/*
 * XREFs of MiLogSlabEntryDemote @ 0x14043C180
 * Callers:
 *     MiDemoteSlabEntry @ 0x14043BE9C (MiDemoteSlabEntry.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void MiLogSlabEntryDemote()
{
  int v0; // r8d
  __int64 v1; // r9
  __int64 v2; // r10
  __int64 v3; // rcx
  int v4; // eax
  int v5; // [rsp+20h] [rbp-89h]
  int v6; // [rsp+28h] [rbp-81h]
  char v7; // [rsp+40h] [rbp-69h] BYREF
  int v8; // [rsp+44h] [rbp-65h] BYREF
  __int64 v9; // [rsp+48h] [rbp-61h] BYREF
  __int64 v10; // [rsp+50h] [rbp-59h] BYREF
  __int64 v11; // [rsp+58h] [rbp-51h] BYREF
  __int64 v12; // [rsp+60h] [rbp-49h] BYREF
  __int64 v13[16]; // [rsp+70h] [rbp-39h] BYREF

  if ( *(_QWORD *)&qword_140E37658
    && **(_DWORD **)&qword_140E37658 > 5u
    && tlgKeywordOn(*(__int64 *)&qword_140E37658, 1024LL) )
  {
    v3 = *(_QWORD *)(v2 + 56);
    v7 = *(_BYTE *)(v3 + 128);
    v13[4] = (__int64)&v7;
    v13[5] = 1LL;
    v4 = (*(_DWORD *)(v3 + 136) >> 4) & 3;
    v10 = v1;
    v8 = v4;
    v13[9] = 8LL;
    v13[6] = (__int64)&v8;
    v9 = *(unsigned int *)(v2 + 84);
    v13[8] = (__int64)&v9;
    v13[10] = (__int64)&v10;
    v11 = *(_QWORD *)(v2 + 40);
    v13[12] = (__int64)&v11;
    v12 = *(_QWORD *)(v2 + 48);
    v13[14] = (__int64)&v12;
    v13[11] = 8LL;
    v13[13] = 8LL;
    v13[15] = 8LL;
    v13[7] = 4LL;
    tlgWriteEx_EtwWriteEx(v0, (int)&word_14005875A, v0, 1, v5, v6, 8u, (__int64)v13);
  }
}
