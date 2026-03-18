/*
 * XREFs of ?IsTopologyHardwareClone@@YAJPEAH@Z @ 0x1402703E4
 * Callers:
 *     ?CacheRotationInfo@CRotationMgr@@UEAAXXZ @ 0x140270170 (-CacheRotationInfo@CRotationMgr@@UEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall IsTopologyHardwareClone(int *a1)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  int IsSourceInHardwareClone; // eax
  int v5[4]; // [rsp+20h] [rbp-108h] BYREF
  _BYTE v6[16]; // [rsp+30h] [rbp-F8h] BYREF
  _BYTE v7[8]; // [rsp+40h] [rbp-E8h] BYREF
  unsigned int v8; // [rsp+48h] [rbp-E0h]

  v5[0] = 1;
  v2 = 0;
  *a1 = 0;
  result = DrvQueryDisplayConfig(3221225474LL, v5, v6, 0LL);
  if ( (int)result >= 0 )
  {
    if ( v5[0] )
    {
      IsSourceInHardwareClone = DrvIsSourceInHardwareClone(v7, v8, a1);
      if ( IsSourceInHardwareClone < 0 )
        return (unsigned int)IsSourceInHardwareClone;
      return v2;
    }
    else
    {
      return 3223192359LL;
    }
  }
  return result;
}
