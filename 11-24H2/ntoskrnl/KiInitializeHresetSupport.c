/*
 * XREFs of KiInitializeHresetSupport @ 0x140B5A628
 * Callers:
 *     KiSetFeatureBits @ 0x140B5BC74 (KiSetFeatureBits.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall KiInitializeHresetSupport(__int64 a1)
{
  char v1; // r10
  unsigned int v2; // r8d
  int v14; // r9d
  ULONG_PTR v25; // rdx
  __int64 result; // rax

  v1 = *(_BYTE *)(a1 + 141);
  v2 = 0;
  if ( v1 == 2 )
  {
    _RAX = 0LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX >= 0x20 )
    {
      _RAX = 7LL;
      __asm { cpuid }
      v14 = _RAX;
      _RAX = 32LL;
      __asm { cpuid }
      if ( (v14 & 0x400000) != 0 )
        v2 = (_RBX & 1) != 0;
    }
  }
  else if ( v1 == 1 )
  {
    _RAX = 2147483681LL;
    __asm { cpuid }
    v2 = (_RAX & 0x400000) != 0;
  }
  v25 = *(unsigned int *)(a1 + 36);
  if ( (_DWORD)v25 )
  {
    if ( v1 == 2 )
    {
      if ( (_DWORD)KiHresetMask != v2 )
        KeBugCheckEx(0x5Du, 0x48524553uLL, v25, (unsigned int)KiHresetMask, v2);
    }
    else if ( v1 == 1 && (_DWORD)KiHwFeedbackResetMask != v2 )
    {
      KeBugCheckEx(0x5Du, 0x48524553uLL, v25, (unsigned int)KiHwFeedbackResetMask, v2);
    }
  }
  else if ( v1 == 2 )
  {
    LODWORD(KiHresetMask) = v2;
  }
  else if ( v1 == 1 )
  {
    LODWORD(KiHwFeedbackResetMask) = v2;
  }
  result = (unsigned int)KiHresetMask;
  if ( (_DWORD)KiHresetMask )
    __writemsr(0x17DAu, (unsigned int)KiHresetMask);
  return result;
}
