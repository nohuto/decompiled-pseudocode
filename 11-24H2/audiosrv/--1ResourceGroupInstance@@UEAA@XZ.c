/*
 * XREFs of ??1ResourceGroupInstance@@UEAA@XZ @ 0x1800EABB8
 * Callers:
 *     ??_GResourceGroupInstance@@UEAAPEAXI@Z @ 0x1800EB280 (--_GResourceGroupInstance@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1EndpointInfo@@QEAA@XZ @ 0x1800EAB54 (--1EndpointInfo@@QEAA@XZ.c)
 *     ?SetAssignedResourceGroup@ResourceGroupInstance@@AEAAJH@Z @ 0x1800EF4AC (-SetAssignedResourceGroup@ResourceGroupInstance@@AEAAJH@Z.c)
 */

void __fastcall ResourceGroupInstance::~ResourceGroupInstance(ResourceGroupInstance *this, __int64 a2)
{
  __int64 v3; // rdx

  *(_QWORD *)this = &ResourceGroupInstance::`vftable';
  RmReleaseResources(*((_QWORD *)this + 3), a2);
  ResourceGroupInstance::SetAssignedResourceGroup(this, 0);
  EndpointInfo::~EndpointInfo((ResourceGroupInstance *)((char *)this + 544), v3);
  *((_DWORD *)this + 3) = -1073741823;
}
