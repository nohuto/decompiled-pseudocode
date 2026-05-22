/*
 * XREFs of ?SetIsReplayPauseIntervalSupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z @ 0x18018E250
 * Callers:
 *     ??0PenHapticDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18018BC78 (--0PenHapticDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180045270 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800465A0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSetIsReplayPauseIntervalSupported@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAX_N@Z @ 0x18018D020 (-LogSetIsReplayPauseIntervalSupported@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAX_N.c)
 *     ?UpdateIsReplayPauseIntervalSupportedRemoteCacheStatic@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18018EA20 (-UpdateIsReplayPauseIntervalSupportedRemoteCacheStatic@BamoSimpleHapticsControllerPrincipalImpl@.c)
 */

void __fastcall BamoSimpleHapticsControllerPrincipal::SetIsReplayPauseIntervalSupported(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        char a2)
{
  BamoImpl::BamoSimpleHapticsControllerPrincipalImpl *v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 i; // rbx
  int IsReplayPauseIntervalSupportedRemoteCacheStatic; // eax
  int v8; // edi
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::BamoImpl::BamoImplObject *v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = (BamoImpl::BamoSimpleHapticsControllerPrincipalImpl *)(this + 1);
  Microsoft::BamoImpl::InternalLock::InternalLock(&v11, this[3]);
  *((_BYTE *)v3 + 51) = a2;
  BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::LogSetIsReplayPauseIntervalSupported(v3);
  for ( i = *((_QWORD *)v3 + 4); i; i = *(_QWORD *)(i + 40) )
  {
    if ( *(_BYTE *)(i + 56) )
    {
      IsReplayPauseIntervalSupportedRemoteCacheStatic = BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::UpdateIsReplayPauseIntervalSupportedRemoteCacheStatic(
                                                          (struct Microsoft::BamoImpl::BamoStubImpl *)i,
                                                          v3);
      v8 = IsReplayPauseIntervalSupportedRemoteCacheStatic;
      if ( IsReplayPauseIntervalSupportedRemoteCacheStatic < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x273,
          (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
          (const char *)(unsigned int)IsReplayPauseIntervalSupportedRemoteCacheStatic);
        goto LABEL_8;
      }
    }
  }
  v8 = 0;
LABEL_8:
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x7D35,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v8,
      v9);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v11, v4, v5);
}
