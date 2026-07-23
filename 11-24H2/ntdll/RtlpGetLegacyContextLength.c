/*
 * XREFs of RtlpGetLegacyContextLength @ 0x1800D3210
 * Callers:
 *     RtlWow64GetCpuAreaInfo @ 0x1800D2D30 (RtlWow64GetCpuAreaInfo.c)
 *     RtlWow64GetCurrentCpuArea @ 0x1800D2EA0 (RtlWow64GetCurrentCpuArea.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetLegacyContextLength(int a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // edx
  __int64 result; // rax

  v3 = 0;
  if ( (a1 & 0x10000) != 0 )
  {
    result = 4LL;
  }
  else if ( (a1 & 0x100000) != 0 )
  {
    result = 16LL;
  }
  else if ( (a1 & 0x200000) != 0 )
  {
    result = 8LL;
  }
  else
  {
    if ( (a1 & 0x400000) != 0 )
      v3 = 16;
    result = v3;
  }
  if ( a3 )
    *a3 = result;
  return result;
}
