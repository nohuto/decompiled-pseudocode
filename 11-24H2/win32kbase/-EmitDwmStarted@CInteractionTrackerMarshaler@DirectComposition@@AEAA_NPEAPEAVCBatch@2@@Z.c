/*
 * XREFs of ?EmitDwmStarted@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140102868
 * Callers:
 *     ?EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140102740 (-EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitDwmStarted(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // di
  char *v5; // rcx
  char v6; // al
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x2000000) == 0 )
  {
    v7 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v7) )
    {
      v5 = (char *)v7;
      *(_DWORD *)v7 = 28;
      *(_OWORD *)(v5 + 4) = 0LL;
      *(_QWORD *)(v5 + 20) = 0LL;
      *((_DWORD *)v5 + 1) = 193;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
      v5[12] = (*((_BYTE *)this + 456) & 4) != 0;
      *((_DWORD *)v5 + 4) = *((_DWORD *)this + 17);
      *((_DWORD *)v5 + 5) = *((_DWORD *)this + 18);
      *((_DWORD *)v5 + 6) = *((_DWORD *)this + 39);
      v6 = *((_BYTE *)this + 456);
      if ( (v6 & 4) != 0 )
        *((_DWORD *)this + 4) &= ~0x4000000u;
      *((_DWORD *)this + 4) |= 0x2000000u;
      *((_BYTE *)this + 456) = v6 & 0xFB;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
