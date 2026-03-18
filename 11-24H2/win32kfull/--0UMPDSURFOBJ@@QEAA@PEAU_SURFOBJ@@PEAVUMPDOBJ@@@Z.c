/*
 * XREFs of ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400DBCE4
 * Callers:
 *     NtGdiEngBitBlt @ 0x1400DB6D0 (NtGdiEngBitBlt.c)
 *     NtGdiEngCheckAbort @ 0x1400DD2C0 (NtGdiEngCheckAbort.c)
 *     NtGdiEngEraseSurface @ 0x1401DA1D0 (NtGdiEngEraseSurface.c)
 *     NtGdiEngFillPath @ 0x1402074A0 (NtGdiEngFillPath.c)
 *     NtGdiEngStretchBlt @ 0x140261C70 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x140262120 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStrokePath @ 0x140262710 (NtGdiEngStrokePath.c)
 *     NtGdiEngTextOut @ 0x140262A80 (NtGdiEngTextOut.c)
 *     NtGdiEngAlphaBlend @ 0x140338D50 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngCopyBits @ 0x140339030 (NtGdiEngCopyBits.c)
 *     NtGdiEngGradientFill @ 0x140339420 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x140339840 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x140339AB0 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x140339C60 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStrokeAndFillPath @ 0x14033A020 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngTransparentBlt @ 0x14033A400 (NtGdiEngTransparentBlt.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x14033ADB0 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x140007028 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?ValidateAndReferencePDEV@@YA_NPEAUHDEV__@@@Z @ 0x1400DC978 (-ValidateAndReferencePDEV@@YA_NPEAUHDEV__@@@Z.c)
 *     _tlgKeywordOn @ 0x14017A844 (_tlgKeywordOn.c)
 *     ?GetLockedSURFOBJ@UMPDSURFOBJ@@AEAAPEAU_SURFOBJ@@PEAU2@@Z @ 0x1401E4998 (-GetLockedSURFOBJ@UMPDSURFOBJ@@AEAAPEAU_SURFOBJ@@PEAU2@@Z.c)
 */

UMPDSURFOBJ *__fastcall UMPDSURFOBJ::UMPDSURFOBJ(
        UMPDSURFOBJ *this,
        struct _SURFOBJ *a2,
        struct _SURFOBJ **a3,
        __int64 a4)
{
  struct _SURFOBJ *LockedSURFOBJ; // rax
  int v6; // ecx
  HDEV hdev; // rdi
  bool v8; // al
  __int64 v10; // rcx

  *((_QWORD *)this + 2) = 0LL;
  LockedSURFOBJ = a2;
  *((_DWORD *)this + 14) = 0;
  *(_QWORD *)this = a2;
  if ( !a2
    || (a2 == a3[11]
      ? (LockedSURFOBJ = a3[10])
      : a2 == a3[13]
      ? (LockedSURFOBJ = a3[12])
      : a2 == a3[15]
      ? (LockedSURFOBJ = a3[14])
      : (LockedSURFOBJ = 0LL),
        (*(_QWORD *)this = LockedSURFOBJ) != 0LL
     || (LockedSURFOBJ = UMPDSURFOBJ::GetLockedSURFOBJ(this, a2), *(_QWORD *)this = LockedSURFOBJ,
                                                                  v6 = 1,
                                                                  !LockedSURFOBJ)) )
  {
    v6 = 0;
  }
  *((_DWORD *)this + 2) = v6;
  if ( LockedSURFOBJ )
  {
    hdev = LockedSURFOBJ->hdev;
    if ( hdev )
      v8 = ValidateAndReferencePDEV(LockedSURFOBJ->hdev);
    else
      v8 = LockedSURFOBJ->iType == 0;
    if ( v8 )
    {
      *((_QWORD *)this + 2) = hdev;
      if ( !*((_DWORD *)this + 14) )
      {
        PushThreadGuardedObject((char *)this + 24, this, UMPDSURFOBJ::Cleanup);
        *((_DWORD *)this + 14) = 1;
      }
    }
    else
    {
      if ( *((_DWORD *)this + 2) )
      {
        EngUnlockSurface(*(SURFOBJ **)this);
        *((_DWORD *)this + 2) = 0;
      }
      *(_QWORD *)this = 0LL;
      if ( (unsigned int)dword_140398BB8 > 5
        && (unsigned __int8)tlgKeywordOn(&dword_140398BB8, 0x400000000000LL, a3, a4) )
      {
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v10,
          (__int64)&unk_14036A13A);
      }
    }
  }
  return this;
}
