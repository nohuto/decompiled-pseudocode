/*
 * XREFs of ??1ResourceGroupInstance@@UEAA@XZ @ 0x1800E676C
 * Callers:
 *     ??_GResourceGroupInstance@@UEAAPEAXI@Z @ 0x1800E6E30 (--_GResourceGroupInstance@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1EndpointInfo@@QEAA@XZ @ 0x1800E6708 (--1EndpointInfo@@QEAA@XZ.c)
 *     ?SetAssignedResourceGroup@ResourceGroupInstance@@AEAAJH@Z @ 0x1800EA5F4 (-SetAssignedResourceGroup@ResourceGroupInstance@@AEAAJH@Z.c)
 */

void __fastcall ResourceGroupInstance::~ResourceGroupInstance(ResourceGroupInstance *this)
{
  *(_QWORD *)this = &ResourceGroupInstance::`vftable';
  RmReleaseResources(*((_QWORD *)this + 3));
  ResourceGroupInstance::SetAssignedResourceGroup(this, 0);
  EndpointInfo::~EndpointInfo((ResourceGroupInstance *)((char *)this + 544));
  *((_DWORD *)this + 3) = -1073741823;
}
