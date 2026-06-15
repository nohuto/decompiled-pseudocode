/*
 * XREFs of ?GetBTAudio_StreamContextFromStreamCounts@CBtAudioResourceManagerBase@@IEAA?AW4BTAudio_StreamContext@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800DD328
 * Callers:
 *     ?GetSaDeviceWrapper@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEBU_GUID@@5PEAPEAUISaDeviceProxy@@@Z @ 0x1800DECB4 (-GetSaDeviceWrapper@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEA.c)
 *     ?UpdateBtAudioStreamContextIfNecessary@CBtAudioResourceManagerBase@@IEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800E1C98 (-UpdateBtAudioStreamContextIfNecessary@CBtAudioResourceManagerBase@@IEAAXW4__MIDL___MIDL_itf_mmd.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 */

__int64 __fastcall CBtAudioResourceManagerBase::GetBTAudio_StreamContextFromStreamCounts(__int64 a1, int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // rsi
  unsigned int v5; // edi
  __int64 v6; // rdx
  int *v7; // r8
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 result; // rax
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 264);
  v3 = a2;
  v5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 264));
  v11 = v2;
  v6 = 24LL;
  v7 = (int *)(a1 + ((_DWORD)v3 != 0 ? 400LL : 304LL));
  v8 = 0LL;
  do
  {
    if ( *v7 > 0 )
      v5 |= dword_180195B80[v8 + v3];
    ++v7;
    v8 += 2LL;
    --v6;
  }
  while ( v6 );
  v9 = v5 | 8;
  if ( *(int *)(a1 + 500) <= 0 )
    v9 = v5;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v11);
  result = v9;
  if ( *(int *)(a1 + 496) > 0 && (v9 & 1) != 0 )
    result = v9 | 2;
  if ( (result & 1) != 0 && !(_DWORD)v3 )
    result = (unsigned int)result | 4;
  if ( !(_DWORD)result )
    return 1LL;
  return result;
}
