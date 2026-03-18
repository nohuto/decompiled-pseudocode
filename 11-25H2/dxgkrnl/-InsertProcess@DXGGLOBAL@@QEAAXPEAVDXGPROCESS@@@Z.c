/*
 * XREFs of ?InsertProcess@DXGGLOBAL@@QEAAXPEAVDXGPROCESS@@@Z @ 0x140047F78
 * Callers:
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x1402DE034 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall DXGGLOBAL::InsertProcess(DXGGLOBAL *this, struct DXGPROCESS *a2)
{
  char *v3; // rbx
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rdx

  v3 = (char *)this + 432;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  v5 = (_QWORD *)(((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL));
  v6 = (_QWORD *)((char *)this + 416);
  v7 = *((_QWORD *)this + 52);
  if ( *(DXGGLOBAL **)(v7 + 8) != (DXGGLOBAL *)((char *)this + 416) )
    __fastfail(3u);
  *v5 = v7;
  *(_QWORD *)((((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL)) + 8) = v6;
  *(_QWORD *)(v7 + 8) = v5;
  *v6 = v5;
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
}
