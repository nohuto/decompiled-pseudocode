/*
 * XREFs of ?SetEnabled@BamoControllerNavigationManagerPrincipal@@UEAAX_N@Z @ 0x180046090
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateEnabledRemoteCacheStatic@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180046170 (-UpdateEnabledRemoteCacheStatic@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@CAJPEAVBa.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800465A0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180046B80 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180046BB8 (-CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?LogSetEnabled@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@AEAAX_N@Z @ 0x18008B05C (-LogSetEnabled@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@AEAAX_N@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall BamoControllerNavigationManagerPrincipal::SetEnabled(
        BamoControllerNavigationManagerPrincipal *this,
        bool a2)
{
  __int64 v4; // rbx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v5; // rsi
  __int64 i; // rbx
  int updated; // eax
  int v8; // edi
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 3);
  v11 = 0LL;
  v5 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v4 + 32);
  if ( !Microsoft::BamoImpl::BaseBamoConnectionImpl::CurrentThreadHasLock(v5) )
  {
    v11 = v4;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v5);
  }
  *((_BYTE *)this + 48) = a2;
  BamoImpl::BamoControllerNavigationManagerPrincipalImpl::LogSetEnabled(
    (BamoControllerNavigationManagerPrincipal *)((char *)this + 8),
    a2);
  for ( i = *((_QWORD *)this + 5); ; i = *(_QWORD *)(i + 40) )
  {
    if ( !i )
    {
      v8 = 0;
      goto LABEL_9;
    }
    if ( *(_BYTE *)(i + 56) )
    {
      updated = BamoImpl::BamoControllerNavigationManagerPrincipalImpl::UpdateEnabledRemoteCacheStatic(
                  (struct Microsoft::BamoImpl::BamoStubImpl *)i,
                  (BamoControllerNavigationManagerPrincipal *)((char *)this + 8));
      v8 = updated;
      if ( updated < 0 )
        break;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x273,
    (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
    (const char *)(unsigned int)updated,
    v9);
LABEL_9:
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x907E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v8,
      v9);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v11);
}
