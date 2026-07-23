/*
 * XREFs of RtlpHpCustomVaCallbacksRegistrarRegister @ 0x1800F3F6C
 * Callers:
 *     RtlpHpRegisterEnvironment @ 0x1800B9BB8 (RtlpHpRegisterEnvironment.c)
 * Callees:
 *     RtlpHpMetadataFree @ 0x18000AB68 (RtlpHpMetadataFree.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpMetadataAlloc @ 0x18004F990 (RtlpHpMetadataAlloc.c)
 *     RtlpHpCustomVaCallbacksEncodedComparison @ 0x180159194 (RtlpHpCustomVaCallbacksEncodedComparison.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpCustomVaCallbacksRegistrarRegister(__int64 a1, char *a2, __int64 *a3, __int128 *a4)
{
  __int64 v5; // rax
  unsigned __int8 *v6; // r8
  __int64 v7; // r12
  __int64 v10; // r15
  __int64 v11; // r9
  __int64 v12; // rax
  _QWORD *v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // r15
  int v18; // r9d
  int v19; // eax
  unsigned int v20; // esi
  _RTL_SRWLOCK *v21; // rcx
  __int64 v23; // r10
  __int64 *v24; // rcx
  signed __int64 v25; // r14
  unsigned int v26; // r9d
  __int64 v27; // rdx
  __int64 v28; // r9
  __int64 v29; // [rsp+20h] [rbp-A8h]
  __int64 v30; // [rsp+28h] [rbp-A0h]
  __int128 v31; // [rsp+30h] [rbp-98h] BYREF
  __int64 *v32; // [rsp+40h] [rbp-88h]
  PRTL_SRWLOCK SRWLock; // [rsp+48h] [rbp-80h]
  __int128 v34; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v35[4]; // [rsp+60h] [rbp-68h] BYREF

  v5 = RtlpHpHeapGlobals ^ *(_QWORD *)a2;
  *(_QWORD *)&v31 = a4;
  v32 = a3;
  v35[0] = (unsigned __int64)v35 ^ v5;
  v6 = (unsigned __int8 *)v35;
  v7 = 4LL;
  v35[1] = (unsigned __int64)v35 ^ RtlpHpHeapGlobals ^ *((_QWORD *)a2 + 1);
  v10 = 314159LL;
  v11 = 4LL;
  v35[2] = (unsigned __int64)v35 ^ RtlpHpHeapGlobals ^ *((_QWORD *)a2 + 2);
  v35[3] = (unsigned __int64)v35 ^ RtlpHpHeapGlobals ^ *((_QWORD *)a2 + 3);
  do
  {
    v12 = *v6;
    v6 += 8;
    v10 = *(v6 - 1)
        + 37
        * (*(v6 - 2)
         + 37
         * (*(v6 - 3) + 37
                      * (*(v6 - 4) + 37 * (*(v6 - 5) + 37 * (*(v6 - 6) + 37 * (*(v6 - 7) + 37 * (v12 + 37 * v10)))))));
    --v11;
  }
  while ( v11 );
  v34 = *a4;
  v13 = (_QWORD *)RtlpHpMetadataAlloc(0x38uLL, 0x38uLL, 0, &v34);
  SRWLock = (PRTL_SRWLOCK)(a1 + 16);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 16));
  v14 = 0LL;
  v15 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
  v16 = 0LL;
  v17 = v15 & v10;
  v30 = v15;
LABEL_4:
  if ( v16 )
    goto LABEL_7;
  v18 = *(_DWORD *)(a1 + 4) >> 5;
  if ( v18 )
  {
    v15 = v30;
    v16 = *(_QWORD *)(a1 + 8)
        + 8LL
        * ((37
          * (BYTE6(v17)
           + 37
           * (BYTE5(v17)
            + 37
            * (BYTE4(v17)
             + 37 * (BYTE3(v17) + 37 * (BYTE2(v17) + 37 * (BYTE1(v17) + 37 * ((unsigned __int8)v17 + 11623883)))))))
          + HIBYTE(v17)) & (unsigned int)(v18 - 1));
LABEL_7:
    while ( 1 )
    {
      v16 = *(_QWORD *)v16;
      if ( (v16 & 1) != 0 )
        break;
      if ( v17 == (v15 & *(_QWORD *)(v16 + 8)) )
      {
        if ( !v16 )
          break;
        v19 = RtlpHpCustomVaCallbacksEncodedComparison(v16, v35);
        v15 = v30;
        if ( v19 )
        {
          if ( v13 )
          {
            v31 = *(_OWORD *)v31;
            RtlpHpMetadataFree((unsigned __int64)v13, &v31);
          }
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v16 + 48)) <= 1 )
            __fastfail(0xEu);
          v20 = 0;
          v14 = v16 + 16;
          goto LABEL_15;
        }
        goto LABEL_4;
      }
    }
  }
  if ( v13 )
  {
    v23 = (__int64)(v13 + 2);
    v24 = v13 + 2;
    v25 = a2 - (char *)(v13 + 2);
    do
    {
      *v24 = v23 ^ RtlpHpHeapGlobals ^ *(__int64 *)((char *)v24 + v25);
      ++v24;
      --v7;
    }
    while ( v7 );
    v13[6] = 1LL;
    v26 = *(_DWORD *)(a1 + 4);
    v29 = v13[1] & (-1LL << (v26 & 0x1F));
    v27 = *(_QWORD *)(a1 + 8);
    v28 = (37
         * (BYTE6(v29)
          + 37
          * (BYTE5(v29)
           + 37
           * (BYTE4(v29)
            + 37 * (BYTE3(v29) + 37 * (BYTE2(v29) + 37 * (BYTE1(v29) + 37 * ((unsigned __int8)v29 + 11623883)))))))
         + HIBYTE(v29)) & ((v26 >> 5) - 1);
    *v13 = *(_QWORD *)(v27 + 8 * v28);
    *(_QWORD *)(v27 + 8 * v28) = v13;
    v20 = 0;
    ++*(_DWORD *)a1;
    v14 = v23;
  }
  else
  {
    v20 = -1073741801;
  }
LABEL_15:
  v21 = SRWLock;
  *v32 = v14;
  RtlReleaseSRWLockExclusive(v21);
  return v20;
}
