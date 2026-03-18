/*
 * XREFs of ?MarkInvalid@CD2DResource@@IEAAXXZ @ 0x1801D9250
 * Callers:
 *     ?MarkAllResourcesInvalid@CD2DResourceManager@@QEAAXXZ @ 0x1801D91B0 (-MarkAllResourcesInvalid@CD2DResourceManager@@QEAAXXZ.c)
 *     ?MarkHardwareProtectedResourcesInvalid@CD2DResourceManager@@QEAA_NXZ @ 0x180234688 (-MarkHardwareProtectedResourcesInvalid@CD2DResourceManager@@QEAA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD2DResource::MarkInvalid(CD2DResource *this)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  void (__fastcall ***v4)(_QWORD, __int64); // rcx

  (*(void (__fastcall **)(CD2DResource *))(*(_QWORD *)this + 120LL))(this);
  v2 = (*(__int64 (__fastcall **)(CD2DResource *))(*(_QWORD *)this + 32LL))(this);
  (*(void (__fastcall **)(CD2DResource *))(*(_QWORD *)this + 8LL))(this);
  v3 = (__int64)(*((_QWORD *)this + 3) - *((_QWORD *)this + 2)) >> 3;
  while ( (_DWORD)v3 )
  {
    LODWORD(v3) = v3 - 1;
    v4 = *(void (__fastcall ****)(_QWORD, __int64))(*((_QWORD *)this + 2) + 8LL * (unsigned int)v3);
    (**v4)(v4, v2);
  }
  (*(void (__fastcall **)(CD2DResource *))(*(_QWORD *)this + 16LL))(this);
}
