/*
 * XREFs of IopSessionChangeWorker @ 0x14044B580
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PopUmpoMessageCallback @ 0x14044B8D0 (PopUmpoMessageCallback.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PsSetSessionObjectIoEvent @ 0x140AAC088 (PsSetSessionObjectIoEvent.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall IopSessionChangeWorker(PVOID *Argument1)
{
  _QWORD *v2; // rdi
  KSPIN_LOCK *v3; // r14
  KIRQL v4; // al
  __int64 v5; // r9
  _QWORD *v6; // rbx
  KIRQL v7; // bp
  PVOID v8; // rcx
  __int64 v9; // r9
  void *v10; // rcx
  int v11; // eax
  bool v12; // zf

  if ( IopSessionCallbackObject )
  {
    v2 = (_QWORD *)((char *)IopSessionCallbackObject + 16);
    if ( (_QWORD *)*v2 != v2 )
    {
      v3 = (KSPIN_LOCK *)((char *)IopSessionCallbackObject + 8);
      v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)IopSessionCallbackObject + 1);
      v6 = (_QWORD *)*v2;
      v7 = v4;
      if ( v4 == 2 )
      {
        while ( v6 != v2 )
        {
          guard_dispatch_icall_no_overrides(v6[4], Argument1, 0LL, v5);
          v6 = (_QWORD *)*v6;
        }
      }
      else
      {
        while ( v6 != v2 )
        {
          if ( !*((_BYTE *)v6 + 44) )
          {
            ++*((_DWORD *)v6 + 10);
            KeReleaseSpinLock(v3, v7);
            v10 = (void *)v6[4];
            if ( (CALLBACK_FUNCTION *)v6[3] == PopUmpoMessageCallback )
              PopUmpoMessageCallback(v10, Argument1, 0LL);
            else
              guard_dispatch_icall_no_overrides(v10, Argument1, 0LL, v9);
            v7 = KeAcquireSpinLockRaiseToDpc(v3);
            v11 = *((_DWORD *)v6 + 10) - 1;
            v12 = *((_BYTE *)v6 + 44) == 0;
            *((_DWORD *)v6 + 10) = v11;
            if ( !v12 && !v11 )
              KeSetEvent(&ExpCallbackEvent, 0, 0);
          }
          v6 = (_QWORD *)*v6;
        }
      }
      KeReleaseSpinLock(v3, v7);
    }
  }
  PsSetSessionObjectIoEvent(Argument1[7]);
  ObfDereferenceObjectWithTag(Argument1[7], 0x746C6644u);
  v8 = Argument1[6];
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  ExFreePoolWithTag(Argument1, 0);
}
