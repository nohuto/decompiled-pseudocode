/*
 * XREFs of RtlpHpCustomVaCallbacksRegistrarRegister @ 0x140601B74
 * Callers:
 *     RtlpHpRegisterEnvironment @ 0x140602A30 (RtlpHpRegisterEnvironment.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x140336AF0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpReleaseLockExclusive @ 0x140360D90 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpMetadataAlloc @ 0x140458A08 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x140459100 (RtlpHpMetadataFree.c)
 *     RtlpHpCustomVaCallbacksEncodedComparison @ 0x140601AF4 (RtlpHpCustomVaCallbacksEncodedComparison.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
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
  char v15; // al
  __int64 v16; // r10
  _QWORD *v17; // rdi
  __int64 v18; // rbx
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r15
  BOOL v22; // eax
  bool v23; // zf
  unsigned int v24; // esi
  unsigned __int64 *v25; // rcx
  signed __int64 v26; // rsi
  unsigned int v27; // r8d
  __int64 v28; // rdx
  __int64 v29; // r8
  ULONG_PTR v30; // rcx
  unsigned __int8 v32; // [rsp+20h] [rbp-B8h]
  __int64 v33; // [rsp+28h] [rbp-B0h]
  unsigned int v34; // [rsp+30h] [rbp-A8h]
  __int128 v36; // [rsp+40h] [rbp-98h] BYREF
  _QWORD *v37; // [rsp+50h] [rbp-88h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-80h]
  __int128 v39; // [rsp+60h] [rbp-78h] BYREF
  _QWORD v40[4]; // [rsp+70h] [rbp-68h] BYREF

  v5 = 4LL;
  v6 = RtlpHpHeapGlobals ^ *(_QWORD *)a2;
  v37 = a3;
  v7 = (unsigned __int8 *)v40;
  v40[0] = (unsigned __int64)v40 ^ v6;
  v10 = 314159LL;
  v40[1] = (unsigned __int64)v40 ^ RtlpHpHeapGlobals ^ *((_QWORD *)a2 + 1);
  v11 = 4LL;
  v40[2] = (unsigned __int64)v40 ^ RtlpHpHeapGlobals ^ *((_QWORD *)a2 + 2);
  v40[3] = (unsigned __int64)v40 ^ RtlpHpHeapGlobals ^ *((_QWORD *)a2 + 3);
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
  v39 = *a4;
  v13 = (_QWORD *)RtlpHpMetadataAlloc(0x38uLL, 0x38uLL, 0, (unsigned __int64 *)&v39);
  v14 = *(_DWORD *)a4 & 1;
  BugCheckParameter2 = a1 + 16;
  v15 = RtlpHpAcquireLockExclusive((int *)(a1 + 16), v14);
  v16 = a1;
  v17 = 0LL;
  v32 = v15;
  v18 = 0LL;
  v19 = *(_DWORD *)(a1 + 4);
  v34 = v19;
  v20 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
  v21 = v20 & v10;
  *(_QWORD *)&v36 = v20;
LABEL_4:
  if ( v18 )
    goto LABEL_7;
  if ( v19 >> 5 )
  {
    v20 = v36;
    v18 = *(_QWORD *)(v16 + 8)
        + 8LL
        * ((37
          * (BYTE6(v21)
           + 37
           * (BYTE5(v21)
            + 37
            * (BYTE4(v21)
             + 37 * (BYTE3(v21) + 37 * (BYTE2(v21) + 37 * (BYTE1(v21) + 37 * ((unsigned __int8)v21 + 11623883)))))))
          + HIBYTE(v21)) & ((v19 >> 5) - 1));
LABEL_7:
    while ( 1 )
    {
      v18 = *(_QWORD *)v18;
      if ( (v18 & 1) != 0 )
        break;
      if ( v21 == (v20 & *(_QWORD *)(v18 + 8)) )
      {
        if ( !v18 )
          break;
        v22 = RtlpHpCustomVaCallbacksEncodedComparison((_QWORD *)v18, (unsigned __int64)v40);
        v16 = a1;
        v23 = !v22;
        v19 = v34;
        v20 = v36;
        if ( !v23 )
        {
          if ( v13 )
          {
            v36 = *a4;
            RtlpHpMetadataFree((ULONG_PTR)v13, &v36);
          }
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v18 + 48)) <= 1 )
            __fastfail(0xEu);
          v24 = 0;
          v17 = (_QWORD *)(v18 + 16);
          goto LABEL_21;
        }
        goto LABEL_4;
      }
    }
  }
  if ( v13 )
  {
    v25 = v13 + 2;
    v26 = a2 - (char *)(v13 + 2);
    do
    {
      *v25 = (unsigned __int64)(v13 + 2) ^ RtlpHpHeapGlobals ^ *(unsigned __int64 *)((char *)v25 + v26);
      ++v25;
      --v5;
    }
    while ( v5 );
    v13[6] = 1LL;
    v24 = 0;
    v27 = *(_DWORD *)(v16 + 4);
    v17 = v13 + 2;
    v33 = v13[1] & (-1LL << (v27 & 0x1F));
    v28 = *(_QWORD *)(v16 + 8);
    v29 = (37
         * (BYTE6(v33)
          + 37
          * (BYTE5(v33)
           + 37
           * (BYTE4(v33)
            + 37 * (BYTE3(v33) + 37 * (BYTE2(v33) + 37 * (BYTE1(v33) + 37 * ((unsigned __int8)v33 + 11623883)))))))
         + HIBYTE(v33)) & ((v27 >> 5) - 1);
    *v13 = *(_QWORD *)(v28 + 8 * v29);
    *(_QWORD *)(v28 + 8 * v29) = v13;
    ++*(_DWORD *)v16;
  }
  else
  {
    v24 = -1073741801;
  }
LABEL_21:
  v30 = BugCheckParameter2;
  *v37 = v17;
  RtlpHpReleaseLockExclusive(v30, 0LL, v32);
  return v24;
}
