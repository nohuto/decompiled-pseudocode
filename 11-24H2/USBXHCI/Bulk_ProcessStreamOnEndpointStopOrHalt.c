/*
 * XREFs of Bulk_ProcessStreamOnEndpointStopOrHalt @ 0x14002CB9C
 * Callers:
 *     Bulk_EP_FSEReceived @ 0x14002CB30 (Bulk_EP_FSEReceived.c)
 *     Bulk_EP_EndpointHalted @ 0x140031EE0 (Bulk_EP_EndpointHalted.c)
 * Callees:
 *     Bulk_FindStage @ 0x140003CBC (Bulk_FindStage.c)
 *     WPP_RECORDER_SF_DDDD @ 0x140004124 (WPP_RECORDER_SF_DDDD.c)
 *     memmove @ 0x140058BC0 (memmove.c)
 */

__int64 __fastcall Bulk_ProcessStreamOnEndpointStopOrHalt(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  __int64 v4; // r10
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // ecx
  unsigned int v9; // r8d
  unsigned int v10; // ecx
  __int64 result; // rax
  int v12; // ett
  unsigned int v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 *v14; // [rsp+68h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v13 = 0;
  v14 = 0LL;
  if ( !Bulk_FindStage(
          a1,
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 144) + 32LL) + 16LL) + 16LL * *(unsigned int *)(a1 + 64)) & 0xFFFFFFFFFFFFFFF0uLL,
          (__int64 *)&v14,
          &v13)
    || (v3 = (__int64)v14) == 0 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 40) + 1004LL) == 1 )
    {
      _m_prefetchw((const void *)(a1 + 356));
      LODWORD(result) = *(_DWORD *)(a1 + 356);
      do
      {
        v12 = result;
        result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 356), result, result);
      }
      while ( v12 != (_DWORD)result );
    }
    else
    {
      result = *(unsigned int *)(a1 + 356);
    }
    goto LABEL_27;
  }
  v4 = *(_QWORD *)(a1 + 56);
  v5 = *v14;
  v6 = *(_QWORD *)(*(_QWORD *)v4 + 736LL);
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 144) + 32LL) + 16LL) + 16LL * *(unsigned int *)(a1 + 64);
  if ( (v6 & 0x1800000000LL) == 0 )
  {
    v8 = *(_DWORD *)(v7 + 8);
LABEL_21:
    v10 = v8 & 0xFFFFFF;
    goto LABEL_9;
  }
  if ( (v6 & 0x1000000000LL) != 0 )
  {
    if ( (v6 & 0x800000000LL) == 0 )
    {
      v8 = *(_DWORD *)(v7 + 12);
      goto LABEL_21;
    }
  }
  else
  {
    v9 = *(_DWORD *)(v7 + 8);
    v10 = v9 >> 8;
    if ( (v6 & 0x200000000000LL) == 0 || (v9 & 0x80u) != 0 )
      goto LABEL_9;
  }
  v10 = 0;
LABEL_9:
  if ( (v6 & 0x10000000000LL) != 0 )
    v10 += *(_DWORD *)(v7 + 12) & 0x1FFFF;
  if ( v10 > *((_DWORD *)v14 + 10) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDD(
        *(_QWORD *)(v4 + 80),
        3u,
        0xEu,
        0xCu,
        (__int64)&WPP_b35432f3067b3bf93fefc5589952cfde_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
        *(_DWORD *)(v4 + 152),
        *(_DWORD *)(a1 + 64),
        v10);
    v10 = 0;
  }
  *(_DWORD *)(v5 + 108) += v10;
  if ( (*(_DWORD *)(*(_QWORD *)(v5 + 48) + 32LL) & 1) != 0 && *(_DWORD *)(v5 + 76) == 2 )
    memmove(*(void **)(v3 + 64), *(const void **)(*(_QWORD *)(v3 + 72) + 16LL), v10);
  result = v13;
LABEL_27:
  *(_DWORD *)(a1 + 360) = result;
  return result;
}
