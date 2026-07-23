/*
 * XREFs of KiVerifyContextIpForUserCet @ 0x1403D5CD8
 * Callers:
 *     KeVerifyContextIpForUserCet @ 0x1403D4570 (KeVerifyContextIpForUserCet.c)
 *     KiContinuePreviousModeUser @ 0x1403D49D0 (KiContinuePreviousModeUser.c)
 *     KeVerifyContextRecord @ 0x1403D5B40 (KeVerifyContextRecord.c)
 * Callees:
 *     RtlGetImageBaseAndLoadConfig @ 0x14045A364 (RtlGetImageBaseAndLoadConfig.c)
 *     RtlVerifyUserUnwindTarget @ 0x140A0B69C (RtlVerifyUserUnwindTarget.c)
 */

__int64 __fastcall KiVerifyContextIpForUserCet(__int64 a1, __int64 a2, unsigned int *a3, char a4, unsigned __int64 *a5)
{
  __int64 v8; // rdi
  __int64 i; // rcx
  unsigned int v10; // r8d
  __int64 result; // rax
  int ImageBaseAndLoadConfig; // eax
  char v13; // cl
  _DWORD *v14; // rax
  __int128 v15; // [rsp+30h] [rbp-38h] BYREF
  __int64 v16; // [rsp+40h] [rbp-28h]
  unsigned __int64 v17; // [rsp+78h] [rbp+10h]

  v8 = *(_QWORD *)(a2 + 248);
  if ( (unsigned __int64)(v8 - 0x10000) > 0x7FFFFFFDFFFFLL )
    return 3221227018LL;
  for ( i = *(_QWORD *)(a1 + 40); (*(_BYTE *)(i + 8) & 1) != 0; i = *(_QWORD *)(i + 40) )
    ;
  if ( v8 == *(_QWORD *)(i - 40) )
    return 0LL;
  v17 = *a5;
  v10 = *a3;
  if ( v10 <= 1 )
    goto LABEL_44;
  if ( v10 == 2 )
    return RtlVerifyUserUnwindTarget(v8, 2LL, 0LL);
  if ( v10 != 3 )
    return 3221225485LL;
LABEL_44:
  if ( !v17 )
  {
    v17 = __readmsr(0x6A7u);
    if ( !v17 )
      return 0LL;
  }
  if ( !v10 && v8 == qword_140FC74C0 )
  {
    *a3 = 1;
    v10 = 1;
  }
  v15 = 0LL;
  v16 = 0LL;
  if ( v10 || (result = RtlVerifyUserUnwindTarget(v8, 0LL, &v15), (int)result < 0) )
  {
    if ( !a4 || *a3 == 1 )
      goto LABEL_15;
    if ( (_BYTE)v16 )
      goto LABEL_34;
    ImageBaseAndLoadConfig = RtlGetImageBaseAndLoadConfig(v8, &v15, (char *)&v15 + 8);
    v13 = v16;
    if ( ImageBaseAndLoadConfig >= 0 )
      v13 = 1;
    if ( v13 )
    {
LABEL_34:
      if ( !(_QWORD)v15 )
        return 0LL;
      v14 = (_DWORD *)*((_QWORD *)&v15 + 1);
      if ( (unsigned __int64)(*((_QWORD *)&v15 + 1) + 280LL) > 0x7FFFFFFF0000LL
        || (unsigned __int64)(*((_QWORD *)&v15 + 1) + 280LL) < *((_QWORD *)&v15 + 1) )
      {
        v14 = (_DWORD *)*((_QWORD *)&v15 + 1);
      }
      if ( v14 && *v14 >= 0x118u && (v14[36] & 0x400000) != 0 )
        goto LABEL_15;
      return 0LL;
    }
    else
    {
LABEL_15:
      while ( *(_QWORD *)v17 != v8 )
      {
        v17 += 8LL;
        if ( (v17 & 0xFFF) == 0 && (*(_DWORD *)(a1 + 1440) & 1) != 0 )
          return 3221225547LL;
      }
      *a5 = v17 + 8;
      return 0LL;
    }
  }
  return result;
}
