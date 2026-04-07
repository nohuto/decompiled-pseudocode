/*
 * XREFs of ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x18003F318
 * Callers:
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x18001DB64 (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x18003DB18 (-AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4Window.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x18003F1DC (-RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4Win.c)
 * Callees:
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180025C04 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180025C28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x18003CD84 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18003DE4C (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z @ 0x18007CB30 (-RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::OnEligibleOwnedWindowAddedOrRemoved(
        CSecondaryWindowRepresentation *this,
        struct CWindowData *a2,
        char a3)
{
  unsigned int v3; // ebx
  __int64 i; // rdx
  int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // r8d
  int v11; // esi
  unsigned int v12; // eax
  int v13; // r9d
  void *v14; // [rsp+20h] [rbp-18h]
  unsigned int v15; // [rsp+20h] [rbp-18h]
  CMILRefCountBase *v16; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v16 = 0LL;
  if ( !*((_QWORD *)this + 4) )
    return v3;
  if ( a3 )
  {
    LODWORD(v14) = 100;
    v8 = CSecondaryWindowRepresentation::Create(
           1LL,
           ((unsigned __int64)this + 16) & -(__int64)(this != 0LL),
           (__int64)a2,
           0,
           v14,
           &v16);
    v3 = v8;
    if ( v8 < 0 )
    {
      v15 = 600;
LABEL_24:
      v13 = v8;
      goto LABEL_21;
    }
    v9 = *((_DWORD *)this + 38);
    v10 = v9 + 1;
    if ( v9 + 1 < v9 )
    {
      v3 = -2147024362;
      v12 = 179;
      v11 = -2147024362;
    }
    else
    {
      if ( v10 <= *((_DWORD *)this + 37) )
      {
        *(_QWORD *)(*((_QWORD *)this + 16) + 8LL * v9) = v16;
        *((_DWORD *)this + 38) = v10;
        goto LABEL_14;
      }
      v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 128, 8, 1, &v16);
      v3 = v11;
      if ( v11 >= 0 )
      {
LABEL_14:
        CMILRefCountBase::AddRef(v16);
        v8 = CSecondaryWindowRepresentation::EnsureOwnedWindowVisual(this);
        v3 = v8;
        if ( v8 < 0 )
        {
          v15 = 605;
        }
        else
        {
          v8 = CContainerVisual::AddChild(*((CContainerVisual **)this + 6), *((struct CVisual **)v16 + 6));
          v3 = v8;
          if ( v8 >= 0 )
            goto LABEL_8;
          v15 = 608;
        }
        goto LABEL_24;
      }
      v12 = 190;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, v12, 0LL);
    v13 = v11;
    v15 = 602;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, v15, 0LL);
LABEL_8:
    if ( v16 )
      CBaseObject::Release(v16);
    return v3;
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 38); i = (unsigned int)(i + 1) )
  {
    if ( *(struct CWindowData **)(*(_QWORD *)(*((_QWORD *)this + 16) + 8 * i) + 32LL) == a2 )
    {
      CSecondaryWindowRepresentation::RemoveOwnedWindowRepresentation(this, i);
      goto LABEL_8;
    }
  }
  return v3;
}
