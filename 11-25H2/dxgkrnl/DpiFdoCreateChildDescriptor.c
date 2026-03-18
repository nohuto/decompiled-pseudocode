/*
 * XREFs of DpiFdoCreateChildDescriptor @ 0x140236594
 * Callers:
 *     DpiFdoHandleTargetConnectionState @ 0x14023BD30 (DpiFdoHandleTargetConnectionState.c)
 *     DpiFdoEnumChildDevices @ 0x14040701C (DpiFdoEnumChildDevices.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x14004C14C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     DpiFdoIsMsBddAnchoredDevice @ 0x1400593B8 (DpiFdoIsMsBddAnchoredDevice.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DpiAcpiGetAcpiChildName @ 0x14024AA60 (DpiAcpiGetAcpiChildName.c)
 *     DpiFdoReleaseChildDescriptor @ 0x14040A068 (DpiFdoReleaseChildDescriptor.c)
 */

__int64 __fastcall DpiFdoCreateChildDescriptor(__int64 a1, int a2, char a3, int *a4, __int64 a5, unsigned int a6)
{
  unsigned int v6; // ebx
  char *Pool2; // rax
  char *v12; // rdi
  __int64 v13; // r9
  int v14; // eax
  __int16 v15; // cx
  struct _KMUTANT *v16; // rax
  __int64 v17; // rcx
  int v18; // edx
  _QWORD *v19; // rdi
  _QWORD *v20; // rdx

  v6 = 0;
  if ( a3 || *a4 == 1 )
  {
    Pool2 = (char *)ExAllocatePool2(256LL, 128LL, 1953656900LL, a4);
    v12 = Pool2;
    if ( Pool2 )
    {
      memset(Pool2, 0, 0x80uLL);
      v14 = *a4;
      *((_DWORD *)v12 + 14) = 1;
      *((_DWORD *)v12 + 6) = a2;
      v12[67] = a3;
      *((_DWORD *)v12 + 5) = a6;
      *(_OWORD *)(v12 + 4) = *(_OWORD *)a5;
      if ( v14 == 3 )
      {
        v15 = *(_WORD *)(a5 + 4);
        *((_DWORD *)v12 + 22) = *(_DWORD *)a5;
        v14 = 1;
        *((_DWORD *)v12 + 1) = 0x80000000;
        *((_DWORD *)v12 + 2) = 1;
        v12[12] = 0;
      }
      else
      {
        *(_DWORD *)(v12 + 94) = 0;
        v15 = 0;
      }
      *(_DWORD *)v12 = v14;
      *((_WORD *)v12 + 46) = v15;
      *((_DWORD *)v12 + 17) = 1;
      v16 = (struct _KMUTANT *)ExAllocatePool2(64LL, 56LL, 1953656900LL, v13);
      *((_QWORD *)v12 + 9) = v16;
      if ( v16 )
      {
        KeInitializeMutex(v16, 0);
        if ( a3 && *(_BYTE *)(a1 + 1156) == 1 )
          *((_QWORD *)v12 + 10) = DpiAcpiGetAcpiChildName(a1, a6);
        if ( *(_DWORD *)v12 == 1 )
        {
          v17 = *(_QWORD *)(a1 + 24);
          ++*(_DWORD *)(a1 + 3616);
          if ( DpiFdoIsMsBddAnchoredDevice(v17)
            && (v18 == 1 || IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)a5)) )
          {
            dword_14015E154 = a2;
          }
        }
        v19 = v12 + 32;
        v20 = *(_QWORD **)(a1 + 3608);
        if ( *v20 != a1 + 3600 )
          __fastfail(3u);
        *v19 = a1 + 3600;
        v19[1] = v20;
        *v20 = v19;
        *(_QWORD *)(a1 + 3608) = v19;
      }
      else
      {
        v6 = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
        WdLogGlobalForLineNumber = 19666;
        DpiFdoReleaseChildDescriptor(v12);
      }
    }
    else
    {
      v6 = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
      WdLogGlobalForLineNumber = 19612;
    }
  }
  else
  {
    v6 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 19598;
  }
  return v6;
}
