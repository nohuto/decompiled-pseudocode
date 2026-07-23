/*
 * XREFs of MiLogPinDriverAddressesWorker @ 0x140A29100
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteAgg @ 0x140273698 (_tlgWriteAgg.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     RtlInterlockedClearBitRun @ 0x140452450 (RtlInterlockedClearBitRun.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     MiLogPinDriverAddress @ 0x140A29204 (MiLogPinDriverAddress.c)
 */

char MiLogPinDriverAddressesWorker()
{
  ULONG v0; // edi
  __int64 *v1; // rsi
  __int64 v2; // rax
  unsigned int v3; // r14d
  _DWORD *v4; // rdi
  unsigned int i; // r15d
  unsigned int j; // esi
  int v7; // r12d
  __int64 v8; // r8
  int v9; // r9d
  __int64 v11; // [rsp+38h] [rbp-69h] BYREF
  unsigned int v12; // [rsp+40h] [rbp-61h] BYREF
  BOOL v13; // [rsp+44h] [rbp-5Dh] BYREF
  BOOL v14; // [rsp+48h] [rbp-59h] BYREF
  __int64 v15; // [rsp+50h] [rbp-51h] BYREF
  __int64 v16; // [rsp+58h] [rbp-49h] BYREF
  char v17[32]; // [rsp+68h] [rbp-39h] BYREF
  __int64 *v18; // [rsp+88h] [rbp-19h]
  __int64 v19; // [rsp+90h] [rbp-11h]
  unsigned int *v20; // [rsp+98h] [rbp-9h]
  __int64 v21; // [rsp+A0h] [rbp-1h]
  BOOL *v22; // [rsp+A8h] [rbp+7h]
  __int64 v23; // [rsp+B0h] [rbp+Fh]
  BOOL *v24; // [rsp+B8h] [rbp+17h]
  __int64 v25; // [rsp+C0h] [rbp+1Fh]
  __int64 *v26; // [rsp+C8h] [rbp+27h]
  __int64 v27; // [rsp+D0h] [rbp+2Fh]

  v0 = 0;
  v1 = MiPinDriverAddressLog;
  do
  {
    v2 = *v1;
    v11 = v2;
    if ( (v2 & 1) != 0 )
    {
      LODWORD(v11) = v2 & 0xFFFFFFFE;
      MiPinDriverAddressLog[v0] = v11;
      RtlInterlockedClearBitRun(&stru_140EF4CA0, v0, 1u);
      LOBYTE(v2) = MiLogPinDriverAddress(&v11);
    }
    ++v0;
    ++v1;
  }
  while ( v0 < 0x800 );
  v3 = 0;
  v4 = &unk_140EF4DB4;
  do
  {
    for ( i = 0; i < 2; ++i )
    {
      for ( j = 0; j < 2; ++j )
      {
        v7 = *(v4 - 1);
        if ( v7 != *v4 )
        {
          if ( **(_DWORD **)&qword_140E37658 > 5u )
          {
            LOBYTE(v2) = tlgKeywordOn(*(__int64 *)&qword_140E37658, 0x400000000000LL);
            if ( (_BYTE)v2 )
            {
              v19 = 8LL;
              v12 = v3;
              v15 = (unsigned int)(v7 - v9);
              v21 = 4LL;
              v23 = 4LL;
              v18 = &v15;
              v25 = 4LL;
              v20 = &v12;
              v16 = 0x1000000LL;
              v27 = 8LL;
              v13 = i == 1;
              v22 = &v13;
              v14 = j == 1;
              v24 = &v14;
              v26 = &v16;
              LOBYTE(v2) = tlgWriteAgg(v8, (unsigned __int8 *)&word_14005929E, v8, 7u, (__int64)v17);
            }
          }
          *v4 = v7;
        }
        v4 += 2;
      }
    }
    ++v3;
  }
  while ( v3 < 2 );
  word_140EF4E10 = 0;
  return v2;
}
