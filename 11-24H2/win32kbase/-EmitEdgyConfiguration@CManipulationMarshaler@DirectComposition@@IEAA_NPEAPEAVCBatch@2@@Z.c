/*
 * XREFs of ?EmitEdgyConfiguration@CManipulationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140125CAC
 * Callers:
 *     ?EmitUpdateCommands@CManipulationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140125A60 (-EmitUpdateCommands@CManipulationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x14023F500 (memset.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

char __fastcall DirectComposition::CManipulationMarshaler::EmitEdgyConfiguration(
        DirectComposition::CManipulationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // ebx
  bool v3; // zf
  char v5; // bp
  char *v7; // rax
  _DWORD *v8; // rsi
  __int64 v9; // rax
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (*((_DWORD *)this + 4) & 0x100) == 0;
  v5 = 1;
  v10 = 0LL;
  if ( !v3 )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x94uLL, &v10) )
    {
      v7 = (char *)v10;
      *(_DWORD *)v10 = 148;
      v8 = v7 + 4;
      memset(v7 + 4, 0, 0x90uLL);
      *v8 = 242;
      v8[1] = *((_DWORD *)this + 8);
      v9 = *((_QWORD *)this + 35);
      if ( v9 )
        v2 = *(_DWORD *)(v9 + 32);
      v8[2] = v2;
      memmove(v8 + 4, (char *)this + 152, *((unsigned int *)this + 37));
      v8[3] = *((_DWORD *)this + 37);
      *((_DWORD *)this + 4) &= ~0x100u;
    }
    else
    {
      return 0;
    }
  }
  return v5;
}
