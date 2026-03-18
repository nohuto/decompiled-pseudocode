/*
 * XREFs of ?EmitUpdateCommands@CGdiSpriteBitmapMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1400F26B0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?Marshal@?$CMarshaledArray@UtagRECT@@$0GEGHEDEE@$0CA@$0CAI@$0CAJ@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x140229700 (-Marshal@-$CMarshaledArray@UtagRECT@@$0GEGHEDEE@$0CA@$0CAI@$0CAJ@@DirectComposition@@QEAA_NPEAPE.c)
 */

char __fastcall DirectComposition::CGdiSpriteBitmapMarshaler::EmitUpdateCommands(
        DirectComposition::CGdiSpriteBitmapMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int *v3; // rdi
  char v5; // bl
  int v6; // eax
  char *v7; // rcx
  char *v9; // rcx
  char *v10; // rcx
  char *v11; // rcx
  void *v12; // [rsp+50h] [rbp+30h] BYREF

  v3 = (int *)((char *)this + 16);
  v5 = 0;
  if ( (unsigned __int8)DirectComposition::CMarshaledArray<tagRECT,1684489028,32,520,521>::Marshal(
                          (char *)this + 56,
                          a2,
                          *((unsigned int *)this + 8),
                          (char *)this + 16) )
  {
    v6 = *v3;
    if ( (*v3 & 0x40) != 0 )
    {
      v12 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v12) )
        return v5;
      v9 = (char *)v12;
      *(_DWORD *)v12 = 16;
      *(_QWORD *)(v9 + 4) = 0LL;
      *((_DWORD *)v9 + 3) = 0;
      *((_DWORD *)v9 + 1) = 522;
      *((_DWORD *)v9 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v9 + 3) = *((_DWORD *)this + 20);
      *v3 &= ~0x40u;
      v6 = *v3;
    }
    if ( (v6 & 0x80u) != 0 )
    {
      v12 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v12) )
        return v5;
      v11 = (char *)v12;
      *(_DWORD *)v12 = 16;
      *(_QWORD *)(v11 + 4) = 0LL;
      *((_DWORD *)v11 + 3) = 0;
      *((_DWORD *)v11 + 1) = 523;
      *((_DWORD *)v11 + 2) = *((_DWORD *)this + 8);
      v11[12] = *((_BYTE *)this + 84);
      *v3 &= ~0x80u;
      v6 = *v3;
    }
    if ( (v6 & 0x100) != 0 )
    {
      v12 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v12) )
        return v5;
      v10 = (char *)v12;
      *(_DWORD *)v12 = 20;
      *(_OWORD *)(v10 + 4) = 0LL;
      *((_DWORD *)v10 + 1) = 524;
      *((_DWORD *)v10 + 2) = *((_DWORD *)this + 8);
      *(_QWORD *)(v10 + 12) = *((_QWORD *)this + 11);
      *v3 &= ~0x100u;
      v6 = *v3;
    }
    if ( (v6 & 0x200) == 0 )
      return 1;
    v12 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v12) )
    {
      v7 = (char *)v12;
      *(_DWORD *)v12 = 28;
      *(_OWORD *)(v7 + 4) = 0LL;
      *(_QWORD *)(v7 + 20) = 0LL;
      *((_DWORD *)v7 + 1) = 525;
      *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
      *(_OWORD *)(v7 + 12) = *((_OWORD *)this + 6);
      *v3 &= ~0x200u;
      return 1;
    }
  }
  return v5;
}
