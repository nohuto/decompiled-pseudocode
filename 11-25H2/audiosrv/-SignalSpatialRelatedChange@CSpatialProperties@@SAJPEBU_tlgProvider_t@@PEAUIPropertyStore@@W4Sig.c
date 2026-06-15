/*
 * XREFs of ?SignalSpatialRelatedChange@CSpatialProperties@@SAJPEBU_tlgProvider_t@@PEAUIPropertyStore@@W4SignalingKeySource@@@Z @ 0x1801382E0
 * Callers:
 *     ?Initialize@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z @ 0x1801349D4 (-Initialize@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z.c)
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVEffectPack@@AEBU_tagpropertykey@@PEAUSpatialAudioRelatedGlobalSettings@@PEBUtWAVEFORMATEX@@PEAH@Z @ 0x180135110 (-ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVEffectPack@@AEBU_tagpropertykey@@PEAUSpatial.c)
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@PEAUSpatialAudioRelatedGlobalSettings@@_N@Z @ 0x18013615C (-SetSpatialAudioSettings@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBU.c)
 *     ?UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ @ 0x180144884 (-UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18004C6C0 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSpatialProperties::SignalSpatialRelatedChange(_DWORD *a1, __int64 a2, char a3)
{
  __int64 v4; // rcx
  __int16 v5; // r8
  char v6; // r9
  char v7; // r10
  unsigned int v8; // ebx
  __int16 v10; // [rsp+30h] [rbp-39h] BYREF
  char v11; // [rsp+34h] [rbp-35h] BYREF
  __int16 v12; // [rsp+36h] [rbp-33h] BYREF
  PROPVARIANT pvar[2]; // [rsp+38h] [rbp-31h] BYREF
  __int64 v14; // [rsp+48h] [rbp-21h]
  _BYTE v15[32]; // [rsp+50h] [rbp-19h] BYREF
  __int16 *v16; // [rsp+70h] [rbp+7h]
  __int64 v17; // [rsp+78h] [rbp+Fh]
  __int16 *v18; // [rsp+80h] [rbp+17h]
  __int64 v19; // [rsp+88h] [rbp+1Fh]
  char *v20; // [rsp+90h] [rbp+27h]
  __int64 v21; // [rsp+98h] [rbp+2Fh]

  LOBYTE(v10) = a3;
  HIBYTE(v10) = byte_1801D0928++;
  *(_OWORD *)pvar = 0LL;
  v14 = 0LL;
  LOWORD(pvar[0]) = 2;
  LOWORD(pvar[1]) = v10;
  if ( *a1 > 4u && tlgKeywordOn((__int64)a1, 16LL) )
  {
    v11 = v6;
    LOBYTE(v10) = v7;
    v12 = v5;
    v20 = &v11;
    v21 = 1LL;
    v18 = &v10;
    v19 = 1LL;
    v16 = &v12;
    v17 = 2LL;
    tlgWriteTransfer_EtwEventWriteTransfer(v4, byte_1801A738A, 0LL, 0LL, 5, (__int64)v15);
  }
  v8 = (*(__int64 (__fastcall **)(__int64, const struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)a2 + 48LL))(
         a2,
         &PKEY_SpatialAudio_Signaling_Key,
         pvar);
  PropVariantClear(pvar);
  return v8;
}
