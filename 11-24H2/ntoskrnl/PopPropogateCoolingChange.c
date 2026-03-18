/*
 * XREFs of PopPropogateCoolingChange @ 0x14042796C
 * Callers:
 *     PoSetThermalActiveCooling @ 0x14074BEF0 (PoSetThermalActiveCooling.c)
 *     PopCoolingExtensionPnpNotification @ 0x14074C210 (PopCoolingExtensionPnpNotification.c)
 *     PopDisableCoolingExtension @ 0x14074C2E8 (PopDisableCoolingExtension.c)
 *     PoSetThermalPassiveCooling @ 0x140A8F9C0 (PoSetThermalPassiveCooling.c)
 *     PopDeactiveThermalRequest @ 0x140AB88D4 (PopDeactiveThermalRequest.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PopDiagTraceCoolingExtensionActiveUpdate @ 0x140755DFC (PopDiagTraceCoolingExtensionActiveUpdate.c)
 *     PopDiagTraceCoolingExtensionPassiveUpdate @ 0x140A9643C (PopDiagTraceCoolingExtensionPassiveUpdate.c)
 */

int __fastcall PopPropogateCoolingChange(__int64 a1)
{
  _UNKNOWN **v1; // rax
  char v3; // si
  unsigned __int8 v4; // di
  __int64 *i; // rcx
  _QWORD *v6; // r14
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 v9; // r8
  struct _KEVENT *v10; // rcx
  struct _KEVENT *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v1 = &retaddr;
  if ( *(_BYTE *)(a1 + 67) )
  {
    *(_BYTE *)(a1 + 67) = 0;
    return (int)v1;
  }
  do
  {
    while ( 1 )
    {
      v3 = 0;
      v4 = 100;
      if ( *(_BYTE *)(a1 + 64) )
      {
        for ( i = *(__int64 **)(a1 + 16); i != (__int64 *)(a1 + 16); i = (__int64 *)*i )
        {
          v9 = v4;
          if ( *((_BYTE *)i + 18) )
          {
            v4 = *((_BYTE *)i + 16);
            if ( v4 >= v9 )
              v4 = v9;
            if ( *((_BYTE *)i + 17) )
              v3 = 1;
          }
        }
      }
      if ( v4 == *(_BYTE *)(a1 + 66) )
        break;
      *(_BYTE *)(a1 + 66) = v4;
      *(_BYTE *)(a1 + 67) = 1;
      PopReleaseRwLock((signed __int64 *)(a1 + 32));
      PopDiagTraceCoolingExtensionPassiveUpdate(a1);
      v6 = (_QWORD *)(a1 + 96);
      guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 96), v4, v7, v8);
      LODWORD(v1) = PopAcquireRwLockExclusive(a1 + 32);
      if ( *(_BYTE *)(a1 + 67) )
      {
        *(_BYTE *)(a1 + 67) = 0;
        goto LABEL_17;
      }
    }
    v6 = (_QWORD *)(a1 + 96);
LABEL_17:
    if ( v3 == *(_BYTE *)(a1 + 65) )
      goto LABEL_18;
    *(_BYTE *)(a1 + 65) = v3;
    *(_BYTE *)(a1 + 67) = 1;
    PopReleaseRwLock((signed __int64 *)(a1 + 32));
    PopDiagTraceCoolingExtensionActiveUpdate(a1);
    LOBYTE(v12) = v3;
    guard_dispatch_icall_no_overrides(*v6, v12, v13, v14);
    LODWORD(v1) = PopAcquireRwLockExclusive(a1 + 32);
  }
  while ( !*(_BYTE *)(a1 + 67) );
  *(_BYTE *)(a1 + 67) = 0;
LABEL_18:
  v10 = *(struct _KEVENT **)(a1 + 80);
  if ( v10 )
    LODWORD(v1) = KeSetEvent(v10, 0, 0);
  v11 = *(struct _KEVENT **)(a1 + 72);
  if ( v11 )
    LODWORD(v1) = KeSetEvent(v11, 0, 0);
  return (int)v1;
}
