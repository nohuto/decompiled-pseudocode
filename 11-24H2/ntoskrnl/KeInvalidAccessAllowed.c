/*
 * XREFs of KeInvalidAccessAllowed @ 0x1402FC4D0
 * Callers:
 *     MiResolveMappedFileFault @ 0x140214824 (MiResolveMappedFileFault.c)
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 *     MiRaisedIrqlFault @ 0x1402FADDC (MiRaisedIrqlFault.c)
 *     MiCheckSystemPageTables @ 0x1402FC6C0 (MiCheckSystemPageTables.c)
 *     MiSystemFault @ 0x1402FC7E0 (MiSystemFault.c)
 *     MiResolveProtoPteFault @ 0x140334760 (MiResolveProtoPteFault.c)
 *     MiAllowGuardFault @ 0x14045D6F0 (MiAllowGuardFault.c)
 *     MiValidFault @ 0x1404F0710 (MiValidFault.c)
 * Callees:
 *     KiRspInIstStack @ 0x140407044 (KiRspInIstStack.c)
 */

bool __fastcall KeInvalidAccessAllowed(__int64 a1, char a2)
{
  __int16 v4; // cx
  bool result; // al
  void *v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r9

  if ( !a1 )
    return 0;
  v4 = *(_WORD *)(a1 + 368);
  result = 0;
  if ( v4 == 16 )
  {
    if ( (*(_DWORD *)(a1 + 376) & 0x200) != 0 )
      goto LABEL_15;
    v7 = *(_QWORD *)(a1 + 384);
    v8 = (unsigned int)KeIstStackSize;
    v9 = *(_QWORD *)((char *)KeGetPcr()->NtTib.StackBase + 52);
    if ( KiKvaShadow )
      v8 = 464LL;
    if ( v7 > v9 || v7 < v9 - v8 )
    {
      if ( !KiKvaShadow || (v11 = *(_QWORD *)(v9 + 8), v7 > v11) || v7 < v11 - (unsigned int)(KeIstStackSize - 32) )
      {
        if ( !(unsigned int)KiRspInIstStack(2LL, v7) )
        {
LABEL_15:
          v6 = &ExpInterlockedPopEntrySListFault;
          result = KiDynamicTraceEnabled
                && (v10 = *(_QWORD *)(a1 + 360), v10 < qword_140FC7490)
                && v10 >= ControlPc
                && KeGetCurrentIrql() == 15;
          goto LABEL_5;
        }
      }
    }
    return 0;
  }
  if ( v4 != 51 )
    return 0;
  v6 = (void *)qword_140FC7500;
LABEL_5:
  if ( (a2 & 1) == 0 && *(void **)(a1 + 360) == v6 )
    return 1;
  return result;
}
