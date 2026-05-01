/*
 * XREFs of ?PointerMove@CMultitaskingViewElementBase@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804C4930
 * Callers:
 *     ?PointerMove@HotTrackingElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804B8080 (-PointerMove@HotTrackingElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?PointerMove@CMultitaskingViewFrameElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804CC1C0 (-PointerMove@CMultitaskingViewFrameElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?PointerMove@CMultitaskingViewButtonElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804D0B90 (-PointerMove@CMultitaskingViewButtonElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     ?_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804C58D4 (-_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 */

void __fastcall CMultitaskingViewElementBase::PointerMove(
        CMultitaskingViewElementBase *this,
        const struct MultitaskingViewPointerInputArgs *a2)
{
  if ( !*((_DWORD *)this + 25) && *((_DWORD *)this + 24) != 1 || *(_QWORD *)a2 != *((_QWORD *)this + 18) )
    CMultitaskingViewElementBase::_PointerMove(this, a2);
}
