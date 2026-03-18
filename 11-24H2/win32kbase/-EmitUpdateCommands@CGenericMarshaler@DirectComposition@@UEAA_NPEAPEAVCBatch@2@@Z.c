/*
 * XREFs of ?EmitUpdateCommands@CGenericMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140239AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_2c1c17c18233082b92a848548c47cd14___ @ 0x1402399A4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_2c1c17c18233082b92a848548c47cd1.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_cf52b1175f102f66240ee89a888274f8___ @ 0x140239A14 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_cf52b1175f102f66240ee89a888274f.c)
 */

char __fastcall DirectComposition::CGenericMarshaler::EmitUpdateCommands(
        DirectComposition::CGenericMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  __int64 *v2; // rbx
  __int64 *v5; // r12
  __int64 v6; // rdi
  char v7; // dl
  void *v8; // rax
  char updated; // al
  void *v10; // rax
  _DWORD *v12; // r14
  char *v13; // rcx
  __int64 v14; // r14
  char *v15; // rcx
  __int64 v16; // r14
  char *v17; // rcx
  void *v18; // [rsp+50h] [rbp+30h] BYREF

  v2 = (__int64 *)*((_QWORD *)this + 7);
  v5 = &v2[*((_QWORD *)this + 8)];
  while ( v2 != v5 )
  {
    v6 = *v2;
    if ( !*(_BYTE *)(*v2 + 5) )
      goto LABEL_28;
    v7 = *(_BYTE *)(v6 + 4);
    if ( !v7 )
    {
      v16 = *v2;
      v18 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v18) )
        return 0;
      v17 = (char *)v18;
      *(_DWORD *)v18 = 28;
      *(_OWORD *)(v17 + 4) = 0LL;
      *(_QWORD *)(v17 + 20) = 0LL;
      *((_DWORD *)v17 + 1) = 340;
      *((_DWORD *)v17 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v17 + 3) = *(_DWORD *)v16;
      *(_QWORD *)(v17 + 20) = *(_QWORD *)(v16 + 8);
      goto LABEL_27;
    }
    switch ( *(_BYTE *)(v6 + 4) )
    {
      case 1:
        v14 = 0LL;
        if ( v7 == 1 )
          v14 = *v2;
        v18 = 0LL;
        if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v18) )
          return 0;
        v15 = (char *)v18;
        *(_DWORD *)v18 = 16;
        *(_QWORD *)(v15 + 4) = 0LL;
        *((_DWORD *)v15 + 3) = 0;
        *((_DWORD *)v15 + 1) = 258;
        *((_DWORD *)v15 + 2) = *((_DWORD *)this + 8);
        *((_DWORD *)v15 + 3) = *(_DWORD *)(v14 + 8);
        break;
      case 2:
        v12 = 0LL;
        if ( v7 == 2 )
          v12 = (_DWORD *)*v2;
        v18 = 0LL;
        if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v18) )
          return 0;
        v13 = (char *)v18;
        *(_DWORD *)v18 = 20;
        *(_OWORD *)(v13 + 4) = 0LL;
        *((_DWORD *)v13 + 1) = 338;
        *((_DWORD *)v13 + 2) = *((_DWORD *)this + 8);
        *((_DWORD *)v13 + 3) = *v12;
        *((_DWORD *)v13 + 4) = v12[2];
        break;
      case 3:
        v10 = 0LL;
        if ( v7 == 3 )
          v10 = (void *)*v2;
        v18 = v10;
        updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_cf52b1175f102f66240ee89a888274f8___(
                    (__int64)this,
                    a2,
                    (_DWORD **)&v18);
LABEL_15:
        if ( !updated )
          return 0;
        break;
      case 4:
        v8 = 0LL;
        if ( v7 == 4 )
          v8 = (void *)*v2;
        v18 = v8;
        updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_2c1c17c18233082b92a848548c47cd14___(
                    (__int64)this,
                    a2,
                    (__int64)&v18);
        goto LABEL_15;
    }
LABEL_27:
    *(_BYTE *)(v6 + 5) = 0;
LABEL_28:
    ++v2;
  }
  return 1;
}
