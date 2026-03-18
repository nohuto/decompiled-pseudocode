/*
 * XREFs of ?EmitUpdateCommands@CSceneNodeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140228910
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?Marshal@?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0IO@$0EA@$0CGB@$0CGC@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x140229890 (-Marshal@-$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0IO@$0EA@$0CGB@$0CGC@.c)
 *     ?Marshal@?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0JF@$0CA@$0CFP@$0CGA@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x1402298C0 (-Marshal@-$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0JF@$0CA@$0CFP@$0CGA@.c)
 */

bool __fastcall DirectComposition::CSceneNodeMarshaler::EmitUpdateCommands(
        DirectComposition::CSceneNodeMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  _DWORD *v3; // rdi
  int v5; // ebx
  char *v6; // rcx
  __int64 v7; // rax
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  v3 = (_DWORD *)((char *)this + 16);
  v5 = 0;
  if ( (unsigned __int8)DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,149,32,607,608>::Marshal(
                          (char *)this + 56,
                          a2,
                          *((unsigned int *)this + 8),
                          (char *)this + 16)
    && (unsigned __int8)DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,142,64,609,610>::Marshal(
                          (char *)this + 80,
                          a2,
                          *((unsigned int *)this + 8),
                          v3) )
  {
    if ( (*v3 & 0x80u) == 0 )
    {
LABEL_8:
      LOBYTE(v5) = 1;
      return v5;
    }
    v9 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v9) )
    {
      v6 = (char *)v9;
      *(_DWORD *)v9 = 16;
      *(_QWORD *)(v6 + 4) = 0LL;
      *((_DWORD *)v6 + 3) = 0;
      *((_DWORD *)v6 + 1) = 611;
      *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
      v7 = *((_QWORD *)this + 13);
      if ( v7 )
        v5 = *(_DWORD *)(v7 + 32);
      *((_DWORD *)v6 + 3) = v5;
      *v3 &= ~0x80u;
      goto LABEL_8;
    }
  }
  return v5;
}
