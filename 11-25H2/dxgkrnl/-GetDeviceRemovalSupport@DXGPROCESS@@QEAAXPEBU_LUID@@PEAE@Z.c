/*
 * XREFs of ?GetDeviceRemovalSupport@DXGPROCESS@@QEAAXPEBU_LUID@@PEAE@Z @ 0x1401E7088
 * Callers:
 *     DxgkGetProcessDeviceRemovalSupport @ 0x1401E8BB0 (DxgkGetProcessDeviceRemovalSupport.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x14004C16C (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall DXGPROCESS::GetDeviceRemovalSupport(struct _KTHREAD **this, const struct _LUID *a2, bool *a3)
{
  char *v6; // rbx
  __int16 v7; // cx
  struct _KTHREAD *v8; // rsi
  __int64 v9; // rdi
  __int64 Current; // rax
  _QWORD v11[2]; // [rsp+50h] [rbp-28h] BYREF

  if ( this[16] != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5153;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsMutexOwner()", 5153LL, 0LL, 0LL, 0LL, 0LL);
  }
  v6 = (char *)(this + 27);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this + 27, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  this[28] = KeGetCurrentThread();
  v7 = *((_WORD *)this + 280);
  if ( !v7 || (*a3 = v7 == 1, v7 != 1) )
  {
    *a3 = 1;
    v8 = this[40];
    v11[0] = this + 40;
    while ( 1 )
    {
      v11[1] = v8;
      Current = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v11);
      if ( !Current )
        break;
      if ( *(_DWORD *)(Current + 464) != 2 )
      {
        v9 = *(_QWORD *)(*(_QWORD *)(Current + 16) + 16LL);
        if ( !v9 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 5196;
          DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pAdapter != NULL", 5196LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( *(_DWORD *)(v9 + 412) == a2->LowPart && *(_DWORD *)(v9 + 416) == a2->HighPart )
        {
          *a3 = 0;
          break;
        }
      }
      v8 = *(struct _KTHREAD **)v8;
    }
  }
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)v6 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v6, 0LL);
  KeLeaveCriticalRegion();
}
