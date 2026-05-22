/*
 * XREFs of ?SetInputSpace@BamoInputSpacePayloadPrincipal@@UEAAXAEBUINPUT_SPACE@@@Z @ 0x180140680
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180041D00 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180043030 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSetInputSpace@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@AEAAXAEBUINPUT_SPACE@@@Z @ 0x18013DBC8 (-LogSetInputSpace@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@AEAAXAEBUINPUT_SPACE@@@Z.c)
 *     ?UpdateInputSpaceRemoteCacheStatic@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18014095C (-UpdateInputSpaceRemoteCacheStatic@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@CAJPEAVBamoStubI.c)
 */

void __fastcall BamoInputSpacePayloadPrincipal::SetInputSpace(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        const struct INPUT_SPACE *a2)
{
  char *v3; // rsi
  const struct INPUT_SPACE *v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 i; // rdi
  int updated; // eax
  int v9; // ebx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::BamoImpl::BamoImplObject *v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = (char *)(this + 1);
  Microsoft::BamoImpl::InternalLock::InternalLock(&v12, this[3]);
  *((_QWORD *)v3 + 5) = *(_QWORD *)a2;
  *((_DWORD *)v3 + 12) = *((_DWORD *)a2 + 2);
  BamoImpl::BamoInputSpacePayloadPrincipalImpl::LogSetInputSpace((BamoImpl::BamoInputSpacePayloadPrincipalImpl *)v3, v4);
  for ( i = *((_QWORD *)v3 + 4); i; i = *(_QWORD *)(i + 40) )
  {
    if ( *(_BYTE *)(i + 56) )
    {
      updated = BamoImpl::BamoInputSpacePayloadPrincipalImpl::UpdateInputSpaceRemoteCacheStatic(
                  (struct Microsoft::BamoImpl::BamoStubImpl *)i,
                  (struct BamoImpl::BamoInputSpacePayloadPrincipalImpl *)v3);
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
      (void *)0x32DE,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v9,
      v10);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v12, v5, v6);
}
