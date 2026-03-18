/*
 * XREFs of EtwpApplyEventIdPayloadFilter @ 0x1403F0170
 * Callers:
 *     EtwpApplyEventIdPayloadFilterOnUserEvent @ 0x140925DA0 (EtwpApplyEventIdPayloadFilterOnUserEvent.c)
 * Callees:
 *     EtwpApplyPayloadFilterInternal @ 0x1403F03A0 (EtwpApplyPayloadFilterInternal.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

char __fastcall EtwpApplyEventIdPayloadFilter(
        __int64 a1,
        unsigned int a2,
        __int16 a3,
        __int64 a4,
        __int16 a5,
        unsigned int a6,
        __int64 a7,
        unsigned __int8 a8,
        unsigned __int8 a9)
{
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rbp
  unsigned __int8 CurrentIrql; // r14
  __int64 v15; // rdx
  unsigned __int16 v16; // ax
  char v17; // al
  char result; // al
  __int64 v19; // rdx
  unsigned __int16 v20; // ax
  char v21; // al
  char v22[16]; // [rsp+40h] [rbp-28h] BYREF

  v9 = 0LL;
  v10 = a2;
  v22[0] = 1;
  if ( a9 >= 2u )
  {
    v19 = *(_QWORD *)(104LL * a2 + *(_QWORD *)(a1 + 384) + 72);
    if ( v19 )
    {
      v20 = *(_WORD *)(v19 + 2) & __ROR2__(a5, *(_BYTE *)(v19 + 1));
      while ( a5 != *(_WORD *)(v19 + 4LL * v20 + 8) )
      {
        v20 = *(unsigned __int8 *)(v19 + 4LL * v20 + 6);
        if ( v20 == 255 )
        {
          v21 = 0;
          goto LABEL_24;
        }
      }
      v21 = 1;
LABEL_24:
      if ( *(_BYTE *)v19 != v21 )
        return 0;
    }
    v9 = *(volatile signed __int32 **)(*(_QWORD *)(a1 + 384) + 104 * v10 + 80);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    v15 = *(_QWORD *)(104 * v10 + *(_QWORD *)(a1 + 384) + 72);
    if ( !v15 )
      goto LABEL_26;
    v16 = *(_WORD *)(v15 + 2) & __ROR2__(a5, *(_BYTE *)(v15 + 1));
    while ( a5 != *(_WORD *)(v15 + 4LL * v16 + 8) )
    {
      v16 = *(unsigned __int8 *)(v15 + 4LL * v16 + 6);
      if ( v16 == 255 )
      {
        v17 = 0;
        goto LABEL_9;
      }
    }
    v17 = 1;
LABEL_9:
    if ( *(_BYTE *)v15 == v17 )
    {
LABEL_26:
      v9 = *(volatile signed __int32 **)(*(_QWORD *)(a1 + 384) + 104 * v10 + 80);
      if ( v9 )
        _InterlockedIncrement(v9);
    }
    else
    {
      v22[0] = 0;
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  if ( !v9 )
    return v22[0];
  if ( (int)EtwpApplyPayloadFilterInternal(a4, a6, a7, a8, a3 == 0, v9 + 2, v22) >= 0 )
  {
    result = v22[0];
  }
  else
  {
    result = 1;
    v22[0] = 1;
  }
  if ( a9 < 2u )
  {
    if ( _InterlockedExchangeAdd(v9, 0xFFFFFFFF) == 1 )
      ExFreePoolWithTag((PVOID)v9, 0);
    return v22[0];
  }
  return result;
}
