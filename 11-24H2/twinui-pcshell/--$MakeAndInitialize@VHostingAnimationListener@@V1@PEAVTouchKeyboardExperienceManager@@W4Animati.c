/*
 * XREFs of ??$MakeAndInitialize@VHostingAnimationListener@@V1@PEAVTouchKeyboardExperienceManager@@W4AnimationType@@@Details@WRL@Microsoft@@YAJPEAPEAVHostingAnimationListener@@$$QEAPEAVTouchKeyboardExperienceManager@@$$QEAW4AnimationType@@@Z @ 0x1800619D8
 * Callers:
 *     ??0TouchKeyboardExperienceManager@@QEAA@XZ @ 0x18046BE40 (--0TouchKeyboardExperienceManager@@QEAA@XZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180061950 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIImmersiveWindowM.c)
 *     ??0HostingAnimationListener@@QEAA@XZ @ 0x180061A80 (--0HostingAnimationListener@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<HostingAnimationListener,HostingAnimationListener,TouchKeyboardExperienceManager *,enum AnimationType>(
        HostingAnimationListener **a1,
        _QWORD *a2,
        unsigned int *a3)
{
  HostingAnimationListener *v6; // rax
  HostingAnimationListener *v7; // r8
  volatile int *v8; // rdx
  signed __int64 v9; // rax
  signed __int64 v10; // rtt

  *a1 = 0LL;
  v6 = (HostingAnimationListener *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v6 )
    return 2147942414LL;
  v7 = HostingAnimationListener::HostingAnimationListener(v6);
  v8 = (volatile int *)*a3;
  *((_QWORD *)v7 + 5) = *a2;
  *((_DWORD *)v7 + 12) = (_DWORD)v8;
  v9 = *((_QWORD *)v7 + 4);
  while ( v9 >= 0 )
  {
    if ( (_DWORD)v9 != 0x7FFFFFFF )
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange64((volatile signed __int64 *)v7 + 4, v9 + 1, v9);
      if ( v10 != v9 )
        continue;
    }
    goto LABEL_6;
  }
  Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v9 + 16), v8);
LABEL_6:
  *a1 = v7;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IImmersiveWindowMessageNotification>::Release((__int64)v7);
  return 0LL;
}
