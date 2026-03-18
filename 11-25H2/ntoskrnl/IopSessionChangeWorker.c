/*
 * XREFs of IopSessionChangeWorker @ 0x14044BFC0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PopUmpoMessageCallback @ 0x14044C310 (PopUmpoMessageCallback.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PsSetSessionObjectIoEvent @ 0x140AA6AC8 (PsSetSessionObjectIoEvent.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall IopSessionChangeWorker(PVOID *Argument1)
{
  _QWORD *v2; // rdi
  KSPIN_LOCK *v3; // r14
  KIRQL v4; // al
  _QWORD *v5; // rbx
  KIRQL v6; // bp
  PVOID v7; // rcx
  void *v8; // rcx
  int v9; // eax
  bool v10; // zf

  if ( IopSessionCallbackObject )
  {
    v2 = (_QWORD *)((char *)IopSessionCallbackObject + 16);
    if ( (_QWORD *)*v2 != v2 )
    {
      v3 = (KSPIN_LOCK *)((char *)IopSessionCallbackObject + 8);
      v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)IopSessionCallbackObject + 1);
      v5 = (_QWORD *)*v2;
      v6 = v4;
      if ( v4 == 2 )
      {
        while ( v5 != v2 )
        {
          guard_dispatch_icall_no_overrides(v5[4], Argument1);
          v5 = (_QWORD *)*v5;
        }
      }
      else
      {
        while ( v5 != v2 )
        {
          if ( !*((_BYTE *)v5 + 44) )
          {
            ++*((_DWORD *)v5 + 10);
            KeReleaseSpinLock(v3, v6);
            v8 = (void *)v5[4];
            if ( (CALLBACK_FUNCTION *)v5[3] == PopUmpoMessageCallback )
              PopUmpoMessageCallback(v8, Argument1, 0LL);
            else
              guard_dispatch_icall_no_overrides(v8, Argument1);
            v6 = KeAcquireSpinLockRaiseToDpc(v3);
            v9 = *((_DWORD *)v5 + 10) - 1;
            v10 = *((_BYTE *)v5 + 44) == 0;
            *((_DWORD *)v5 + 10) = v9;
            if ( !v10 && !v9 )
              KeSetEvent(&ExpCallbackEvent, 0, 0);
          }
          v5 = (_QWORD *)*v5;
        }
      }
      KeReleaseSpinLock(v3, v6);
    }
  }
  PsSetSessionObjectIoEvent(Argument1[7]);
  ObfDereferenceObjectWithTag(Argument1[7], 0x746C6644u);
  v7 = Argument1[6];
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  ExFreePoolWithTag(Argument1, 0);
}
