/*
 * XREFs of PfSnPrefetchFileMetadata @ 0x1408C3008
 * Callers:
 *     PfSnGetSectionObject @ 0x1408C237C (PfSnGetSectionObject.c)
 *     PfSnPrefetchMetadata @ 0x1409C7D14 (PfSnPrefetchMetadata.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     NtWaitForSingleObject @ 0x14084EFB0 (NtWaitForSingleObject.c)
 *     NtResetEvent @ 0x1408C3160 (NtResetEvent.c)
 *     IopXxxControlFile @ 0x1408C3AD0 (IopXxxControlFile.c)
 */

__int64 __fastcall PfSnPrefetchFileMetadata(
        __int64 a1,
        void *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        HANDLE EventHandle)
{
  unsigned int v6; // r10d
  unsigned int v10; // ebx
  unsigned int v11; // eax
  __int64 v13; // r15
  unsigned int v14; // r14d
  int v15; // r13d
  int v16; // ebx
  __int128 v17; // [rsp+60h] [rbp-38h] BYREF

  v6 = 0;
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
          v6 = IopXxxControlFile(a2, (__int64)&v17, 590112, v13, v16, 0LL, 0, 0, 0);
          if ( v6 == 259 )
          {
            NtWaitForSingleObject(EventHandle, 0, 0LL);
            v6 = v17;
          }
          if ( (v6 & 0xC0000000) == 0xC0000000 )
            break;
          v14 += v15;
        }
      }
      else
      {
        *(_QWORD *)(a3 + 8) = v11;
        *(_DWORD *)(a3 + 4) = a5;
        NtResetEvent(EventHandle, 0LL);
        v6 = IopXxxControlFile(a2, (__int64)&v17, 590112, a3, 8 * a5 + 16, 0LL, 0, 0, 0);
        if ( v6 == 259 )
        {
          NtWaitForSingleObject(EventHandle, 0, 0LL);
          v6 = v17;
        }
        *(_DWORD *)(a3 + 4) = v10;
      }
    }
  }
  return v6;
}
