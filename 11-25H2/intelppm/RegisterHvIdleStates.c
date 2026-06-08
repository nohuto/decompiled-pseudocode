/*
 * XREFs of RegisterHvIdleStates @ 0x140030A50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1400050E8 (WPP_RECORDER_SF_D.c)
 *     GetHvPpmCapabilities @ 0x1400300B8 (GetHvPpmCapabilities.c)
 *     RegisterHvCStates @ 0x140030378 (RegisterHvCStates.c)
 *     RegisterHvLpiStates @ 0x140030B8C (RegisterHvLpiStates.c)
 *     RegisterVmIdleStates @ 0x140030E80 (RegisterVmIdleStates.c)
 */

__int64 __fastcall RegisterHvIdleStates(__int64 a1)
{
  __int64 v1; // rax
  int v3; // ebx
  unsigned __int16 v4; // r9
  bool v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 280);
  v3 = 0;
  if ( (v1 & 0x20E0000000000LL) != 0 )
  {
    v3 = RegisterHvLpiStates(a1);
    if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 10;
LABEL_16:
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        v4,
        (__int64)&WPP_a233770b61303cb7b038d705208677fa_Traceguids,
        v3);
    }
  }
  else if ( (v1 & 0x200) != 0 )
  {
    v6 = 0;
    v3 = RegisterHvCStates(a1);
    if ( v3 >= 0 )
    {
      GetHvPpmCapabilities(&v6, 0LL, 0LL);
      if ( v6 )
        v3 = RegisterVmIdleStates(a1);
    }
    if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 11;
      goto LABEL_16;
    }
  }
  else if ( (v1 & 0x7F077) != 0 )
  {
    v3 = RegisterHvCStates(a1);
    if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 12;
      goto LABEL_16;
    }
  }
  return (unsigned int)v3;
}
