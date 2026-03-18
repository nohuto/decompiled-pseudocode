/*
 * XREFs of GetProcessorInformation @ 0x14000C190
 * Callers:
 *     NVMeControllerFilterResourceRequirements @ 0x14001C804 (NVMeControllerFilterResourceRequirements.c)
 *     NVMeControllerInitPart1 @ 0x14001D11C (NVMeControllerInitPart1.c)
 * Callees:
 *     FreeProcessorInfo @ 0x14000C700 (FreeProcessorInfo.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

char __fastcall GetProcessorInformation(__int64 a1)
{
  unsigned int v1; // r15d
  int v2; // r13d
  int v3; // r12d
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // r9
  void *v7; // rcx
  unsigned int v8; // edx
  _DWORD *v9; // rsi
  __int64 v10; // r9
  __int64 *v11; // rbx
  __int64 v12; // r9
  unsigned int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // r8
  unsigned int v18; // ecx
  __int64 v19; // r8
  unsigned int v20; // ecx
  __int64 v21; // rax
  unsigned __int16 v22; // bx
  __int64 v23; // rsi
  unsigned __int16 i; // r14
  char v25; // bl
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // r9
  __int64 v32; // rdx
  int v33; // r14d
  __int64 v34; // rcx
  __int64 v35; // r8
  int v36; // eax
  unsigned int v37; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v38; // [rsp+38h] [rbp-C8h]
  int v39; // [rsp+40h] [rbp-C0h]
  int v40; // [rsp+44h] [rbp-BCh]
  int v41; // [rsp+48h] [rbp-B8h]
  int v42; // [rsp+4Ch] [rbp-B4h]
  __int64 v43; // [rsp+50h] [rbp-B0h]
  __int128 v44; // [rsp+60h] [rbp-A0h]
  __int128 v45; // [rsp+70h] [rbp-90h]
  __int128 v46; // [rsp+80h] [rbp-80h]
  __int128 v47; // [rsp+90h] [rbp-70h]
  __int128 v48; // [rsp+A0h] [rbp-60h]
  __int128 v49; // [rsp+B0h] [rbp-50h]
  __int128 v50; // [rsp+C0h] [rbp-40h]
  __int128 v51; // [rsp+D0h] [rbp-30h]
  __int128 v52; // [rsp+E0h] [rbp-20h]
  __int128 v53; // [rsp+F0h] [rbp-10h]
  char v55; // [rsp+158h] [rbp+58h]
  unsigned __int16 v56; // [rsp+160h] [rbp+60h]
  unsigned __int16 v57; // [rsp+168h] [rbp+68h] BYREF
  char v58; // [rsp+16Ah] [rbp+6Ah]
  char v59; // [rsp+16Bh] [rbp+6Bh]

  v55 = 1;
  v1 = 0;
  v41 = 0;
  v2 = 0;
  v39 = 0;
  v3 = 0;
  v38 = 0LL;
  v4 = a1;
  ((void (*)(void))FreeProcessorInfo)();
  if ( !*(_WORD *)(v4 + 232) )
    goto LABEL_37;
  v5 = *(unsigned __int16 *)(v4 + 234);
  if ( !(_WORD)v5 )
    goto LABEL_37;
  StorPortExtendedFunction(0LL, v4, (unsigned int)(72 * v5), 1701672526LL);
  v7 = *(void **)(v4 + 264);
  if ( !v7 )
    goto LABEL_37;
  v8 = (72 * (unsigned int)*(unsigned __int16 *)(v4 + 234)) >> 2;
  if ( v8 )
    memset(v7, 0, 4LL * v8);
  v9 = (_DWORD *)(v4 + 240);
  StorPortExtendedFunction(22LL, v4, v4 + 240, v6);
  StorPortExtendedFunction(20LL, v4, v4 + 236, v10);
  if ( *(_DWORD *)(v4 + 236)
    && (v11 = (__int64 *)(v4 + 256),
        StorPortExtendedFunction(0LL, v4, (unsigned int)(24 * (*v9 + 1)), 1701672526LL),
        *(_QWORD *)(v4 + 256)) )
  {
    v13 = (unsigned int)(24 * (*v9 + 1)) >> 2;
    if ( v13 )
      memset(*(void **)(v4 + 256), 0, 4LL * v13);
    v14 = 0LL;
    while ( 1 )
    {
      v42 = v14;
      if ( (unsigned int)v14 > *v9 )
        break;
      v15 = *v11;
      v16 = 24 * v14;
      v43 = v16;
      *(_WORD *)(v16 + v15) = v14;
      StorPortExtendedFunction(21LL, v4, (unsigned int)v14, 24 * v14 + *(_QWORD *)(v4 + 256) + 8LL);
      v17 = *(_QWORD *)(v4 + 256);
      v18 = *(_DWORD *)(v17 + v16 + 8) - ((*(_DWORD *)(v17 + v16 + 8) >> 1) & 0x55555555);
      *(_WORD *)(v17 + v16 + 2) = (unsigned __int16)((16843009
                                                    * (((v18 & 0x33333333)
                                                      + ((v18 >> 2) & 0x33333333)
                                                      + (((v18 & 0x33333333) + ((v18 >> 2) & 0x33333333)) >> 4)) & 0xF0F0F0F)) >> 16) >> 8;
      v19 = *(_QWORD *)(v4 + 256);
      v20 = HIDWORD(*(_QWORD *)(v19 + v16 + 8))
          - (((unsigned int)HIDWORD(*(_QWORD *)(v19 + v16 + 8)) >> 1) & 0x55555555);
      *(_WORD *)(v19 + v16 + 2) += (unsigned __int16)((16843009
                                                     * (((v20 & 0x33333333)
                                                       + ((v20 >> 2) & 0x33333333)
                                                       + (((v20 & 0x33333333) + ((v20 >> 2) & 0x33333333)) >> 4)) & 0xF0F0F0F)) >> 16) >> 8;
      v21 = *(_QWORD *)(v4 + 256);
      v22 = *(_WORD *)(v21 + v16 + 16);
      v23 = *(_QWORD *)(v21 + v16 + 8);
      v56 = v22;
      if ( *(_WORD *)(v21 + v16 + 2) )
      {
        for ( i = 0; ; ++i )
        {
          if ( !v23 )
            goto LABEL_40;
          if ( _bittest64(&v23, (unsigned __int8)i) )
            break;
LABEL_35:
          ;
        }
        v37 = 0;
        v40 = 80;
        v57 = v22;
        v58 = i;
        v59 = 0;
        v44 = 0LL;
        v45 = 0LL;
        v46 = 0LL;
        v47 = 0LL;
        v48 = 0LL;
        StorPortExtendedFunction(56LL, v4, &v57, &v37);
        *(_DWORD *)(*(_QWORD *)(v4 + 264) + 72LL * v37) = v37;
        *(_QWORD *)(*(_QWORD *)(v4 + 264) + 72LL * v37 + 40) = *(_QWORD *)(v4 + 248) + 16LL * v22;
        *(_QWORD *)(*(_QWORD *)(v4 + 264) + 72LL * v37 + 48) = *(_QWORD *)(v4 + 256) + v43;
        if ( !v38 )
        {
          StorPortExtendedFunction(0LL, v4, 16 * (unsigned int)*(unsigned __int16 *)(v4 + 234), 1701672526LL);
          if ( !v38 )
            goto LABEL_37;
        }
        if ( !(unsigned int)StorPortExtendedFunction(23LL, v4, &v57, 7LL) )
        {
          v25 = 0;
          v49 = 0LL;
          v50 = 0LL;
          v51 = 0LL;
          v52 = 0LL;
          v53 = 0LL;
          if ( v1 )
          {
            v26 = v38;
            v27 = v1;
            do
            {
              if ( *(_WORD *)(v26 + 8) == WORD4(v46) && *(_QWORD *)v26 == (_QWORD)v46 )
                v25 = 1;
              v26 += 16LL;
              --v27;
            }
            while ( v27 );
            v4 = a1;
          }
          if ( !(unsigned int)StorPortExtendedFunction(23LL, v4, &v57, 0LL) )
          {
            if ( BYTE9(v49) )
            {
              ++v39;
              if ( !v25 )
              {
                v32 = v1++;
                v29 = 2 * v32;
                ++v41;
LABEL_29:
                *(_WORD *)(v38 + 8 * v29 + 8) = WORD4(v46);
                *(_QWORD *)(v38 + 8 * v29) = v46;
              }
            }
            else
            {
              ++v3;
              if ( !v25 )
              {
                v28 = v1++;
                v29 = 2 * v28;
                ++v2;
                goto LABEL_29;
              }
            }
            *(_BYTE *)(*(_QWORD *)(v4 + 264) + 72LL * v37 + 4) = BYTE9(v49);
          }
          v22 = v56;
          if ( (_QWORD)v46 )
            *(_OWORD *)(*(_QWORD *)(v4 + 264) + 72LL * v37 + 24) = v46;
        }
        if ( (*(_DWORD *)(v4 + 3764) & 0x10) != 0 && v55 )
        {
          if ( (unsigned int)StorPortExtendedFunction(23LL, v4, &v57, 0LL) )
            goto LABEL_53;
          v34 = v46;
          if ( !(_QWORD)v46 )
            goto LABEL_53;
          if ( WORD4(v46) == v57 )
          {
            _bittestandreset64(&v34, i);
            *(_QWORD *)&v46 = v34;
          }
          if ( v34 )
            *(_OWORD *)(*(_QWORD *)(v4 + 264) + 72LL * v37 + 8) = v46;
          else
LABEL_53:
            v55 = 0;
        }
        v23 &= ~(1LL << i);
        goto LABEL_35;
      }
LABEL_40:
      v9 = (_DWORD *)(v4 + 240);
      v14 = (unsigned int)(v42 + 1);
      v11 = (__int64 *)(v4 + 256);
    }
    v33 = v39;
    if ( v3 && v39 )
      g_HeteroSystem = 1;
    v35 = v38;
    v36 = v41;
    *(_DWORD *)(v4 + 296) = v1;
    *(_DWORD *)(v4 + 300) = v2;
    *(_DWORD *)(v4 + 304) = v36;
    *(_DWORD *)(v4 + 308) = v3;
    *(_DWORD *)(v4 + 312) = v33;
    if ( v35 )
      StorPortExtendedFunction(1LL, v4, v35, v12);
    return 1;
  }
  else
  {
LABEL_37:
    FreeProcessorInfo(v4);
    if ( v38 )
      StorPortExtendedFunction(1LL, v4, v38, v30);
    return 0;
  }
}
