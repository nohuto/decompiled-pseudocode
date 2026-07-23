/*
 * XREFs of MiGetNodeChannelPageCounts @ 0x140264470
 * Callers:
 *     MiGetChannelInformation @ 0x140264320 (MiGetChannelInformation.c)
 * Callees:
 *     MiGetPartitionNodePageCounts @ 0x1402646F8 (MiGetPartitionNodePageCounts.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

unsigned __int64 *__fastcall MiGetNodeChannelPageCounts(
        __int64 a1,
        unsigned int a2,
        unsigned __int8 a3,
        _QWORD *a4,
        _QWORD *a5,
        unsigned __int64 *a6)
{
  __int64 v6; // r15
  unsigned __int8 v8; // di
  __int64 v9; // r14
  unsigned __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rsi
  char *v13; // rdx
  __int64 *v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int8 v20; // r8
  unsigned __int8 v21; // cl
  int v22; // r10d
  unsigned int v23; // r9d
  unsigned int i; // r8d
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 *result; // rax
  __int64 *v28; // r10
  __int64 v29; // r13
  __int64 v30; // rax
  _QWORD *v31; // r9
  __int64 v32; // r8
  __int64 v33; // rdx
  unsigned __int64 v34; // [rsp+20h] [rbp-B8h]
  char v37[8]; // [rsp+50h] [rbp-88h] BYREF
  char v38; // [rsp+58h] [rbp-80h] BYREF

  v6 = a1;
  v8 = a3;
  v9 = *(_QWORD *)(a1 + 16) + 57216LL * a2;
  if ( a3 == 2 )
    v10 = *(_QWORD *)(v9 + 14976);
  else
    v10 = *(_QWORD *)(v9 + 8LL * a3 + 14960);
  v34 = v10;
  do
  {
    if ( MmNumberOfChannels == 1 || v8 == 2 )
    {
      memset_0(v37, 0, 0x40uLL);
      v11 = 0LL;
      v12 = 0LL;
      MiGetPartitionNodePageCounts(v6, a2, v37);
      v13 = &v38;
      v14 = MiPageSizes;
      v15 = 4LL;
      do
      {
        v16 = *v14++;
        v17 = *((_QWORD *)v13 - 1) * v16;
        v18 = *(_QWORD *)v13 * v16;
        v12 += v17;
        v13 += 16;
        v11 += v18;
        --v15;
      }
      while ( v15 );
      v19 = 0LL;
      if ( v8 == 2 )
      {
        v20 = MmNumberOfChannels;
        goto LABEL_9;
      }
    }
    else
    {
      v28 = MiPageSizes;
      v29 = 3LL;
      v12 = *(_QWORD *)(v9 + 16 * (v8 + 947LL));
      v11 = *(_QWORD *)(v9 + 16LL * v8 + 15160);
      v30 = 8LL * v8 + 928;
      v31 = (_QWORD *)(v30 + v9);
      do
      {
        v32 = *v28++;
        v12 += v32 * (*(_QWORD *)((char *)v31 + 8LL * v8 + 960 - v30) + *v31);
        v33 = *(_QWORD *)((char *)v31 + 8LL * v8 + 976 - v30) + *(_QWORD *)((char *)v31 + 8LL * v8 + 944 - v30);
        v31 += 160;
        v11 += v32 * v33;
        --v29;
      }
      while ( v29 );
      v6 = a1;
      v19 = 0LL;
    }
    v20 = v8 + 1;
LABEL_9:
    v21 = 0;
    v22 = v20;
    if ( v8 != 2 )
      v21 = v8;
    v8 = v21;
    v23 = v21;
LABEL_12:
    if ( v23 != v22 )
    {
      for ( i = 0; ; ++i )
      {
        if ( i >= 8 )
        {
          ++v23;
          goto LABEL_12;
        }
        v25 = 88 * (i + 8LL * v23 + 59);
        v26 = v19 + *(_QWORD *)(v25 + v9);
        if ( v26 < v19 || v26 == -1LL )
          break;
        v19 += *(_QWORD *)(v25 + v9);
      }
      v19 = -2LL;
    }
  }
  while ( v11 + v19 + v12 > v34 );
  *a5 = v11;
  *a4 = v12;
  result = a6;
  *a6 = v19;
  return result;
}
