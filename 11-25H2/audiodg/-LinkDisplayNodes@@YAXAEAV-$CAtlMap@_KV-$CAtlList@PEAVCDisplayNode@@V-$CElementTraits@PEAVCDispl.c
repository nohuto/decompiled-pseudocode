/*
 * XREFs of ?LinkDisplayNodes@@YAXAEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@0@Z @ 0x14006AB44
 * Callers:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400298F4 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAAEAPEAVCDisplayNode@@AEAPEAU__POSITION@@@Z @ 0x140037264 (-GetNext@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?GetNode@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@AEBAPEAVCNode@12@_KAEAI1AEAPEAV312@@Z @ 0x14006A8D0 (-GetNode@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@AT.c)
 *     ?LinkToLeftDisplayNode@CDisplayNode@@QEAAJPEAV1@@Z @ 0x14006AC70 (-LinkToLeftDisplayNode@CDisplayNode@@QEAAJPEAV1@@Z.c)
 */

void __fastcall LinkDisplayNodes(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // r8
  _DWORD *v5; // rsi
  __int64 v6; // rbx
  __int64 *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 Node; // r15
  _QWORD *v11; // rcx
  struct CDisplayNode *v12; // rbp
  CDisplayNode **Next; // rax
  _QWORD *v14; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v15; // [rsp+80h] [rbp+18h] BYREF
  __int64 v16; // [rsp+88h] [rbp+20h] BYREF

  if ( a1[1] )
  {
    v4 = 0LL;
    v5 = a1 + 2;
    while ( (unsigned int)v4 < *v5 )
    {
      if ( *(_QWORD *)(*a1 + 8 * v4) )
      {
        _mm_lfence();
        v6 = *(_QWORD *)(*a1 + 8 * v4);
        while ( v6 )
        {
          v7 = (__int64 *)v6;
          if ( *(_QWORD *)(v6 + 56) )
          {
            v6 = *(_QWORD *)(v6 + 56);
          }
          else
          {
            LODWORD(v8) = *(_DWORD *)(v6 + 64) % *v5;
            do
            {
              v8 = (unsigned int)(v8 + 1);
              v6 = 0LL;
              if ( (unsigned int)v8 >= *v5 )
                break;
              v6 = *(_QWORD *)(*a1 + 8 * v8);
            }
            while ( !v6 );
          }
          v9 = *v7;
          LODWORD(v15) = 0;
          LODWORD(v14) = 0;
          Node = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::GetNode(
                   a2,
                   v9,
                   &v15,
                   &v14,
                   &v16);
          if ( Node )
          {
            v11 = (_QWORD *)v7[1];
            v15 = v11;
            while ( v15 )
            {
              v12 = (struct CDisplayNode *)*ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::GetNext(
                                              (__int64)v11,
                                              &v15);
              v14 = *(_QWORD **)(Node + 8);
              while ( v14 )
              {
                Next = (CDisplayNode **)ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::GetNext(
                                          (__int64)v11,
                                          &v14);
                CDisplayNode::LinkToLeftDisplayNode(*Next, v12);
              }
            }
          }
        }
        return;
      }
      v4 = (unsigned int)(v4 + 1);
    }
  }
}
