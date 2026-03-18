/*
 * XREFs of DpiPdoHandleQueryDeviceRelations @ 0x1403CF7F0
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x14002A148 (DpiCheckForOutstandingD3Requests.c)
 *     DpiEnableD3Requests @ 0x1402BA7B0 (DpiEnableD3Requests.c)
 */

__int64 __fastcall DpiPdoHandleQueryDeviceRelations(_QWORD *Object, __int64 a2)
{
  __int64 v4; // rbx
  int v5; // r9d
  int v6; // r9d
  int v7; // r9d
  __int64 v8; // r9
  __int64 Pool2; // rax
  __int64 v10; // rbx
  unsigned int v11; // edi
  __int64 v13; // r9
  int v14; // ecx
  unsigned int v15; // eax
  unsigned int *v16; // r14
  unsigned int i; // edi
  __int64 v18; // rdx
  unsigned int v19; // eax

  v4 = *(_QWORD *)(*(_QWORD *)(Object[8] + 32LL) + 64LL);
  v5 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( !v5 )
    return *(unsigned int *)(a2 + 48);
  v6 = v5 - 1;
  if ( !v6 )
    return *(unsigned int *)(a2 + 48);
  v7 = v6 - 1;
  if ( v7 )
  {
    v8 = (unsigned int)(v7 - 1);
    if ( (_DWORD)v8 == 1 )
    {
      Pool2 = ExAllocatePool2(256LL, 16LL, 1953656900LL, v8);
      v10 = Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)Pool2 = 1;
        *(_QWORD *)(Pool2 + 8) = Object;
        ObfReferenceObject(Object);
        v11 = 0;
        *(_QWORD *)(a2 + 56) = v10;
      }
      else
      {
        v11 = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
        WdLogGlobalForLineNumber = 5071;
      }
      return v11;
    }
    return *(unsigned int *)(a2 + 48);
  }
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v4 + 484) )
    DpiCheckForOutstandingD3Requests(v4);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v4 + 168), 1u);
  v14 = *(_DWORD *)(v4 + 236);
  if ( v14 != 2 && (*(_DWORD *)(v4 + 240) != 2 || ((v14 - 3) & 0xFFFFFFFC) != 0 || v14 == 4)
    || (v15 = *(_DWORD *)(v4 + 2840), v15 < 2) )
  {
    v11 = *(_DWORD *)(a2 + 48);
  }
  else
  {
    v16 = (unsigned int *)ExAllocatePool2(256LL, 8LL * (v15 - 2) + 16, 1953656900LL, v13);
    if ( !v16 )
    {
      v11 = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
      WdLogGlobalForLineNumber = 5128;
      return v11;
    }
    for ( i = 1; i < *(_DWORD *)(v4 + 2840); ++i )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 2832) + 8LL * i) + 64LL);
      *(_QWORD *)&v16[2 * i] = *(_QWORD *)(v18 + 152);
      ObfReferenceObject(*(PVOID *)(v18 + 152));
    }
    v19 = i - 1;
    v11 = 0;
    *v16 = v19;
    *(_QWORD *)(a2 + 56) = v16;
  }
  if ( *(_BYTE *)(v4 + 484) )
    DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
  KeLeaveCriticalRegion();
  return v11;
}
