/*
 * XREFs of ?SetUniqueId@BamoPenDevicePrincipal@@UEAAXAEBU_GUID@@@Z @ 0x1801915A0
 * Callers:
 *     ??0PenDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@AEBU_GUID@@@Z @ 0x180190A84 (--0PenDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@AEBU_GUID@@@Z.c)
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180041D00 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180043030 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSetUniqueId@BamoPenDevicePrincipalImpl@BamoImpl@@AEAAXAEBU_GUID@@@Z @ 0x180190E44 (-LogSetUniqueId@BamoPenDevicePrincipalImpl@BamoImpl@@AEAAXAEBU_GUID@@@Z.c)
 *     ?UpdateUniqueIdRemoteCacheStatic@BamoPenDevicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18019190C (-UpdateUniqueIdRemoteCacheStatic@BamoPenDevicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Micro.c)
 */

void __fastcall BamoPenDevicePrincipal::SetUniqueId(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        const struct _GUID *a2)
{
  char *v3; // rsi
  const struct _GUID *v4; // rdx
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
  *(struct _GUID *)(v3 + 40) = *a2;
  BamoImpl::BamoPenDevicePrincipalImpl::LogSetUniqueId((BamoImpl::BamoPenDevicePrincipalImpl *)v3, v4);
  for ( i = *((_QWORD *)v3 + 4); i; i = *(_QWORD *)(i + 40) )
  {
    if ( *(_BYTE *)(i + 56) )
    {
      updated = BamoImpl::BamoPenDevicePrincipalImpl::UpdateUniqueIdRemoteCacheStatic(
                  (struct Microsoft::BamoImpl::BamoStubImpl *)i,
                  (struct BamoImpl::BamoPenDevicePrincipalImpl *)v3);
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
      (void *)0x5F37,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v9,
      v10);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v12, v5, v6);
}
