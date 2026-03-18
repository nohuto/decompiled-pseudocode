/*
 * XREFs of PoGetRequesterOld @ 0x1405C8818
 * Callers:
 *     PoCaptureReasonContext @ 0x140425AF8 (PoCaptureReasonContext.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PoGetRequesterOld(char a1, void *a2, __int64 a3)
{
  LONG_PTR result; // rax
  struct _KTHREAD *CurrentThread; // rdx
  _QWORD *Teb; // rdx
  _KPROCESS *Process; // rcx
  __int16 v7; // ax
  bool v8; // zf
  char v9; // al
  LONG_PTR v10; // rax
  LONG_PTR v11; // [rsp+48h] [rbp+20h]

  result = (LONG_PTR)a2;
  if ( a1 )
  {
    v11 = 0LL;
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
      Teb = 0LL;
    else
      Teb = CurrentThread->Teb;
    if ( Teb )
    {
      if ( !KeGetCurrentThread()->ApcState.Process[1].ReadyTime )
        goto LABEL_16;
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( !Process[1].ReadyTime )
        goto LABEL_16;
      v7 = WORD2(Process[3].PerProcessorCycleTimes);
      if ( v7 == 332 || (v8 = v7 == 452, v9 = 0, v8) )
        v9 = 1;
      if ( v9 )
        v10 = *((unsigned int *)Teb + 3032);
      else
LABEL_16:
        v10 = Teb[740];
      v11 = v10;
    }
    *(_DWORD *)a3 = (v11 != 0) + 1;
    *(_QWORD *)(a3 + 8) = KeGetCurrentThread()->ApcState.Process;
    result = v11;
    *(_DWORD *)(a3 + 40) = v11;
  }
  else
  {
    *(_DWORD *)a3 = 0;
    *(_QWORD *)(a3 + 8) = a2;
    if ( a2 )
      return ObfReferenceObjectWithTag(a2, 0x67446F50u);
  }
  return result;
}
