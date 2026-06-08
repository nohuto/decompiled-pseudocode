/*
 * XREFs of RegisterHvIdleStates @ 0x140026390
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     GetHvPpmCapabilities @ 0x140025A00 (GetHvPpmCapabilities.c)
 *     RegisterHvCStates @ 0x140025CB8 (RegisterHvCStates.c)
 *     RegisterHvLpiStates @ 0x1400264CC (RegisterHvLpiStates.c)
 *     RegisterVmIdleStates @ 0x1400269A0 (RegisterVmIdleStates.c)
 */

__int64 __fastcall RegisterHvIdleStates(__int64 a1)
{
  __int64 v1; // rax
  int v3; // ebx
  int v4; // edx
  int v5; // r9d
  bool v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 280);
  v3 = 0;
  if ( (v1 & 0x20E0000000000LL) != 0 )
  {
    v3 = RegisterHvLpiStates(a1);
    if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 10;
LABEL_16:
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v4,
        3,
        v5,
        (__int64)&WPP_a233770b61303cb7b038d705208677fa_Traceguids,
        v3);
    }
  }
  else if ( (v1 & 0x200) != 0 )
  {
    v7 = 0;
    v3 = RegisterHvCStates(a1);
    if ( v3 >= 0 )
    {
      GetHvPpmCapabilities(&v7, 0LL, 0LL);
      if ( v7 )
        v3 = RegisterVmIdleStates(a1);
    }
    if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 11;
      goto LABEL_16;
    }
  }
  else if ( (v1 & 0x7F077) != 0 )
  {
    v3 = RegisterHvCStates(a1);
    if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 12;
      goto LABEL_16;
    }
  }
  return (unsigned int)v3;
}
