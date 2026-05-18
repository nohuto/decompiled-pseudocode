/*
 * XREFs of ?ReleaseExtraDataSection@CApiPortClient@@AEAAXXZ @ 0x18000F06C
 * Callers:
 *     ??1CApiPortClient@@QEAA@XZ @ 0x18000ED38 (--1CApiPortClient@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CApiPortClient::ReleaseExtraDataSection(CApiPortClient *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  void *v3; // rsi
  HANDLE CurrentProcess; // rax
  void *v5; // rcx

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v3 = (void *)*((_QWORD *)this + 1);
  if ( v3 )
  {
    CurrentProcess = GetCurrentProcess();
    NtUnmapViewOfSection(CurrentProcess, v3);
    *((_QWORD *)this + 1) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 2);
  if ( v5 )
  {
    CloseHandle(v5);
    *((_QWORD *)this + 2) = 0LL;
  }
  if ( v1 )
    LeaveCriticalSection(v1);
}
