/*
 * XREFs of ?MakeAdapterIdle@DXGADAPTER@@QEAAXXZ @ 0x140320194
 * Callers:
 *     ?MonitorStateChangeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1403200A4 (-MonitorStateChangeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall DXGADAPTER::MakeAdapterIdle(DXGADAPTER *this)
{
  char *v2; // rdi
  __int64 v3; // rbx
  ULONG TimeIncrement; // eax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax

  v2 = (char *)this + 4864;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  if ( *((_BYTE *)this + 4856) )
  {
    v3 = MEMORY[0xFFFFF78000000320];
    TimeIncrement = KeQueryTimeIncrement();
    v5 = *((_QWORD *)this + 606);
    v6 = v3 * TimeIncrement;
    if ( v6 > v5 )
      *((_QWORD *)this + 605) += v6 - v5;
    *((_QWORD *)this + 606) = 0LL;
    *((_BYTE *)this + 4856) = 0;
  }
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
