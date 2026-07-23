/*
 * XREFs of KeInitializeSchedulerAssist @ 0x140C69F20
 * Callers:
 *     KeInitSystem @ 0x140C62E30 (KeInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeInitializeSchedulerAssist(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 36536) )
    goto LABEL_6;
  if ( KiSchedulerAssistThreadFlagOverride != 1 )
  {
    v1 = 1;
    if ( KiSchedulerAssistThreadFlagOverride == 2 )
    {
      KiSchedulerAssistThreadFlagEnabled = 0;
      goto LABEL_8;
    }
LABEL_6:
    KiSchedulerAssistThreadFlagEnabled = v1;
    if ( !v1 )
      goto LABEL_8;
    goto LABEL_7;
  }
  KiSchedulerAssistThreadFlagEnabled = 1;
LABEL_7:
  _interlockedbittestandset(*(volatile signed __int32 **)(a1 + 24), 0x16u);
LABEL_8:
  result = (unsigned int)(KiVpThreadSystemWorkPriority - 1);
  if ( (unsigned int)result > 0x1E )
    KiVpThreadSystemWorkPriority = 1;
  if ( *(_QWORD *)(a1 + 36536) )
    KiIrqlFlags |= 1u;
  return result;
}
