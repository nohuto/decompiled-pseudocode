/*
 * XREFs of PopPluginNotifyIdleState @ 0x1403150C4
 * Callers:
 *     PopPepStartComponentIdleStateChangeActivity @ 0x140315160 (PopPepStartComponentIdleStateChangeActivity.c)
 * Callees:
 *     PopFxAddLogEntry @ 0x1403782D8 (PopFxAddLogEntry.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PopPluginNotifyIdleState(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  char v7; // al
  char v8; // cl
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+2Ch] [rbp-1Ch]
  char v13; // [rsp+30h] [rbp-18h]
  char v14; // [rsp+31h] [rbp-17h]
  int v15; // [rsp+32h] [rbp-16h]
  __int16 v16; // [rsp+36h] [rbp-12h]

  v4 = *(_QWORD *)(a1 + 72);
  v15 = 0;
  v16 = 0;
  v10 = v4;
  v11 = a2;
  v12 = a3;
  v13 = a4;
  v14 = 0;
  v7 = guard_dispatch_icall_no_overrides(19LL, &v10, a3, a4);
  v8 = v14;
  if ( !v7 )
    v8 = 1;
  v14 = v8;
  if ( !v8 )
  {
    PopFxAddLogEntry(*(_QWORD *)(a1 + 48), a2, 18LL);
    return v14;
  }
  return v8;
}
