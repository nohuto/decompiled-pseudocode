/*
 * XREFs of PopPluginComponentIdleState @ 0x1403159F0
 * Callers:
 *     PoFxCompleteIdleState @ 0x14044C090 (PoFxCompleteIdleState.c)
 * Callees:
 *     PopPlNotifyDeviceFState @ 0x140315BD0 (PopPlNotifyDeviceFState.c)
 *     PopPepProcessEvent @ 0x140317DF0 (PopPepProcessEvent.c)
 *     PopFxBugCheck @ 0x140377108 (PopFxBugCheck.c)
 *     PopFxAddLogEntry @ 0x1403782D8 (PopFxAddLogEntry.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

char __fastcall PopPluginComponentIdleState(__int64 a1, unsigned int a2, __int64 a3, void *a4)
{
  __int64 v4; // r15
  __int64 v7; // rsi
  char v8; // bl
  _DWORD *v9; // rbp
  __int64 v10; // r13
  unsigned int v11; // r12d
  char v12; // al
  char v13; // r8
  __int64 v15; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v16; // [rsp+38h] [rbp-40h]
  int v17; // [rsp+3Ch] [rbp-3Ch]
  __int16 v18; // [rsp+40h] [rbp-38h]
  int v19; // [rsp+42h] [rbp-36h]
  __int16 v20; // [rsp+46h] [rbp-32h]

  v4 = a2;
  if ( a4 )
    memset_0(a4, 0, 0x40uLL);
  v7 = *(_QWORD *)(a1 + 56);
  v8 = 0;
  v9 = (_DWORD *)(v7 + 208 * v4);
  if ( !*(_BYTE *)(v7 + 124) )
    goto LABEL_7;
  v10 = *(_QWORD *)(v7 + 32);
  v11 = v9[50];
  v19 = 0;
  v20 = 0;
  v15 = *(_QWORD *)(v10 + 72);
  v17 = v9[92];
  v16 = v11;
  v18 = 1;
  v12 = guard_dispatch_icall_no_overrides(19LL, &v15, 1LL, a4);
  v13 = HIBYTE(v18);
  if ( !v12 )
    v13 = 1;
  HIBYTE(v18) = v13;
  if ( v13 || (PopFxAddLogEntry(*(_QWORD *)(v10 + 48), v11, 18LL), HIBYTE(v18)) )
  {
LABEL_7:
    v8 = PopPepProcessEvent(v7, v9 + 48, 1LL);
    PopPlNotifyDeviceFState(*(_QWORD *)(v7 + 32), v4, v9[93], v9[92], 1);
    if ( v8 && !a4 )
      PopFxBugCheck(0x612uLL, 0LL, 0LL, 0LL);
  }
  return v8;
}
