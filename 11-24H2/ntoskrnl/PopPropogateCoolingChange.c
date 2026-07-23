/*
 * XREFs of PopPropogateCoolingChange @ 0x14041BAFC
 * Callers:
 *     PoSetThermalActiveCooling @ 0x14074A220 (PoSetThermalActiveCooling.c)
 *     PopCoolingExtensionPnpNotification @ 0x14074A540 (PopCoolingExtensionPnpNotification.c)
 *     PopDisableCoolingExtension @ 0x14074A618 (PopDisableCoolingExtension.c)
 *     PoSetThermalPassiveCooling @ 0x140A8C000 (PoSetThermalPassiveCooling.c)
 *     PopDeactiveThermalRequest @ 0x140AB2D98 (PopDeactiveThermalRequest.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PopDiagTraceCoolingExtensionActiveUpdate @ 0x14075415C (PopDiagTraceCoolingExtensionActiveUpdate.c)
 *     PopDiagTraceCoolingExtensionPassiveUpdate @ 0x140A92C6C (PopDiagTraceCoolingExtensionPassiveUpdate.c)
 */

int __fastcall PopPropogateCoolingChange(__int64 a1)
{
  _UNKNOWN **v1; // rax
  char v3; // si
  unsigned __int8 v4; // di
  __int64 *i; // rcx
  _QWORD *v6; // r14
  unsigned __int8 v7; // r8
  struct _KEVENT *v8; // rcx
  struct _KEVENT *v9; // rcx
  __int64 v10; // rdx
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
          v7 = v4;
          if ( *((_BYTE *)i + 18) )
          {
            v4 = *((_BYTE *)i + 16);
            if ( v4 >= v7 )
              v4 = v7;
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
      guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 96), v4);
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
    LOBYTE(v10) = v3;
    guard_dispatch_icall_no_overrides(*v6, v10);
    LODWORD(v1) = PopAcquireRwLockExclusive(a1 + 32);
  }
  while ( !*(_BYTE *)(a1 + 67) );
  *(_BYTE *)(a1 + 67) = 0;
LABEL_18:
  v8 = *(struct _KEVENT **)(a1 + 80);
  if ( v8 )
    LODWORD(v1) = KeSetEvent(v8, 0, 0);
  v9 = *(struct _KEVENT **)(a1 + 72);
  if ( v9 )
    LODWORD(v1) = KeSetEvent(v9, 0, 0);
  return (int)v1;
}
