/*
 * XREFs of ?CallSetBooleanValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@I_N@Z @ 0x180102120
 * Callers:
 *     ?BroadcastSetBooleanValue@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJI_N@Z @ 0x18010168C (-BroadcastSetBooleanValue@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJI_N@Z.c)
 * Callees:
 *     ?SetBooleanValue@BamoDataSourceStubImpl@BamoImpl@@QEAAJI_N@Z @ 0x180059960 (-SetBooleanValue@BamoDataSourceStubImpl@BamoImpl@@QEAAJI_N@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourcePrincipalImpl::CallSetBooleanValueOnStub(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  unsigned int v4; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
  {
    v4 = BamoImpl::BamoDataSourceStubImpl::SetBooleanValue(a1, a2, a3, a4);
    if ( (int)(v4 + 0x80000000) >= 0 && v4 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x324C,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)v4,
        v6);
  }
  return 0LL;
}
