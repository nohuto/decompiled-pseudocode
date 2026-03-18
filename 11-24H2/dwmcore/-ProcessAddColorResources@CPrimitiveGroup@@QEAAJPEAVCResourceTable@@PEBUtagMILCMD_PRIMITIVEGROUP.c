/*
 * XREFs of ?ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES@@PEBXI@Z @ 0x1801C97B0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001C330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800E9B3C (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180134738 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ @ 0x1801CA14C (-ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x1801CA1C4 (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessAddColorResources(
        CPrimitiveGroup *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES *a3,
        unsigned int *a4)
{
  int v4; // edi
  unsigned int i; // ebp
  struct CResource *ResourceWithoutType; // rax
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // eax
  unsigned int v14; // r8d
  int v15; // eax
  int v16; // r9d
  unsigned int v17; // eax
  struct CResource *v19; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  for ( i = 0; ; ++i )
  {
    if ( i >= *((_DWORD *)a3 + 2) )
    {
      CPrimitiveGroup::ReleasePrimitiveCaches(this, 1);
      v12 = v4;
      if ( v4 >= 0 )
        return v12;
      goto LABEL_18;
    }
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *a4);
    v19 = ResourceWithoutType;
    if ( !ResourceWithoutType
      || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 64LL))(
            ResourceWithoutType,
            117LL) )
    {
      break;
    }
    v11 = CResource::RegisterNotifier(this, v19);
    v12 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x122u, 0LL);
      goto LABEL_18;
    }
    v13 = *((_DWORD *)this + 56);
    v14 = v13 + 1;
    if ( v13 + 1 < v13 )
    {
      v4 = -2147024362;
      v17 = 181;
      v12 = -2147024362;
      v16 = -2147024362;
      goto LABEL_13;
    }
    v4 = 0;
    if ( v14 > *((_DWORD *)this + 55) )
    {
      v15 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 200, 8, 1, &v19);
      v4 = v15;
      v12 = v15;
      if ( v15 < 0 )
      {
        v16 = v15;
        v17 = 192;
LABEL_13:
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, v17, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x124u, 0LL);
        CResource::UnRegisterNotifierInternal(this, v19);
        goto LABEL_18;
      }
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 25) + 8LL * v13) = v19;
      *((_DWORD *)this + 56) = v14;
    }
    ++a4;
  }
  v12 = -2003303421;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x11Au, 0LL);
LABEL_18:
  CPrimitiveGroup::ReleaseColorResources(this);
  return v12;
}
