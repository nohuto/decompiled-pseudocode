/*
 * XREFs of ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140236770
 * Callers:
 *     ?DeviceCDROMNotifyWorker@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z @ 0x140278C80 (-DeviceCDROMNotifyWorker@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z.c)
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x14028B2FC (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 *     ?HapticsDeviceNotifyWorker@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAV1@@Z @ 0x1402EF118 (-HapticsDeviceNotifyWorker@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAV1@@Z.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x14005D970 (IsThreadCrossSessionAttached.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

CTempW32ThreadNonPaged *__fastcall CTempW32ThreadNonPaged::CTempW32ThreadNonPaged(CTempW32ThreadNonPaged *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  _QWORD *CurrentThreadWin32Thread; // rax
  _QWORD *v6; // rdi

  memset_0(this, 0, 0xF8uLL);
  *((_BYTE *)this + 248) = 0;
  CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(v3, v2, v4);
  v6 = CurrentThreadWin32Thread;
  if ( CurrentThreadWin32Thread )
  {
    if ( *CurrentThreadWin32Thread )
    {
      if ( !IsThreadCrossSessionAttached() )
      {
        if ( *(_DWORD *)(*v6 + 376LL) )
        {
          *(_QWORD *)this = *v6;
          if ( (int)ReferenceW32Thread(*v6) <= 1 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 99LL);
        }
      }
    }
  }
  else
  {
    ExInitializeFastOwnerEntry((char *)this + 32);
    ExInitializeFastOwnerEntry((char *)this + 104);
    ExInitializeFastOwnerEntry((char *)this + 176);
    *((_DWORD *)this + 6) |= 1u;
    PsSetThreadWin32Thread(KeGetCurrentThread(), this, 0LL);
    *((_BYTE *)this + 248) = 1;
  }
  return this;
}
