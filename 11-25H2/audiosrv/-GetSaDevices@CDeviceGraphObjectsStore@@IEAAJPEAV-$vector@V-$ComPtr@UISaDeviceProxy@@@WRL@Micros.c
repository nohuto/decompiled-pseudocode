/*
 * XREFs of ?GetSaDevices@CDeviceGraphObjectsStore@@IEAAJPEAV?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18006F090
 * Callers:
 *     ?GetSharedSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800A56C0 (-GetSharedSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@.c)
 *     ?GetAllSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800F5100 (-GetAllSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Mic.c)
 *     ?GetOffloadSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800F54A0 (-GetOffloadSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _lambda_0e41d75607236968788bdd59460e85d3_::operator() @ 0x1800F4264 (_lambda_0e41d75607236968788bdd59460e85d3_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceGraphObjectsStore::GetSaDevices(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  __int64 i; // rdi
  __int64 v8; // r15
  __int64 v9; // rsi
  const char *v11; // r9
  _QWORD v12[2]; // [rsp+20h] [rbp-48h] BYREF
  int v13; // [rsp+30h] [rbp-38h]
  char v14; // [rsp+34h] [rbp-34h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = a3;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v12[1] = v6;
  v13 = 0;
  v14 = 0;
  if ( (int)v3 >= 5 )
  {
    v13 = 16843009;
    v14 = 1;
  }
  else
  {
    *((_BYTE *)&v13 + v3) = 1;
  }
  for ( i = 0LL; (unsigned int)i < 5; i = (unsigned int)(i + 1) )
  {
    if ( *((_BYTE *)&v13 + i) )
    {
      v8 = *(_QWORD *)(a1 + 24 * i + 104);
      v9 = *(_QWORD *)(a1 + 24 * i + 96);
      v12[0] = a2;
      while ( v9 != v8 )
      {
        try
        {
          lambda_0e41d75607236968788bdd59460e85d3_::operator()(v12, v9);
          v9 += 8LL;
        }
        catch ( ... )
        {
          return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                                 retaddr,
                                 (void *)0x22B,
                                 (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                                 v11);
        }
      }
    }
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  return 0LL;
}
