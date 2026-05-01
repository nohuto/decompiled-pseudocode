/*
 * XREFs of ??0CImmersiveWindowFactoryBase@@QEAA@XZ @ 0x18003AA64
 * Callers:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveWindowFactoryBase@@@WRL@Microsoft@@QEAA@XZ @ 0x18003A9DC (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveWindowFactoryBase@@@WRL@Mic.c)
 * Callees:
 *     <none>
 */

CImmersiveWindowFactoryBase *__fastcall CImmersiveWindowFactoryBase::CImmersiveWindowFactoryBase(
        CImmersiveWindowFactoryBase *this)
{
  CImmersiveWindowFactoryBase *result; // rax

  *((_QWORD *)this + 1) = &CWrlLightweightHandlerBase::`vftable';
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 5) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 4);
  *((_QWORD *)this + 12) = 0LL;
  *(_QWORD *)this = &CImmersiveWindowFactoryBase::`vftable';
  *((_QWORD *)this + 1) = &CImmersiveWindowFactoryBase::`vftable'{for `Microsoft::WRL::Details::Selector<CWrlLightweightHandlerBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWrlLightweightHandlerBase>,Microsoft::WRL::CloakedIid<IStdMarshalInfo>>>'};
  *((_QWORD *)this + 6) = &CImmersiveWindowFactoryBase::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::CloakedIid<IStdMarshalInfo>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWrlLightweightHandlerBase>,Microsoft::WRL::CloakedIid<IStdMarshalInfo>>>'};
  *((_QWORD *)this + 9) = &CImmersiveWindowFactoryBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IConfigureWindowFactory>'};
  *((_QWORD *)this + 10) = &CImmersiveWindowFactoryBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::CloakedIid<ICoreWindowFactoryPriv>>'};
  result = this;
  *((_WORD *)this + 52) = 257;
  *(_QWORD *)((char *)this + 108) = 0LL;
  *(_OWORD *)((char *)this + 116) = xmmword_180777920;
  *((_DWORD *)this + 33) = 0;
  *((_QWORD *)this + 17) = 0LL;
  *((_BYTE *)this + 144) = 0;
  *((_DWORD *)this + 37) = 0;
  *((_BYTE *)this + 152) = 0;
  *((_DWORD *)this + 39) = 0;
  *((_QWORD *)this + 20) = 0LL;
  *((_BYTE *)this + 168) = 0;
  return result;
}
