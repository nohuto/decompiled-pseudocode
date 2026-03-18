/*
 * XREFs of Controller_GetFrameNumber @ 0x140015B50
 * Callers:
 *     Isoch_ProcessTransferRingEmptyEvent @ 0x140015CC8 (Isoch_ProcessTransferRingEmptyEvent.c)
 *     Controller_TranslateFrameNumberToQpcValue @ 0x1400327F4 (Controller_TranslateFrameNumberToQpcValue.c)
 *     Interrupter_WdfEvtInterruptIsr @ 0x140039780 (Interrupter_WdfEvtInterruptIsr.c)
 *     Controller_DetectFrameMicroframeBoundary @ 0x1400402E8 (Controller_DetectFrameMicroframeBoundary.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Controller_GetFrameNumber(__int64 a1, int a2, unsigned int *a3, int *a4)
{
  __int64 v7; // rdx
  unsigned int v8; // ebx
  unsigned int v9; // ebx
  unsigned int v10; // r8d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rtt
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // ebx
  __int64 v16; // rdx
  unsigned int v18; // eax

  v7 = MEMORY[0xFFFFF78000000320] * *(unsigned int *)(a1 + 844) / 10000LL;
  v8 = a2 + **(_DWORD **)(*(_QWORD *)(a1 + 88) + 40LL);
  if ( a4 )
    *a4 = v8 & 7;
  v9 = v8 >> 3;
  v10 = v9 & 0x7FF;
  if ( a3 )
    *a3 = v10;
  _m_prefetchw((const void *)(a1 + 832));
  v11 = *(_QWORD *)(a1 + 832);
  do
  {
    v12 = v11;
    v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 832), v11, v11);
  }
  while ( v12 != v11 );
  v13 = v7 + ((_DWORD)v11 << 11) - (v11 >> 21);
  v14 = v13 & 0x7FF;
  v15 = v13 ^ ((unsigned __int16)v13 ^ (unsigned __int16)v9) & 0x7FF;
  if ( v14 < v10 )
  {
    v18 = v15 - 2048;
    if ( v10 - v14 <= 0x400 )
      v18 = v15;
    v15 = v18;
  }
  else if ( v14 - v10 > 0x400 )
  {
    v15 += 2048;
  }
  v16 = _InterlockedExchange64(
          (volatile __int64 *)(a1 + 832),
          ((unsigned __int64)v15 >> 11) | ((v7 - (v15 & 0x7FF)) << 21));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v16) = 5;
    WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 72), v16, 4, 188, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids, v15);
  }
  return v15;
}
