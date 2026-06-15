/*
 * XREFs of ??0?$CComQIPtr@UIAudioClient2@@$1?_GUID_726778cd_f60a_4eda_82de_e47610cd78aa@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x180114674
 * Callers:
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0AEA_N@Z @ 0x18007ACB0 (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0AEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall ATL::CComQIPtr<IAudioClient2,&__s_GUID const _GUID_726778cd_f60a_4eda_82de_e47610cd78aa>::CComQIPtr<IAudioClient2,&__s_GUID const _GUID_726778cd_f60a_4eda_82de_e47610cd78aa>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, _QWORD *))
{
  *a1 = 0LL;
  if ( a2 )
    (**a2)(a2, &GUID_726778cd_f60a_4eda_82de_e47610cd78aa, a1);
  return a1;
}
