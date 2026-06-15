/*
 * XREFs of ?GetPrintableId@EndpointInfo@@QEBAPEBGXZ @ 0x1800E87C0
 * Callers:
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x1800E77D8 (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU.c)
 *     ?RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@@Z @ 0x1800EA384 (-RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@@Z.c)
 *     ?RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@H@Z @ 0x1800EA4AC (-RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@H@Z.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall EndpointInfo::GetPrintableId(EndpointInfo *this)
{
  if ( *((_QWORD *)this + 2) )
    return (const unsigned __int16 *)std::wstring::c_str((__int64)this);
  if ( *((_QWORD *)this + 6) )
    return (const unsigned __int16 *)std::wstring::c_str((__int64)this + 32);
  return L"n/a";
}
