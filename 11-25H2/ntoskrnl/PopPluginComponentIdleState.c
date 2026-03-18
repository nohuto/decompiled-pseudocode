/*
 * XREFs of PopPluginComponentIdleState @ 0x140357BF0
 * Callers:
 *     PoFxCompleteIdleState @ 0x14044CB70 (PoFxCompleteIdleState.c)
 * Callees:
 *     PopPepProcessEvent @ 0x1402BD780 (PopPepProcessEvent.c)
 *     PopFxBugCheck @ 0x14034E260 (PopFxBugCheck.c)
 *     PopPlNotifyDeviceFState @ 0x140357D50 (PopPlNotifyDeviceFState.c)
 *     PopFxAddLogEntry @ 0x140359640 (PopFxAddLogEntry.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
  __int64 v15; // [rsp+20h] [rbp-58h]
  __int64 v16; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v17; // [rsp+38h] [rbp-40h]
  int v18; // [rsp+3Ch] [rbp-3Ch]
  __int16 v19; // [rsp+40h] [rbp-38h]
  int v20; // [rsp+42h] [rbp-36h]
  __int16 v21; // [rsp+46h] [rbp-32h]

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
  v20 = 0;
  v21 = 0;
  v16 = *(_QWORD *)(v10 + 72);
  v18 = v9[92];
  v17 = v11;
  v19 = 1;
  v12 = guard_dispatch_icall_no_overrides(19LL, &v16);
  v13 = HIBYTE(v19);
  if ( !v12 )
    v13 = 1;
  HIBYTE(v19) = v13;
  if ( v13 || (PopFxAddLogEntry(*(_QWORD *)(v10 + 48), v11, 18LL), HIBYTE(v19)) )
  {
LABEL_7:
    v8 = PopPepProcessEvent(v7, (__int64)(v9 + 48), 1u, 6u, v15, (__int64)a4);
    PopPlNotifyDeviceFState(*(_QWORD *)(v7 + 32), v4, v9[93], v9[92], 1);
    if ( v8 && !a4 )
      PopFxBugCheck(0x612uLL, 0LL, 0LL, 0LL);
  }
  return v8;
}
