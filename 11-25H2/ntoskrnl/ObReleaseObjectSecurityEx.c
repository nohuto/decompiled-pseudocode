/*
 * XREFs of ObReleaseObjectSecurityEx @ 0x140914900
 * Callers:
 *     PspCheckJobAccessState @ 0x140767B94 (PspCheckJobAccessState.c)
 *     MiAllowImageMap @ 0x140903D34 (MiAllowImageMap.c)
 *     ObpCheckTraverseAccess @ 0x14091495C (ObpCheckTraverseAccess.c)
 *     ObpInsertOrLocateNamedObject @ 0x140915990 (ObpInsertOrLocateNamedObject.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140969360 (PspAllocateAndQueryNotificationChannel.c)
 *     PopBootStatAccessCheck @ 0x140AA30E4 (PopBootStatAccessCheck.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x140AB0CB8 (EtwpCheckCurrentUserProcessAccess.c)
 * Callees:
 *     ObDereferenceSecurityDescriptor @ 0x14086EF20 (ObDereferenceSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ObReleaseObjectSecurityEx(__int64 a1, char a2, __int64 a3)
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
      while ( (a1 ^ (unsigned __int64)v3) < 0xF )
      {
        v4 = v3;
        v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a3 - 8), v3 + 1, v3);
        if ( v4 == v3 )
          return;
      }
      ObDereferenceSecurityDescriptor(a1, 1u);
    }
  }
}
