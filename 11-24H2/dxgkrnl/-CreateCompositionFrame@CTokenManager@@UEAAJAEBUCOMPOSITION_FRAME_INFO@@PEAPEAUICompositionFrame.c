/*
 * XREFs of ?CreateCompositionFrame@CTokenManager@@UEAAJAEBUCOMPOSITION_FRAME_INFO@@PEAPEAUICompositionFrame@@@Z @ 0x14002F720
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CTokenManager::CreateCompositionFrame(
        CTokenManager *this,
        const struct COMPOSITION_FRAME_INFO *a2,
        struct ICompositionFrame **a3)
{
  unsigned int v6; // ebp
  __int64 Pool2; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  bool v10; // zf
  __int64 v11; // rax

  v6 = -1073741801;
  Pool2 = ExAllocatePool2(256LL, 312LL, 1717783892LL);
  v8 = Pool2;
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
    v9 = *((_QWORD *)this + 2);
    v10 = v9 == -1;
    v11 = v9 + 1;
    *((_QWORD *)this + 2) = v11;
    if ( v10 )
    {
      *((_QWORD *)this + 2) = 1LL;
      v11 = 1LL;
    }
    *(_DWORD *)(v8 + 200) = 0;
    *(_QWORD *)(v8 + 208) = 0LL;
    *(_QWORD *)(v8 + 216) = 0LL;
    *(_QWORD *)(v8 + 232) = 0LL;
    *(_QWORD *)(v8 + 240) = 0LL;
    *(_WORD *)(v8 + 248) = 0;
    *(_QWORD *)(v8 + 192) = v11;
    *(_BYTE *)(v8 + 224) = 0;
    *(_BYTE *)(v8 + 250) = 0;
    *(_QWORD *)(v8 + 304) = this;
    *(_QWORD *)(v8 + 264) = v8 + 256;
    *(_QWORD *)(v8 + 256) = v8 + 256;
    *(_QWORD *)(v8 + 280) = v8 + 272;
    *(_QWORD *)(v8 + 272) = v8 + 272;
    *(_QWORD *)(v8 + 296) = v8 + 288;
    *(_QWORD *)(v8 + 288) = v8 + 288;
    (**(void (__fastcall ***)(CTokenManager *))this)(this);
    v6 = 0;
    *a3 = (struct ICompositionFrame *)v8;
  }
  return v6;
}
