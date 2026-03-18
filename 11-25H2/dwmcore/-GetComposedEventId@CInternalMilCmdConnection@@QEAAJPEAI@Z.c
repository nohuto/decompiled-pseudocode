/*
 * XREFs of ?GetComposedEventId@CInternalMilCmdConnection@@QEAAJPEAI@Z @ 0x180266E0C
 * Callers:
 *     ?MilCompositionEngine_GetComposedEventId@@YAJPEAI@Z @ 0x180236610 (-MilCompositionEngine_GetComposedEventId@@YAJPEAI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireExclusive@CReadWriteLock@@QEAAXXZ @ 0x180181244 (-AcquireExclusive@CReadWriteLock@@QEAAXXZ.c)
 *     ??1?$CWriteGuard@VCReadWriteLock@@@@QEAA@XZ @ 0x1801FFA0C (--1-$CWriteGuard@VCReadWriteLock@@@@QEAA@XZ.c)
 *     ?OpenComposedEvent@@YAJIKPEAPEAX@Z @ 0x1802BF444 (-OpenComposedEvent@@YAJIKPEAPEAX@Z.c)
 */

__int64 __fastcall CInternalMilCmdConnection::GetComposedEventId(RTL_SRWLOCK *this, unsigned int *a2)
{
  unsigned int CompositionId; // edi
  unsigned int v5; // edx
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v10; // [rsp+30h] [rbp+8h] BYREF

  CompositionId = DwmQueryCompositionId();
  v10 = this + 16;
  CReadWriteLock::AcquireExclusive(this + 16);
  if ( this[2].Ptr || (v6 = OpenComposedEvent(CompositionId, v5, &this[2].Ptr), v7 = v6, v6 >= 0) )
  {
    *a2 = CompositionId;
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\internalmilcmdconnection.cpp",
      (const char *)(unsigned int)v6);
  }
  CWriteGuard<CReadWriteLock>::~CWriteGuard<CReadWriteLock>((__int64 *)&v10);
  return v7;
}
