/*
 * XREFs of ??1CAudioDeviceGraph@@QEAA@XZ @ 0x14001CD0C
 * Callers:
 *     ??1?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ @ 0x14004409C (--1-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ @ 0x14005BFE0 (--1-$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073E4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1CComSafeDeleteCriticalSection@ATL@@QEAA@XZ @ 0x140007B30 (--1CComSafeDeleteCriticalSection@ATL@@QEAA@XZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x14000B8BC (-RemoveAll@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXX.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14001CEE8 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x14001CF0C (-Cleanup@CAudioDeviceGraph@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 */

void __fastcall CAudioDeviceGraph::~CAudioDeviceGraph(CAudioDeviceGraph *this)
{
  __int64 v2; // rcx
  const struct _tlgProvider_t *v3; // rax
  void *v4; // rcx
  void *v5; // rcx
  _DWORD v6[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v7; // [rsp+40h] [rbp-38h]
  unsigned __int16 *v8; // [rsp+48h] [rbp-30h] BYREF
  int v9; // [rsp+50h] [rbp-28h]
  int v10; // [rsp+54h] [rbp-24h]
  void *v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+60h] [rbp-18h]
  int v13; // [rsp+64h] [rbp-14h]

  CAudioDeviceGraph::Cleanup(this);
  v3 = AudioDgTelemetryProvider::Provider(v2);
  if ( *(_DWORD *)v3 > 4u && (*((_BYTE *)v3 + 16) & 1) != 0 && (*((_QWORD *)v3 + 3) & 1LL) == *((_QWORD *)v3 + 3) )
  {
    v6[0] = 184549376;
    v6[1] = 4;
    v7 = 1LL;
    v8 = (unsigned __int16 *)*((_QWORD *)v3 + 1);
    v9 = *v8;
    v10 = 2;
    v11 = &unk_1400AFE0D;
    v12 = 22;
    v13 = 1;
    ((void (__fastcall *)(_QWORD, _DWORD *, char *, _QWORD, int, unsigned __int16 **, unsigned int))EtwEventWriteTransfer)(
      *((_QWORD *)v3 + 4),
      v6,
      (char *)this + 344,
      0LL,
      2,
      &v8,
      (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata);
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 49);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((char *)this + 384);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 47);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 45);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 42);
  v4 = (void *)*((_QWORD *)this + 39);
  if ( v4 )
  {
    free(v4);
    *((_QWORD *)this + 39) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 40);
  if ( v5 )
  {
    free(v5);
    *((_QWORD *)this + 40) = 0LL;
  }
  *((_DWORD *)this + 82) = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
  ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll((__int64)this + 168);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 19);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 18);
  ATL::CComSafeDeleteCriticalSection::~CComSafeDeleteCriticalSection((CAudioDeviceGraph *)((char *)this + 32));
}
