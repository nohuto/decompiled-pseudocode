/*
 * XREFs of HalpProcGetFeatureBits @ 0x14054AA20
 * Callers:
 *     HalpProcInitSystem @ 0x140B4F200 (HalpProcInitSystem.c)
 *     HalpProcInitDiscard @ 0x140C114B0 (HalpProcInitDiscard.c)
 * Callees:
 *     HalpGetCpuInfo @ 0x140487890 (HalpGetCpuInfo.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1404A053C (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 HalpProcGetFeatureBits()
{
  bool v1; // cf
  int v7; // r8d
  unsigned int v8; // ecx
  int v9; // edx
  int v10; // ecx
  int v11; // r10d
  unsigned int v12; // r10d
  unsigned __int8 v38[24]; // [rsp+20h] [rbp-20h] BYREF

  v38[0] = 0;
  if ( !KeGetCurrentPrcb()->CpuID )
    return 2LL;
  v1 = HalpGetCpuInfo(0LL, 0LL, 0LL, v38) != 0;
  _RAX = 1LL;
  __asm { cpuid }
  v7 = _RDX;
  v8 = ((unsigned int)_RDX >> 12) & 4;
  v9 = v8 | 8;
  if ( (v7 & 0x80u) == 0 )
    v9 = v8;
  v10 = v9 | 0x10;
  if ( (v7 & 2) == 0 )
    v10 = v9;
  v11 = v10 | 0x20;
  if ( (v7 & 0x4000000) == 0 )
    v11 = v10;
  v12 = v11 | 1;
  if ( (v38[0] & (unsigned __int8)-v1) == 2 )
  {
    _RAX = 0LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX >= 0x14 )
    {
      _RAX = 7LL;
      __asm { cpuid }
      if ( (_RBX & 0x2000000) != 0 )
        goto LABEL_15;
      if ( HalpIsMicrosoftCompatibleHvLoaded() )
      {
        _RAX = 0x40000000LL;
        __asm { cpuid }
        if ( (unsigned int)_RAX >= 0x4000000B )
        {
          _RAX = 1073741827LL;
          __asm { cpuid }
          if ( (_RDX & 0x8000000) != 0 )
          {
LABEL_15:
            _RAX = 20LL;
            __asm { cpuid }
            if ( (_RCX & 1) != 0 )
              v12 |= 0x40u;
          }
        }
      }
    }
  }
  return v12;
}
