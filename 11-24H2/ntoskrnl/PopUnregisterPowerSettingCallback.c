/*
 * XREFs of PopUnregisterPowerSettingCallback @ 0x1404A770C
 * Callers:
 *     PopDispatchPowerSettingCallbacks @ 0x1409A41B0 (PopDispatchPowerSettingCallbacks.c)
 *     PoUnregisterPowerSettingCallback @ 0x140A70C90 (PoUnregisterPowerSettingCallback.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PopUnregisterPowerSettingCallback(_BYTE *a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rax
  _QWORD *v3; // rax

  v1 = *(_QWORD *)a1;
  if ( a1[33] )
  {
    if ( *(_BYTE **)(v1 + 8) != a1 || (v3 = (_QWORD *)*((_QWORD *)a1 + 1), (_BYTE *)*v3 != a1) )
LABEL_4:
      __fastfail(3u);
    *v3 = v1;
    *(_QWORD *)(v1 + 8) = v3;
    *((_QWORD *)a1 + 1) = a1;
    *(_QWORD *)a1 = a1;
    KeSetEvent(&PopPowerSettingCallbackReturned, 0, 0);
  }
  else
  {
    if ( *(_BYTE **)(v1 + 8) != a1 )
      goto LABEL_4;
    v2 = (_QWORD *)*((_QWORD *)a1 + 1);
    if ( (_BYTE *)*v2 != a1 )
      goto LABEL_4;
    *v2 = v1;
    *(_QWORD *)(v1 + 8) = v2;
    *((_QWORD *)a1 + 1) = a1;
    *(_QWORD *)a1 = a1;
    *((_DWORD *)a1 + 4) = 0;
    ExFreePoolWithTag(a1, 0x74655350u);
  }
}
