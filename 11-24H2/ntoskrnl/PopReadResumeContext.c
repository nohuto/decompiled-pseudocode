/*
 * XREFs of PopReadResumeContext @ 0x140AABF98
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 * Callees:
 *     RtlULongLongMult @ 0x14042A2B0 (RtlULongLongMult.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopReadPagesFromHiberFile @ 0x140AAC0F0 (PopReadPagesFromHiberFile.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopReadResumeContext(_DWORD *a1, _QWORD *a2)
{
  _DWORD *v2; // rdi
  int v5; // eax
  unsigned int *v6; // rsi
  NTSTATUS v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  ULONGLONG v10; // rcx
  unsigned __int64 v11; // rdx
  ULONGLONG pullResult[5]; // [rsp+20h] [rbp-28h] BYREF
  _DWORD *v14; // [rsp+60h] [rbp+18h] BYREF
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  P = 0LL;
  v2 = 0LL;
  pullResult[0] = 0LL;
  v14 = 0LL;
  v5 = PopReadPagesFromHiberFile(0LL, 1LL, &P);
  v6 = (unsigned int *)P;
  v7 = v5;
  if ( v5 >= 0 )
  {
    v8 = *(_DWORD *)P;
    if ( *(_DWORD *)P
      && v8 != 1380075848
      && v8 != 1381258066
      && v8 != 1162559831
      && v8 != 1347113538
      && v8 != 1297239880 )
    {
      goto LABEL_8;
    }
    v9 = *((unsigned int *)P + 280);
    if ( !(_DWORD)v9 )
      goto LABEL_8;
    v7 = PopReadPagesFromHiberFile(2LL, v9, &v14);
    if ( v7 < 0 || (v7 = RtlULongLongMult(v6[280], 0x1000uLL, pullResult), v7 < 0) )
    {
      v2 = v14;
    }
    else
    {
      v2 = v14;
      if ( *v14 != 1 )
        goto LABEL_8;
      v10 = (unsigned int)v14[1];
      if ( v10 > pullResult[0] )
        goto LABEL_8;
      v11 = 48LL * (unsigned int)v14[2];
      if ( v11 <= 0xFFFFFFFF )
      {
        v7 = 0;
        if ( (unsigned int)v11 <= (unsigned int)v10 )
        {
          memset_0((char *)v14 + v10, 0, pullResult[0] - v10);
          *a1 = v2[1];
          *a2 = v2;
          goto LABEL_19;
        }
LABEL_8:
        v7 = -1073741271;
        goto LABEL_19;
      }
      v7 = -1073741675;
    }
  }
LABEL_19:
  if ( v6 )
    ExFreePoolWithTag(v6, 0x206D654Du);
  if ( v7 < 0 )
  {
    if ( v2 )
      ExFreePoolWithTag(v2, 0x206D654Du);
    *a2 = 0LL;
    *a1 = 0;
  }
  return (unsigned int)v7;
}
