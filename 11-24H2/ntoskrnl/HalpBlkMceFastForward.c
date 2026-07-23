/*
 * XREFs of HalpBlkMceFastForward @ 0x140BDD510
 * Callers:
 *     HalpBlkMachineCheckAbort @ 0x140BDEB80 (HalpBlkMachineCheckAbort.c)
 *     HalpBlkNmiInterrupt @ 0x140BDED00 (HalpBlkNmiInterrupt.c)
 * Callees:
 *     HalpBlkFatalErrorHalt @ 0x140BDD900 (HalpBlkFatalErrorHalt.c)
 */

char __fastcall HalpBlkMceFastForward(__int64 a1, char a2)
{
  unsigned __int64 v2; // r9
  char v4; // bl
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // r14
  __int64 v9; // rcx
  int v10; // ebp
  volatile signed __int32 *v11; // rax
  _EXCEPTION_DISPOSITION (__fastcall **p_Handler)(_EXCEPTION_RECORD *, void *, _CONTEXT *, void *); // rcx

  v2 = *(_QWORD *)(a1 + 384);
  v4 = 0;
  v5 = *(unsigned __int64 *)((char *)&KeGetPcr()->NtTib.ExceptionList[4].Next[3].Next + 4);
  if ( v2 <= v5 && v2 >= v5 - 0x2000 )
  {
    v4 = 1;
    _InterlockedAdd((volatile signed __int32 *)&KeGetPcr()->NtTib.ExceptionList[151].Handler, 1u);
  }
  v6 = *(unsigned __int64 *)((char *)&KeGetPcr()->NtTib.ExceptionList[4].Next[2].Handler + 4);
  if ( v2 <= v6 && v2 >= v6 - 0x2000 )
  {
    v4 |= 2u;
    _InterlockedAdd((volatile signed __int32 *)&KeGetPcr()->NtTib.ExceptionList[151].Handler + 1, 1u);
  }
  v7 = *(_QWORD *)(a1 + 360);
  if ( v7 >= (unsigned __int64)&HalpBlkMceExitMceTailMceBegin && v7 < (unsigned __int64)&HalpBlkMceExitMceTailMceEnd )
  {
    v4 |= 4u;
    _InterlockedAdd((volatile signed __int32 *)&KeGetPcr()->NtTib.ExceptionList[152], 1u);
  }
  if ( v7 >= (unsigned __int64)&HalpBlkMceExitMceTailNmiBegin && v7 < (unsigned __int64)HalpBlkMceExitMceTailNmiEnd )
  {
    v4 |= 4u;
    _InterlockedAdd((volatile signed __int32 *)&KeGetPcr()->NtTib.ExceptionList[152], 1u);
  }
  ExceptionList = KeGetPcr()->NtTib.ExceptionList;
  v9 = v4 & 1;
  if ( a2 || (v4 & 1) != 0 )
  {
    v11 = (volatile signed __int32 *)KeGetPcr()->NtTib.ExceptionList;
    _InterlockedAdd(v11 + 611, 1u);
    if ( (v4 & 1) != 0 )
    {
      v11 = (volatile signed __int32 *)KeGetPcr()->NtTib.ExceptionList;
      _InterlockedAdd(v11 + 615, 1u);
    }
    v10 = 1;
    if ( a2 )
    {
      if ( (v4 & 1) != 0 )
      {
        LOBYTE(v9) = 2;
        HalpBlkFatalErrorHalt(v9, a1);
      }
      goto LABEL_19;
    }
  }
  else
  {
    _InterlockedAdd((volatile signed __int32 *)&KeGetPcr()->NtTib.ExceptionList[153], 1u);
    v10 = 0;
  }
  LOBYTE(v11) = v4 & 6;
  if ( (v4 & 6) == 2 )
  {
    LOBYTE(v9) = 18;
    HalpBlkFatalErrorHalt(v9, a1);
  }
  p_Handler = &ExceptionList[146].Handler;
  if ( !v10 )
LABEL_19:
    p_Handler = &ExceptionList[141].Handler;
  if ( (v4 & 4) != 0 )
  {
    _InterlockedAdd((volatile signed __int32 *)&KeGetPcr()->NtTib.ExceptionList[154], 1u);
    *(_OWORD *)(a1 + 360) = *(_OWORD *)p_Handler;
    *(_OWORD *)(a1 + 376) = *((_OWORD *)p_Handler + 1);
    *(_QWORD *)(a1 + 392) = p_Handler[4];
    *(_QWORD *)(a1 + 48) = p_Handler[5];
    *(_QWORD *)(a1 + 56) = p_Handler[6];
    *(_QWORD *)(a1 + 64) = p_Handler[7];
    v11 = (volatile signed __int32 *)KeGetPcr()->NtTib.ExceptionList;
    _InterlockedAdd(v11 + 610, 1u);
    *((_WORD *)p_Handler + 4) = 0;
  }
  if ( !a2 )
  {
    _InterlockedAdd((volatile signed __int32 *)&KeGetPcr()->NtTib.ExceptionList[152].Next + 1, 1u);
    *(_OWORD *)p_Handler = *(_OWORD *)(a1 + 360);
    *((_OWORD *)p_Handler + 1) = *(_OWORD *)(a1 + 376);
    p_Handler[4] = *(_EXCEPTION_DISPOSITION (__fastcall **)(_EXCEPTION_RECORD *, void *, _CONTEXT *, void *))(a1 + 392);
    p_Handler[5] = *(_EXCEPTION_DISPOSITION (__fastcall **)(_EXCEPTION_RECORD *, void *, _CONTEXT *, void *))(a1 + 48);
    p_Handler[6] = *(_EXCEPTION_DISPOSITION (__fastcall **)(_EXCEPTION_RECORD *, void *, _CONTEXT *, void *))(a1 + 56);
    v11 = *(volatile signed __int32 **)(a1 + 64);
    p_Handler[7] = (_EXCEPTION_DISPOSITION (__fastcall *)(_EXCEPTION_RECORD *, void *, _CONTEXT *, void *))v11;
  }
  return (char)v11;
}
