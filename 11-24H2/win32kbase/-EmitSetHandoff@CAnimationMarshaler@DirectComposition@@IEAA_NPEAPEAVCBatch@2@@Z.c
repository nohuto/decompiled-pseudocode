/*
 * XREFs of ?EmitSetHandoff@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14010C378
 * Callers:
 *     ?EmitUpdateCommands@CAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x14010C0B0 (-EmitUpdateCommands@CAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CAnimationMarshaler::EmitSetHandoff(
        DirectComposition::CAnimationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // edi
  char *v5; // rdx
  __int64 v6; // rax
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( !*((_DWORD *)this + 39) || (*((_DWORD *)this + 8) & 0x800) != 0 )
    return 1;
  v7 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x3CuLL, &v7) )
  {
    v5 = (char *)v7;
    *(_DWORD *)v7 = 60;
    *(_OWORD *)(v5 + 4) = 0LL;
    *(_OWORD *)(v5 + 20) = 0LL;
    *(_OWORD *)(v5 + 36) = 0LL;
    *(_QWORD *)(v5 + 52) = 0LL;
    *((_DWORD *)v5 + 1) = 5;
    *((_DWORD *)v5 + 2) = *((_DWORD *)this + 12);
    *((_DWORD *)v5 + 3) = *((_DWORD *)this + 39);
    *(_QWORD *)(v5 + 20) = *((_QWORD *)this + 20);
    v6 = *((_QWORD *)this + 21);
    if ( v6 )
      v2 = *(_DWORD *)(v6 + 48);
    *((_DWORD *)v5 + 7) = v2;
    *((_DWORD *)v5 + 8) = *((_DWORD *)this + 44);
    v5[36] = *((_BYTE *)this + 200) & 1;
    *(_QWORD *)(v5 + 44) = *((_QWORD *)this + 23);
    *(_QWORD *)(v5 + 52) = *((_QWORD *)this + 24);
    *((_DWORD *)this + 8) |= 0x800u;
    return 1;
  }
  return 0;
}
