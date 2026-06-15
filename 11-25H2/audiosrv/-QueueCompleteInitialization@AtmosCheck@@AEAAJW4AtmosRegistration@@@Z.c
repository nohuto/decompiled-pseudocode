/*
 * XREFs of ?QueueCompleteInitialization@AtmosCheck@@AEAAJW4AtmosRegistration@@@Z @ 0x180148DE0
 * Callers:
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x18014804C (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCharacteristics@@@Z @ 0x1800A1B1C (--0-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCh.c)
 *     _lambda_7ee6381ccef9550c878152fb933ee002_::__lambda_7ee6381ccef9550c878152fb933ee002_ @ 0x1800B7298 (_lambda_7ee6381ccef9550c878152fb933ee002_--__lambda_7ee6381ccef9550c878152fb933ee002_.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_7ee6381ccef9550c878152fb933ee002___ @ 0x180146874 (Windows--Internal--ComTaskPool--QueueTask__lambda_7ee6381ccef9550c878152fb933ee002___.c)
 *     _lambda_7ee6381ccef9550c878152fb933ee002_::_lambda_7ee6381ccef9550c878152fb933ee002_ @ 0x180146C0C (_lambda_7ee6381ccef9550c878152fb933ee002_--_lambda_7ee6381ccef9550c878152fb933ee002_.c)
 */

__int64 __fastcall AtmosCheck::QueueCompleteInitialization(__int64 a1)
{
  __int64 v1; // rbx
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  v1 = a1;
  v6 = 1;
  wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>(
    &v8,
    a1);
  v2 = (__int64 *)lambda_7ee6381ccef9550c878152fb933ee002_::_lambda_7ee6381ccef9550c878152fb933ee002_(
                    (__int64)v7,
                    &v8,
                    &v6);
  LODWORD(v1) = Windows::Internal::ComTaskPool::QueueTask__lambda_7ee6381ccef9550c878152fb933ee002___(
                  v4,
                  v3,
                  *(_DWORD *)(v1 + 220),
                  v2);
  lambda_7ee6381ccef9550c878152fb933ee002_::__lambda_7ee6381ccef9550c878152fb933ee002_(v7);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v8);
  return (unsigned int)v1;
}
