/*
 * XREFs of WPP_SF_ddS @ 0x1800FF114
 * Callers:
 *     ?MmeOnDefaultDeviceChanged@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x18006E014 (-MmeOnDefaultDeviceChanged@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_i.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_ddS(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, const wchar_t *a6)
{
  const wchar_t *v6; // rdx
  __int64 v7; // rax
  int v9; // [rsp+88h] [rbp+20h] BYREF

  v9 = a4;
  v6 = a6;
  if ( a6 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a6[v7] );
  }
  if ( !a6 )
    v6 = L"NULL";
  return EtwTraceMessage(a1, 43LL, &WPP_62e65b1aa5e43d79debbf88575ed7e0c_Traceguids, 28LL, &v9, 4LL, &a5, 4LL, v6);
}
