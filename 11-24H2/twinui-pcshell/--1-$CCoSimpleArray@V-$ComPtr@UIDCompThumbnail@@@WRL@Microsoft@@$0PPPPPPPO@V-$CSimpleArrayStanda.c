/*
 * XREFs of ??1?$CCoSimpleArray@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@@@QEAA@XZ @ 0x1802CEE28
 * Callers:
 *     _VirtualDesktopGestureWindow::VirtualDesktopGestureWindow_::_1_::dtor$5 @ 0x1806F2C29 (_VirtualDesktopGestureWindow--VirtualDesktopGestureWindow_--_1_--dtor$5.c)
 *     _VirtualDesktopGestureWindow::VirtualDesktopGestureWindow_::_1_::dtor$6 @ 0x1806F2C3F (_VirtualDesktopGestureWindow--VirtualDesktopGestureWindow_--_1_--dtor$6.c)
 *     _VirtualDesktopGestureWindow::VirtualDesktopGestureWindow_::_1_::dtor$7 @ 0x1806F2C55 (_VirtualDesktopGestureWindow--VirtualDesktopGestureWindow_--_1_--dtor$7.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CCoSimpleArray<Microsoft::WRL::ComPtr<IDCompThumbnail>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IDCompThumbnail>>>::~CCoSimpleArray<Microsoft::WRL::ComPtr<IDCompThumbnail>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IDCompThumbnail>>>(
        __int64 a1)
{
  CTSimpleArray<Microsoft::WRL::ComPtr<IDCompThumbnail>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IDCompThumbnail>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IDCompThumbnail>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IDCompThumbnail>>>::RemoveAll(a1);
}
