/*
 * XREFs of ?SetHostMonitorSize@CSwitchItemGrid@@UEAAXAEBUCSize@Geometry@@@Z @ 0x1804C9550
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$As@UIMultitaskingViewGridElement@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804C7380 (--$As@UIMultitaskingViewGridElement@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV.c)
 *     ?Reset@GridLayout@@QEAAXXZ @ 0x1804C916C (-Reset@GridLayout@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSwitchItemGrid::SetHostMonitorSize(CSwitchItemGrid *this, const struct Geometry::CSize *a2)
{
  __int64 (__fastcall ****v4)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall ****v5)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 160) != *(_DWORD *)a2 || *((_DWORD *)this + 161) != *((_DWORD *)a2 + 1) )
  {
    *((_QWORD *)this + 80) = *(_QWORD *)a2;
    GridLayout::Reset((CSwitchItemGrid *)((char *)this + 560));
    v4 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))*((_QWORD *)this - 24);
    v5 = &v4[*((_QWORD *)this - 23)];
    while ( v4 != v5 )
    {
      v6 = 0LL;
      Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IMultitaskingViewGridElement>(v4, &v6);
      (*(void (__fastcall **)(__int64, const struct Geometry::CSize *))(*(_QWORD *)v6 + 48LL))(v6, a2);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v6);
      ++v4;
    }
  }
}
