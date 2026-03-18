/*
 * XREFs of DpiLdaLinkDeviceToChain @ 0x14024C96C
 * Callers:
 *     DpiAddDevice @ 0x1402329D0 (DpiAddDevice.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x14002A148 (DpiCheckForOutstandingD3Requests.c)
 *     DpiFdoIsPostDevice @ 0x14004DB50 (DpiFdoIsPostDevice.c)
 *     DpiEnableD3Requests @ 0x1402BA7B0 (DpiEnableD3Requests.c)
 */

__int64 __fastcall DpiLdaLinkDeviceToChain(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // esi
  __int64 v3; // r15
  __int64 i; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // r14

  v1 = *(_QWORD *)(a1 + 64);
  v2 = 0;
  v3 = *(_QWORD *)(v1 + 40);
  for ( i = *(_QWORD *)(v3 + 56); *(_QWORD *)i != *(_QWORD *)(v3 + 56); i = *(_QWORD *)i )
  {
    if ( (*(_DWORD *)(i + 16) != 1953656900 || *(_DWORD *)(i + 20) != 4)
      && *(_DWORD *)(i + 500) == *(_DWORD *)(v1 + 500) )
    {
      if ( !*(_QWORD *)(v1 + 168) )
      {
        v5 = *(_QWORD *)(i + 168);
        *(_QWORD *)(v1 + 168) = v5;
        ++*(_DWORD *)(v5 + 104);
        v6 = *(_QWORD *)(i + 1480);
        *(_QWORD *)(v1 + 1480) = v6;
        ++*(_DWORD *)(v6 + 8);
        v7 = *(_QWORD *)(i + 1488);
        *(_QWORD *)(v1 + 1488) = v7;
        ++*(_DWORD *)(v7 + 8);
      }
      if ( *(_BYTE *)(v1 + 508) == 1 )
      {
        v8 = v1;
        v9 = i;
      }
      else
      {
        if ( *(_BYTE *)(i + 508) != 1 )
          continue;
        v8 = i;
        v9 = v1;
      }
      if ( *(_BYTE *)(v9 + 508) == 1 || *(_DWORD *)(v8 + 2840) >= *(_DWORD *)(v8 + 504) )
      {
        v2 = -1071774666;
        WdLogSingleEntry1(2LL, -1071774666LL);
        WdLogGlobalForLineNumber = 309;
        return v2;
      }
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(i + 484) )
        DpiCheckForOutstandingD3Requests(i);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(i + 168), 1u);
      *(_QWORD *)(v9 + 2832) = *(_QWORD *)(v8 + 24);
      *(_DWORD *)(v9 + 2840) = *(_DWORD *)(v8 + 2840);
      *(_QWORD *)(*(_QWORD *)(v8 + 2832) + 8LL * (unsigned int)(*(_DWORD *)(v8 + 2840))++) = *(_QWORD *)(v9 + 24);
      if ( DpiFdoIsPostDevice(*(_QWORD *)(v9 + 24)) )
        *(_BYTE *)(*(_QWORD *)(v1 + 168) + 108LL) = 1;
      if ( *(_BYTE *)(i + 484) )
        DpiEnableD3Requests(*(_QWORD *)(i + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(i + 168));
      KeLeaveCriticalRegion();
    }
  }
  return v2;
}
