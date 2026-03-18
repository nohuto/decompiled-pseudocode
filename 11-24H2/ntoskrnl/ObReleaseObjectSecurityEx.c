/*
 * XREFs of ObReleaseObjectSecurityEx @ 0x140867FD0
 * Callers:
 *     PspCheckJobAccessState @ 0x140777614 (PspCheckJobAccessState.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14085CCAC (PspAllocateAndQueryNotificationChannel.c)
 *     ObpCheckTraverseAccess @ 0x140867E80 (ObpCheckTraverseAccess.c)
 *     MiAllowImageMap @ 0x1408694B4 (MiAllowImageMap.c)
 *     ObpInsertOrLocateNamedObject @ 0x1409E45C0 (ObpInsertOrLocateNamedObject.c)
 *     PopBootStatAccessCheck @ 0x140AA80F4 (PopBootStatAccessCheck.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x140AB5B80 (EtwpCheckCurrentUserProcessAccess.c)
 * Callees:
 *     ObDereferenceSecurityDescriptor @ 0x140879D10 (ObDereferenceSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
