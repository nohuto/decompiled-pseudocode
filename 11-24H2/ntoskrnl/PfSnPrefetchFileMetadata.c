/*
 * XREFs of PfSnPrefetchFileMetadata @ 0x140954694
 * Callers:
 *     PfSnPrefetchMetadata @ 0x140937DF4 (PfSnPrefetchMetadata.c)
 *     PfSnGetSectionObject @ 0x140953A3C (PfSnGetSectionObject.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     NtWaitForSingleObject @ 0x140847020 (NtWaitForSingleObject.c)
 *     IopXxxControlFile @ 0x1408BF330 (IopXxxControlFile.c)
 *     NtResetEvent @ 0x1409547F0 (NtResetEvent.c)
 */

__int64 __fastcall PfSnPrefetchFileMetadata(
        __int64 a1,
        void *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        HANDLE EventHandle)
{
  unsigned int Status; // r10d
  unsigned int v10; // ebx
  unsigned int v11; // eax
  __int64 v13; // r15
  unsigned int v14; // r14d
  int v15; // r13d
  int v16; // ebx
  struct _IO_STATUS_BLOCK v17; // [rsp+60h] [rbp-38h] BYREF

  Status = 0;
  v17 = 0LL;
  if ( a5 )
  {
    v10 = *(_DWORD *)(a3 + 4);
    if ( v10 <= a4 || v10 - a4 < a5 )
    {
      return (unsigned int)-1073741701;
    }
    else
    {
      v11 = *(_DWORD *)(a1 + 96) & 7 | (8 * (*(_DWORD *)(a1 + 100) & 7 | 8));
      if ( a4 || a5 > 0x300 )
      {
        v13 = *(_QWORD *)(a1 + 80);
        *(_DWORD *)(v13 + 4) = 0;
        v14 = 0;
        *(_DWORD *)v13 = 3;
        *(_QWORD *)(v13 + 8) = v11;
        while ( v14 < a5 )
        {
          v15 = 768;
          if ( a5 - v14 < 0x300 )
            v15 = a5 - v14;
          *(_DWORD *)(v13 + 4) = v15;
          memmove((void *)(v13 + 16), (const void *)(a3 + 8 * (v14 + a4 + 2LL)), (unsigned int)(8 * v15));
          v16 = 8 * *(_DWORD *)(v13 + 4) + 16;
          NtResetEvent(EventHandle, 0LL);
          Status = IopXxxControlFile(a2, EventHandle, 0LL, 0LL, &v17, 0x90120u, (char *)v13, v16, 0LL, 0, 0, 0);
          if ( Status == 259 )
          {
            NtWaitForSingleObject(EventHandle, 0, 0LL);
            Status = v17.Status;
          }
          if ( (Status & 0xC0000000) == 0xC0000000 )
            break;
          v14 += v15;
        }
      }
      else
      {
        *(_QWORD *)(a3 + 8) = v11;
        *(_DWORD *)(a3 + 4) = a5;
        NtResetEvent(EventHandle, 0LL);
        Status = IopXxxControlFile(a2, EventHandle, 0LL, 0LL, &v17, 0x90120u, (char *)a3, 8 * a5 + 16, 0LL, 0, 0, 0);
        if ( Status == 259 )
        {
          NtWaitForSingleObject(EventHandle, 0, 0LL);
          Status = v17.Status;
        }
        *(_DWORD *)(a3 + 4) = v10;
      }
    }
  }
  return Status;
}
