/*
 * XREFs of DpiFdoHandleFilterResources @ 0x14023A2C0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

__int64 __fastcall DpiFdoHandleFilterResources(__int64 a1, IRP *a2)
{
  __int64 v2; // rsi
  IRP *v4; // rbp
  __int64 v5; // r15
  __int64 v6; // r9
  __int64 Status; // rdi
  unsigned int *Information; // rbx
  char *v9; // rcx
  unsigned int i; // r8d
  __int64 v11; // rax
  unsigned int j; // edx
  __int64 v13; // rax
  unsigned int v14; // esi
  _OWORD *Pool2; // rax
  _OWORD *v16; // r14
  unsigned int *v17; // r15
  unsigned int v18; // r12d
  __int128 v19; // xmm1
  unsigned int *v20; // rsi
  unsigned int *v21; // rcx

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
        v9 = (char *)(Information + 8);
        for ( i = 0; i < Information[7]; ++i )
        {
          v11 = *((unsigned int *)v9 + 1);
          for ( j = 0; j < (unsigned int)v11; ++j )
          {
            v13 = 32LL * j;
            if ( v9[v13 + 9] == 2 )
              v9[v13 + 9] = 0;
            v11 = *((unsigned int *)v9 + 1);
          }
          v9 += 32 * v11 + 8;
        }
      }
    }
    if ( *(_BYTE *)(v2 + 1155) == 1 )
    {
      v14 = *Information + 96 * Information[7];
      if ( v14 >= *Information )
      {
        Pool2 = (_OWORD *)ExAllocatePool2(256LL, v14, 1953656900LL, v6);
        v16 = Pool2;
        if ( Pool2 )
        {
          memset(Pool2, 0, v14);
          v17 = Information + 8;
          v18 = 0;
          v19 = *((_OWORD *)Information + 1);
          *v16 = *(_OWORD *)Information;
          v16[1] = v19;
          *(_DWORD *)v16 = v14;
          v20 = (unsigned int *)(v16 + 2);
          if ( Information[7] )
          {
            do
            {
              memmove(v20, v17, 32LL * v17[1] + 8);
              ++v18;
              v21 = &v20[8 * v20[1]];
              *((_WORD *)v21 + 4) = 257;
              *((_BYTE *)v21 + 10) = 3;
              *((_WORD *)v21 + 6) = 1;
              v21[4] = 12;
              v21[5] = 1;
              *((_QWORD *)v21 + 3) = 944LL;
              *((_QWORD *)v21 + 4) = 955LL;
              *((_WORD *)v21 + 20) = 257;
              *((_BYTE *)v21 + 42) = 3;
              *((_WORD *)v21 + 22) = 1;
              v21[12] = 32;
              v21[13] = 1;
              *((_QWORD *)v21 + 7) = 960LL;
              *((_QWORD *)v21 + 8) = 991LL;
              *((_WORD *)v21 + 36) = 769;
              *((_BYTE *)v21 + 74) = 3;
              *((_WORD *)v21 + 38) = 0;
              v21[20] = 0x20000;
              v21[21] = 1;
              *((_QWORD *)v21 + 11) = 655360LL;
              *((_QWORD *)v21 + 12) = 786431LL;
              v20[1] += 3;
              v17 += 8 * v17[1] + 2;
              v20 += 8 * v20[1] + 2;
            }
            while ( v18 < Information[7] );
            v4 = a2;
          }
          ExFreePoolWithTag(Information, 0);
          v4->IoStatus.Information = (ULONG_PTR)v16;
        }
        else
        {
          LODWORD(Status) = -1073741801;
          WdLogSingleEntry1(6LL, -1073741801LL);
          WdLogGlobalForLineNumber = 6663;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, Status);
        WdLogGlobalForLineNumber = 6644;
      }
    }
    else
    {
      WdLogSingleEntry1(4LL, a1);
      WdLogGlobalForLineNumber = 6582;
    }
  }
  else if ( !*(_BYTE *)(v2 + 480) && !*(_BYTE *)(v2 + 2719) && !*(_BYTE *)(v2 + 1158) )
  {
    WdLogSingleEntry1(2LL, v4->IoStatus.Status);
    WdLogGlobalForLineNumber = 6554;
  }
  v4->IoStatus.Status = Status;
  IofCompleteRequest(v4, 1);
  return (unsigned int)Status;
}
