/*
 * XREFs of ?LinkToLeftDisplayNode@CDisplayNode@@QEAAJPEAV1@@Z @ 0x14006AC70
 * Callers:
 *     ?LinkDisplayNodes@@YAXAEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@0@Z @ 0x14006AB44 (-LinkDisplayNodes@@YAXAEAV-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDispl.c)
 * Callees:
 *     ?AddHead@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCDisplayNode@@@Z @ 0x140069E14 (-AddHead@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 */

__int64 __fastcall CDisplayNode::LinkToLeftDisplayNode(struct ATL::CAtlPlex **this, struct CDisplayNode *a2)
{
  unsigned int v2; // ebx
  struct ATL::CAtlPlex **v3; // rdi
  struct CDisplayNode *v4; // rsi
  __int64 result; // rax
  ATL::CAtlException *v7; // rbx
  ATL::CAtlException *v8; // rbx
  ATL::CAtlException *v9; // [rsp+20h] [rbp-28h] BYREF
  ATL::CAtlException *v10; // [rsp+28h] [rbp-20h] BYREF
  struct ATL::CAtlPlex **v11; // [rsp+50h] [rbp+8h] BYREF
  struct CDisplayNode *v12; // [rsp+58h] [rbp+10h] BYREF
  int v13; // [rsp+60h] [rbp+18h]

  v12 = a2;
  v11 = this;
  try
  {
    v4 = a2;
    v3 = this;
    ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::AddHead(this + 1, &v12);
  }
  catch ( ATL::CAtlException *v9 )
  {
    v7 = v9;
    if ( *(_DWORD *)v9 == -1073741571 )
      _o__resetstkoflw();
    v13 = *(_DWORD *)v7;
    v2 = v13;
    if ( v13 >= 0 )
    {
      v3 = v11;
      v4 = v12;
      goto LABEL_17;
    }
LABEL_4:
    result = v2;
  }
LABEL_17:
  try
  {
    v2 = 0;
    v11 = v3;
    ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::AddHead((struct ATL::CAtlPlex **)v4 + 7, &v11);
  }
  catch ( ATL::CAtlException *v10 )
  {
    v8 = v10;
    if ( *(_DWORD *)v10 == -1073741571 )
      _o__resetstkoflw();
    v2 = *(_DWORD *)v8;
    goto LABEL_4;
  }
  goto LABEL_4;
}
