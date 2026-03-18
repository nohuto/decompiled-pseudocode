/*
 * XREFs of PfSnAppLaunchScenarioControl @ 0x14073B5D4
 * Callers:
 *     PfSnSetPrefetcherInformation @ 0x140828AD0 (PfSnSetPrefetcherInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PfSnBeginAppLaunch @ 0x1408261B4 (PfSnBeginAppLaunch.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall PfSnAppLaunchScenarioControl(__int64 a1)
{
  int v1; // esi
  bool v2; // zf
  int v3; // edi
  PVOID v4; // rbx
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  _OWORD v7[3]; // [rsp+48h] [rbp-40h] BYREF

  Object = 0LL;
  v1 = 0;
  v2 = *(_DWORD *)a1 == 1;
  memset(v7, 0, sizeof(v7));
  if ( v2 )
  {
    if ( *(_DWORD *)(a1 + 4) )
    {
      v3 = ObpReferenceObjectByHandleWithTag(*(_QWORD *)(a1 + 8), 0x73576650u, (__int64)&Object, 0LL, 0LL);
      if ( v3 < 0 )
      {
        v4 = Object;
      }
      else
      {
        v4 = Object;
        if ( KeGetCurrentThread()->ApcState.Process != Object )
        {
          v1 = 1;
          KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v7);
        }
        PfSnBeginAppLaunch(v4, 0LL, 17LL);
        v3 = 0;
        if ( v1 )
          KiUnstackDetachProcess((__int64)v7, 0LL);
      }
      if ( v4 )
        ObfDereferenceObjectWithTag(v4, 0x73576650u);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741735;
  }
  return (unsigned int)v3;
}
