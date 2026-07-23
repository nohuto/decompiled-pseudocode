/*
 * XREFs of MiAttemptPageFileExtension @ 0x1407EE36C
 * Callers:
 *     MiExtendPagingFiles @ 0x1407EF718 (MiExtendPagingFiles.c)
 * Callees:
 *     MiFinishPageFileExtension @ 0x1404C4B98 (MiFinishPageFileExtension.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     IoSetInformation @ 0x1407123B0 (IoSetInformation.c)
 *     IopQueryXxxInformation @ 0x140952FC0 (IopQueryXxxInformation.c)
 */

__int64 __fastcall MiAttemptPageFileExtension(__int64 a1, unsigned int *a2, unsigned __int64 a3)
{
  __int64 v3; // r15
  int v5; // ecx
  unsigned int v7; // eax
  unsigned int i; // esi
  unsigned __int64 v10; // rdx
  __int64 v11; // r9
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  int v16; // eax
  struct _FILE_OBJECT *v17; // rcx
  __int64 v19; // [rsp+40h] [rbp-19h] BYREF
  __int64 v20[2]; // [rsp+48h] [rbp-11h] BYREF
  __int64 v21; // [rsp+58h] [rbp-1h]
  _QWORD FileInformation[3]; // [rsp+60h] [rbp+7h] BYREF
  unsigned int v23; // [rsp+78h] [rbp+1Fh]
  int v24; // [rsp+7Ch] [rbp+23h]

  v3 = *((_QWORD *)a2 + 27);
  v24 = 0;
  v5 = *a2;
  v21 = 0LL;
  v7 = a2[1];
  *(_OWORD *)v20 = 0LL;
  if ( v5 != v7 && (int)IopQueryXxxInformation(*((_QWORD *)a2 + 3), (__int64)v20, (__int64)&v19, 0) >= 0 )
  {
    for ( i = 0x4000; ; i = 4096 )
    {
      v10 = i;
      if ( a3 >= i )
      {
        v10 = a3;
        i = 4096;
      }
      v11 = a2[1];
      v12 = a2[1] - *a2;
      if ( v10 <= v12 )
        v12 = v10;
      v13 = v20[1] * (unsigned int)(v21 * HIDWORD(v21));
      if ( v13 <= 0x10000000 )
        break;
      v14 = (v13 - 0x10000000) >> 12;
      if ( v14 > v12 )
        v14 = v12;
      if ( (a2[43] & 0x10) != 0 && v14 < a3 )
        break;
      v15 = v14 + *a2;
      FileInformation[1] = *a2 << 12;
      FileInformation[2] = v11 << 12;
      v16 = ~*(_BYTE *)(a1 + 79) & 0x20;
      FileInformation[0] = v15 << 12;
      v17 = (struct _FILE_OBJECT *)*((_QWORD *)a2 + 3);
      v23 = (v16 | 8u) >> 3;
      if ( !IoSetInformation(v17, FileEndOfFileInformation, 0x20u, FileInformation) )
      {
        MiFinishPageFileExtension(v3, (__int64)a2, v14);
        return (unsigned int)v14;
      }
      if ( i == 4096 )
        return 0LL;
    }
  }
  return 0LL;
}
