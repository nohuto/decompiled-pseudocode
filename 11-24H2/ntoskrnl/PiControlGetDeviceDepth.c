/*
 * XREFs of PiControlGetDeviceDepth @ 0x1408B90D0
 * Callers:
 *     <none>
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140438B40 (PiControlFreeUserModeCallersBuffer.c)
 *     PiGetDeviceDepth @ 0x1408B9C2C (PiGetDeviceDepth.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1408CDB40 (PiControlMakeUserModeCallersCopy.c)
 */

__int64 __fastcall PiControlGetDeviceDepth(__int64 a1, unsigned __int16 *a2, __int64 a3, char a4)
{
  int v4; // ecx
  __int64 result; // rax
  unsigned int DeviceDepth; // ebx
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  v4 = *a2;
  v9 = 0LL;
  WORD1(v9) = v4;
  LOWORD(v9) = v4;
  if ( (unsigned __int16)(v4 - 1) > 0x18Fu || (v4 & 1) != 0 )
    return 3221225485LL;
  result = PiControlMakeUserModeCallersCopy((unsigned int)&v9 + 8, *((_QWORD *)a2 + 1), v4, 2, a4, 1);
  if ( (int)result >= 0 )
  {
    DeviceDepth = PiGetDeviceDepth(&v9, a2 + 8);
    PiControlFreeUserModeCallersBuffer(a4, *((void **)&v9 + 1));
    return DeviceDepth;
  }
  return result;
}
