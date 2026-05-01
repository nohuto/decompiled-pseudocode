/*
 * XREFs of ??1CDetectRenderModeChange@CMultitaskingViewButtonElement@@QEAA@XZ @ 0x1804D0A8C
 * Callers:
 *     ?PointerDown@CMultitaskingViewButtonElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804D0AF0 (-PointerDown@CMultitaskingViewButtonElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerI.c)
 *     ?PointerLeave@CMultitaskingViewButtonElement@@UEAAXXZ @ 0x1804D0B50 (-PointerLeave@CMultitaskingViewButtonElement@@UEAAXXZ.c)
 *     ?PointerMove@CMultitaskingViewButtonElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804D0B90 (-PointerMove@CMultitaskingViewButtonElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?PointerUp@CMultitaskingViewButtonElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804D0BE0 (-PointerUp@CMultitaskingViewButtonElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInp.c)
 *     _CMultitaskingViewButtonElement::PointerUp_::_1_::dtor$0 @ 0x1806EFF61 (_CMultitaskingViewButtonElement--PointerUp_--_1_--dtor$0.c)
 * Callees:
 *     ?_CalcButtonRenderMode@CMultitaskingViewButtonElement@@IEAA?AW4ButtonRenderMode@1@XZ @ 0x1804D0C38 (-_CalcButtonRenderMode@CMultitaskingViewButtonElement@@IEAA-AW4ButtonRenderMode@1@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMultitaskingViewButtonElement::CDetectRenderModeChange::~CDetectRenderModeChange(
        CMultitaskingViewButtonElement::CDetectRenderModeChange *this)
{
  unsigned int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rcx

  v2 = CMultitaskingViewButtonElement::_CalcButtonRenderMode(*(_QWORD *)this);
  v4 = v2;
  if ( v2 != *((_DWORD *)this + 2) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 648LL))(*(_QWORD *)this, v2);
  v5 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v5 + 16LL))(v5, v3, v4);
  }
}
