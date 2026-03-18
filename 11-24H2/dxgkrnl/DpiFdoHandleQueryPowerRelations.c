/*
 * XREFs of DpiFdoHandleQueryPowerRelations @ 0x1402410D0
 * Callers:
 *     DpiFdoHandleQueryDeviceRelations @ 0x1403DB600 (DpiFdoHandleQueryDeviceRelations.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x140041998 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x1400419DC (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     DpiEnableD3Requests @ 0x1402C7FF0 (DpiEnableD3Requests.c)
 */

__int64 __fastcall DpiFdoHandleQueryPowerRelations(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  _DWORD *v3; // rdi
  __int64 v4; // r13
  int v5; // esi
  __int64 v6; // rbp
  __int64 v7; // r15
  __int64 *i; // r14
  __int64 *v9; // rbx
  __int64 v10; // rbx
  int v11; // ecx
  _DWORD *Pool2; // rax
  _DWORD *v13; // rbp
  bool v14; // zf
  int v18; // [rsp+80h] [rbp+18h]

  v2 = 0;
  v3 = *(_DWORD **)(a2 + 56);
  LODWORD(v4) = 0;
  v5 = 0;
  v18 = 4;
  v6 = a2;
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 40) + 133LL) || *(_BYTE *)(a1 + 480) )
  {
    v2 = -1073741637;
    goto LABEL_45;
  }
  if ( v3 )
    LODWORD(v4) = *v3;
  AcquireMiniportListMutex();
  v7 = qword_140160D48;
  v5 = v4;
  while ( 1 )
  {
    if ( *(_QWORD *)v7 == qword_140160D48 )
    {
      ReleaseMiniportListMutex();
      KeSetEvent((PRKEVENT)(a1 + 1288), 1, 0);
      return v2;
    }
    if ( !*(_BYTE *)(v7 + 133) )
      break;
LABEL_39:
    v7 = *(_QWORD *)v7;
  }
  KeWaitForSingleObject((PVOID)(v7 + 72), Executive, 0, 0, 0LL);
  for ( i = *(__int64 **)(v7 + 56); ; i = (__int64 *)*i )
  {
    if ( *i == *(_QWORD *)(v7 + 56) )
    {
      KeReleaseMutex((PRKMUTEX)(v7 + 72), 0);
      goto LABEL_39;
    }
    if ( !*((_BYTE *)i + 480) && *((_DWORD *)i + 4) == 1953656900 )
      break;
LABEL_37:
    ;
  }
  if ( *((_DWORD *)i + 5) == 2 )
  {
    v9 = i;
  }
  else
  {
    if ( *((_DWORD *)i + 5) != 3 )
      goto LABEL_37;
    v10 = i[354];
    if ( !v10 )
      goto LABEL_37;
    v9 = *(__int64 **)(v10 + 64);
  }
  KeEnterCriticalRegion();
  if ( *((_BYTE *)v9 + 484) )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9[3] + 64) + 4232LL));
  ExAcquireResourceSharedLite((PERESOURCE)v9[21], 1u);
  v11 = *((_DWORD *)v9 + 59);
  if ( v11 != 2 && (*((_DWORD *)v9 + 60) != 2 || ((v11 - 3) & 0xFFFFFFFC) != 0 || v11 == 4)
    || (v9[505] & 2) == 0
    || (*((_BYTE *)v9 + 4041) & 0x20) != 0 )
  {
LABEL_34:
    if ( *((_BYTE *)v9 + 484) )
      DpiEnableD3Requests(v9[3]);
    ExReleaseResourceLite((PERESOURCE)v9[21]);
    KeLeaveCriticalRegion();
    goto LABEL_37;
  }
  if ( (unsigned int)v4 >= v5 + 1 )
  {
LABEL_33:
    ObfReferenceObject((PVOID)i[19]);
    *(_QWORD *)&v3[2 * (*v3)++ + 2] = i[19];
    ++v5;
    goto LABEL_34;
  }
  v4 = (unsigned int)(v18 + v4);
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, 8 * v4 + 15, 1953656900LL);
  v13 = Pool2;
  if ( Pool2 )
  {
    if ( v3 && v5 )
    {
      memmove(Pool2, v3, 8LL * (unsigned int)(v5 - 1) + 16);
    }
    else
    {
      *Pool2 = 0;
      if ( !v3 )
      {
LABEL_32:
        v3 = v13;
        *(_QWORD *)(a2 + 56) = v13;
        v18 *= 2;
        goto LABEL_33;
      }
    }
    ExFreePoolWithTag(v3, 0);
    goto LABEL_32;
  }
  v2 = -1073741801;
  WdLogSingleEntry1(6LL, -1073741801LL);
  v14 = *((_BYTE *)v9 + 484) == 0;
  WdLogGlobalForLineNumber = 8551;
  if ( !v14 )
    DpiEnableD3Requests(v9[3]);
  ExReleaseResourceLite((PERESOURCE)v9[21]);
  KeLeaveCriticalRegion();
  KeReleaseMutex((PRKMUTEX)(v7 + 72), 0);
  ReleaseMiniportListMutex();
  v6 = a2;
LABEL_45:
  if ( v3 )
  {
    while ( v5 )
      ObfDereferenceObject(*(PVOID *)&v3[2 * --v5 + 2]);
    ExFreePoolWithTag(v3, 0);
  }
  *(_QWORD *)(v6 + 56) = 0LL;
  return v2;
}
