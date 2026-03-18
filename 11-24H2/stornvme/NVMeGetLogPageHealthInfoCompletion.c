/*
 * XREFs of NVMeGetLogPageHealthInfoCompletion @ 0x140022E50
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140005060 (GetSrbExtension.c)
 *     GetSrbDataBuffer @ 0x14000B970 (GetSrbDataBuffer.c)
 *     NVMeFreeDmaBuffer @ 0x14000CF60 (NVMeFreeDmaBuffer.c)
 *     TemperatureFromKelvinToCelsius @ 0x140026B10 (TemperatureFromKelvinToCelsius.c)
 */

__int64 __fastcall NVMeGetLogPageHealthInfoCompletion(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 SrbExtension; // rbx
  __int64 v4; // r8
  __int64 v5; // r11
  __int64 *v6; // r10
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rcx
  char v10; // al
  __int64 v11; // r8
  char v12; // al
  __int64 v13; // r8
  __int64 result; // rax
  __int64 v15; // [rsp+38h] [rbp+10h] BYREF

  SrbExtension = GetSrbExtension(a2);
  v6 = (__int64 *)(SrbExtension + 4160);
  if ( *(_BYTE *)(v2 + 3) == 1 )
  {
    GetSrbDataBuffer(v4, &v15);
    v9 = *(unsigned __int8 *)(v7 + 2);
    v8 = *(_QWORD *)(SrbExtension + 4200);
    LOWORD(v9) = *(_WORD *)(v7 + 1);
    if ( v8 == 13 )
    {
      v10 = TemperatureFromKelvinToCelsius(v9);
      *(_BYTE *)(v11 + 9) = v10;
    }
    else if ( v8 == 47 )
    {
      v12 = TemperatureFromKelvinToCelsius(v9);
      *(_BYTE *)(v13 + 10) = v12;
    }
  }
  result = NVMeFreeDmaBuffer(v5, *(unsigned int *)(SrbExtension + 4208), v6, *(_QWORD *)(SrbExtension + 4168));
  *(_DWORD *)(SrbExtension + 4208) = 0;
  *(_QWORD *)(SrbExtension + 4200) = 0LL;
  *(_BYTE *)(SrbExtension + 4225) |= 8u;
  return result;
}
