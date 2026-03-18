/*
 * XREFs of ?InitializeCloned@CFlipToken@@IEAAJ_KPEBUtagCloneableFlipTokenData@@@Z @ 0x14009BD24
 * Callers:
 *     ?CreateCloned@CFlipToken@@SAJ_K0PEAVCompositionSurfaceObject@@PEBUtagCloneableFlipTokenData@@PEAPEAV1@@Z @ 0x14009BC6C (-CreateCloned@CFlipToken@@SAJ_K0PEAVCompositionSurfaceObject@@PEBUtagCloneableFlipTokenData@@PEA.c)
 * Callees:
 *     ?ValidateDXGIAlphaMode@@YAJW4DXGI_ALPHA_MODE@@@Z @ 0x1400186D4 (-ValidateDXGIAlphaMode@@YAJW4DXGI_ALPHA_MODE@@@Z.c)
 *     ?Initialize@CToken@@MEAAJXZ @ 0x140035AF0 (-Initialize@CToken@@MEAAJXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipToken::InitializeCloned(
        CFlipToken *this,
        __int64 a2,
        const struct tagCloneableFlipTokenData *a3)
{
  unsigned int v6; // ebp
  int v7; // esi
  __int64 v8; // rax
  _OWORD *v9; // rcx
  __int128 v10; // xmm1
  unsigned int v11; // eax

  v6 = 0;
  v7 = CToken::Initialize(this);
  if ( v7 >= 0 )
  {
    (*(void (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 24LL))(this);
    v7 = ValidateDXGIAlphaMode(*((_DWORD *)a3 + 9));
    if ( v7 >= 0 )
    {
      v8 = 3LL;
      *((_QWORD *)this + 13) = a2;
      v9 = (_OWORD *)((char *)this + 120);
      do
      {
        *v9 = *(_OWORD *)a3;
        v9[1] = *((_OWORD *)a3 + 1);
        v9[2] = *((_OWORD *)a3 + 2);
        v9[3] = *((_OWORD *)a3 + 3);
        v9[4] = *((_OWORD *)a3 + 4);
        v9[5] = *((_OWORD *)a3 + 5);
        v9[6] = *((_OWORD *)a3 + 6);
        v9 += 8;
        v10 = *((_OWORD *)a3 + 7);
        a3 = (const struct tagCloneableFlipTokenData *)((char *)a3 + 128);
        *(v9 - 1) = v10;
        --v8;
      }
      while ( v8 );
      *v9 = *(_OWORD *)a3;
      v9[1] = *((_OWORD *)a3 + 1);
      v9[2] = *((_OWORD *)a3 + 2);
      v9[3] = *((_OWORD *)a3 + 3);
      *((_QWORD *)v9 + 8) = *((_QWORD *)a3 + 8);
      v11 = *((_DWORD *)this + 78);
      *((_BYTE *)this + 578) = 1;
      if ( v11 )
      {
        if ( v11 > 0x10 )
        {
          return (unsigned int)-1073741811;
        }
        else
        {
          do
            (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 12) + 40LL))(
              *((_QWORD *)this + 12),
              (char *)this + 16 * v6++ + 316);
          while ( v6 < *((_DWORD *)this + 78) );
        }
      }
    }
  }
  return (unsigned int)v7;
}
