/*
 * XREFs of ?EmitPointerList@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14006EAB4
 * Callers:
 *     ?EmitUpdateCommands@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x14006E950 (-EmitUpdateCommands@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CInteractionMarshaler::EmitPointerList(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v5; // edi
  unsigned int v6; // edi
  char *v7; // rdx
  int v8; // eax
  __int64 v9; // rcx
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x80u) != 0 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      v5 = *((_DWORD *)this + 72);
      if ( !v5 )
        break;
      v6 = v5 - 1;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v10) )
        return 0;
      v7 = (char *)v10;
      *(_DWORD *)v10 = 16;
      *(_QWORD *)(v7 + 4) = 0LL;
      *((_DWORD *)v7 + 3) = 0;
      *((_DWORD *)v7 + 1) = 180;
      *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v7 + 3) = *(_DWORD *)(*((_QWORD *)this + 35) + 4LL * v6);
      v8 = *((_DWORD *)this + 72) - 1;
      for ( *((_DWORD *)this + 72) = v8;
            v6 < *((_DWORD *)this + 72);
            *(_DWORD *)(*((_QWORD *)this + 35) + 4 * v9) = *(_DWORD *)(*((_QWORD *)this + 35) + 4LL * v6) )
      {
        v9 = v6++;
      }
    }
    *((_DWORD *)this + 4) &= ~0x80u;
  }
  return 1;
}
