/*
 * XREFs of RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x180118C00
 * Callers:
 *     RtlQueryInformationActivationContext @ 0x1800484F0 (RtlQueryInformationActivationContext.c)
 * Callees:
 *     DbgPrintEx @ 0x18001A6F0 (DbgPrintEx.c)
 *     RtlpLocateActivationContextSectionForQuery @ 0x1800F587C (RtlpLocateActivationContextSectionForQuery.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation(
        _DWORD *a1,
        unsigned int *a2,
        _DWORD *a3,
        size_t a4,
        size_t *a5)
{
  size_t *v5; // rdi
  unsigned int v6; // ebx
  unsigned int v10; // r8d
  int v11; // edx
  unsigned int v12; // r8d
  unsigned int v13; // edx
  int v14; // r9d
  __int64 v15; // r14
  unsigned int i; // ecx
  __int64 v17; // r10
  __int64 v18; // r9
  _DWORD *v19; // rsi
  __int64 v20; // r15
  unsigned __int64 v21; // rcx
  _WORD *v22; // rdi
  _WORD *v23; // rdi
  __int64 v24; // r15
  unsigned int j; // r14d
  __int64 v26; // rdx
  __int64 v28; // [rsp+38h] [rbp-40h]
  __int64 v29[3]; // [rsp+60h] [rbp-18h] BYREF
  int v30; // [rsp+C0h] [rbp+48h] BYREF
  unsigned int v31; // [rsp+C8h] [rbp+50h] BYREF
  int v32; // [rsp+D0h] [rbp+58h] BYREF
  size_t v33; // [rsp+D8h] [rbp+60h]

  v33 = a4;
  v5 = a5;
  v6 = 0;
  v31 = -1073741595;
  v29[0] = 0LL;
  v32 = 0;
  v30 = 0;
  if ( a5 )
    *a5 = 0LL;
  v10 = *a2;
  v11 = *(_DWORD *)((char *)a1 + (unsigned int)a1[6] + 8);
  if ( v10 >= v11 - 1 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() received invalid sub-instance index %lu out of %lu Assemblies in the Acitvation Context\n",
      "RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation",
      v10,
      v11);
    return (unsigned int)-1073741811;
  }
  RtlpLocateActivationContextSectionForQuery(&v30, (int *)&v31, a3, a4, v5, 0x68uLL, a1, v28, 2u, v29, &v32);
  if ( v30 == 2 )
    return v31;
  v12 = a2[1];
  v13 = *(_DWORD *)(v29[0] + 20);
  if ( v12 >= v13 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() received invalid file index (%u, max is %u) in Assembly (%u)\n",
      "RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation",
      v12,
      v13,
      *a2);
    return (unsigned int)-1073741811;
  }
  if ( *(_DWORD *)(v29[0] + 24) )
  {
    v14 = 0;
    v15 = v29[0] + *(unsigned int *)(v29[0] + 24);
    for ( i = 0; ; ++i )
    {
      v17 = i;
      if ( i >= v13 )
        break;
      if ( *(_DWORD *)(v15 + 24LL * i + 20) == *a2 + 1 )
      {
        if ( v14 == v12 && *(_DWORD *)(v15 + 24LL * i + 12) )
        {
          _mm_lfence();
          v18 = v29[0];
          v19 = (_DWORD *)(v29[0] + *(unsigned int *)(v15 + 24LL * i + 12));
          if ( !v19 )
            return (unsigned int)-1072365547;
          v20 = 3LL * i;
          v21 = 32LL;
          if ( *(_DWORD *)(v15 + 24 * v17 + 8) )
            v21 = *(unsigned int *)(v15 + 24 * v17 + 8) + 34LL;
          if ( v19[2] )
            v21 += (unsigned int)v19[2] + 2LL;
          if ( v21 <= a4 )
          {
            v22 = a3 + 8;
            *a3 = v19[1];
            a3[1] = *(_DWORD *)(v15 + 24 * v17 + 8);
            a3[2] = v19[2];
            *((_QWORD *)a3 + 2) = 0LL;
            *((_QWORD *)a3 + 3) = 0LL;
            if ( *(_DWORD *)(v15 + 24 * v17 + 8) )
            {
              memmove(
                a3 + 8,
                (const void *)(v18 + *(unsigned int *)(v15 + 24 * v17 + 4)),
                *(unsigned int *)(v15 + 24 * v17 + 8));
              v18 = v29[0];
              *((_QWORD *)a3 + 2) = v22;
              v23 = (_WORD *)((char *)v22 + *(unsigned int *)(v15 + 8 * v20 + 8));
              *v23 = 0;
              v22 = v23 + 1;
            }
            if ( v19[2] )
            {
              if ( v19[4] )
              {
                v24 = v18 + 44LL * (unsigned int)v19[4];
                if ( v24 )
                {
                  *((_QWORD *)a3 + 3) = v22;
                  for ( j = 0; j < v19[3]; ++j )
                  {
                    v26 = *(unsigned int *)(v24 + 8LL * j + 4);
                    if ( (char *)v22 + v26 + 2 > (char *)a3 + v33 )
                      return (unsigned int)-1072365547;
                    if ( (_DWORD)v26 )
                    {
                      memmove(v22, (const void *)(v18 + v26), *(unsigned int *)(v24 + 8LL * j));
                      v18 = v29[0];
                      v22 = (_WORD *)((char *)v22 + *(unsigned int *)(v24 + 8LL * j));
                    }
                  }
                  *v22 = 0;
                }
              }
            }
          }
          else
          {
            if ( v5 )
              *v5 = v21;
            return (unsigned int)-1073741789;
          }
          return v6;
        }
        ++v14;
      }
    }
  }
  return (unsigned int)-1072365547;
}
