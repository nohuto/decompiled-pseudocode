/*
 * XREFs of PopCalculateHiberFileSize @ 0x140745A88
 * Callers:
 *     PopSetHiberFileType @ 0x1406EDE08 (PopSetHiberFileType.c)
 *     PopSetHiberFileSize @ 0x1406EE560 (PopSetHiberFileSize.c)
 *     PopAdjustHiberFile @ 0x1407459D8 (PopAdjustHiberFile.c)
 *     PopHiberInitializeResources @ 0x140746400 (PopHiberInitializeResources.c)
 *     PopEnableHiberFile @ 0x140AAE964 (PopEnableHiberFile.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall PopCalculateHiberFileSize(_QWORD *a1, unsigned __int8 *a2)
{
  unsigned __int8 v4; // r9
  __int64 v5; // rbx
  unsigned int v6; // r8d
  __int64 i; // rdx
  __int128 v8; // xmm1
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 result; // rax
  __int128 v12; // [rsp+0h] [rbp-28h]
  __int64 v13; // [rsp+10h] [rbp-18h]

  v4 = 2;
  v5 = *(_QWORD *)(*(_QWORD *)qword_140E2FD48 + 18512LL);
  v6 = 100;
  if ( (unsigned int)PopHiberFileSizePercent < 0x28 )
  {
    v4 = 2;
    if ( (unsigned int)(PopHiberFileType - 1) <= 1 )
      v4 = PopHiberFileType;
    for ( i = 0LL; (unsigned int)i < 7; i = (unsigned int)(i + 1) )
    {
      v8 = *(_OWORD *)((char *)&PopHiberFileBucket + 24 * i);
      v9 = *((_QWORD *)&PopHiberFileBucket + 3 * i);
      v13 = *((_QWORD *)&PopHiberFileBucket + 3 * i + 2);
      *((_QWORD *)&v12 + 1) = *((_QWORD *)&v8 + 1);
      if ( v5 << 12 <= v9 )
      {
        if ( *((_DWORD *)&v12 + v4 + 2) < 0x64u )
          v6 = *((_DWORD *)&v12 + v4 + 2);
        break;
      }
    }
  }
  else
  {
    v6 = PopHiberFileSizePercent;
  }
  v10 = v5 * v6;
  result = 0x47AE147AE147AE15LL * v10;
  *a1 = (v10 / 0x64) << 12;
  if ( a2 )
    *a2 = v4;
  return result;
}
