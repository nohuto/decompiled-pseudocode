/*
 * XREFs of ?EmitPropertiesUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140103B08
 * Callers:
 *     ?EmitUpdateCommands@CGenericInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140103A40 (-EmitUpdateCommands@CGenericInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

char __fastcall DirectComposition::CGenericInkMarshaler::EmitPropertiesUpdate(
        DirectComposition::CGenericInkMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v4; // edi
  unsigned int v5; // edi
  char *v6; // rcx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x20) != 0 )
    return 1;
  v4 = *((_DWORD *)this + 20);
  v7 = 0LL;
  v5 = v4 + 12;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, v5, &v7) )
  {
    v6 = (char *)v7;
    *(_DWORD *)v7 = v5;
    *(_QWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 1) = 140;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
    memmove(v6 + 12, *((const void **)this + 7), *((_QWORD *)this + 10) * *((_QWORD *)this + 11));
    *((_DWORD *)this + 4) |= 0x20u;
    return 1;
  }
  return 0;
}
