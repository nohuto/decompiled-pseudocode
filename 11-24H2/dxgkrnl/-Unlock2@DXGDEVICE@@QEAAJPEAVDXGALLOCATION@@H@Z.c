/*
 * XREFs of ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x140339948
 * Callers:
 *     DxgkLock2 @ 0x1402A3430 (DxgkLock2.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x140033C28 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x140040510 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1401DD13C (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::Unlock2(DXGDEVICE *this, struct DXGALLOCATION *a2, int a3)
{
  DXGDEVICE *v3; // r9
  int v6; // eax
  unsigned int v7; // edi
  unsigned int v9; // edi
  __int64 v10; // rbp
  unsigned int v11; // edi

  v3 = (DXGDEVICE *)*((_QWORD *)a2 + 1);
  if ( v3 == this )
  {
    if ( !*((_DWORD *)this + 116) )
    {
      v9 = *(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL);
      if ( (v9 & 4) != 0 )
      {
        if ( a3 )
        {
          v10 = *((_QWORD *)this + 237);
          v11 = (v9 >> 6) & 0xF;
          if ( v10 )
          {
            if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this + 237)) )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 1185;
              DxgkLogInternalTriageEvent(
                0LL,
                262146LL,
                0xFFFFFFFFLL,
                L"pDisplayAdapter->IsCoreResourceSharedOwner()",
                1185LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            if ( *((_DWORD *)this + 152) == 1
              && ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v10 + 3120), this, v11)
              && DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)this, v11) == a2 )
            {
              DXGDEVICE::UpdateDodFrontBuffer((ADAPTER_RENDER **)this, a2);
            }
          }
        }
      }
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL)
                                                   + 768LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
           *((_QWORD *)a2 + 3));
    v7 = v6;
    if ( v6 < 0 )
    {
      WdLogSingleEntry3(3LL, this, a2, v6);
      WdLogGlobalForLineNumber = 1204;
    }
  }
  else
  {
    v7 = -1073741811;
    WdLogSingleEntry4(3LL, a2, this, v3, -1073741811LL);
    WdLogGlobalForLineNumber = 1168;
  }
  return v7;
}
