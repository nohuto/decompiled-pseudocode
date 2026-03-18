/*
 * XREFs of ?AddDisableScanoutToken@CTokenManager@@UEAAJAEAPEAVCDisableScanoutToken@@@Z @ 0x14009A000
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14001C128 (DxgkGetWin32kImportTable.c)
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x14001D238 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?ReleaseTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x14001D270 (-ReleaseTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z @ 0x14001E764 (-AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z.c)
 *     ?CurrentThreadOwnsTokenManagerLock@CTokenManager@@IEBA_NXZ @ 0x14009A2D0 (-CurrentThreadOwnsTokenManagerLock@CTokenManager@@IEBA_NXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CTokenManager::AddDisableScanoutToken(CTokenManager *this, struct CDisableScanoutToken **a2)
{
  char v4; // bp
  int v5; // esi
  __int64 Win32kImportTable; // rax
  void *v7; // rcx
  LONG PreviousState; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  if ( !CTokenManager::CurrentThreadOwnsTokenManagerLock(this) )
  {
    CTokenManager::AcquireTokenManagerLock(this);
    v4 = 1;
  }
  v5 = CTokenManager::AddTokenToQueue(this, *a2);
  if ( v5 < 0 && *a2 )
    (**(void (__fastcall ***)(_QWORD, __int64))*a2)(*a2, 1LL);
  Win32kImportTable = DxgkGetWin32kImportTable();
  (*(void (__fastcall **)(_QWORD, _QWORD))(Win32kImportTable + 344))(
    *(_QWORD *)(*((_QWORD *)*a2 + 6) + 24LL),
    *((_QWORD *)*a2 + 7));
  *a2 = 0LL;
  v7 = (void *)*((_QWORD *)this + 9);
  PreviousState = 0;
  ZwSetEvent(v7, &PreviousState);
  if ( v4 )
    CTokenManager::ReleaseTokenManagerLock(this);
  return (unsigned int)v5;
}
