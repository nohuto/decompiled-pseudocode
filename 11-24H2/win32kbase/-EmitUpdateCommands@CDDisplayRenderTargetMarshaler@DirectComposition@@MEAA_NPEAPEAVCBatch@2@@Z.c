/*
 * XREFs of ?EmitUpdateCommands@CDDisplayRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1402358D0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdateRefreshRate@CLegacyRenderTargetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14012F444 (-EmitUpdateRefreshRate@CLegacyRenderTargetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     _lambda_8f70ed48540b237cd810ba2496c500b5_::_lambda_8f70ed48540b237cd810ba2496c500b5_ @ 0x1402353F0 (_lambda_8f70ed48540b237cd810ba2496c500b5_--_lambda_8f70ed48540b237cd810ba2496c500b5_.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommandToClearFlag__lambda_8f70ed48540b237cd810ba2496c500b5___ @ 0x1402357BC (DirectComposition--CResourceMarshaler--EmitUpdateCommandToClearFlag__lambda_8f70ed48540b237cd810.c)
 *     ?EmitCreate@CDDisplayRenderTargetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1402357F8 (-EmitCreate@CDDisplayRenderTargetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CDDisplayRenderTargetMarshaler::EmitUpdateCommands(
        DirectComposition::CDDisplayRenderTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  char *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  _QWORD *v8; // rax
  __int64 v9; // r8
  char *v10; // rcx
  void *v12; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CDDisplayRenderTargetMarshaler::EmitCreate(this, a2) )
  {
    if ( (*((_DWORD *)this + 4) & 0x40) != 0 )
    {
      v12 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v12) )
        return v4;
      v5 = (char *)v12;
      *(_DWORD *)v12 = 16;
      *(_QWORD *)(v5 + 4) = 0LL;
      *((_DWORD *)v5 + 3) = 0;
      *((_DWORD *)v5 + 1) = 120;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
      v6 = *((_QWORD *)this + 20);
      if ( v6 )
        v7 = *(_DWORD *)(v6 + 32);
      else
        v7 = 0;
      *((_DWORD *)v5 + 3) = v7;
      *((_DWORD *)this + 4) &= ~0x40u;
    }
    v8 = lambda_8f70ed48540b237cd810ba2496c500b5_::_lambda_8f70ed48540b237cd810ba2496c500b5_(&v12, (__int64)this);
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommandToClearFlag__lambda_8f70ed48540b237cd810ba2496c500b5___(
           (__int64)this,
           a2,
           v9,
           *v8) )
    {
      if ( (*((_DWORD *)this + 4) & 0x100) != 0 )
      {
        v12 = 0LL;
        if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v12) )
          return v4;
        v10 = (char *)v12;
        *(_DWORD *)v12 = 16;
        *(_QWORD *)(v10 + 4) = 0LL;
        *((_DWORD *)v10 + 3) = 0;
        *((_DWORD *)v10 + 1) = 121;
        *((_DWORD *)v10 + 2) = *((_DWORD *)this + 8);
        *((_DWORD *)v10 + 3) = *((_DWORD *)this + 37);
        *((_DWORD *)this + 4) &= ~0x100u;
      }
      if ( DirectComposition::CLegacyRenderTargetMarshaler::EmitUpdateRefreshRate(this, a2) )
        return 1;
    }
  }
  return v4;
}
