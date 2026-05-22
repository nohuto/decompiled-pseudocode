/*
 * XREFs of ??$EnumerateStubs@IMMM@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@IMMM@Z_NIMMM@Z @ 0x180100434
 * Callers:
 *     ?BroadcastSetVector3Value@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIMMM@Z @ 0x180101DB8 (-BroadcastSetVector3Value@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIMMM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CallSetVector3ValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@IMMM@Z @ 0x180102388 (-CallSetVector3ValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::EnumerateStubs<unsigned int,float,float,float>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        float a5,
        float a6,
        int a7)
{
  __int64 i; // rbx
  int v9; // eax
  unsigned int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  for ( i = *(_QWORD *)(a1 + 32); i; i = *(_QWORD *)(i + 40) )
  {
    if ( *(_BYTE *)(i + 56) )
    {
      v9 = BamoImpl::BamoDataSourcePrincipalImpl::CallSetVector3ValueOnStub(
             (struct Microsoft::BamoImpl::BamoStubImpl *)i,
             a4,
             a5,
             a6,
             *(float *)&a7);
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x273,
          (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
          (const char *)(unsigned int)v9);
        return v10;
      }
    }
  }
  return 0LL;
}
