/*
 * XREFs of ?CreateCompositionFrame@CTokenManager@@UEAAJAEBUCOMPOSITION_FRAME_INFO@@PEAPEAUICompositionFrame@@@Z @ 0x14002F0E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CTokenManager::CreateCompositionFrame(
        CTokenManager *this,
        const struct COMPOSITION_FRAME_INFO *a2,
        struct ICompositionFrame **a3,
        __int64 a4)
{
  unsigned int v7; // ebp
  __int64 Pool2; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  bool v11; // zf
  __int64 v12; // rax

  v7 = -1073741801;
  Pool2 = ExAllocatePool2(256LL, 312LL, 1717783892LL, a4);
  v9 = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)Pool2 = &CCompositionFrame::`vftable';
    *(_DWORD *)(Pool2 + 8) = 1;
    *(_OWORD *)(Pool2 + 32) = *(_OWORD *)a2;
    *(_OWORD *)(Pool2 + 48) = *((_OWORD *)a2 + 1);
    *(_OWORD *)(Pool2 + 64) = *((_OWORD *)a2 + 2);
    *(_OWORD *)(Pool2 + 80) = *((_OWORD *)a2 + 3);
    *(_OWORD *)(Pool2 + 96) = *((_OWORD *)a2 + 4);
    *(_OWORD *)(Pool2 + 112) = *((_OWORD *)a2 + 5);
    *(_OWORD *)(Pool2 + 128) = *((_OWORD *)a2 + 6);
    *(_OWORD *)(Pool2 + 144) = *((_OWORD *)a2 + 7);
    *(_OWORD *)(Pool2 + 160) = *((_OWORD *)a2 + 8);
    *(_OWORD *)(Pool2 + 176) = *((_OWORD *)a2 + 9);
    v10 = *((_QWORD *)this + 2);
    v11 = v10 == -1;
    v12 = v10 + 1;
    *((_QWORD *)this + 2) = v12;
    if ( v11 )
    {
      *((_QWORD *)this + 2) = 1LL;
      v12 = 1LL;
    }
    *(_DWORD *)(v9 + 200) = 0;
    *(_QWORD *)(v9 + 208) = 0LL;
    *(_QWORD *)(v9 + 216) = 0LL;
    *(_QWORD *)(v9 + 232) = 0LL;
    *(_QWORD *)(v9 + 240) = 0LL;
    *(_WORD *)(v9 + 248) = 0;
    *(_QWORD *)(v9 + 192) = v12;
    *(_BYTE *)(v9 + 224) = 0;
    *(_BYTE *)(v9 + 250) = 0;
    *(_QWORD *)(v9 + 304) = this;
    *(_QWORD *)(v9 + 264) = v9 + 256;
    *(_QWORD *)(v9 + 256) = v9 + 256;
    *(_QWORD *)(v9 + 280) = v9 + 272;
    *(_QWORD *)(v9 + 272) = v9 + 272;
    *(_QWORD *)(v9 + 296) = v9 + 288;
    *(_QWORD *)(v9 + 288) = v9 + 288;
    (**(void (__fastcall ***)(CTokenManager *))this)(this);
    v7 = 0;
    *a3 = (struct ICompositionFrame *)v9;
  }
  return v7;
}
