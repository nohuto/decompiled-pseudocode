/*
 * XREFs of NtReplyPort @ 0x1409F1DE0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     AlpcpSendMessage @ 0x1408B0BA0 (AlpcpSendMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1409F1EF0 (AlpcpReplyLegacySynchronousRequest.c)
 */

__int64 __fastcall NtReplyPort(HANDLE Handle, __m256i *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // ebx
  __int64 v6; // r8
  _QWORD v8[6]; // [rsp+30h] [rbp-48h] BYREF
  int v9; // [rsp+60h] [rbp-18h]
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  memset_0(v8, 0, 0x40uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( v5 >= 0 )
  {
    v9 = 0;
    v8[0] = Object;
    if ( (*((_DWORD *)Object + 104) & 0x2000) != 0 )
    {
      LOBYTE(v6) = KeGetCurrentThread()->PreviousMode;
      v5 = AlpcpReplyLegacySynchronousRequest(v8, a2, v6);
    }
    else
    {
      v9 = 65537;
      v5 = AlpcpSendMessage((__int64)v8, a2, 0LL, KeGetCurrentThread()->PreviousMode);
      if ( v5 == -1073740029 )
        v5 = -1073741769;
    }
    ObfDereferenceObject(Object);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
