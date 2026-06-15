/*
 * XREFs of ?GetDisplayNode@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@PEAVCProcessNode@@PEAPEAVCDisplayNode@@@Z @ 0x14006A75C
 * Callers:
 *     ?DumpDeviceGraph@@YAJPEBVCPipeInstance@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x14006A078 (-DumpDeviceGraph@@YAJPEBVCPipeInstance@@AEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVC.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAAEAPEAVCDisplayNode@@AEAPEAU__POSITION@@@Z @ 0x140036F64 (-GetNext@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058D58 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_GCDisplayNode@@QEAAPEAXI@Z @ 0x140069D78 (--_GCDisplayNode@@QEAAPEAXI@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCDisplayNode@@@Z @ 0x140069DA4 (-AddHead@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetDisplayNode(struct ATL::CAtlPlex **a1, struct ATL::CAtlPlex *a2, CDisplayNode **a3)
{
  CDisplayNode **v3; // r14
  struct ATL::CAtlPlex **v5; // r12
  unsigned int v6; // esi
  struct ATL::CAtlPlex *v7; // rax
  struct ATL::CAtlPlex ***Next; // rax
  CDisplayNode *v9; // rax
  CDisplayNode *v10; // rbx
  __int64 result; // rax
  ATL::CAtlException *v12; // rbx
  ATL::CAtlException *v13; // [rsp+20h] [rbp-38h] BYREF
  struct ATL::CAtlPlex *i; // [rsp+60h] [rbp+8h] BYREF
  CDisplayNode **v15; // [rsp+70h] [rbp+18h]
  CDisplayNode *v16; // [rsp+78h] [rbp+20h]

  v15 = a3;
  v3 = a3;
  v5 = a1;
  v6 = 0;
  v7 = *a1;
  for ( i = *a1; ; v7 = i )
  {
    if ( !v7 )
    {
      *v3 = 0LL;
      goto LABEL_8;
    }
    Next = (struct ATL::CAtlPlex ***)ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::GetNext(
                                       (__int64)a1,
                                       (_QWORD **)&i);
    a1 = *Next;
    if ( **Next == a2 )
      break;
  }
  *v3 = (CDisplayNode *)a1;
  if ( a1 )
    goto LABEL_16;
LABEL_8:
  v9 = (CDisplayNode *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  i = v9;
  if ( v9 )
  {
    *(_QWORD *)v9 = a2;
    *((_QWORD *)v9 + 1) = 0LL;
    *((_QWORD *)v9 + 2) = 0LL;
    *((_QWORD *)v9 + 3) = 0LL;
    *((_QWORD *)v9 + 4) = 0LL;
    *((_QWORD *)v9 + 5) = 0LL;
    *((_DWORD *)v9 + 12) = 10;
    *((_QWORD *)v9 + 7) = 0LL;
    *((_QWORD *)v9 + 8) = 0LL;
    *((_QWORD *)v9 + 9) = 0LL;
    *((_QWORD *)v9 + 10) = 0LL;
    *((_QWORD *)v9 + 11) = 0LL;
    *((_DWORD *)v9 + 24) = 10;
  }
  else
  {
    v10 = 0LL;
  }
  try
  {
    v16 = v10;
    i = v10;
    v6 = 0;
    ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::AddHead(v5, &i);
  }
  catch ( ATL::CAtlException *v13 )
  {
    v12 = v13;
    if ( *(_DWORD *)v13 == -1073741571 )
      _o__resetstkoflw();
    LODWORD(i) = *(_DWORD *)v12;
    v6 = (unsigned int)i;
    if ( (int)i >= 0 )
    {
      v3 = v15;
      v10 = v16;
      goto LABEL_15;
    }
    if ( v16 )
      CDisplayNode::`scalar deleting destructor'(v16);
LABEL_16:
    result = v6;
  }
LABEL_15:
  *v3 = v10;
  goto LABEL_16;
}
