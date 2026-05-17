/*
 * XREFs of RtlRestoreBootStatusDefaults @ 0x18013E5F0
 * Callers:
 *     RtlCreateBootStatusDataFile @ 0x18013E260 (RtlCreateBootStatusDataFile.c)
 * Callees:
 *     RtlGetNtProductType @ 0x1800AA990 (RtlGetNtProductType.c)
 *     RtlpRecordBootStatusData @ 0x18013EA48 (RtlpRecordBootStatusData.c)
 *     NtWriteFile @ 0x180161D90 (NtWriteFile.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlRestoreBootStatusDefaults(__int64 a1)
{
  int *v2; // rax
  char v3; // cl
  __int64 v4; // rdx
  __int64 v6; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v7; // [rsp+58h] [rbp-A8h] BYREF
  int v8; // [rsp+70h] [rbp-90h] BYREF
  int v9; // [rsp+74h] [rbp-8Ch] BYREF
  __int16 v10; // [rsp+79h] [rbp-87h]
  char v11; // [rsp+7Bh] [rbp-85h]
  char v12; // [rsp+A1h] [rbp-5Fh]
  char v13; // [rsp+A2h] [rbp-5Eh]
  int v14; // [rsp+128h] [rbp+28h]

  v7 = 0LL;
  memset_thunk_772440563353939046(&v9, 0, 0xC4uLL);
  v8 = 200;
  RtlGetNtProductType(&v9);
  v14 = 0;
  v2 = &v8;
  v3 = 0;
  v10 = 286;
  v12 = 1;
  v4 = 200LL;
  v11 = 0;
  do
  {
    v3 -= *(_BYTE *)v2;
    v2 = (int *)((char *)v2 + 1);
    --v4;
  }
  while ( v4 );
  v6 = 0LL;
  v13 = v3;
  RtlpRecordBootStatusData(0LL, &v8, 0LL, 200LL);
  return NtWriteFile(a1, 0LL, 0LL, 0LL, &v7, &v8, 200, &v6, 0LL);
}
