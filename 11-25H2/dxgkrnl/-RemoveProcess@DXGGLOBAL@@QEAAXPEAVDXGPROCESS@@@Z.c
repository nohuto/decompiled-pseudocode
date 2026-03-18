/*
 * XREFs of ?RemoveProcess@DXGGLOBAL@@QEAAXPEAVDXGPROCESS@@@Z @ 0x140048E80
 * Callers:
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1402DE404 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall DXGGLOBAL::RemoveProcess(DXGGLOBAL *this, __int64 a2)
{
  char *v3; // rbx
  unsigned __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rax

  v3 = (char *)this + 432;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  v4 = a2 + 8;
  v5 = -a2;
  v6 = v4 & -(__int64)(v5 != 0);
  v7 = *(_QWORD *)v6;
  if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6 || (v8 = *(_QWORD **)((v4 & -(__int64)(v5 != 0)) + 8), *v8 != v6) )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
}
