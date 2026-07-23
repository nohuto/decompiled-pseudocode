/*
 * XREFs of EtwpInsertRegistration @ 0x18004A2C0
 * Callers:
 *     EtwNotificationRegister @ 0x180049E50 (EtwNotificationRegister.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x18006AA90 (RtlRbInsertNodeEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     memcmp @ 0x180165A90 (memcmp.c)
 */

void __fastcall EtwpInsertRegistration(PRTL_BALANCED_NODE Node)
{
  unsigned __int16 v1; // r14
  unsigned __int64 Root; // rbx
  BOOLEAN v4; // r8
  int v5; // edi
  int v6; // eax
  unsigned __int64 v7; // rax

  v1 = WORD2(Node[3].Right);
  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  Root = (unsigned __int64)EtwpRegistrationTable.Root;
  if ( (*(_BYTE *)&EtwpRegistrationTable.0 & 1) != 0 )
  {
    if ( !EtwpRegistrationTable.Root )
    {
      v4 = 0;
      goto LABEL_14;
    }
    Root = (unsigned __int64)&EtwpRegistrationTable ^ (unsigned __int64)EtwpRegistrationTable.Root;
  }
  v4 = 0;
  v5 = *(_BYTE *)&EtwpRegistrationTable.0 & 1;
  if ( Root )
  {
    while ( 1 )
    {
      v6 = memcmp(&Node[1].Right, (const void *)(Root + 32), 0x10uLL);
      if ( v6 )
      {
        if ( v6 >= 0 )
          goto LABEL_11;
      }
      else if ( v1 <= *(_WORD *)(Root + 84) )
      {
LABEL_11:
        v7 = *(_QWORD *)(Root + 8);
        if ( v5 )
        {
          if ( !v7 )
          {
LABEL_13:
            v4 = 1;
            break;
          }
          v7 ^= Root;
        }
        if ( !v7 )
          goto LABEL_13;
        goto LABEL_9;
      }
      v7 = *(_QWORD *)Root;
      if ( v5 )
      {
        if ( !v7 )
          goto LABEL_17;
        v7 ^= Root;
      }
      if ( !v7 )
      {
LABEL_17:
        v4 = 0;
        break;
      }
LABEL_9:
      Root = v7;
    }
  }
LABEL_14:
  RtlRbInsertNodeEx(&EtwpRegistrationTable, (PRTL_BALANCED_NODE)Root, v4, Node);
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
