/*
 * XREFs of Controller_UcxEvtGetCurrentFrameNumber @ 0x140020D80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_UcxEvtGetCurrentFrameNumber(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rax
  __int64 v4; // r10
  __int64 v5; // rdx
  unsigned int v6; // ebx
  unsigned int v7; // r8d
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rtt
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ebx
  __int64 v13; // rdx
  unsigned int v15; // eax

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B290);
  v4 = v3;
  if ( *(_DWORD *)(v3 + 792) == 1 )
  {
    v5 = MEMORY[0xFFFFF78000000320] * *(unsigned int *)(v3 + 844) / 10000LL;
    v6 = (unsigned int)(**(_DWORD **)(*(_QWORD *)(v3 + 88) + 40LL) + 1) >> 3;
    v7 = v6 & 0x7FF;
    _m_prefetchw((const void *)(v3 + 832));
    v8 = *(_QWORD *)(v3 + 832);
    do
    {
      v9 = v8;
      v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 832), v8, v8);
    }
    while ( v9 != v8 );
    v10 = v5 + ((_DWORD)v8 << 11) - (v8 >> 21);
    v11 = v10 & 0x7FF;
    v12 = v10 ^ ((unsigned __int16)v10 ^ (unsigned __int16)v6) & 0x7FF;
    if ( v11 < v7 )
    {
      v15 = v12 - 2048;
      if ( v7 - v11 <= 0x400 )
        v15 = v12;
      v12 = v15;
    }
    else if ( v11 - v7 > 0x400 )
    {
      v12 += 2048;
    }
    v13 = _InterlockedExchange64(
            (volatile __int64 *)(v4 + 832),
            ((unsigned __int64)v12 >> 11) | ((v5 - (v12 & 0x7FF)) << 21));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v13) = 5;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v4 + 72),
          v13,
          4,
          188,
          (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
          v12);
      }
    }
    *a2 = v12;
    return 0LL;
  }
  else
  {
    *a2 = -1;
    return 0LL;
  }
}
