/*
 * XREFs of ?FindStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEBAPEAVBamoStubImpl@23@I@Z @ 0x180055180
 * Callers:
 *     ?GetStub@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAPEAVBamoStubImpl@23@PEAVBaseBamoPeer@Bamo@3@_N@Z @ 0x180092F1C (-GetStub@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAPEAVBamoStubImpl@23@PEAVBaseBamoPeer@Bamo@3@_.c)
 * Callees:
 *     <none>
 */

struct Microsoft::BamoImpl::BamoStubImpl *__fastcall Microsoft::BamoImpl::BamoPrincipalImpl::FindStub(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        int a2)
{
  struct Microsoft::BamoImpl::BamoStubImpl *result; // rax

  for ( result = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)this + 4);
        result;
        result = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)result + 5) )
  {
    if ( *(_DWORD *)(*((_QWORD *)result + 4) + 36LL) == a2 )
      break;
  }
  return result;
}
