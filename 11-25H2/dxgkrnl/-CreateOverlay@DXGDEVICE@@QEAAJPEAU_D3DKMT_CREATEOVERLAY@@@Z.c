/*
 * XREFs of ?CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1401B72BC
 * Callers:
 *     DxgkCreateOverlay @ 0x1401E3350 (DxgkCreateOverlay.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x140035C88 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??_GDXGOVERLAY@@QEAAPEAXI@Z @ 0x14006CA1C (--_GDXGOVERLAY@@QEAAPEAXI@Z.c)
 *     ?Initialize@DXGOVERLAY@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1401E290C (-Initialize@DXGOVERLAY@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateOverlay(DXGDEVICE *this, struct _D3DKMT_CREATEOVERLAY *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  DXGOVERLAY *v7; // rbx
  int v8; // esi
  DXGOVERLAY **v9; // rax
  __int64 v10; // rcx

  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4005;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsDeviceLockExclusiveOwner()", 4005LL, 0LL, 0LL, 0LL, 0LL);
  }
  v6 = DXGQUOTAALLOCATOR<256,1265072196>::operator new(56LL, (__int64)a2, a3, a4);
  v7 = (DXGOVERLAY *)v6;
  if ( v6 )
  {
    *(_QWORD *)(v6 + 16) = this;
    *(_OWORD *)v6 = 0LL;
    *(_DWORD *)(v6 + 24) = 0;
    *(_DWORD *)(v6 + 28) = 0;
    *(_DWORD *)(v6 + 32) = -1;
    *(_QWORD *)(v6 + 40) = 0LL;
    v8 = DXGOVERLAY::Initialize((DXGOVERLAY *)v6, a2);
    if ( v8 >= 0 )
    {
      v9 = (DXGOVERLAY **)((char *)this + 512);
      v10 = *((_QWORD *)this + 64);
      if ( *(DXGDEVICE **)(v10 + 8) != (DXGDEVICE *)((char *)this + 512) )
        __fastfail(3u);
      *(_QWORD *)v7 = v10;
      *((_QWORD *)v7 + 1) = v9;
      *(_QWORD *)(v10 + 8) = v7;
      *v9 = v7;
    }
    else
    {
      DXGOVERLAY::`scalar deleting destructor'(v7);
    }
  }
  else
  {
    v8 = -1073741801;
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 4017;
  }
  return (unsigned int)v8;
}
