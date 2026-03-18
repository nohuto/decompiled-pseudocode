/*
 * XREFs of ?QueryProcessAdapterInfo@ADAPTER_RENDER@@QEAAJPEAU_D3DKMT_GETPROCESSLIST_PER_PROCESS@@PEAIK@Z @ 0x14019D4BC
 * Callers:
 *     NtDxgkGetProcessList @ 0x1401AE570 (NtDxgkGetProcessList.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall ADAPTER_RENDER::QueryProcessAdapterInfo(
        ADAPTER_RENDER *this,
        void **a2,
        unsigned int *a3,
        ACCESS_MASK a4)
{
  char *v4; // rbp
  unsigned int v5; // r15d
  __int64 v9; // rdi
  _QWORD *v10; // r14
  _QWORD *v11; // rsi
  void *v12; // r13
  struct _OBJECT_TYPE *ObjectType; // rax
  NTSTATUS v14; // eax
  char *v17; // [rsp+A0h] [rbp+18h]

  v4 = (char *)this + 72;
  v5 = 0;
  v17 = (char *)this + 72;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v4, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)v4 + 1) = KeGetCurrentThread();
  LODWORD(v9) = *((_DWORD *)this + 78);
  if ( (unsigned int)v9 <= *a3 && a2 )
  {
    v10 = (_QWORD *)((char *)this + 296);
    v9 = 0LL;
    v11 = (_QWORD *)*v10;
    if ( (_QWORD *)*v10 != v10 )
    {
      do
      {
        if ( *((_BYTE *)v11 + 21) )
        {
          v12 = *(void **)(*(v11 - 3) + 56LL);
          ObjectType = (struct _OBJECT_TYPE *)ObGetObjectType(v12);
          v14 = ObOpenObjectByPointer(v12, 0x400u, 0LL, a4, ObjectType, 1, &a2[v9]);
          if ( v14 >= 0 )
          {
            v9 = (unsigned int)(v9 + 1);
          }
          else
          {
            WdLogSingleEntry2(3LL, v12, v14);
            WdLogGlobalForLineNumber = 4688;
          }
        }
        v11 = (_QWORD *)*v11;
      }
      while ( v11 != v10 );
      v4 = v17;
      v5 = 0;
    }
  }
  else
  {
    v5 = -1073741789;
  }
  *a3 = v9;
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)v4 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v4, 0LL);
  KeLeaveCriticalRegion();
  return v5;
}
