/*
 * XREFs of PfSnAppLaunchScenarioControl @ 0x1407475F4
 * Callers:
 *     PfSnSetPrefetcherInformation @ 0x14096308C (PfSnSetPrefetcherInformation.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     PfSnBeginAppLaunch @ 0x140960934 (PfSnBeginAppLaunch.c)
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
        PfSnBeginAppLaunch((ULONG_PTR)v4);
        v3 = 0;
        if ( v1 )
          KiUnstackDetachProcess((__int64)v7, 0);
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
