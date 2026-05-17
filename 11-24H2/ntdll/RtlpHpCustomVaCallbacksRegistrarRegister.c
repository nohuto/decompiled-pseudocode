/*
 * XREFs of RtlpHpCustomVaCallbacksRegistrarRegister @ 0x1800F23FC
 * Callers:
 *     RtlpHpRegisterEnvironment @ 0x180090838 (RtlpHpRegisterEnvironment.c)
 * Callees:
 *     RtlpHpMetadataAlloc @ 0x180010830 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x18004EF28 (RtlpHpMetadataFree.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpCustomVaCallbacksEncodedComparison @ 0x180157BE4 (RtlpHpCustomVaCallbacksEncodedComparison.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
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
  volatile signed __int32 **v14; // rdx
  unsigned __int64 v15; // r8
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // r15
  int v20; // r9d
  int v21; // eax
  unsigned int v22; // esi
  volatile signed __int64 *v23; // rcx
  __int64 v25; // r10
  __int64 *v26; // rcx
  signed __int64 v27; // r14
  unsigned int v28; // r9d
  __int64 v29; // rdx
  __int64 v30; // r9
  __int64 v31; // [rsp+20h] [rbp-A8h]
  __int64 v32; // [rsp+28h] [rbp-A0h]
  __int128 v33; // [rsp+30h] [rbp-98h] BYREF
  __int64 *v34; // [rsp+40h] [rbp-88h]
  volatile signed __int64 *v35; // [rsp+48h] [rbp-80h]
  __int128 v36; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v37[4]; // [rsp+60h] [rbp-68h] BYREF

  v5 = RtlpHpHeapGlobals ^ *(_QWORD *)a2;
  *(_QWORD *)&v33 = a4;
  v34 = a3;
  v37[0] = (unsigned __int64)v37 ^ v5;
  v6 = (unsigned __int8 *)v37;
  v7 = 4LL;
  v37[1] = (unsigned __int64)v37 ^ RtlpHpHeapGlobals ^ *((_QWORD *)a2 + 1);
  v10 = 314159LL;
  v11 = 4LL;
  v37[2] = (unsigned __int64)v37 ^ RtlpHpHeapGlobals ^ *((_QWORD *)a2 + 2);
  v37[3] = (unsigned __int64)v37 ^ RtlpHpHeapGlobals ^ *((_QWORD *)a2 + 3);
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
  v36 = *a4;
  v13 = (_QWORD *)RtlpHpMetadataAlloc(0x38uLL, 0x38uLL, 0, &v36);
  v35 = (volatile signed __int64 *)(a1 + 16);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 16), v14, v15);
  v16 = 0LL;
  v17 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
  v18 = 0LL;
  v19 = v17 & v10;
  v32 = v17;
LABEL_4:
  if ( v18 )
    goto LABEL_7;
  v20 = *(_DWORD *)(a1 + 4) >> 5;
  if ( v20 )
  {
    v17 = v32;
    v18 = *(_QWORD *)(a1 + 8)
        + 8LL
        * ((37
          * (BYTE6(v19)
           + 37
           * (BYTE5(v19)
            + 37
            * (BYTE4(v19)
             + 37 * (BYTE3(v19) + 37 * (BYTE2(v19) + 37 * (BYTE1(v19) + 37 * ((unsigned __int8)v19 + 11623883)))))))
          + HIBYTE(v19)) & (unsigned int)(v20 - 1));
LABEL_7:
    while ( 1 )
    {
      v18 = *(_QWORD *)v18;
      if ( (v18 & 1) != 0 )
        break;
      if ( v19 == (v17 & *(_QWORD *)(v18 + 8)) )
      {
        if ( !v18 )
          break;
        v21 = RtlpHpCustomVaCallbacksEncodedComparison(v18, v37);
        v17 = v32;
        if ( v21 )
        {
          if ( v13 )
          {
            v33 = *(_OWORD *)v33;
            RtlpHpMetadataFree((__int64)v13, &v33);
          }
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v18 + 48)) <= 1 )
            __fastfail(0xEu);
          v22 = 0;
          v16 = v18 + 16;
          goto LABEL_15;
        }
        goto LABEL_4;
      }
    }
  }
  if ( v13 )
  {
    v25 = (__int64)(v13 + 2);
    v26 = v13 + 2;
    v27 = a2 - (char *)(v13 + 2);
    do
    {
      *v26 = v25 ^ RtlpHpHeapGlobals ^ *(__int64 *)((char *)v26 + v27);
      ++v26;
      --v7;
    }
    while ( v7 );
    v13[6] = 1LL;
    v28 = *(_DWORD *)(a1 + 4);
    v31 = v13[1] & (-1LL << (v28 & 0x1F));
    v29 = *(_QWORD *)(a1 + 8);
    v30 = (37
         * (BYTE6(v31)
          + 37
          * (BYTE5(v31)
           + 37
           * (BYTE4(v31)
            + 37 * (BYTE3(v31) + 37 * (BYTE2(v31) + 37 * (BYTE1(v31) + 37 * ((unsigned __int8)v31 + 11623883)))))))
         + HIBYTE(v31)) & ((v28 >> 5) - 1);
    *v13 = *(_QWORD *)(v29 + 8 * v30);
    *(_QWORD *)(v29 + 8 * v30) = v13;
    v22 = 0;
    ++*(_DWORD *)a1;
    v16 = v25;
  }
  else
  {
    v22 = -1073741801;
  }
LABEL_15:
  v23 = v35;
  *v34 = v16;
  RtlReleaseSRWLockExclusive(v23);
  return v22;
}
