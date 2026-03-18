/*
 * XREFs of DpiFdoHandleQueryThermalInterface @ 0x1402479E0
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x14002A148 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     DpiQueryMiniportInterface @ 0x140188CC4 (DpiQueryMiniportInterface.c)
 *     DpiEnableD3Requests @ 0x1402BA7B0 (DpiEnableD3Requests.c)
 */

__int64 __fastcall DpiFdoHandleQueryThermalInterface(_QWORD *Object, __int16 a2, __int16 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  __int64 result; // rax
  int MiniportInterface; // edi
  __int64 v10; // r9
  _BYTE *Pool2; // rax
  __int64 v12; // [rsp+20h] [rbp-50h]
  __int128 Src; // [rsp+30h] [rbp-40h] BYREF
  __int128 v14; // [rsp+40h] [rbp-30h]
  _QWORD v15[3]; // [rsp+50h] [rbp-20h] BYREF

  v4 = Object[8];
  Src = 0LL;
  v14 = 0LL;
  memset(v15, 0, sizeof(v15));
  if ( a3 != 1 )
  {
    WdLogSingleEntry1(3LL, 0LL);
    result = 3221225659LL;
    WdLogGlobalForLineNumber = 413;
    return result;
  }
  if ( (unsigned __int16)a2 < 0x38u )
  {
    WdLogSingleEntry1(2LL, -1073741789LL);
    result = 3221225507LL;
    WdLogGlobalForLineNumber = 422;
    return result;
  }
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v4 + 484) )
    DpiCheckForOutstandingD3Requests(v4);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v4 + 168), 1u);
  if ( *(_QWORD *)(v4 + 5008) )
    goto LABEL_19;
  MiniportInterface = DpiQueryMiniportInterface(
                        (__int64)Object,
                        (__int64)&GUID_THERMAL_COOLING_INTERFACE,
                        a2,
                        1,
                        v12,
                        (__int64)&Src);
  if ( MiniportInterface < 0 )
  {
LABEL_16:
    if ( *(_BYTE *)(v4 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
    goto LABEL_26;
  }
  if ( *(_OWORD *)&v15[1] != 0LL )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 64LL, 1953656900LL, v10);
    *(_QWORD *)(v4 + 5008) = Pool2;
    if ( !Pool2 )
    {
      MiniportInterface = -1073741670;
      WdLogSingleEntry1(6LL, -1073741670LL);
      WdLogGlobalForLineNumber = 484;
      if ( *((_QWORD *)&v14 + 1) )
      {
        (*((void (__fastcall **)(_QWORD))&v14 + 1))(*((_QWORD *)&Src + 1));
        Src = 0LL;
        v14 = 0LL;
        memset(v15, 0, sizeof(v15));
      }
      goto LABEL_16;
    }
    *Pool2 = 0;
    *(_BYTE *)(*(_QWORD *)(v4 + 5008) + 1LL) = 0;
    *(_BYTE *)(*(_QWORD *)(v4 + 5008) + 2LL) = 0;
    *(_DWORD *)(*(_QWORD *)(v4 + 5008) + 4LL) = 100;
    memmove((void *)(*(_QWORD *)(v4 + 5008) + 8LL), &Src, 0x38uLL);
LABEL_19:
    memmove(a4, &unk_14015B350, 0x38uLL);
    a4[1] = Object;
    if ( !*(_QWORD *)(*(_QWORD *)(v4 + 5008) + 48LL) )
      a4[5] = 0LL;
    if ( !*(_QWORD *)(*(_QWORD *)(v4 + 5008) + 56LL) )
      a4[6] = 0LL;
    ObfReferenceObject(Object);
    if ( *(_BYTE *)(v4 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
    MiniportInterface = 0;
    goto LABEL_26;
  }
  WdLogSingleEntry1(3LL, 0LL);
  WdLogGlobalForLineNumber = 462;
  if ( *(_BYTE *)(v4 + 484) )
    DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
  MiniportInterface = -1073741637;
LABEL_26:
  ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
  KeLeaveCriticalRegion();
  return (unsigned int)MiniportInterface;
}
