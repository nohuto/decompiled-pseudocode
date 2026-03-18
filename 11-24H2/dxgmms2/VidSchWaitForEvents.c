/*
 * XREFs of VidSchWaitForEvents @ 0x140048CFC
 * Callers:
 *     VidSchSuspendResumeDevice @ 0x140020380 (VidSchSuspendResumeDevice.c)
 *     VidSchWaitForCompletionEvent @ 0x1400B5584 (VidSchWaitForCompletionEvent.c)
 *     VidSchiSwitchNodeFromContext @ 0x1400B8040 (VidSchiSwitchNodeFromContext.c)
 *     VidSchiSuspendFlipQueues @ 0x1400E3328 (VidSchiSuspendFlipQueues.c)
 *     VidSchSwitchFromContext @ 0x1400E42E0 (VidSchSwitchFromContext.c)
 *     VidSchSuspendAdapter @ 0x1400E43D0 (VidSchSuspendAdapter.c)
 *     VidSchSwitchFromDevice @ 0x1400E44D0 (VidSchSwitchFromDevice.c)
 * Callees:
 *     VidSchiIsMmIoFlipPending @ 0x140031AC0 (VidSchiIsMmIoFlipPending.c)
 *     VidSchiCheckHwProgress @ 0x1400B5C20 (VidSchiCheckHwProgress.c)
 */

__int64 __fastcall VidSchWaitForEvents(__int64 a1, ULONG a2, PVOID *a3, union _LARGE_INTEGER *a4, BOOLEAN a5)
{
  union _LARGE_INTEGER *Timeout; // r12
  char v9; // bp
  NTSTATUS v10; // eax
  unsigned int v11; // esi
  unsigned int v12; // edi
  __int64 result; // rax
  bool v14; // si
  char IsMmIoFlipPending; // al
  BOOLEAN Alertable; // si
  __int64 v17; // [rsp+40h] [rbp-28h] BYREF
  char v18; // [rsp+70h] [rbp+8h] BYREF

  Timeout = a4;
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 176) )
  {
    v17 = 0LL;
    v9 = 0;
    if ( !a4 )
    {
      Timeout = (union _LARGE_INTEGER *)&v17;
      v9 = 1;
      v17 = -(__int64)((10000000 * (unsigned __int64)g_TdrConfig[1]) >> 1);
    }
    v18 = 0;
    do
    {
      v10 = KeWaitForMultipleObjects(a2, a3, WaitAny, Executive, 0, 0, Timeout, 0LL);
      v11 = v10;
      if ( !v9 || v10 != 258 )
        return v11;
    }
    while ( (unsigned int)VidSchiCheckHwProgress(a1, &v18) );
    if ( !*(_DWORD *)(a1 + 3244) )
      return v11;
    v12 = 0;
    if ( !a2 )
      return v11;
    while ( !KeReadStateEvent((PRKEVENT)*a3) )
    {
      ++v12;
      ++a3;
      if ( v12 >= a2 )
        return v11;
    }
    return v12;
  }
  else
  {
    v14 = *(_DWORD *)(a1 + 784) || *(_DWORD *)(a1 + 68) || *(_DWORD *)(a1 + 72);
    IsMmIoFlipPending = VidSchiIsMmIoFlipPending(a1, 0LL);
    if ( (v14 || IsMmIoFlipPending) && *(_BYTE *)(a1 + 772) )
    {
      *(_QWORD *)(a1 + 1648) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)(a1 + 1616), 0, 1u);
    }
    Alertable = a5;
    while ( 1 )
    {
      v12 = KeWaitForMultipleObjects(a2, a3, WaitAny, Executive, 0, Alertable, Timeout, 0LL);
      if ( Alertable )
      {
        if ( PsIsThreadTerminating(KeGetCurrentThread()) )
          break;
      }
      if ( v12 != 257 )
        return v12;
    }
    WdLogSingleEntry0(3LL);
    result = 3221226166LL;
    WdLogGlobalForLineNumber = 8768;
  }
  return result;
}
