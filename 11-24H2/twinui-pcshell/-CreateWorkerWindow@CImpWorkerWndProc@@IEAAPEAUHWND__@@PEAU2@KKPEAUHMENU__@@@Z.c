/*
 * XREFs of ?CreateWorkerWindow@CImpWorkerWndProc@@IEAAPEAUHWND__@@PEAU2@KKPEAUHMENU__@@@Z @ 0x1804B920C
 * Callers:
 *     ?RuntimeClassInitialize@AltEscHotkeyHandler@@QEAAJPEAUIWeakReference@WeakReference@@@Z @ 0x1804B967C (-RuntimeClassInitialize@AltEscHotkeyHandler@@QEAAJPEAUIWeakReference@WeakReference@@@Z.c)
 * Callees:
 *     ?AddWndRef@CImpWorkerWndProc@@AEAAXXZ @ 0x1804B912C (-AddWndRef@CImpWorkerWndProc@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_2136437049@@@details@wil@@QEAA_NXZ @ 0x1804B9744 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_2136437049@@@details@wil@@QEAA_NX.c)
 */

HWND __fastcall CImpWorkerWndProc::CreateWorkerWindow(HANDLE *this, HWND a2)
{
  char *v3; // rdi
  HWND result; // rax
  __int64 v5; // rax

  v3 = (char *)(this + 1);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_2136437049>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_2136437049>::GetImpl'::`2'::impl) )
  {
    result = *(HWND *)v3;
    if ( !*(_QWORD *)v3 )
    {
      if ( *((_BYTE *)this + 16) )
      {
        if ( this[4] )
        {
          if ( this[3] )
          {
            v5 = SHCreateWorkerWindowW(CImpWorkerWndProc::s_WndProc, -3LL, 0LL, 0LL, 0LL, this);
            *(_QWORD *)v3 = v5;
            if ( v5 )
            {
              if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_2136437049>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_2136437049>::GetImpl'::`2'::impl) )
              {
                if ( *((_BYTE *)this + 16) )
                  CImpWorkerWndProc::AddWndRef(this);
              }
            }
          }
        }
      }
      else
      {
        *(_QWORD *)v3 = SHCreateWorkerWindowW(CImpWorkerWndProc::s_WndProc, -3LL, 0LL, 0LL, 0LL, this);
      }
      return *(HWND *)v3;
    }
  }
  else
  {
    result = (HWND)SHCreateWorkerWindowW(CImpWorkerWndProc::s_WndProc, -3LL, 0LL, 0LL, 0LL, this);
    *(_QWORD *)v3 = result;
  }
  return result;
}
