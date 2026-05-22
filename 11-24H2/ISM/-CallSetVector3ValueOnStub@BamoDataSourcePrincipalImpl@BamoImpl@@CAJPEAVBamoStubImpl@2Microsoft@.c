/*
 * XREFs of ?CallSetVector3ValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@IMMM@Z @ 0x180102388
 * Callers:
 *     ??$EnumerateStubs@IMMM@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@IMMM@Z_NIMMM@Z @ 0x180100434 (--$EnumerateStubs@IMMM@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@IMMM@Z.c)
 * Callees:
 *     ?SetVector3Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMMM@Z @ 0x180072BEC (-SetVector3Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMMM@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourcePrincipalImpl::CallSetVector3ValueOnStub(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        __int64 a2,
        float a3,
        float a4,
        int a5)
{
  unsigned int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
  {
    v5 = BamoImpl::BamoDataSourceStubImpl::SetVector3Value(a1, a2, a3, a4);
    if ( (int)(v5 + 0x80000000) >= 0 && v5 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x32BB,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)v5,
        a5);
  }
  return 0LL;
}
