/*
 * XREFs of EtwpInsertRegistration @ 0x18001D8C0
 * Callers:
 *     EtwNotificationRegister @ 0x18001D450 (EtwNotificationRegister.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x180054EB0 (RtlRbInsertNodeEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     memcmp @ 0x1801676D0 (memcmp.c)
 */

__int64 __fastcall EtwpInsertRegistration(__int64 a1)
{
  unsigned __int16 v1; // r14
  __int64 v3; // r8
  unsigned __int64 v4; // rbx
  int v5; // edi
  int v6; // eax
  unsigned __int64 v7; // rax

  v1 = *(_WORD *)(a1 + 84);
  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  v4 = EtwpRegistrationTable;
  if ( (qword_1801D2268 & 1) != 0 )
  {
    if ( !EtwpRegistrationTable )
    {
      LOBYTE(v3) = 0;
      goto LABEL_14;
    }
    v4 = (unsigned __int64)&EtwpRegistrationTable ^ EtwpRegistrationTable;
  }
  LOBYTE(v3) = 0;
  v5 = qword_1801D2268 & 1;
  if ( v4 )
  {
    while ( 1 )
    {
      v6 = memcmp((const void *)(a1 + 32), (const void *)(v4 + 32), 0x10uLL);
      if ( v6 )
      {
        if ( v6 >= 0 )
          goto LABEL_11;
      }
      else if ( v1 <= *(_WORD *)(v4 + 84) )
      {
LABEL_11:
        v7 = *(_QWORD *)(v4 + 8);
        if ( v5 )
        {
          if ( !v7 )
          {
LABEL_13:
            LOBYTE(v3) = 1;
            break;
          }
          v7 ^= v4;
        }
        if ( !v7 )
          goto LABEL_13;
        goto LABEL_9;
      }
      v7 = *(_QWORD *)v4;
      if ( v5 )
      {
        if ( !v7 )
          goto LABEL_17;
        v7 ^= v4;
      }
      if ( !v7 )
      {
LABEL_17:
        LOBYTE(v3) = 0;
        break;
      }
LABEL_9:
      v4 = v7;
    }
  }
LABEL_14:
  RtlRbInsertNodeEx(&EtwpRegistrationTable, v4, v3, a1);
  return RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
