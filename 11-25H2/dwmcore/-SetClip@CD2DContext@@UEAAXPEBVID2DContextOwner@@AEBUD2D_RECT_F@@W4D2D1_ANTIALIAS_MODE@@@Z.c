/*
 * XREFs of ?SetClip@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x1800D7270
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800D65E0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD2DContext::SetClip(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        const struct D2D_RECT_F *a3,
        unsigned int a4)
{
  int v4; // eax
  __int64 v5; // rdi
  bool v8; // zf
  __int128 v9; // xmm0
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int128 v12; // xmm0
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]

  v4 = *((_DWORD *)this + 88);
  v5 = 0LL;
  if ( v4 )
    v5 = *(_QWORD *)(*((_QWORD *)this + 41) + 8LL * (unsigned int)(v4 - 1));
  if ( !*((_BYTE *)this + 437)
    || *((_BYTE *)this + 439)
    || a4 != *((_DWORD *)this + 104)
    || a3->left != *((float *)this + 100)
    || a3->top != *((float *)this + 101)
    || a3->right != *((float *)this + 102)
    || a3->bottom != *((float *)this + 103) )
  {
    CD2DContext::FlushDrawList(this, (__int64)this, (__int64)a3);
    v8 = *(_BYTE *)(v5 + 78) == 0;
    v9 = (__int128)*a3;
    *(_DWORD *)(v5 + 68) = a4;
    *(_OWORD *)(v5 + 52) = v9;
    if ( !v8 )
    {
      v10 = *(_QWORD *)(v5 + 16);
      v13 = _xmm;
      v14 = 0LL;
      (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(v10 + 200) + 240LL))(*(_QWORD *)(v10 + 200), &v13);
      v11 = *(_QWORD *)(v10 + 208);
      *(_BYTE *)(v10 + 439) = 0;
      v12 = *(_OWORD *)(v5 + 52);
      *(_DWORD *)(v10 + 416) = a4;
      *(_OWORD *)(v10 + 400) = v12;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v11 + 80LL))(v11, v5 + 52, a4);
    }
    *(_BYTE *)(v5 + 77) = 1;
  }
}
