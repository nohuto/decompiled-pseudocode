/*
 * XREFs of PopCalculateHiberFileSize @ 0x14074FE78
 * Callers:
 *     PopSetHiberFileType @ 0x1406F780C (PopSetHiberFileType.c)
 *     PopSetHiberFileSize @ 0x1406F8024 (PopSetHiberFileSize.c)
 *     PopAdjustHiberFile @ 0x14074FDC8 (PopAdjustHiberFile.c)
 *     PopHiberInitializeResources @ 0x1407507DC (PopHiberInitializeResources.c)
 *     PopEnableHiberFile @ 0x140AAE8C0 (PopEnableHiberFile.c)
 * Callees:
 *     MmGetNumberOfPhysicalPages @ 0x140454120 (MmGetNumberOfPhysicalPages.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall PopCalculateHiberFileSize(_QWORD *a1, unsigned __int8 *a2)
{
  unsigned __int8 v4; // bl
  __int64 NumberOfPhysicalPages; // rax
  unsigned __int64 v6; // r9
  __int64 v7; // r10
  unsigned int v8; // r8d
  __int64 i; // rdx
  __int128 v10; // xmm1
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 result; // rax
  __int128 v14; // [rsp+20h] [rbp-28h]
  __int64 v15; // [rsp+30h] [rbp-18h]

  v4 = 2;
  NumberOfPhysicalPages = MmGetNumberOfPhysicalPages(0);
  v6 = NumberOfPhysicalPages << 12;
  v7 = NumberOfPhysicalPages;
  v8 = 100;
  if ( (unsigned int)PopHiberFileSizePercent < 0x28 )
  {
    v4 = 2;
    if ( (unsigned int)(PopHiberFileType - 1) <= 1 )
      v4 = PopHiberFileType;
    for ( i = 0LL; (unsigned int)i < 7; i = (unsigned int)(i + 1) )
    {
      v10 = *(_OWORD *)((char *)&PopHiberFileBucket + 24 * i);
      v11 = *((_QWORD *)&PopHiberFileBucket + 3 * i);
      v15 = *((_QWORD *)&PopHiberFileBucket + 3 * i + 2);
      *((_QWORD *)&v14 + 1) = *((_QWORD *)&v10 + 1);
      if ( v6 <= v11 )
      {
        if ( *((_DWORD *)&v14 + v4 + 2) < 0x64u )
          v8 = *((_DWORD *)&v14 + v4 + 2);
        break;
      }
    }
  }
  else
  {
    v8 = PopHiberFileSizePercent;
  }
  v12 = v7 * v8;
  result = 0x47AE147AE147AE15LL * v12;
  *a1 = (v12 / 0x64) << 12;
  if ( a2 )
    *a2 = v4;
  return result;
}
