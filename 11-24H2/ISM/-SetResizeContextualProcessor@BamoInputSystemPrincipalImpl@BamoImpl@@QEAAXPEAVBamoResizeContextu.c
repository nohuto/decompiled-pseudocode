/*
 * XREFs of ?SetResizeContextualProcessor@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoResizeContextualProcessorPrincipal@@@Z @ 0x1800911A8
 * Callers:
 *     ?SetResizeContextualProcessor@BamoInputSystemPrincipal@@UEAAXPEAVBamoResizeContextualProcessorPrincipal@@@Z @ 0x180091160 (-SetResizeContextualProcessor@BamoInputSystemPrincipal@@UEAAXPEAVBamoResizeContextualProcessorPr.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSetResizeContextualProcessor@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoResizeContextualProcessorPrincipal@@@Z @ 0x180091270 (-LogSetResizeContextualProcessor@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoResizeConte.c)
 *     ?UpdateResizeContextualProcessorRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18012EEC4 (-UpdateResizeContextualProcessorRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAV.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall BamoImpl::BamoInputSystemPrincipalImpl::SetResizeContextualProcessor(
        BamoImpl::BamoInputSystemPrincipalImpl *this,
        struct BamoResizeContextualProcessorPrincipal *a2)
{
  __int64 v4; // rsi
  __int64 i; // rbx
  int updated; // eax
  unsigned int v7; // esi
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_QWORD *)this + 16);
  *((_QWORD *)this + 16) = a2;
  if ( a2 )
    (**(void (__fastcall ***)(struct BamoResizeContextualProcessorPrincipal *))a2)(a2);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  BamoImpl::BamoInputSystemPrincipalImpl::LogSetResizeContextualProcessor(this, a2);
  for ( i = *((_QWORD *)this + 4); i; i = *(_QWORD *)(i + 40) )
  {
    if ( *(_BYTE *)(i + 56) )
    {
      updated = BamoImpl::BamoInputSystemPrincipalImpl::UpdateResizeContextualProcessorRemoteCacheStatic(
                  (struct Microsoft::BamoImpl::BamoStubImpl *)i,
                  this);
      v7 = updated;
      if ( updated < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x273,
          (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
          (const char *)(unsigned int)updated);
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x36F8,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)v7,
          v8);
      }
    }
  }
}
