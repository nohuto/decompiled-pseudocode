/*
 * XREFs of ?ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES@@@Z @ 0x180038CA0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800368D0 (-IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800370D0 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800373C0 (-IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ @ 0x180038F2C (-ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ @ 0x18004E490 (-IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FB20 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     McTemplateU0qxqq_EventWriteTransfer @ 0x1802084B4 (McTemplateU0qxqq_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessAddPrimitives(
        CCachedVisualImage **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES *a3)
{
  unsigned int v3; // r9d
  __int64 v7; // rax
  unsigned int v8; // ebp
  __int64 v10; // rsi
  __int64 v11; // rcx
  bool (__fastcall *v12)(__int64, int); // rax
  bool v13; // al
  int v14; // edx
  int v15; // ecx
  __int64 v16; // rsi
  bool (__fastcall *v17)(CPrimitiveGroup *__hidden); // rax
  bool IsEmptyDrawing; // al
  char v19; // r15
  CCachedVisualImage *v20; // rcx
  CCachedVisualImage *v21; // rcx
  int v22; // eax
  void (__fastcall *v23)(CCachedVisualImage **, __int64); // rax
  bool (__fastcall *v24)(CPrimitiveGroup *__hidden); // rax
  char v25; // al
  unsigned int v26; // [rsp+20h] [rbp-28h]

  v3 = *((_DWORD *)a3 + 2);
  if ( !v3
    || v3 >= *((_DWORD *)a2 + 7)
    || (v7 = *((_QWORD *)a2 + 5), !*(_DWORD *)(*((_DWORD *)a2 + 6) * v3 + v7))
    || (v10 = v7 + *((_DWORD *)a2 + 6) * v3, (v11 = *(_QWORD *)(v10 + 8)) == 0)
    || ((v12 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v11 + 64LL), v12 == CKeyframeAnimation::IsOfType)
      ? (v13 = CKeyframeAnimation::IsOfType(v11, 157))
      : v12 != CVisual::IsOfType
      ? (v12 != CSharedSection::IsOfType
       ? (v13 = v12(v11, 157))
       : (v13 = CSharedSection::IsOfType(v11, 157)))
      : (v13 = CVisual::IsOfType(v11, 157)),
        !v13 || (v16 = *(_QWORD *)(v10 + 8)) == 0) )
  {
    v26 = 155;
LABEL_5:
    v8 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, v26, 0LL);
    return v8;
  }
  v8 = 0;
  if ( *((_DWORD *)a3 + 4) < 0x3Cu )
  {
    v26 = 160;
    goto LABEL_5;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
    McTemplateU0qxqq_EventWriteTransfer(
      v15,
      v14,
      *((_DWORD *)a2 + 12),
      (_DWORD)this,
      *((_DWORD *)a3 + 1),
      *((_DWORD *)a3 + 2));
  v17 = (bool (__fastcall *)(CPrimitiveGroup *__hidden))*((_QWORD *)*this + 27);
  if ( v17 == CPrimitiveGroup::IsEmptyDrawing )
    IsEmptyDrawing = CPrimitiveGroup::IsEmptyDrawing((CPrimitiveGroup *)this);
  else
    IsEmptyDrawing = v17((CPrimitiveGroup *)this);
  v19 = IsEmptyDrawing;
  v20 = this[49];
  if ( v20 )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v20);
  this[49] = (CCachedVisualImage *)v16;
  CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v16 + 8));
  v21 = this[16];
  *((_DWORD *)this + 100) = *((_DWORD *)a3 + 4);
  v22 = *((_DWORD *)a3 + 3);
  this[59] = 0LL;
  this[60] = 0LL;
  this[61] = 0LL;
  this[62] = 0LL;
  *((_DWORD *)this + 101) = v22;
  if ( v21 )
  {
    (*(void (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)v21 + 8LL))(v21);
    this[16] = 0LL;
    v23 = (void (__fastcall *)(CCachedVisualImage **, __int64))*((_QWORD *)*this + 10);
    if ( (char *)v23 == (char *)CResource::NotifyOnChanged )
      CResource::NotifyOnChanged(this, 5LL, 0LL);
    else
      v23(this, 5LL);
  }
  CPrimitiveGroup::ResolveSharedMemoryBuffer((CPrimitiveGroup *)this);
  v24 = (bool (__fastcall *)(CPrimitiveGroup *__hidden))*((_QWORD *)*this + 27);
  if ( v24 == CPrimitiveGroup::IsEmptyDrawing )
    v25 = CPrimitiveGroup::IsEmptyDrawing((CPrimitiveGroup *)this);
  else
    v25 = v24((CPrimitiveGroup *)this);
  if ( v19 != v25 )
    (*((void (__fastcall **)(CCachedVisualImage **, __int64))*this + 10))(this, 3LL);
  return v8;
}
