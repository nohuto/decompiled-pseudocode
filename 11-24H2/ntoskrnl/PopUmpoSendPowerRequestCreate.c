/*
 * XREFs of PopUmpoSendPowerRequestCreate @ 0x140A5E938
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x1402BAAB0 (PopPowerRequestCreateCommon.c)
 *     PopPowerRequestNotificationsBegin @ 0x140748004 (PopPowerRequestNotificationsBegin.c)
 * Callees:
 *     PoStoreDiagnosticContext @ 0x1402BA9FC (PoStoreDiagnosticContext.c)
 *     PopUmpoSendPowerMessage @ 0x1402BB090 (PopUmpoSendPowerMessage.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PopUmpoSendPowerRequestCreate(int a1)
{
  PVOID *i; // rcx
  unsigned __int64 v3; // rsi
  __int64 Pool2; // rax
  _DWORD *v5; // rbx
  PVOID *j; // rcx
  unsigned __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  for ( i = (PVOID *)PopPowerRequestObjectList; i != &PopPowerRequestObjectList; i = (PVOID *)*i )
  {
    if ( *((_DWORD *)i + 9) == a1 )
    {
      if ( (unsigned int)PoStoreDiagnosticContext((__int64)i[12], 0LL, &v7) == -1073741789 )
      {
        v3 = v7;
        Pool2 = ExAllocatePool2(0x100uLL, v7 + 16, 0x6F706D55u);
        v5 = (_DWORD *)Pool2;
        if ( Pool2 )
        {
          *(_DWORD *)Pool2 = 15;
          *(_DWORD *)(Pool2 + 8) = a1;
          for ( j = (PVOID *)PopPowerRequestObjectList; j != &PopPowerRequestObjectList; j = (PVOID *)*j )
          {
            if ( *((_DWORD *)j + 9) == a1 )
            {
              if ( (int)PoStoreDiagnosticContext((__int64)j[12], (unsigned __int64 *)(Pool2 + 16), &v7) >= 0 )
                PopUmpoSendPowerMessage(v5, v3 + 16, 0);
              break;
            }
          }
          ExFreePoolWithTag(v5, 0x6F706D55u);
        }
      }
      return;
    }
  }
}
