/*
 * XREFs of KiSystemServiceHandler @ 0x1406B29C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnwindEx @ 0x14025C330 (RtlUnwindEx.c)
 *     KiBugCheckDispatch @ 0x1406B3980 (KiBugCheckDispatch.c)
 */

__int64 __fastcall KiSystemServiceHandler(int *a1, ULONG_PTR a2, int *a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  _KTRAP_FRAME *TrapFrame; // rcx

  if ( (a1[1] & 0x66) != 0 )
  {
    if ( (a1[1] & 0x20) == 0 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( CurrentThread->PreviousMode )
        KiBugCheckDispatch(58LL, a2, a3, a4);
      TrapFrame = CurrentThread->TrapFrame;
      CurrentThread->TrapFrame = (_KTRAP_FRAME *)TrapFrame->TrapFrame;
      CurrentThread->PreviousMode = TrapFrame->PreviousMode;
    }
  }
  else
  {
    if ( &KiSystemServiceGdiTebAccess == *((_UNKNOWN **)a1 + 2)
      || (unsigned __int64)&KiSystemServiceCopyStart <= *((_QWORD *)a1 + 2)
      && (unsigned __int64)&KiSystemServiceCopyEnd > *((_QWORD *)a1 + 2) )
    {
      RtlUnwindEx(a2, (__int64)&KiSystemServiceExit, a1, (unsigned int)*a1, a3, 0LL);
    }
    if ( KeGetCurrentThread()->PreviousMode )
      KiBugCheckDispatch(59LL, (unsigned int)*a1, *((_QWORD *)a1 + 2), a3);
  }
  return 1LL;
}
