/*
 * XREFs of HalpInterruptCheckProcessorCacheDomainSharing @ 0x140556B80
 * Callers:
 *     HalpLMStubVmTarget @ 0x1406A6BBF (HalpLMStubVmTarget.c)
 * Callees:
 *     HalpInterruptGetCurrentProcessorApicIdIntel @ 0x140556DC4 (HalpInterruptGetCurrentProcessorApicIdIntel.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall HalpInterruptCheckProcessorCacheDomainSharing(__int64 a1)
{
  __int64 result; // rax
  int v2; // r9d
  int v3; // ecx
  unsigned int v5; // r10d
  int v8; // r11d
  unsigned int v10; // r8d
  unsigned int v11; // edx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // r8d
  int v20; // r9d
  __int64 v21; // rbx
  int v22; // r10d
  unsigned int v23; // ecx
  int v24; // edx
  char v25; // [rsp+34h] [rbp-14h]

  result = *(unsigned int *)(a1 + 8);
  v2 = 0;
  v3 = *(_DWORD *)(a1 + 8) & 0x10;
  if ( (result & 8) == 0 )
    return result;
  if ( v3 )
    return result;
  _RAX = 4LL;
  v5 = 0;
  __asm { cpuid }
  v25 = _RDX;
  v8 = 0;
  LODWORD(_RCX) = (int)((_DWORD)result << 27) >> 27;
  v10 = result;
  if ( !(_DWORD)_RCX )
    return result;
  do
  {
    v11 = (unsigned __int8)v10 >> 5;
    if ( v5 < v11 )
    {
      v12 = _RCX - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            if ( v14 == 2 )
              goto LABEL_14;
            v2 = 0;
          }
          else
          {
            v15 = (v10 >> 14) & 0xFFF;
            if ( !v15 )
              goto LABEL_14;
            v2 = 0;
            if ( (v25 & 1) == 0 )
              v2 = v15;
          }
          v5 = v11;
        }
      }
    }
LABEL_14:
    ++v8;
    _RAX = 4LL;
    __asm { cpuid }
    v25 = _RDX;
    v10 = result;
    _RCX = (unsigned int)((int)((_DWORD)result << 27) >> 27);
  }
  while ( (_DWORD)_RCX );
  if ( v2 )
  {
    result = HalpInterruptGetCurrentProcessorApicIdIntel(_RCX, _RDX, (unsigned int)result);
    v21 = (unsigned int)dword_140F8FA54;
    v22 = result;
    if ( dword_140F8FA54 < (unsigned int)HalpCacheDomainTable )
    {
      result = qword_140F8FA58;
      _BitScanReverse(&v23, 2 * v20 + 1);
      v24 = ~((1 << v23) - 1);
      *(_DWORD *)(qword_140F8FA58 + 8LL * (unsigned int)dword_140F8FA54 + 4) = v24;
      *(_DWORD *)(result + 8 * v21) = v22 & v24;
      dword_140F8FA54 = v21 + 1;
    }
  }
  return result;
}
