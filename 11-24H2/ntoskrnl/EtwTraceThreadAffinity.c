/*
 * XREFs of EtwTraceThreadAffinity @ 0x1403A2658
 * Callers:
 *     KiQueueReadyThread @ 0x1402A4C20 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x1402C78D0 (KiDeferredReadySingleThread.c)
 *     KiSetSystemAffinityThread @ 0x140318DD4 (KiSetSystemAffinityThread.c)
 *     KiSetAffinityThread @ 0x1403A0218 (KiSetAffinityThread.c)
 *     KeStartThread @ 0x1403A1E70 (KeStartThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1403A3DA8 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiDirectSwitchThread @ 0x14041E720 (KiDirectSwitchThread.c)
 *     KiUpdateThreadCpuSets @ 0x14048B9CC (KiUpdateThreadCpuSets.c)
 *     KeTraceThreadAffinityRundown @ 0x1405BF8CC (KeTraceThreadAffinityRundown.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     KeFindFirstSetRightGroupMask @ 0x140330524 (KeFindFirstSetRightGroupMask.c)
 *     KeIsEqualAffinityEx @ 0x1403A3520 (KeIsEqualAffinityEx.c)
 *     KeFindFirstSetLeftGroupMask @ 0x140407D54 (KeFindFirstSetLeftGroupMask.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceThreadAffinity(
        __int64 a1,
        unsigned __int16 a2,
        char a3,
        char a4,
        unsigned __int16 *a5,
        __int16 a6)
{
  int v6; // eax
  int IsEqualAffinity; // eax
  char v10; // cl
  unsigned __int8 v11; // bl
  _QWORD *v12; // rcx
  int v13; // edx
  unsigned __int16 v15; // ax
  __int64 FirstSetRightGroupMask; // rsi
  unsigned __int16 FirstSetLeftGroupMask; // ax
  __int64 v18; // r9
  unsigned __int16 v19; // r8
  unsigned __int16 v20; // si
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  int v23; // [rsp+38h] [rbp-29h] BYREF
  int v24; // [rsp+3Ch] [rbp-25h]
  __int128 i; // [rsp+40h] [rbp-21h] BYREF
  _QWORD v26[2]; // [rsp+50h] [rbp-11h] BYREF
  _QWORD v27[3]; // [rsp+60h] [rbp-1h] BYREF
  int v28; // [rsp+78h] [rbp+17h]
  int v29; // [rsp+7Ch] [rbp+1Bh]
  __int64 v30; // [rsp+80h] [rbp+1Fh]
  int v31; // [rsp+88h] [rbp+27h]
  int v32; // [rsp+8Ch] [rbp+2Bh]

  v6 = *(_DWORD *)(a1 + 1296);
  v24 = a2;
  v23 = v6;
  IsEqualAffinity = KeIsEqualAffinityEx(a5, &KeActiveProcessors);
  v10 = BYTE2(v24);
  if ( IsEqualAffinity )
  {
    v10 = BYTE2(v24) | 1;
    BYTE2(v24) |= 1u;
  }
  v11 = 2;
  if ( a3 )
  {
    v10 |= 2u;
    BYTE2(v24) = v10;
  }
  if ( a4 )
    BYTE2(v24) = v10 | 4;
  if ( IsEqualAffinity )
  {
    v26[1] = 8LL;
    v26[0] = &v23;
    v12 = v26;
    v13 = 1;
  }
  else
  {
    v15 = 0;
    for ( i = 0LL; v15 < *a5; ++v15 )
    {
      if ( *(_QWORD *)&a5[4 * v15 + 4] )
        _bittestandset64((signed __int64 *)&i, v15);
    }
    do
    {
      if ( *((_QWORD *)&v23 + v11) )
        break;
      --v11;
    }
    while ( v11 );
    HIBYTE(v24) = v11;
    FirstSetRightGroupMask = (unsigned __int16)KeFindFirstSetRightGroupMask((__int64 *)&i);
    FirstSetLeftGroupMask = KeFindFirstSetLeftGroupMask(&i);
    v18 = (__int64)&a5[4 * FirstSetRightGroupMask + 4];
    v19 = FirstSetLeftGroupMask - FirstSetRightGroupMask + 1;
    v20 = FirstSetRightGroupMask + 1;
    if ( v20 < FirstSetLeftGroupMask )
    {
      v21 = v20;
      v22 = (unsigned __int16)(FirstSetLeftGroupMask - v20);
      do
      {
        _bittestandset64((signed __int64 *)&i, v21++);
        --v22;
      }
      while ( v22 );
    }
    v27[1] = 8LL;
    v27[0] = &v23;
    v12 = v27;
    v29 = 0;
    v27[2] = &i;
    v13 = 3;
    v28 = 8 * v11;
    v31 = 8 * v19;
    v30 = v18;
    v32 = 0;
  }
  return EtwTraceKernelEvent((int)v12, v13, 0x20001000u, a6, 6298370);
}
