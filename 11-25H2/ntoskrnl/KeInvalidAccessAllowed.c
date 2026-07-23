/*
 * XREFs of KeInvalidAccessAllowed @ 0x1403E2860
 * Callers:
 *     MiResolveMappedFileFault @ 0x1402276BC (MiResolveMappedFileFault.c)
 *     MiResolveProtoPteFault @ 0x140240060 (MiResolveProtoPteFault.c)
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 *     MiAllowGuardFault @ 0x1403E1AB0 (MiAllowGuardFault.c)
 *     MiRaisedIrqlFault @ 0x1403E1B20 (MiRaisedIrqlFault.c)
 *     MiSystemFault @ 0x1403E1EBC (MiSystemFault.c)
 *     MiCheckSystemPageTables @ 0x1403E2760 (MiCheckSystemPageTables.c)
 *     MiValidFault @ 0x1404EECA0 (MiValidFault.c)
 * Callees:
 *     KiRspInIstStack @ 0x1403E2C50 (KiRspInIstStack.c)
 */

bool __fastcall KeInvalidAccessAllowed(__int64 a1, char a2)
{
  __int16 v4; // cx
  bool result; // al
  void *v6; // rcx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rax

  if ( !a1 )
    return 0;
  v4 = *(_WORD *)(a1 + 368);
  result = 0;
  if ( v4 == 16 )
  {
    if ( (*(_DWORD *)(a1 + 376) & 0x200) != 0 )
      goto LABEL_15;
    v7 = (unsigned __int8)KiKvaShadow;
    v8 = *(_QWORD *)(a1 + 384);
    v9 = (unsigned int)KeIstStackSize;
    v10 = *(_QWORD *)((char *)KeGetPcr()->NtTib.StackBase + 52);
    if ( KiKvaShadow )
      v9 = 464LL;
    if ( v8 > v10 || v8 < v10 - v9 )
    {
      if ( !KiKvaShadow || (v7 = *(_QWORD *)(v10 + 8), v8 > v7) || (v7 -= (unsigned int)(KeIstStackSize - 32), v8 < v7) )
      {
        if ( !(unsigned int)KiRspInIstStack(2LL, v8, v10, v7) )
        {
LABEL_15:
          v6 = &ExpInterlockedPopEntrySListFault;
          result = KiDynamicTraceEnabled
                && (v11 = *(_QWORD *)(a1 + 360), v11 < qword_140FC6450)
                && v11 >= ControlPc
                && KeGetCurrentIrql() == 15;
          goto LABEL_5;
        }
      }
    }
    return 0;
  }
  if ( v4 != 51 )
    return 0;
  v6 = (void *)qword_140FC64C0;
LABEL_5:
  if ( (a2 & 1) == 0 && *(void **)(a1 + 360) == v6 )
    return 1;
  return result;
}
