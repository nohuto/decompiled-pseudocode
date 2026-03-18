/*
 * XREFs of DpiLdaHandleQueryDeviceRelations @ 0x14024C780
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DpiEnableD3Requests @ 0x1402BA7B0 (DpiEnableD3Requests.c)
 */

__int64 __fastcall DpiLdaHandleQueryDeviceRelations(__int64 a1, IRP *a2)
{
  __int64 v2; // rbp
  __int64 v3; // rsi
  int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // rax
  unsigned int *Information; // rbx
  __int64 v9; // r13
  _DWORD *Pool2; // rax
  _DWORD *v11; // r14
  void *v12; // rcx

  v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 64);
  v5 = -1073741637;
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length != 3 )
    goto LABEL_21;
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v3 + 484) )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 64LL) + 4232LL));
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 168), 1u);
  v7 = *(_QWORD *)(v3 + 2832);
  if ( v7 )
  {
    Information = (unsigned int *)a2->IoStatus.Information;
    v9 = *(_QWORD *)(v7 + 64);
    if ( Information )
      v2 = *Information;
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, (unsigned int)(8 * v2 + 16), 1953656900LL, v6);
    v11 = Pool2;
    if ( Pool2 )
    {
      memset(Pool2, 0, (unsigned int)(8 * v2 + 16));
      *v11 = v2 + 1;
      if ( (_DWORD)v2 )
        memmove(v11 + 2, Information + 2, 8 * v2);
      else
        v2 = 0LL;
      v12 = *(void **)(v9 + 152);
      *(_QWORD *)&v11[2 * v2 + 2] = v12;
      ObfReferenceObject(v12);
      if ( Information )
        ExFreePoolWithTag(Information, 0);
      a2->IoStatus.Information = (ULONG_PTR)v11;
      v5 = 0;
    }
    else
    {
      v5 = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
      WdLogGlobalForLineNumber = 1502;
    }
  }
  if ( *(_BYTE *)(v3 + 484) )
    DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
  KeLeaveCriticalRegion();
  if ( v5 >= 0 )
  {
    a2->IoStatus.Status = v5;
    goto LABEL_21;
  }
  if ( v5 == -1073741637 )
  {
LABEL_21:
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v3 + 160), a2);
  }
  a2->IoStatus.Status = v5;
  IofCompleteRequest(a2, 1);
  return (unsigned int)v5;
}
