/*
 * XREFs of DpiLdaUnLinkDeviceFromChain @ 0x14024CE84
 * Callers:
 *     DpiAddDevice @ 0x1402329D0 (DpiAddDevice.c)
 *     DpiFdoHandleRemoveDevice @ 0x14023A950 (DpiFdoHandleRemoveDevice.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x14002A148 (DpiCheckForOutstandingD3Requests.c)
 *     DpiFdoIsPostDevice @ 0x14004DB50 (DpiFdoIsPostDevice.c)
 *     DpiEnableD3Requests @ 0x1402BA7B0 (DpiEnableD3Requests.c)
 */

__int64 __fastcall DpiLdaUnLinkDeviceFromChain(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r14
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // rcx

  v1 = *(_QWORD *)(a1 + 64);
  v2 = *(_QWORD *)(v1 + 40);
  v3 = *(_QWORD *)(v2 + 56);
  if ( *(_QWORD *)v3 != v3 )
  {
    do
    {
      if ( (*(_DWORD *)(v3 + 16) != 1953656900 || *(_DWORD *)(v3 + 20) != 4)
        && *(_DWORD *)(v3 + 500) == *(_DWORD *)(v1 + 500) )
      {
        v4 = *(_QWORD *)(v1 + 168);
        if ( v4 )
        {
          --*(_DWORD *)(v4 + 104);
          v5 = *(_QWORD *)(v1 + 1480);
          *(_QWORD *)(v1 + 168) = 0LL;
          --*(_DWORD *)(v5 + 8);
          v6 = *(_QWORD *)(v1 + 1488);
          *(_QWORD *)(v1 + 1480) = 0LL;
          --*(_DWORD *)(v6 + 8);
          *(_QWORD *)(v1 + 1488) = 0LL;
        }
        if ( *(_BYTE *)(v1 + 508) == 1 )
        {
          v7 = v1;
          v8 = v3;
LABEL_11:
          KeEnterCriticalRegion();
          if ( *(_BYTE *)(v3 + 484) )
            DpiCheckForOutstandingD3Requests(v3);
          ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 168), 1u);
          --*(_DWORD *)(v7 + 2840);
          v9 = *(unsigned int *)(v8 + 2840);
          if ( (unsigned int)v9 < *(_DWORD *)(v7 + 504) - 1 )
          {
            v10 = (unsigned int)(v9 + 1);
            do
            {
              v11 = *(_QWORD *)(v7 + 2832);
              v12 = *(_QWORD *)(v11 + 8 * v10);
              if ( !v12 )
                break;
              *(_QWORD *)(v11 + 8 * v9) = v12;
              v10 = (unsigned int)(v10 + 1);
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 2832) + 8 * v9) + 64LL) + 2840LL) = v9;
              v9 = (unsigned int)(v9 + 1);
            }
            while ( (unsigned int)v9 < *(_DWORD *)(v7 + 504) - 1 );
          }
          *(_QWORD *)(*(_QWORD *)(v7 + 2832) + 8 * v9) = 0LL;
          v13 = *(_QWORD *)(v8 + 24);
          *(_QWORD *)(v8 + 2832) = 0LL;
          if ( DpiFdoIsPostDevice(v13) )
            *(_BYTE *)(*(_QWORD *)(v3 + 168) + 108LL) = 0;
          if ( *(_BYTE *)(v3 + 484) )
            DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
          ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
          KeLeaveCriticalRegion();
          goto LABEL_22;
        }
        if ( *(_BYTE *)(v3 + 508) == 1 )
        {
          v7 = v3;
          v8 = v1;
          goto LABEL_11;
        }
      }
LABEL_22:
      v3 = *(_QWORD *)v3;
    }
    while ( *(_QWORD *)v3 != *(_QWORD *)(v2 + 56) );
  }
  return 0LL;
}
