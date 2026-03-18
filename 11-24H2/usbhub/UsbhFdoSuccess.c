/*
 * XREFs of UsbhFdoSuccess @ 0x140033AE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UsbhFdoSuccess(__int64 a1, IRP *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v3 = *(_QWORD *)(a1 + 64);
      if ( v3 )
      {
        v4 = *(_QWORD *)(v3 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v3 + 880)) & *(_DWORD *)(v3 + 884));
        *(_DWORD *)v4 = 1667461958;
        *(_QWORD *)(v4 + 8) = 0LL;
        *(_QWORD *)(v4 + 16) = 0LL;
        *(_QWORD *)(v4 + 24) = a2;
      }
    }
  }
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
