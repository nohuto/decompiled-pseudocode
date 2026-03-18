/*
 * XREFs of ?EmitUpdateCommands@CSceneSurfaceMaterialInputMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140239510
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommandToClearFlag__lambda_3317ac129dbc5a941e863092f5dff627___ @ 0x14023946C (DirectComposition--CResourceMarshaler--EmitUpdateCommandToClearFlag__lambda_3317ac129dbc5a941e86.c)
 */

char __fastcall DirectComposition::CSceneSurfaceMaterialInputMarshaler::EmitUpdateCommands(
        DirectComposition::CSceneSurfaceMaterialInputMarshaler *this,
        struct DirectComposition::CBatch **a2,
        __int64 a3)
{
  char v3; // di
  char *v6; // rcx
  int v7; // eax
  char *v8; // rcx
  char *v9; // rcx
  void *v11; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  if ( (*((_DWORD *)this + 4) & 0x20) != 0 )
  {
    v11 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v11) )
      return v3;
    v6 = (char *)v11;
    *(_DWORD *)v11 = 16;
    *(_QWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 3) = 0;
    *((_DWORD *)v6 + 1) = 346;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v6 + 3) = *((_DWORD *)this + 20);
    *((_DWORD *)this + 4) &= ~0x20u;
  }
  if ( DirectComposition::CResourceMarshaler::EmitUpdateCommandToClearFlag__lambda_3317ac129dbc5a941e863092f5dff627___(
         (__int64)this,
         a2,
         a3,
         (__int64)this) )
  {
    v7 = *((_DWORD *)this + 4);
    if ( (v7 & 0x80u) != 0 )
    {
      v11 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v11) )
        return v3;
      v8 = (char *)v11;
      *(_DWORD *)v11 = 16;
      *(_QWORD *)(v8 + 4) = 0LL;
      *((_DWORD *)v8 + 3) = 0;
      *((_DWORD *)v8 + 1) = 348;
      *((_DWORD *)v8 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v8 + 3) = *((_DWORD *)this + 21);
      *((_DWORD *)this + 4) &= ~0x80u;
      v7 = *((_DWORD *)this + 4);
    }
    if ( (v7 & 0x100) == 0 )
      return 1;
    v11 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v11) )
    {
      v9 = (char *)v11;
      *(_DWORD *)v11 = 16;
      *(_QWORD *)(v9 + 4) = 0LL;
      *((_DWORD *)v9 + 3) = 0;
      *((_DWORD *)v9 + 1) = 349;
      *((_DWORD *)v9 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v9 + 3) = *((_DWORD *)this + 22);
      *((_DWORD *)this + 4) &= ~0x100u;
      return 1;
    }
  }
  return v3;
}
