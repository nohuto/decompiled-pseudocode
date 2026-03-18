/*
 * XREFs of Isoch_TransferUrb_Initialize @ 0x140022880
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DDqDDDD @ 0x140022CF0 (WPP_RECORDER_SF_DDqDDDD.c)
 */

__int64 __fastcall Isoch_TransferUrb_Initialize(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rbx
  unsigned int v5; // ebp
  _DWORD *v8; // rdi
  __int64 v9; // r10
  __int64 v10; // rdx
  unsigned int v11; // r14d
  unsigned int v12; // r8d
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rtt
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // r14d
  __int64 v18; // rdx
  unsigned int v19; // edx
  unsigned int v20; // ecx
  unsigned int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r10
  __int64 v24; // rdx
  unsigned int v25; // edi
  unsigned int v26; // r8d
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rtt
  int v29; // eax
  unsigned int v30; // ecx
  unsigned int v31; // edi
  __int64 v32; // rdx
  int v33; // edx
  unsigned int v35; // eax
  unsigned int v36; // eax
  int v37; // [rsp+20h] [rbp-68h]

  v4 = *(_QWORD *)(a2 + 48);
  v5 = 0;
  if ( *(_WORD *)(v4 + 2) == 56 )
  {
LABEL_2:
    v8 = (_DWORD *)(v4 + 36);
  }
  else
  {
    switch ( *(_WORD *)(v4 + 2) )
    {
      case '9':
      case ':':
        v8 = (_DWORD *)(v4 + 52);
        break;
      default:
        goto LABEL_2;
    }
  }
  if ( (*(_DWORD *)(v4 + 32) & 4) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 40);
    v10 = MEMORY[0xFFFFF78000000320] * *(unsigned int *)(v9 + 844) / 10000LL;
    v11 = (unsigned int)(**(_DWORD **)(*(_QWORD *)(v9 + 88) + 40LL) + 1) >> 3;
    v12 = v11 & 0x7FF;
    _m_prefetchw((const void *)(v9 + 832));
    v13 = *(_QWORD *)(v9 + 832);
    do
    {
      v14 = v13;
      v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 832), v13, v13);
    }
    while ( v14 != v13 );
    v15 = v10 + ((_DWORD)v13 << 11) - (v13 >> 21);
    v16 = v15 & 0x7FF;
    v17 = v15 ^ ((unsigned __int16)v15 ^ (unsigned __int16)v11) & 0x7FF;
    if ( v16 < v12 )
    {
      v36 = v17 - 2048;
      if ( v12 - v16 <= 0x400 )
        v36 = v17;
      v17 = v36;
    }
    else if ( v16 - v12 > 0x400 )
    {
      v17 += 2048;
    }
    v18 = _InterlockedExchange64(
            (volatile __int64 *)(v9 + 832),
            ((unsigned __int64)v17 >> 11) | ((v10 - (v17 & 0x7FF)) << 21));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v18) = 5;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v9 + 72),
        v18,
        4,
        188,
        (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
        v17);
    }
    if ( *(_BYTE *)(a1 + 342)
      || ((v19 = *(_DWORD *)(a1 + 368),
           *(_DWORD *)(v4 + 128) = v19,
           (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 48) + 20LL) - 2) > 1)
        ? (v20 = 255)
        : (v20 = 1024),
          v17 > v19 && v17 - v19 > v20) )
    {
      *(_BYTE *)(a1 + 341) = 1;
      *(_DWORD *)(v4 + 128) = v17 + 5;
      *(_DWORD *)(a1 + 368) = v17 + 5;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 368) = *(_DWORD *)(v4 + 128);
  }
  *(_DWORD *)(a1 + 368) += (unsigned int)(*(_DWORD *)(a1 + 364) + *(_DWORD *)(v4 + 132) - 1) / *(_DWORD *)(a1 + 364);
  v21 = 0;
  *v8 = 0;
  for ( *(_DWORD *)(v4 + 136) = 0; v21 < *(_DWORD *)(v4 + 132); *(_DWORD *)(v4 + 12 * v22 + 148) = -1 )
    v22 = v21++;
  v23 = *(_QWORD *)(a1 + 40);
  v24 = MEMORY[0xFFFFF78000000320] * *(unsigned int *)(v23 + 844) / 10000LL;
  v25 = (unsigned int)(**(_DWORD **)(*(_QWORD *)(v23 + 88) + 40LL) + 2) >> 3;
  v26 = v25 & 0x7FF;
  _m_prefetchw((const void *)(v23 + 832));
  v27 = *(_QWORD *)(v23 + 832);
  do
  {
    v28 = v27;
    v27 = _InterlockedCompareExchange64((volatile signed __int64 *)(v23 + 832), v27, v27);
  }
  while ( v28 != v27 );
  v29 = v24 + ((_DWORD)v27 << 11) - (v27 >> 21);
  v30 = v29 & 0x7FF;
  v31 = v29 ^ ((unsigned __int16)v29 ^ (unsigned __int16)v25) & 0x7FF;
  if ( v30 < v26 )
  {
    v35 = v31 - 2048;
    if ( v26 - v30 <= 0x400 )
      v35 = v31;
    v31 = v35;
  }
  else if ( v30 - v26 > 0x400 )
  {
    v31 += 2048;
  }
  v32 = _InterlockedExchange64(
          (volatile __int64 *)(v23 + 832),
          ((unsigned __int64)v31 >> 11) | ((v24 - (v31 & 0x7FF)) << 21));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v32) = 5;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v23 + 72),
      v32,
      4,
      188,
      (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
      v31);
  }
  v33 = *(_DWORD *)(v4 + 128) - v31;
  if ( v33 <= 0 )
    v33 = v31 - *(_DWORD *)(v4 + 128);
  if ( v33 > 1024 )
    v5 = -1073741823;
  else
    *(_BYTE *)(a1 + 342) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDqDDDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      a4,
      v37,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      *(_QWORD *)(a2 + 24),
      *(_DWORD *)(v4 + 132),
      v31,
      *(_DWORD *)(v4 + 128),
      *(_DWORD *)(a1 + 368));
  return v5;
}
