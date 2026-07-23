/*
 * XREFs of PfSnAppLaunchScenarioControl @ 0x1407458E4
 * Callers:
 *     PfSnSetPrefetcherInformation @ 0x14094AB4C (PfSnSetPrefetcherInformation.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     PfSnBeginAppLaunch @ 0x1409483F4 (PfSnBeginAppLaunch.c)
 */

__int64 __fastcall PfSnAppLaunchScenarioControl(__int64 a1)
{
  int v1; // esi
  bool v2; // zf
  int v3; // edi
  PVOID v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  _OWORD v9[3]; // [rsp+48h] [rbp-40h] BYREF

  Object = 0LL;
  v1 = 0;
  v2 = *(_DWORD *)a1 == 1;
  memset(v9, 0, sizeof(v9));
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
          KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v9);
        }
        PfSnBeginAppLaunch((ULONG_PTR)v4);
        v3 = 0;
        if ( v1 )
          KiUnstackDetachProcess((__int64)v9, 0, v5, v6);
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
