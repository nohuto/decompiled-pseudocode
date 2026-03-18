/*
 * XREFs of Isoch_TransferUrb_MarkLatePackets @ 0x140023B40
 * Callers:
 *     Isoch_RetrieveNextStage @ 0x14001CE90 (Isoch_RetrieveNextStage.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     Isoch_GetPacketLength @ 0x140023490 (Isoch_GetPacketLength.c)
 */

__int64 __fastcall Isoch_TransferUrb_MarkLatePackets(__int64 a1, __int64 a2)
{
  __int64 v4; // r15
  __int64 v5; // r10
  unsigned int v6; // ebp
  __int64 v7; // rdx
  unsigned int v8; // ebx
  unsigned int v9; // r8d
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rtt
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // ebx
  __int64 v15; // rdx
  unsigned int v16; // ecx
  __int64 result; // rax
  unsigned int v18; // esi
  unsigned int v19; // edi
  unsigned int v20; // r11d
  unsigned int v21; // eax
  unsigned int v22; // r12d
  unsigned int v23; // [rsp+70h] [rbp+8h]
  __int64 v24; // [rsp+78h] [rbp+10h]

  v4 = (unsigned int)(*(_DWORD *)(a2 + 108) + *(_DWORD *)(a2 + 104));
  v24 = *(_QWORD *)(a2 + 48);
  v5 = *(_QWORD *)(a1 + 40);
  v6 = *(_DWORD *)(v24 + 128) + (unsigned int)(v4 + *(_DWORD *)(a1 + 364) - 1) / *(_DWORD *)(a1 + 364);
  v7 = MEMORY[0xFFFFF78000000320] * *(unsigned int *)(v5 + 844) / 10000LL;
  v8 = (unsigned int)(**(_DWORD **)(*(_QWORD *)(v5 + 88) + 40LL) + 2) >> 3;
  v9 = v8 & 0x7FF;
  _m_prefetchw((const void *)(v5 + 832));
  v10 = *(_QWORD *)(v5 + 832);
  do
  {
    v11 = v10;
    v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 832), v10, v10);
  }
  while ( v11 != v10 );
  v12 = v7 + ((_DWORD)v10 << 11) - (v10 >> 21);
  v13 = v12 & 0x7FF;
  v14 = v12 ^ ((unsigned __int16)v12 ^ (unsigned __int16)v8) & 0x7FF;
  if ( v13 < v9 )
  {
    v21 = v14 - 2048;
    if ( v9 - v13 <= 0x400 )
      v21 = v14;
    v14 = v21;
  }
  else if ( v13 - v9 > 0x400 )
  {
    v14 += 2048;
  }
  v15 = _InterlockedExchange64(
          (volatile __int64 *)(v5 + 832),
          ((unsigned __int64)v14 >> 11) | ((v7 - (v14 & 0x7FF)) << 21));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v15) = 5;
    WPP_RECORDER_SF_d(*(_QWORD *)(v5 + 72), v15, 4, 188, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids, v14);
  }
  v16 = *(_DWORD *)(a1 + 364);
  result = (v16 + *(_DWORD *)(a2 + 96) - (_DWORD)v4 - 1) / v16;
  v23 = result;
  v18 = (v16 + *(_DWORD *)(a2 + 96) - (_DWORD)v4 - 1) / v16;
  if ( (_DWORD)result )
  {
    v19 = 0;
    v20 = v6 - v14;
    do
    {
      result = v19 + v6;
      if ( (unsigned int)result > v14 )
      {
        result = v20 + v19;
        if ( (unsigned int)result < 0x7FFFFFFF )
          break;
      }
      v22 = 0;
      if ( v16 )
      {
        do
        {
          *(_DWORD *)(v24 + 12 * v4 + 148) = -1073414144;
          result = Isoch_GetPacketLength(a2, v4);
          *(_DWORD *)(a2 + 92) += result;
          v4 = (unsigned int)(v4 + 1);
          ++*(_DWORD *)(a2 + 108);
          ++v22;
          v16 = *(_DWORD *)(a1 + 364);
        }
        while ( v22 < v16 );
        v18 = v23;
      }
      ++v19;
    }
    while ( v19 < v18 );
  }
  return result;
}
