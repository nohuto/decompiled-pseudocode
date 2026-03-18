/*
 * XREFs of ??0CSuperWetSource@@IEAA@PEAVCComposition@@@Z @ 0x180248A7C
 * Callers:
 *     ??0CGenericInk@@QEAA@PEAVCComposition@@@Z @ 0x1802489D0 (--0CGenericInk@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CDelegatedInkCanvas@@QEAA@PEAVCComposition@@@Z @ 0x180298F50 (--0CDelegatedInkCanvas@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CSynchronousSuperWetInk@@QEAA@PEAVCComposition@@@Z @ 0x1802A6DB4 (--0CSynchronousSuperWetInk@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0?$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801E53E0 (--0-$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

CSuperWetSource *__fastcall CSuperWetSource::CSuperWetSource(CSuperWetSource *this, struct CComposition *a2)
{
  CSuperWetSource *v2; // r8
  CSuperWetSource *result; // rax
  __int64 v4; // r9

  *(_QWORD *)this = &CBaseAnimation::`vftable'{for `IAnimationResource'};
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_BYTE *)this + 96) = 1;
  *((_DWORD *)this + 25) = 0;
  *((_QWORD *)this + 13) = 0LL;
  wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>((_QWORD *)this + 14);
  result = v2;
  *((_QWORD *)v2 + 15) = v4;
  return result;
}
