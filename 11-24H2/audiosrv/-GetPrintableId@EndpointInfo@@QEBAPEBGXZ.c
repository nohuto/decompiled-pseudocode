/*
 * XREFs of ?GetPrintableId@EndpointInfo@@QEBAPEBGXZ @ 0x1800ED498
 * Callers:
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x1800EBC28 (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU.c)
 *     ?RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@@Z @ 0x1800EF23C (-RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@@Z.c)
 *     ?RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@H@Z @ 0x1800EF364 (-RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@H@Z.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall EndpointInfo::GetPrintableId(EndpointInfo *this, __int64 a2)
{
  if ( *((_QWORD *)this + 2) )
    return (const unsigned __int16 *)std::wstring::c_str((__int64)this, a2);
  if ( *((_QWORD *)this + 6) )
  {
    this = (EndpointInfo *)((char *)this + 32);
    return (const unsigned __int16 *)std::wstring::c_str((__int64)this, a2);
  }
  return L"n/a";
}
