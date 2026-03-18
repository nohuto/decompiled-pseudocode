/*
 * XREFs of ?UpdateTargetId@CTargetStats@@IEAAXI@Z @ 0x18020F7B8
 * Callers:
 *     ?Reset@CTargetStats@@QEAAXIPEAVIOverlaySwapChain@@@Z @ 0x18020F714 (-Reset@CTargetStats@@QEAAXIPEAVIOverlaySwapChain@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CTargetStats::UpdateTargetId(CTargetStats *this, int a2)
{
  __int64 v3; // rcx
  int v4; // edx
  int v5; // eax
  __int64 v6; // rcx
  char v7; // [rsp+30h] [rbp+8h] BYREF

  *((_DWORD *)this + 6) = a2;
  v3 = *((_QWORD *)this + 4);
  v4 = 0;
  if ( v3 )
  {
    *((_QWORD *)this + 1) = *(_QWORD *)((*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 40LL))(v3, 0LL)
                                      + 936);
    *(_QWORD *)this = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 4) + 216LL))(
                                   *((_QWORD *)this + 4),
                                   &v7);
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 224LL))(*((_QWORD *)this + 4));
    v6 = *((_QWORD *)this + 4);
    *((_DWORD *)this + 4) = v5;
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 232LL))(v6);
  }
  else
  {
    *((_QWORD *)this + 1) = 0LL;
    *(_QWORD *)this = 0LL;
    *((_DWORD *)this + 4) = 0;
  }
  *((_DWORD *)this + 5) = v4;
}
