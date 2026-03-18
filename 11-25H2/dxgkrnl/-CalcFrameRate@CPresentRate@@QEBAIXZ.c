/*
 * XREFs of ?CalcFrameRate@CPresentRate@@QEBAIXZ @ 0x1400471C8
 * Callers:
 *     NtQueryCompositionSurfaceFrameRate @ 0x140038230 (NtQueryCompositionSurfaceFrameRate.c)
 * Callees:
 *     Feature_DWM_MPO_Enhancement__private_IsEnabledDeviceUsageNoInline @ 0x14009AEF8 (Feature_DWM_MPO_Enhancement__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall CPresentRate::CalcFrameRate(CPresentRate *this)
{
  unsigned __int64 v2; // rbx
  int v4; // r8d
  unsigned int v5; // ecx
  __int64 v6; // r9
  unsigned int v7; // edx
  unsigned int v8; // ebx

  v2 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( (unsigned int)Feature_DWM_MPO_Enhancement__private_IsEnabledDeviceUsageNoInline()
    && (unsigned int)(v2 - *((_DWORD *)this + 4)) < 0x3E8 )
  {
    return 0xFFFFFFFFLL;
  }
  v4 = 0;
  v5 = -1;
  v6 = 2LL;
  do
  {
    v7 = *(_DWORD *)this;
    if ( *(_DWORD *)this )
    {
      if ( (unsigned int)v2 >= v7 && (unsigned int)v2 - v7 <= 0x3E8 )
      {
        v4 += *((_DWORD *)this + 1);
        if ( v7 < v5 )
          v5 = *(_DWORD *)this;
      }
    }
    this = (CPresentRate *)((char *)this + 8);
    --v6;
  }
  while ( v6 );
  v8 = v2 - v5;
  if ( v4 && v8 )
    return 1000 * v4 / v8;
  else
    return 0LL;
}
