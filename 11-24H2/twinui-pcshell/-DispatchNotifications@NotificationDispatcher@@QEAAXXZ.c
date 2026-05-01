/*
 * XREFs of ?DispatchNotifications@NotificationDispatcher@@QEAAXXZ @ 0x180087264
 * Callers:
 *     ?FlushChangeNotifications@CApplicationViewManager@@UEAAJXZ @ 0x18030D710 (-FlushChangeNotifications@CApplicationViewManager@@UEAAJXZ.c)
 *     ?FlushChangeNotifications@ApplicationViewManagerVisibilityDebouncer@@UEAAJXZ @ 0x18030EF50 (-FlushChangeNotifications@ApplicationViewManagerVisibilityDebouncer@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall NotificationDispatcher::DispatchNotifications(NotificationDispatcher *this)
{
  RTL_SRWLOCK *v2; // rsi
  _QWORD *v3; // rdi
  __int64 v4; // rbp
  _QWORD *v5; // r15
  _QWORD *i; // r14
  __int64 *v7; // rbx

  if ( !*((_BYTE *)this + 88) )
  {
    *((_BYTE *)this + 88) = 1;
    v2 = (RTL_SRWLOCK *)((char *)this + 80);
    AcquireSRWLockExclusive((PSRWLOCK)this + 10);
    v3 = (_QWORD *)*((_QWORD *)this + 6);
    v4 = *((_QWORD *)this + 7);
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    v5 = &v3[v4];
    for ( i = v3; i != v5; ++i )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*i + 24LL))(*i, 0LL);
    *((_BYTE *)this + 88) = 0;
    AcquireSRWLockShared(v2);
    if ( *((_QWORD *)this + 7) )
      PostMessageW(*((HWND *)this + 5), 0x401u, 0LL, 0LL);
    if ( v2 )
      ReleaseSRWLockShared(v2);
    if ( v3 )
    {
      if ( v4 )
      {
        v7 = v3;
        do
        {
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v7++);
          --v4;
        }
        while ( v4 );
      }
      CoTaskMemFree(v3);
    }
  }
}
