/*
 * XREFs of IsTouchpadCapable @ 0x1401A6820
 * Callers:
 *     IsPointerDeviceAccessible @ 0x140162460 (IsPointerDeviceAccessible.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x140048B90 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall IsTouchpadCapable(__int64 a1, __int64 a2)
{
  unsigned int v2; // ecx
  __int64 v3; // rax

  if ( (*(_QWORD *)(a1 + 1360) & 0x2000002000LL) != 0 || *(_WORD *)(a1 + 1266) )
  {
    return 1;
  }
  else
  {
    v2 = 0;
    if ( a2 )
    {
      v3 = HMValidateHandleNoSecure(a2, 1);
      v2 = 0;
      if ( v3 )
        return (*(_DWORD *)(v3 + 380) & 0x800) != 0;
    }
  }
  return v2;
}
