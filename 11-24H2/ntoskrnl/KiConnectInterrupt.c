/*
 * XREFs of KiConnectInterrupt @ 0x1402B339C
 * Callers:
 *     KeConnectInterrupt @ 0x1402B31A0 (KeConnectInterrupt.c)
 * Callees:
 *     KiInsertInterruptObjectOrdered @ 0x1402B4BF8 (KiInsertInterruptObjectOrdered.c)
 *     KeSetSystemGroupAffinityThread @ 0x140318B30 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140319730 (KeRevertToUserGroupAffinityThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall KiConnectInterrupt(__int64 a1)
{
  __int64 v1; // rdi
  char v2; // r14
  int v3; // edx
  char v4; // r15
  __int64 v5; // rsi
  unsigned __int8 v7; // al
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int8 CurrentIrql; // bp
  _KIDTENTRY64 *v12; // rcx
  __int64 (__fastcall *v13)(); // rax
  char *v14; // r10
  __int64 (__fastcall *v16)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16); // rax
  __int64 v17; // r11
  __int64 v18; // r10
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-58h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-48h] BYREF

  v1 = *(unsigned int *)(a1 + 88);
  v2 = 0;
  v3 = *(unsigned __int8 *)(a1 + 92);
  v4 = 0;
  v5 = *(unsigned int *)(a1 + 96);
  PreviousAffinity = 0LL;
  if ( (unsigned int)v1 > 0xFF || (unsigned __int8)v3 > 0xFu || v3 != (unsigned int)v1 >> 4 && (_BYTE)v3 )
    return 3221225711LL;
  if ( (unsigned int)v5 >= (unsigned int)KeNumberProcessors_0 )
    return 3221225711LL;
  v7 = *(_BYTE *)(a1 + 93);
  if ( v7 < (unsigned __int8)v3 )
  {
    if ( v7 )
      return 3221225711LL;
  }
  Affinity = 0LL;
  v8 = KiProcessorBlock[v5];
  Affinity.Group = *(unsigned __int8 *)(v8 + 208);
  Affinity.Mask = *(_QWORD *)(v8 + 200);
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  if ( (_DWORD)v5 != KeGetCurrentPrcb()->Number )
    __fastfail(0x28u);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v9) = 15;
    LOBYTE(v10) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v10, v9);
  }
  v12 = &KeGetPcr()->IdtBase[v1];
  LOWORD(Affinity.Mask) = v12->OffsetLow;
  WORD1(Affinity.Mask) = v12->OffsetMiddle;
  HIDWORD(Affinity.Mask) = v12->OffsetHigh;
  if ( !*(_BYTE *)(a1 + 95) )
  {
    v13 = KiIsrThunkShadow;
    if ( !KiKvaShadow )
      v13 = KxUnexpectedInterrupt0;
    if ( (__int64 (__fastcall *)())Affinity.Mask == (__int64 (__fastcall *)())((char *)v13 + 8 * v1) )
    {
      v14 = (char *)KeGetCurrentPrcb()->InterruptObject[v1];
      if ( !v14 )
      {
        if ( !*(_BYTE *)(a1 + 93) )
        {
          *(_QWORD *)(a1 + 16) = a1 + 8;
          *(_QWORD *)(a1 + 8) = a1 + 8;
          *(_QWORD *)(a1 + 80) = KiChainedDispatch;
        }
        v4 = 1;
        *(_BYTE *)(a1 + 95) = 1;
        goto LABEL_18;
      }
      if ( (unsigned int)v1 >= 0x30 )
      {
        v2 = 1;
        if ( *(_DWORD *)(a1 + 108) == *((_DWORD *)v14 + 27) )
        {
          if ( *(_BYTE *)(a1 + 100) )
          {
            if ( v14[100] )
            {
              if ( *(__int64 (__fastcall **)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))(a1 + 80) == KiInterruptDispatch )
              {
                v16 = (__int64 (__fastcall *)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))*((_QWORD *)v14 + 10);
                if ( v16 == KiChainedDispatch || v16 == KiInterruptDispatch )
                {
                  *(_BYTE *)(a1 + 95) = 1;
                  v4 = 1;
                  if ( *((__int64 (__fastcall **)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))v14
                       + 10) != KiChainedDispatch )
                  {
                    *((_QWORD *)v14 + 2) = v14 + 8;
                    *((_QWORD *)v14 + 1) = v14 + 8;
                    *((_QWORD *)v14 + 10) = KiChainedDispatch;
                  }
                  KiInsertInterruptObjectOrdered(v14, a1);
                  if ( !*(_BYTE *)(v18 + 93) )
                  {
                    if ( *(_BYTE *)(a1 + 93) )
                    {
                      *(_QWORD *)(a1 + 80) = v17;
LABEL_18:
                      KeGetCurrentPrcb()->InterruptObject[v1] = (void *)a1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v9) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
  }
  __writecr8(CurrentIrql);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( v4 )
    return v2 != 0 ? 0x127 : 0;
  return 3221225711LL;
}
