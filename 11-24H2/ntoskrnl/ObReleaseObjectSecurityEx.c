/*
 * XREFs of ObReleaseObjectSecurityEx @ 0x14086C2C0
 * Callers:
 *     PspCheckJobAccessState @ 0x140777834 (PspCheckJobAccessState.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x1408331C0 (EtwpCheckCurrentUserProcessAccess.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140858A1C (PspAllocateAndQueryNotificationChannel.c)
 *     ObpCheckTraverseAccess @ 0x14086C170 (ObpCheckTraverseAccess.c)
 *     MiAllowImageMap @ 0x14086D7E4 (MiAllowImageMap.c)
 *     ObpInsertOrLocateNamedObject @ 0x1409DF020 (ObpInsertOrLocateNamedObject.c)
 *     PopBootStatAccessCheck @ 0x140AA31F4 (PopBootStatAccessCheck.c)
 * Callees:
 *     ObDereferenceSecurityDescriptor @ 0x14087E040 (ObDereferenceSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall ObReleaseObjectSecurityEx(unsigned __int64 a1, char a2, __int64 a3)
{
  signed __int64 v3; // rax
  signed __int64 v4; // rtt

  if ( a1 )
  {
    if ( a2 )
    {
      ExFreePoolWithTag((PVOID)a1, 0);
    }
    else
    {
      _m_prefetchw((const void *)(a3 - 8));
      v3 = *(_QWORD *)(a3 - 8);
      while ( (a1 ^ v3) < 0xF )
      {
        v4 = v3;
        v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a3 - 8), v3 + 1, v3);
        if ( v4 == v3 )
          return;
      }
      ObDereferenceSecurityDescriptor(a1, 1LL);
    }
  }
}
