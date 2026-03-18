/*
 * XREFs of KeInvalidAccessAllowed @ 0x1402292D0
 * Callers:
 *     MiResolveProtoPteFault @ 0x140214BB0 (MiResolveProtoPteFault.c)
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 *     MiCheckSystemPageTables @ 0x140229450 (MiCheckSystemPageTables.c)
 *     MiSystemFault @ 0x140229570 (MiSystemFault.c)
 *     MiResolveMappedFileFault @ 0x140239490 (MiResolveMappedFileFault.c)
 *     MiRaisedIrqlFault @ 0x140245EB8 (MiRaisedIrqlFault.c)
 *     MiAllowGuardFault @ 0x140465770 (MiAllowGuardFault.c)
 *     MiValidFault @ 0x1404F2C70 (MiValidFault.c)
 * Callees:
 *     KiRspInIstStack @ 0x14040EE44 (KiRspInIstStack.c)
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
                && (v11 = *(_QWORD *)(a1 + 360), v11 < qword_140FC6410)
                && v11 >= qword_140FC6408
                && KeGetCurrentIrql() == 15;
          goto LABEL_5;
        }
      }
    }
    return 0;
  }
  if ( v4 != 51 )
    return 0;
  v6 = (void *)qword_140FC6480;
LABEL_5:
  if ( (a2 & 1) == 0 && *(void **)(a1 + 360) == v6 )
    return 1;
  return result;
}
