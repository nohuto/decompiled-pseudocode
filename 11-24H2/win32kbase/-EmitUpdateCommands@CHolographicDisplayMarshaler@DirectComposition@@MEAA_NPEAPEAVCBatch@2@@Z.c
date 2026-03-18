/*
 * XREFs of ?EmitUpdateCommands@CHolographicDisplayMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140234030
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetCallbackId@CNotificationResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14007D930 (-EmitSetCallbackId@CNotificationResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CHolographicDisplayMarshaler::EmitUpdateCommands(
        DirectComposition::CHolographicDisplayMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  char *v5; // rcx
  int v6; // eax
  char *v7; // rcx
  char *v8; // rcx
  void *v10; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CNotificationResourceMarshaler::EmitSetCallbackId(
         this,
         (struct DirectComposition::CBatch ***)a2) )
  {
    if ( *((_DWORD *)this + 16) == 3 )
    {
      v10 = 0LL;
      if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v10) )
      {
        v5 = (char *)v10;
        *(_DWORD *)v10 = 36;
        *(_OWORD *)(v5 + 4) = 0LL;
        *(_OWORD *)(v5 + 20) = 0LL;
        *((_DWORD *)v5 + 1) = 156;
        *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
        *(_OWORD *)(v5 + 12) = *(_OWORD *)((char *)this + 88);
        *(_QWORD *)(v5 + 28) = *((_QWORD *)this + 10);
        *((_DWORD *)this + 16) |= 0x80000000;
      }
    }
    v6 = *((_DWORD *)this + 4);
    if ( (v6 & 0x40) != 0 )
    {
      v10 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v10) )
        return v4;
      v7 = (char *)v10;
      *(_DWORD *)v10 = 16;
      *(_QWORD *)(v7 + 4) = 0LL;
      *((_DWORD *)v7 + 3) = 0;
      *((_DWORD *)v7 + 1) = 158;
      *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v7 + 3) = *((_DWORD *)this + 17);
      *((_DWORD *)this + 4) &= ~0x40u;
      v6 = *((_DWORD *)this + 4);
    }
    if ( (v6 & 0x80u) == 0 )
      return 1;
    v10 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v10) )
    {
      v8 = (char *)v10;
      *(_DWORD *)v10 = 16;
      *(_QWORD *)(v8 + 4) = 0LL;
      *((_DWORD *)v8 + 3) = 0;
      *((_DWORD *)v8 + 1) = 157;
      *((_DWORD *)v8 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v8 + 3) = *((_DWORD *)this + 18);
      *((_DWORD *)this + 4) &= ~0x80u;
      return 1;
    }
  }
  return v4;
}
