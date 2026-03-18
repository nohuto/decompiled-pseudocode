/*
 * XREFs of DpiPdoPollChild @ 0x14024E618
 * Callers:
 *     DpiPdoGetDeviceDescriptor @ 0x1403C9318 (DpiPdoGetDeviceDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiPdoPollChild(__int64 a1, int a2, int a3, char a4, char a5)
{
  struct _IO_REMOVE_LOCK *v5; // r15
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  unsigned int v12; // edi
  _QWORD *v13; // rax

  v5 = *(struct _IO_REMOVE_LOCK **)(a1 + 64);
  v10 = ExAllocateFromNPagedLookasideList(&stru_14015DE40);
  v11 = v10;
  if ( v10 )
  {
    *((_DWORD *)v10 + 4) = 1953656900;
    *((_DWORD *)v10 + 5) = 10;
    v10[3] = a1;
    *((_DWORD *)v10 + 8) = a2;
    *((_DWORD *)v10 + 9) = a3;
    *((_BYTE *)v10 + 40) = a4;
    *((_BYTE *)v10 + 41) = a5;
    *((_BYTE *)v10 + 42) = 1;
    v12 = IoAcquireRemoveLockEx(v5 + 2, v10, File, 1u, 0x20u);
    KeWaitForSingleObject(qword_14015DFF0, Executive, 0, 0, 0LL);
    v13 = (_QWORD *)qword_14015DFE8;
    if ( *(__int64 **)qword_14015DFE8 != &qword_14015DFE0 )
      __fastfail(3u);
    *v11 = &qword_14015DFE0;
    v11[1] = v13;
    *v13 = v11;
    qword_14015DFE8 = (__int64)v11;
    KeReleaseMutex((PRKMUTEX)qword_14015DFF0, 0);
    KeSetTimer(&stru_14015DF50, (LARGE_INTEGER)-3000000LL, &stru_14015DF90);
  }
  else
  {
    v12 = -1073741670;
    WdLogSingleEntry1(6LL, -1073741670LL);
    WdLogGlobalForLineNumber = 6155;
  }
  return v12;
}
