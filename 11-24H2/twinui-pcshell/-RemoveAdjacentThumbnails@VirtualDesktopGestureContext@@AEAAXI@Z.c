/*
 * XREFs of ?RemoveAdjacentThumbnails@VirtualDesktopGestureContext@@AEAAXI@Z @ 0x1805620A0
 * Callers:
 *     ?UpdateOffset@VirtualDesktopGestureContext@@QEAAXHH@Z @ 0x18026BCE0 (-UpdateOffset@VirtualDesktopGestureContext@@QEAAXHH@Z.c)
 * Callees:
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x18015220C (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoT.c)
 */

void __fastcall VirtualDesktopGestureContext::RemoveAdjacentThumbnails(VirtualDesktopGestureContext *this, int a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rsi
  __int64 v4; // rdi

  v2 = (_QWORD *)*((_QWORD *)this + 9);
  v3 = &v2[*((_QWORD *)this + 10)];
  if ( v2 != v3 )
  {
    v4 = 64LL;
    if ( a2 != 3 )
      v4 = 96LL;
    do
      CTSimpleArray<Microsoft::WRL::ComPtr<IDCompThumbnail>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IDCompThumbnail>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IDCompThumbnail>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IDCompThumbnail>>>::RemoveAll(v4 + *v2++);
    while ( v2 != v3 );
  }
}
