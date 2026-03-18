/*
 * XREFs of DpiFdoHandleFilterResources @ 0x140240DD0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 */

__int64 __fastcall DpiFdoHandleFilterResources(__int64 a1, IRP *a2)
{
  __int64 v2; // rsi
  IRP *v4; // rbp
  __int64 v5; // r15
  __int64 Status; // rdi
  unsigned int *Information; // rbx
  char *v8; // rcx
  unsigned int i; // r8d
  __int64 v10; // rax
  unsigned int j; // edx
  __int64 v12; // rax
  unsigned int v13; // esi
  _OWORD *Pool2; // rax
  _OWORD *v15; // r14
  unsigned int *v16; // r15
  unsigned int v17; // r12d
  __int128 v18; // xmm1
  unsigned int *v19; // rsi
  unsigned int *v20; // rcx

  v2 = *(_QWORD *)(a1 + 64);
  v4 = a2;
  v5 = *(_QWORD *)(v2 + 40);
  IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(v2 + 160), a2);
  Status = v4->IoStatus.Status;
  if ( (int)Status >= 0 )
  {
    Information = (unsigned int *)v4->IoStatus.Information;
    if ( !*(_QWORD *)(v5 + 184) )
    {
      if ( Information )
      {
        v8 = (char *)(Information + 8);
        for ( i = 0; i < Information[7]; ++i )
        {
          v10 = *((unsigned int *)v8 + 1);
          for ( j = 0; j < (unsigned int)v10; ++j )
          {
            v12 = 32LL * j;
            if ( v8[v12 + 9] == 2 )
              v8[v12 + 9] = 0;
            v10 = *((unsigned int *)v8 + 1);
          }
          v8 += 32 * v10 + 8;
        }
      }
    }
    if ( *(_BYTE *)(v2 + 1155) == 1 )
    {
      v13 = *Information + 96 * Information[7];
      if ( v13 >= *Information )
      {
        Pool2 = (_OWORD *)ExAllocatePool2(256LL, v13, 1953656900LL);
        v15 = Pool2;
        if ( Pool2 )
        {
          memset(Pool2, 0, v13);
          v16 = Information + 8;
          v17 = 0;
          v18 = *((_OWORD *)Information + 1);
          *v15 = *(_OWORD *)Information;
          v15[1] = v18;
          *(_DWORD *)v15 = v13;
          v19 = (unsigned int *)(v15 + 2);
          if ( Information[7] )
          {
            do
            {
              memmove(v19, v16, 32LL * v16[1] + 8);
              ++v17;
              v20 = &v19[8 * v19[1]];
              *((_WORD *)v20 + 4) = 257;
              *((_BYTE *)v20 + 10) = 3;
              *((_WORD *)v20 + 6) = 1;
              v20[4] = 12;
              v20[5] = 1;
              *((_QWORD *)v20 + 3) = 944LL;
              *((_QWORD *)v20 + 4) = 955LL;
              *((_WORD *)v20 + 20) = 257;
              *((_BYTE *)v20 + 42) = 3;
              *((_WORD *)v20 + 22) = 1;
              v20[12] = 32;
              v20[13] = 1;
              *((_QWORD *)v20 + 7) = 960LL;
              *((_QWORD *)v20 + 8) = 991LL;
              *((_WORD *)v20 + 36) = 769;
              *((_BYTE *)v20 + 74) = 3;
              *((_WORD *)v20 + 38) = 0;
              v20[20] = 0x20000;
              v20[21] = 1;
              *((_QWORD *)v20 + 11) = 655360LL;
              *((_QWORD *)v20 + 12) = 786431LL;
              v19[1] += 3;
              v16 += 8 * v16[1] + 2;
              v19 += 8 * v19[1] + 2;
            }
            while ( v17 < Information[7] );
            v4 = a2;
          }
          ExFreePoolWithTag(Information, 0);
          v4->IoStatus.Information = (ULONG_PTR)v15;
        }
        else
        {
          LODWORD(Status) = -1073741801;
          WdLogSingleEntry1(6LL, -1073741801LL);
          WdLogGlobalForLineNumber = 6795;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, Status);
        WdLogGlobalForLineNumber = 6776;
      }
    }
    else
    {
      WdLogSingleEntry1(4LL, a1);
      WdLogGlobalForLineNumber = 6714;
    }
  }
  else if ( !*(_BYTE *)(v2 + 480) && !*(_BYTE *)(v2 + 2719) && !*(_BYTE *)(v2 + 1158) )
  {
    WdLogSingleEntry1(2LL, v4->IoStatus.Status);
    WdLogGlobalForLineNumber = 6686;
  }
  v4->IoStatus.Status = Status;
  IofCompleteRequest(v4, 1);
  return (unsigned int)Status;
}
