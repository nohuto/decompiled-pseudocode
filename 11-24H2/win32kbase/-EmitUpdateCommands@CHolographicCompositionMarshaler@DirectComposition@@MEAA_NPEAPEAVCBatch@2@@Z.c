/*
 * XREFs of ?EmitUpdateCommands@CHolographicCompositionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140234CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetCallbackId@CNotificationResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14007D930 (-EmitSetCallbackId@CNotificationResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CHolographicCompositionMarshaler::EmitUpdateCommands(
        DirectComposition::CHolographicCompositionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl
  int v5; // eax
  char *v6; // rcx
  char *v7; // rcx
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CNotificationResourceMarshaler::EmitSetCallbackId(
         this,
         (struct DirectComposition::CBatch ***)a2) )
  {
    v5 = *((_DWORD *)this + 4);
    if ( (v5 & 0x40) != 0 )
    {
      v9 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x20uLL, &v9) )
        return v4;
      v6 = (char *)v9;
      *(_DWORD *)v9 = 32;
      *(_OWORD *)(v6 + 4) = 0LL;
      *(_QWORD *)(v6 + 20) = 0LL;
      *((_DWORD *)v6 + 7) = 0;
      *((_DWORD *)v6 + 1) = 154;
      *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
      *(_OWORD *)(v6 + 12) = *(_OWORD *)((char *)this + 72);
      *((_DWORD *)v6 + 7) = *((_DWORD *)this + 16);
      *((_DWORD *)this + 4) &= ~0x40u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x80u) == 0 )
      return 1;
    v9 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v9) )
    {
      v7 = (char *)v9;
      *(_DWORD *)v9 = 16;
      *(_QWORD *)(v7 + 4) = 0LL;
      *((_DWORD *)v7 + 3) = 0;
      *((_DWORD *)v7 + 1) = 155;
      *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v7 + 3) = *((_DWORD *)this + 16);
      *((_DWORD *)this + 4) &= ~0x80u;
      return 1;
    }
  }
  return v4;
}
