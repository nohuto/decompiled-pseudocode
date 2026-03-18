/*
 * XREFs of MiImageRvaRawEnumNext @ 0x1408F3D20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     MiQueryFlagsForRvaEntry @ 0x1408F3F70 (MiQueryFlagsForRvaEntry.c)
 */

__int64 __fastcall MiImageRvaRawEnumNext(_DWORD *a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // edx
  _DWORD *v7; // rax
  int v8; // esi
  unsigned int v9; // ebp
  unsigned int v10; // r15d
  unsigned int *v11; // r14
  _DWORD *v12; // rdi
  __int64 (__fastcall *v13)(); // rax
  unsigned int v14; // r12d
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // edx
  int v18; // r9d
  __int64 v19; // rcx
  unsigned int v20; // ecx
  _DWORD *v21; // r8
  __int64 result; // rax
  unsigned int v23; // [rsp+50h] [rbp-48h]
  __int64 v24; // [rsp+58h] [rbp-40h]
  char v25; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v26; // [rsp+B0h] [rbp+18h] BYREF
  int v27; // [rsp+B8h] [rbp+20h]

  if ( !a1[78] )
    return 0LL;
  v6 = a1[36];
  v7 = a1 + 38;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = a1 + 38;
  if ( v6 )
  {
    v12 = a1 + 46;
    do
    {
      v13 = (__int64 (__fastcall *)())*((_QWORD *)v12 - 2);
      if ( v13 )
      {
        v14 = *v11;
        if ( *v11 == a1[78] )
        {
          if ( v13 == MiImageCfgRvaIteratorNext )
          {
            v15 = *v12;
            v14 = 0;
            v25 = 0;
            a4 = 0LL;
            v26 = 0;
            v27 = v15;
            if ( v15 )
            {
              v16 = *((_QWORD *)v12 - 1);
              v17 = a1[21];
              v24 = v16;
              v23 = v17;
              while ( 1 )
              {
                if ( !v15 )
                  goto LABEL_13;
                if ( (int)MiQueryFlagsForRvaEntry(
                            v16,
                            v17,
                            (unsigned int)&v26,
                            a4,
                            a1[8],
                            a1[9],
                            0,
                            (__int64)(v12 - 7),
                            (__int64)&v25) < 0 )
                  break;
                v17 = v23;
                v15 = v27 - 1;
                v16 = v23 + v24;
                --v27;
                v24 = v16;
                if ( !v25 )
                {
                  v14 = v26;
LABEL_13:
                  *v12 = v15;
                  *((_QWORD *)v12 - 1) = v16;
                  goto LABEL_14;
                }
                a4 = v26;
              }
              dword_140E2D728 = 14;
            }
          }
          else
          {
            v14 = guard_dispatch_icall_no_overrides(a1, v12 - 2, v12 - 7, a4);
          }
LABEL_14:
          *v11 = v14;
        }
        if ( v14 )
        {
          if ( v10 )
          {
            if ( v10 >= v14 )
              v10 = v14;
          }
          else
          {
            v10 = v14;
          }
        }
      }
      v6 = a1[36];
      ++v9;
      v11 += 10;
      v12 += 10;
    }
    while ( v9 < v6 );
    v7 = a1 + 38;
  }
  if ( a2 && v10 )
  {
    v18 = 0;
    if ( v6 )
    {
      v19 = v6;
      do
      {
        if ( *v7 == v10 )
          v18 |= v7[1];
        v7 += 10;
        --v19;
      }
      while ( v19 );
      v20 = 0;
      v21 = a1 + 32;
      do
      {
        if ( (v18 & *v21) != 0 )
          v8 |= 1 << v20;
        ++v20;
        ++v21;
      }
      while ( v20 < v6 );
    }
    *a2 = v8;
  }
  result = v10;
  a1[78] = v10;
  return result;
}
