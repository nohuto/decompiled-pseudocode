/*
 * XREFs of ??$TryGetProxy@VBamoActivationControllerProxy@@@BaseBamoConnection@Bamo@Microsoft@@QEAAXIIPEAPEAVBamoActivationControllerProxy@@@Z @ 0x180024F48
 * Callers:
 *     ?FromCookie@ActivationControllerBamoProxy@@SA?AV?$com_ptr_t@VBamoActivationControllerProxy@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x180023CE0 (-FromCookie@ActivationControllerBamoProxy@@SA-AV-$com_ptr_t@VBamoActivationControllerProxy@@Uerr.c)
 * Callees:
 *     ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x180024FE4 (-TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180041D00 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180043030 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Microsoft::Bamo::BaseBamoConnection::TryGetProxy<BamoActivationControllerProxy>(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4)
{
  struct Microsoft::BamoImpl::ConnectionIndirector **v7; // rbx
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  struct Microsoft::BamoImpl::BamoProxyImpl *v9; // rbx
  char v10; // [rsp+30h] [rbp+8h] BYREF

  v7 = (struct Microsoft::BamoImpl::ConnectionIndirector **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  *a4 = 0LL;
  Microsoft::BamoImpl::InternalLock::InternalLock((Microsoft::BamoImpl::InternalLock *)&v10, v7[12]);
  Proxy = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(
            (Microsoft::BamoImpl::BaseBamoConnectionImpl *)v7,
            a2,
            a3);
  v9 = Proxy;
  if ( Proxy )
  {
    *a4 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoProxyImpl *))(*(_QWORD *)Proxy + 56LL))(Proxy);
    (**(void (__fastcall ***)(struct Microsoft::BamoImpl::BamoProxyImpl *))v9)(v9);
  }
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v10);
}
