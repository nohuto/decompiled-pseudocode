/*
 * XREFs of ?SetDeviceId@BamoDockableDevicePrincipal@@UEAAXAEBUDockableDeviceIdentity@@@Z @ 0x18017FC00
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180045270 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800465A0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSetDeviceId@BamoDockableDevicePrincipalImpl@BamoImpl@@AEAAXAEBUDockableDeviceIdentity@@@Z @ 0x18017DCE0 (-LogSetDeviceId@BamoDockableDevicePrincipalImpl@BamoImpl@@AEAAXAEBUDockableDeviceIdentity@@@Z.c)
 *     ?UpdateDeviceIdRemoteCacheStatic@BamoDockableDevicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180180538 (-UpdateDeviceIdRemoteCacheStatic@BamoDockableDevicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoDockableDevicePrincipal::SetDeviceId(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        const struct DockableDeviceIdentity *a2)
{
  char *v3; // rsi
  const struct DockableDeviceIdentity *v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 i; // rbx
  int updated; // eax
  int v9; // edi
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::BamoImpl::BamoImplObject *v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = (char *)(this + 1);
  Microsoft::BamoImpl::InternalLock::InternalLock(&v12, this[3]);
  *((_OWORD *)v3 + 3) = *(_OWORD *)a2;
  BamoImpl::BamoDockableDevicePrincipalImpl::LogSetDeviceId((BamoImpl::BamoDockableDevicePrincipalImpl *)v3, v4);
  for ( i = *((_QWORD *)v3 + 4); i; i = *(_QWORD *)(i + 40) )
  {
    if ( *(_BYTE *)(i + 56) )
    {
      updated = BamoImpl::BamoDockableDevicePrincipalImpl::UpdateDeviceIdRemoteCacheStatic(
                  (struct Microsoft::BamoImpl::BamoStubImpl *)i,
                  (struct BamoImpl::BamoDockableDevicePrincipalImpl *)v3);
      v9 = updated;
      if ( updated < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x273,
          (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
          (const char *)(unsigned int)updated);
        goto LABEL_8;
      }
    }
  }
  v9 = 0;
LABEL_8:
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xADB6,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v9,
      v10);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v12, v5, v6);
}
