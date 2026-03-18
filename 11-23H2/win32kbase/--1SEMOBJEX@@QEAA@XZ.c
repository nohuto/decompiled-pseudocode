/*
 * XREFs of ??1SEMOBJEX@@QEAA@XZ @ 0x1C00CCCEC
 * Callers:
 *     HDXDrvEscape @ 0x1C00CCB90 (HDXDrvEscape.c)
 *     GreDrvConnect @ 0x1C016CA00 (GreDrvConnect.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0042EC0 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall SEMOBJEX::~SEMOBJEX(SEMOBJEX *this)
{
  __int64 v1; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  struct _ERESOURCE *v5; // rcx
  __int64 v6; // rdx
  struct _ERESOURCE *v7; // rcx
  __int64 v8; // rdx
  struct _ERESOURCE *v9; // rcx
  __int64 v10; // rdx
  struct _ERESOURCE *v11; // rcx
  __int64 v12; // rdx
  struct _ERESOURCE *v13; // rcx
  struct _ERESOURCE *v14; // rcx
  struct _ERESOURCE *v15; // rcx

  v1 = *((_QWORD *)this + 7);
  if ( v1 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem8", v1);
    v14 = (struct _ERESOURCE *)*((_QWORD *)this + 7);
    if ( v14 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v14);
      PsLeavePriorityRegion();
    }
  }
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem7", v3);
    v15 = (struct _ERESOURCE *)*((_QWORD *)this + 6);
    if ( v15 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v15);
      PsLeavePriorityRegion();
    }
  }
  v4 = *((_QWORD *)this + 5);
  if ( v4 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem6", v4);
    v5 = (struct _ERESOURCE *)*((_QWORD *)this + 5);
    if ( v5 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v5);
      PsLeavePriorityRegion();
    }
  }
  v6 = *((_QWORD *)this + 4);
  if ( v6 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem5", v6);
    v7 = (struct _ERESOURCE *)*((_QWORD *)this + 4);
    if ( v7 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v7);
      PsLeavePriorityRegion();
    }
  }
  v8 = *((_QWORD *)this + 3);
  if ( v8 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem4", v8);
    v9 = (struct _ERESOURCE *)*((_QWORD *)this + 3);
    if ( v9 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v9);
      PsLeavePriorityRegion();
    }
  }
  v10 = *((_QWORD *)this + 2);
  if ( v10 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem3", v10);
    v11 = (struct _ERESOURCE *)*((_QWORD *)this + 2);
    if ( v11 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v11);
      PsLeavePriorityRegion();
    }
  }
  v12 = *((_QWORD *)this + 1);
  if ( v12 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem2", v12);
    v13 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
    if ( v13 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v13);
      PsLeavePriorityRegion();
    }
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem1", *(_QWORD *)this);
    if ( *(_QWORD *)this )
    {
      ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)this);
      PsLeavePriorityRegion();
    }
  }
}
