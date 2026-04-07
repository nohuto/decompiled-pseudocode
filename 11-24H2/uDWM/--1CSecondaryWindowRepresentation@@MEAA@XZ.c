/*
 * XREFs of ??1CSecondaryWindowRepresentation@@MEAA@XZ @ 0x18003D43C
 * Callers:
 *     ??_ECSecondaryWindowRepresentation@@MEAAPEAXI@Z @ 0x18003D3F0 (--_ECSecondaryWindowRepresentation@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180026FE0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ReleaseAllResources@CSecondaryWindowRepresentation@@AEAAXXZ @ 0x18003D564 (-ReleaseAllResources@CSecondaryWindowRepresentation@@AEAAXXZ.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x18003D62C (-RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z.c)
 *     ?RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z @ 0x18007CB30 (-RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z.c)
 *     McTemplateU0pp_EtwEventWriteTransfer @ 0x1800D0C64 (McTemplateU0pp_EtwEventWriteTransfer.c)
 */

void __fastcall CSecondaryWindowRepresentation::~CSecondaryWindowRepresentation(CSecondaryWindowRepresentation *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  unsigned int i; // edi
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r9

  *(_QWORD *)this = &CSecondaryWindowRepresentation::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CSecondaryWindowRepresentation::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  CSecondaryWindowRepresentation::ReleaseAllResources(this);
  v2 = (CBaseObject *)*((_QWORD *)this + 43);
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = (CBaseObject *)*((_QWORD *)this + 51);
  if ( v3 )
    CBaseObject::Release(v3);
  v4 = (CBaseObject *)*((_QWORD *)this + 47);
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = (CBaseObject *)*((_QWORD *)this + 48);
  if ( v5 )
    CBaseObject::Release(v5);
  for ( i = *((_DWORD *)this + 38); i; CSecondaryWindowRepresentation::RemoveOwnedWindowRepresentation(this, i) )
    --i;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
  {
    v9 = *((_QWORD *)this + 4);
    if ( v9 )
      v10 = *(_QWORD *)(v9 + 40);
    else
      v10 = 0LL;
    McTemplateU0pp_EtwEventWriteTransfer(v5, &RemoveSecondaryWindowRepresentation_Destroy, this, v10);
  }
  if ( *((_BYTE *)this + 160) )
    CWindowData::RemoveSecondaryWindowRepresentation(*((CWindowData **)this + 4), this);
  v7 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v7 )
    CBaseObject::Release(v7);
  v8 = (CBaseObject *)*((_QWORD *)this + 7);
  if ( v8 )
    CBaseObject::Release(v8);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 16);
  CBaseObject::~CBaseObject(this);
}
