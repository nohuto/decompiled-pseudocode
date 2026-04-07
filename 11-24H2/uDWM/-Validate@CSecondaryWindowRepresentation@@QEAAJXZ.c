/*
 * XREFs of ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18003E46C
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180008B44 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x18001F970 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18003E46C (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x1800792A8 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x18008F480 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x1800C53D0 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ @ 0x18003E0D8 (-UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18003E46C (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?UpdateAlpha@CSecondaryWindowRepresentation@@AEAAJXZ @ 0x18003E59C (-UpdateAlpha@CSecondaryWindowRepresentation@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::Validate(CSecondaryWindowRepresentation *this)
{
  unsigned int *v1; // rsi
  unsigned int v3; // ecx
  unsigned int v4; // ebx
  unsigned int *v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // eax
  int v9; // eax
  int v10; // eax
  int updated; // eax
  __int64 i; // rsi
  int v13; // eax

  v1 = (unsigned int *)((char *)this + 24);
  v3 = *((_DWORD *)this + 6);
  v4 = 0;
  if ( (v3 & 4) != 0 )
  {
    v5 = v1;
    if ( *((_QWORD *)this + 6) )
    {
      updated = CSecondaryWindowRepresentation::UpdateOwnedWindowVisualTreeRootVisual(this);
      v4 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x2A8u, 0LL);
        return v4;
      }
      v5 = (unsigned int *)((char *)this + 24);
    }
    *v1 &= ~4u;
    v3 = *v1;
    v1 = v5;
  }
  if ( (v3 & 0x10) != 0 )
  {
    v9 = CSecondaryWindowRepresentation::UpdateAlpha(this);
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x2B0u, 0LL);
      return v4;
    }
    *v1 &= ~0x10u;
  }
  v6 = *((_QWORD *)this + 6);
  if ( v6 && (v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 48LL))(v6), v4 = v10, v10 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x2B9u, 0LL);
  }
  else
  {
    v7 = *v1 & 0xFFFFFFF7;
    *v1 = v7;
    if ( (v7 & 1) != 0 )
    {
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        if ( (unsigned int)i >= *((_DWORD *)this + 38) )
        {
          *((_DWORD *)this + 6) &= ~1u;
          return v4;
        }
        v13 = CSecondaryWindowRepresentation::Validate(*(CSecondaryWindowRepresentation **)(*((_QWORD *)this + 16)
                                                                                          + 8 * i));
        v4 = v13;
        if ( v13 < 0 )
          break;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x2C5u, 0LL);
    }
  }
  return v4;
}
