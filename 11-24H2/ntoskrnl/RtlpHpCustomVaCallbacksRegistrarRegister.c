/*
 * XREFs of RtlpHpCustomVaCallbacksRegistrarRegister @ 0x140604534
 * Callers:
 *     RtlpHpRegisterEnvironment @ 0x1406053F0 (RtlpHpRegisterEnvironment.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14020D790 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpReleaseLockExclusive @ 0x1402B9650 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpMetadataAlloc @ 0x140420674 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x140420E2C (RtlpHpMetadataFree.c)
 *     RtlpHpCustomVaCallbacksEncodedComparison @ 0x1406044B4 (RtlpHpCustomVaCallbacksEncodedComparison.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpCustomVaCallbacksRegistrarRegister(__int64 a1, char *a2, _QWORD *a3, __int128 *a4)
{
  __int64 v5; // r12
  __int64 v6; // rax
  unsigned __int8 *v7; // r8
  __int64 v10; // r15
  __int64 v11; // r9
  __int64 v12; // rax
  _QWORD *v13; // r14
  int v14; // edx
  __int64 v15; // r8
  char v16; // al
  __int64 v17; // r10
  _QWORD *v18; // rdi
  __int64 v19; // rbx
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r15
  BOOL v23; // eax
  bool v24; // zf
  unsigned int v25; // esi
  unsigned __int64 *v26; // rcx
  signed __int64 v27; // rsi
  unsigned int v28; // r8d
  __int64 v29; // rdx
  __int64 v30; // r8
  ULONG_PTR v31; // rcx
  unsigned __int8 v33; // [rsp+20h] [rbp-B8h]
  __int64 v34; // [rsp+28h] [rbp-B0h]
  unsigned int v35; // [rsp+30h] [rbp-A8h]
  __int128 v37; // [rsp+40h] [rbp-98h] BYREF
  _QWORD *v38; // [rsp+50h] [rbp-88h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-80h]
  __int128 v40; // [rsp+60h] [rbp-78h] BYREF
  _QWORD v41[4]; // [rsp+70h] [rbp-68h] BYREF

  v5 = 4LL;
  v6 = RtlpHpHeapGlobals ^ *(_QWORD *)a2;
  v38 = a3;
  v7 = (unsigned __int8 *)v41;
  v41[0] = (unsigned __int64)v41 ^ v6;
  v10 = 314159LL;
  v41[1] = (unsigned __int64)v41 ^ RtlpHpHeapGlobals ^ *((_QWORD *)a2 + 1);
  v11 = 4LL;
  v41[2] = (unsigned __int64)v41 ^ RtlpHpHeapGlobals ^ *((_QWORD *)a2 + 2);
  v41[3] = (unsigned __int64)v41 ^ RtlpHpHeapGlobals ^ *((_QWORD *)a2 + 3);
  do
  {
    v12 = *v7;
    v7 += 8;
    v10 = *(v7 - 1)
        + 37
        * (*(v7 - 2)
         + 37
         * (*(v7 - 3) + 37
                      * (*(v7 - 4) + 37 * (*(v7 - 5) + 37 * (*(v7 - 6) + 37 * (*(v7 - 7) + 37 * (v12 + 37 * v10)))))));
    --v11;
  }
  while ( v11 );
  v40 = *a4;
  v13 = (_QWORD *)RtlpHpMetadataAlloc(0x38uLL, 0x38uLL, 0, (unsigned __int64 *)&v40);
  v14 = *(_DWORD *)a4 & 1;
  BugCheckParameter2 = a1 + 16;
  v16 = RtlpHpAcquireLockExclusive((int *)(a1 + 16), v14, v15);
  v17 = a1;
  v18 = 0LL;
  v33 = v16;
  v19 = 0LL;
  v20 = *(_DWORD *)(a1 + 4);
  v35 = v20;
  v21 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
  v22 = v21 & v10;
  *(_QWORD *)&v37 = v21;
LABEL_4:
  if ( v19 )
    goto LABEL_7;
  if ( v20 >> 5 )
  {
    v21 = v37;
    v19 = *(_QWORD *)(v17 + 8)
        + 8LL
        * ((37
          * (BYTE6(v22)
           + 37
           * (BYTE5(v22)
            + 37
            * (BYTE4(v22)
             + 37 * (BYTE3(v22) + 37 * (BYTE2(v22) + 37 * (BYTE1(v22) + 37 * ((unsigned __int8)v22 + 11623883)))))))
          + HIBYTE(v22)) & ((v20 >> 5) - 1));
LABEL_7:
    while ( 1 )
    {
      v19 = *(_QWORD *)v19;
      if ( (v19 & 1) != 0 )
        break;
      if ( v22 == (v21 & *(_QWORD *)(v19 + 8)) )
      {
        if ( !v19 )
          break;
        v23 = RtlpHpCustomVaCallbacksEncodedComparison((_QWORD *)v19, (unsigned __int64)v41);
        v17 = a1;
        v24 = !v23;
        v20 = v35;
        v21 = v37;
        if ( !v24 )
        {
          if ( v13 )
          {
            v37 = *a4;
            RtlpHpMetadataFree((ULONG_PTR)v13, &v37);
          }
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v19 + 48)) <= 1 )
            __fastfail(0xEu);
          v25 = 0;
          v18 = (_QWORD *)(v19 + 16);
          goto LABEL_21;
        }
        goto LABEL_4;
      }
    }
  }
  if ( v13 )
  {
    v26 = v13 + 2;
    v27 = a2 - (char *)(v13 + 2);
    do
    {
      *v26 = (unsigned __int64)(v13 + 2) ^ RtlpHpHeapGlobals ^ *(unsigned __int64 *)((char *)v26 + v27);
      ++v26;
      --v5;
    }
    while ( v5 );
    v13[6] = 1LL;
    v25 = 0;
    v28 = *(_DWORD *)(v17 + 4);
    v18 = v13 + 2;
    v34 = v13[1] & (-1LL << (v28 & 0x1F));
    v29 = *(_QWORD *)(v17 + 8);
    v30 = (37
         * (BYTE6(v34)
          + 37
          * (BYTE5(v34)
           + 37
           * (BYTE4(v34)
            + 37 * (BYTE3(v34) + 37 * (BYTE2(v34) + 37 * (BYTE1(v34) + 37 * ((unsigned __int8)v34 + 11623883)))))))
         + HIBYTE(v34)) & ((v28 >> 5) - 1);
    *v13 = *(_QWORD *)(v29 + 8 * v30);
    *(_QWORD *)(v29 + 8 * v30) = v13;
    ++*(_DWORD *)v17;
  }
  else
  {
    v25 = -1073741801;
  }
LABEL_21:
  v31 = BugCheckParameter2;
  *v38 = v18;
  RtlpHpReleaseLockExclusive(v31, 0LL, v33);
  return v25;
}
