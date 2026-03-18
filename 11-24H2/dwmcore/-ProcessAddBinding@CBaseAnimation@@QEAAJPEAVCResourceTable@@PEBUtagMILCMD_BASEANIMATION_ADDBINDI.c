/*
 * XREFs of ?ProcessAddBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEANIMATION_ADDBINDING@@@Z @ 0x1800E93A8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001C330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800E9B3C (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBaseAnimation::ProcessAddBinding(
        CBaseAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_BASEANIMATION_ADDBINDING *a3)
{
  struct CResource *ResourceWithoutType; // rax
  __int64 v5; // r9
  struct CResource *v6; // rsi
  unsigned int v7; // eax
  unsigned int v8; // edx
  int v9; // edi
  unsigned int v10; // ebx
  int v11; // eax
  unsigned int v13; // eax
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF

  HIDWORD(v14) = 0;
  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v6 = ResourceWithoutType;
  if ( !ResourceWithoutType )
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x1Cu, 0LL);
    return v10;
  }
  *(_QWORD *)&v14 = ResourceWithoutType;
  DWORD2(v14) = *(_DWORD *)(v5 + 12);
  v7 = *((_DWORD *)this + 26);
  v8 = v7 + 1;
  if ( v7 + 1 < v7 )
  {
    v10 = -2147024362;
    v13 = 181;
    v9 = -2147024362;
    goto LABEL_10;
  }
  if ( v8 > *((_DWORD *)this + 25) )
  {
    v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 80, 16, 1, &v14);
    v10 = v9;
    if ( v9 >= 0 )
      goto LABEL_5;
    v13 = 192;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, v13, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x23u, 0LL);
    return v10;
  }
  *(_OWORD *)(*((_QWORD *)this + 10) + 16LL * *((unsigned int *)this + 26)) = v14;
  *((_DWORD *)this + 26) = v8;
LABEL_5:
  (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v6 + 8LL))(v6);
  v11 = (*(__int64 (__fastcall **)(CBaseAnimation *, __int128 *))(*(_QWORD *)this + 184LL))(this, &v14);
  v10 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x29u, 0LL);
  return v10;
}
