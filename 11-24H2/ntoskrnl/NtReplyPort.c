/*
 * XREFs of NtReplyPort @ 0x1409EC8A0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     AlpcpSendMessage @ 0x14088E810 (AlpcpSendMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1409EC9B0 (AlpcpReplyLegacySynchronousRequest.c)
 */

__int64 __fastcall NtReplyPort(HANDLE Handle, __m256i *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // ebx
  __int64 v6; // r8
  __int64 v8[6]; // [rsp+30h] [rbp-48h] BYREF
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
    v8[0] = (__int64)Object;
    if ( (*((_DWORD *)Object + 104) & 0x2000) != 0 )
    {
      LOBYTE(v6) = KeGetCurrentThread()->PreviousMode;
      v5 = AlpcpReplyLegacySynchronousRequest(v8, a2, v6);
    }
    else
    {
      v9 = 65537;
      v5 = AlpcpSendMessage(v8, a2, 0LL, KeGetCurrentThread()->PreviousMode);
      if ( v5 == -1073740029 )
        v5 = -1073741769;
    }
    ObfDereferenceObject(Object);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
