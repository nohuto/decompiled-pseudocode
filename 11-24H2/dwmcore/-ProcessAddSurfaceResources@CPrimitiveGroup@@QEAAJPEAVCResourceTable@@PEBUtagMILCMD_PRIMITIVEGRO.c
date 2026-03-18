/*
 * XREFs of ?ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADDSURFACERESOURCES@@PEBXI@Z @ 0x1801C9E20
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001D7A0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FB20 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ @ 0x1801CA074 (-ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801CA100 (-IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessAddSurfaceResources(
        CPrimitiveGroup *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PRIMITIVEGROUP_ADDSURFACERESOURCES *a3,
        unsigned int *a4)
{
  int v4; // ebx
  unsigned int i; // r12d
  unsigned int v10; // edx
  __int64 v11; // rax
  __int64 v13; // rcx
  void (__fastcall *v14)(CPrimitiveGroup *, __int64); // rax
  CMILRefCountImpl *v15; // rcx
  __int64 (__fastcall *v16)(CMILRefCountImpl *, __int64); // rax
  _QWORD *v18; // rdi
  unsigned int v19; // eax
  unsigned int v20; // r8d
  void (*v21)(void); // rax
  int v22; // ebp
  unsigned int v23; // eax
  int v24; // r9d
  CMILRefCountImpl *v25; // [rsp+80h] [rbp+18h] BYREF
  CMILRefCountImpl **v26; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  for ( i = 0; i < *((_DWORD *)a3 + 2); ++i )
  {
    v10 = *a4;
    if ( !*a4
      || v10 >= *((_DWORD *)a2 + 7)
      || (v11 = *((_QWORD *)a2 + 5), !*(_DWORD *)(*((_DWORD *)a2 + 6) * v10 + v11)) )
    {
      v25 = 0LL;
LABEL_7:
      v4 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0xE3u, 0LL);
      goto LABEL_8;
    }
    v15 = *(CMILRefCountImpl **)(*((_DWORD *)a2 + 6) * v10 + v11 + 8);
    v25 = v15;
    if ( !v15 )
      goto LABEL_7;
    v16 = *(__int64 (__fastcall **)(CMILRefCountImpl *, __int64))(*(_QWORD *)v15 + 64LL);
    if ( !((char *)v16 == (char *)CCompositionSurfaceBitmap::IsOfType
         ? CCompositionSurfaceBitmap::IsOfType(v15, 42LL)
         : (unsigned __int8)v16(v15, 42LL)) )
      goto LABEL_7;
    v18 = (_QWORD *)((char *)this + 136);
    v19 = *((_DWORD *)this + 40);
    v20 = v19 + 1;
    if ( v19 + 1 < v19 )
    {
      v4 = -2147024362;
      v23 = 181;
      v22 = -2147024362;
      v24 = -2147024362;
      goto LABEL_28;
    }
    v4 = 0;
    if ( v20 > *((_DWORD *)this + 39) )
    {
      v26 = &v25;
      v22 = DynArrayImpl<0>::Grow((__int64)this + 136, 8u, 1, 0, (unsigned __int64 *)&v26);
      v4 = v22;
      if ( v22 < 0 )
      {
        v24 = v22;
        v23 = 192;
LABEL_28:
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, v23, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0xEBu, 0LL);
LABEL_8:
        CPrimitiveGroup::ReleaseSurfaceResources(this);
        return (unsigned int)v4;
      }
      *(_QWORD *)((unsigned int)(8 * (*((_DWORD *)this + 40))++) + *v18) = *v26;
    }
    else
    {
      *(_QWORD *)(*v18 + 8LL * v19) = v25;
      *((_DWORD *)this + 40) = v20;
    }
    v21 = *(void (**)(void))(*(_QWORD *)v25 + 8LL);
    if ( (char *)v21 == (char *)CMILRefCountImpl::AddReference )
      CMILRefCountImpl::AddReference(v25);
    else
      v21();
    ++a4;
  }
  v13 = *((_QWORD *)this + 16);
  if ( v13 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    *((_QWORD *)this + 16) = 0LL;
    v14 = *(void (__fastcall **)(CPrimitiveGroup *, __int64))(*(_QWORD *)this + 80LL);
    if ( (char *)v14 == (char *)CResource::NotifyOnChanged )
      CResource::NotifyOnChanged(this, 5LL, 0LL);
    else
      v14(this, 5LL);
  }
  if ( v4 < 0 )
    goto LABEL_8;
  return (unsigned int)v4;
}
