/*
 * XREFs of EtwpInsertRegistration @ 0x180045AB0
 * Callers:
 *     EtwNotificationRegister @ 0x180045640 (EtwNotificationRegister.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x180010AF0 (RtlRbInsertNodeEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     memcmp @ 0x180168C50 (memcmp.c)
 */

__int64 __fastcall EtwpInsertRegistration(unsigned __int64 a1)
{
  unsigned __int16 v1; // r14
  __int64 v3; // rbx
  bool v4; // r8
  int v5; // edi
  int v6; // eax
  __int64 v7; // rax

  v1 = *(_WORD *)(a1 + 84);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&EtwpProvLock);
  v3 = EtwpRegistrationTable;
  if ( (qword_1801D42C8 & 1) != 0 )
  {
    if ( !EtwpRegistrationTable )
    {
      v4 = 0;
      goto LABEL_14;
    }
    v3 = (unsigned __int64)&EtwpRegistrationTable ^ EtwpRegistrationTable;
  }
  v4 = 0;
  v5 = qword_1801D42C8 & 1;
  if ( v3 )
  {
    while ( 1 )
    {
      v6 = memcmp((const void *)(a1 + 32), (const void *)(v3 + 32), 0x10uLL);
      if ( v6 )
      {
        if ( v6 >= 0 )
          goto LABEL_11;
      }
      else if ( v1 <= *(_WORD *)(v3 + 84) )
      {
LABEL_11:
        v7 = *(_QWORD *)(v3 + 8);
        if ( v5 )
        {
          if ( !v7 )
          {
LABEL_13:
            v4 = 1;
            break;
          }
          v7 ^= v3;
        }
        if ( !v7 )
          goto LABEL_13;
        goto LABEL_9;
      }
      v7 = *(_QWORD *)v3;
      if ( v5 )
      {
        if ( !v7 )
          goto LABEL_17;
        v7 ^= v3;
      }
      if ( !v7 )
      {
LABEL_17:
        v4 = 0;
        break;
      }
LABEL_9:
      v3 = v7;
    }
  }
LABEL_14:
  RtlRbInsertNodeEx((unsigned __int64)&EtwpRegistrationTable, v3, v4, a1);
  return RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
