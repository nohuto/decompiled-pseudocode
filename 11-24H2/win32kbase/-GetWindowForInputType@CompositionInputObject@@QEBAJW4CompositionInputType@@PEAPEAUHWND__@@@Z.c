/*
 * XREFs of ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z @ 0x1400470F0
 * Callers:
 *     ?RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1400FFF64 (-RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND.c)
 *     ?SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@KAXAEBU_InputHitTestResult@@@Z @ 0x14011FEC8 (-SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@KAXAEBU_InputHitTestResult@@@Z.c)
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x14018AF58 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 * Callees:
 *     RIMLockShared @ 0x1400410B0 (RIMLockShared.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140047450 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CompositionInputObject::GetWindowForInputType(_QWORD *a1, int a2, _QWORD *a3)
{
  int v6; // ebx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx

  *a3 = 0LL;
  RIMLockShared((__int64)(a1 + 4));
  v6 = a2 - 1;
  if ( v6 )
  {
    v10 = v6 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 != 1 )
          {
            *a3 = 0LL;
            v8 = -1073741811;
            goto LABEL_4;
          }
          v7 = a1[12];
        }
        else
        {
          v7 = a1[11];
        }
      }
      else
      {
        v7 = a1[10];
      }
    }
    else
    {
      v7 = a1[9];
    }
  }
  else
  {
    v7 = a1[8];
  }
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v7 + 32LL))(v7, a3);
LABEL_4:
  CPushLock::ReleaseLock((CPushLock *)(a1 + 4));
  return v8;
}
