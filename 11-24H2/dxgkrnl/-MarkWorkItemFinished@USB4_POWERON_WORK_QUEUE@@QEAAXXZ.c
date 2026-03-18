/*
 * XREFs of ?MarkWorkItemFinished@USB4_POWERON_WORK_QUEUE@@QEAAXXZ @ 0x140278164
 * Callers:
 *     ?_HandlePowerOn@USB4_POWERON_WORK_QUEUE@@CAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x140278820 (-_HandlePowerOn@USB4_POWERON_WORK_QUEUE@@CAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 * Callees:
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x14002FE7C (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x140034CD4 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     Feature_Usb4PerAdapterPowerQueue__private_IsEnabledDeviceUsageNoInline @ 0x14007DE18 (Feature_Usb4PerAdapterPowerQueue__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall USB4_POWERON_WORK_QUEUE::MarkWorkItemFinished(USB4_POWERON_WORK_QUEUE *this)
{
  struct _KEVENT *v2; // rcx
  char v3; // [rsp+30h] [rbp+8h] BYREF

  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v3, (USB4_POWERON_WORK_QUEUE *)((char *)this + 8));
  if ( !*(_DWORD *)this )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 236;
  }
  if ( !--*(_DWORD *)this )
  {
    if ( (unsigned int)Feature_Usb4PerAdapterPowerQueue__private_IsEnabledDeviceUsageNoInline() )
      v2 = (struct _KEVENT *)*((_QWORD *)this + 11);
    else
      v2 = (struct _KEVENT *)((char *)this + 56);
    KeSetEvent(v2, 0, 0);
  }
  MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v3);
}
