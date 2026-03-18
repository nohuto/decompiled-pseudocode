/*
 * XREFs of ?VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x14001F3F4
 * Callers:
 *     VidSchTerminateHwQueue @ 0x14001EF70 (VidSchTerminateHwQueue.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x140015574 (VidSchiCheckPendingDeviceCommand.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x14001FB70 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14001FEE0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 */

void __fastcall VidSchiRemoveHwQueueFromSyncPoints(struct VIDSCH_HW_QUEUE *a1)
{
  char v2; // di
  _QWORD *v3; // rbx
  __int64 *v4; // rdx
  __int64 i; // rcx
  __int64 v6; // rax
  _QWORD v7[4]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v8; // [rsp+40h] [rbp-18h]

  v2 = 0;
  v3 = *(_QWORD **)(*((_QWORD *)a1 + 5) + 8LL);
  v7[0] = v3[4] + 1984LL;
  v8 = 0;
  AcquireSpinLock::Acquire((AcquireSpinLock *)v7);
  v4 = (__int64 *)v3[233];
  if ( v4 != v3 + 233 )
  {
    do
    {
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)v4 + 32); i = (unsigned int)(i + 1) )
      {
        v6 = v4[9];
        if ( *(struct VIDSCH_HW_QUEUE **)(v6 + 24 * i) == a1 )
        {
          *(_QWORD *)(v6 + 24 * i) = 0LL;
          v2 = 1;
          break;
        }
      }
      v4 = (__int64 *)*v4;
    }
    while ( v4 != v3 + 233 );
    if ( v2 )
      VidSchiCheckPendingDeviceCommand(v3);
  }
  AcquireSpinLock::Release((AcquireSpinLock *)v7);
}
