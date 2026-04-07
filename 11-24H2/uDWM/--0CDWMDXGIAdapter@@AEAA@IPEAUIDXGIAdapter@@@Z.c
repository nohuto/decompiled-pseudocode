/*
 * XREFs of ??0CDWMDXGIAdapter@@AEAA@IPEAUIDXGIAdapter@@@Z @ 0x18005750C
 * Callers:
 *     ?Create@CDWMDXGIAdapter@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z @ 0x180057428 (-Create@CDWMDXGIAdapter@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180026FB0 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 *     ??0CMILRefCountBase@@QEAA@XZ @ 0x180057570 (--0CMILRefCountBase@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
CDWMDXGIAdapter *__fastcall CDWMDXGIAdapter::CDWMDXGIAdapter(
        CDWMDXGIAdapter *this,
        __int64 a2,
        struct IDXGIAdapter *a3)
{
  __int64 v4; // rcx
  int v5; // edx
  __int64 v6; // rdx
  __int64 v7; // r9

  CMILRefCountBase::CMILRefCountBase(this);
  *(_QWORD *)v4 = &CDWMDXGIAdapter::`vftable';
  *(_DWORD *)(v4 + 16) = v5;
  DynArrayImpl<0>::DynArrayImpl<0>(v4 + 352, 0LL, 0);
  *((_DWORD *)this + 86) &= v6;
  *((_QWORD *)this + 3) = v7;
  *((_QWORD *)this + 4) &= v6;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  return this;
}
