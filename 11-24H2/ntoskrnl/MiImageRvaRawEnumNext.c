/*
 * XREFs of MiImageRvaRawEnumNext @ 0x14093EEB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     MiQueryFlagsForRvaEntry @ 0x14093F100 (MiQueryFlagsForRvaEntry.c)
 */

__int64 __fastcall MiImageRvaRawEnumNext(_DWORD *a1, _DWORD *a2)
{
  unsigned int v4; // edx
  _DWORD *v5; // rax
  int v6; // esi
  unsigned int v7; // ebp
  unsigned int v8; // r15d
  unsigned int *v9; // r14
  _DWORD *v10; // rdi
  __int64 (__fastcall *v11)(); // rax
  unsigned int v12; // r12d
  int v13; // eax
  unsigned int v14; // r9d
  __int64 v15; // rcx
  unsigned int v16; // edx
  int v17; // r9d
  __int64 v18; // rcx
  unsigned int v19; // ecx
  _DWORD *v20; // r8
  __int64 result; // rax
  unsigned int v22; // [rsp+50h] [rbp-48h]
  __int64 v23; // [rsp+58h] [rbp-40h]
  char v24; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v25; // [rsp+B0h] [rbp+18h] BYREF
  int v26; // [rsp+B8h] [rbp+20h]

  if ( !a1[78] )
    return 0LL;
  v4 = a1[36];
  v5 = a1 + 38;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = a1 + 38;
  if ( v4 )
  {
    v10 = a1 + 46;
    do
    {
      v11 = (__int64 (__fastcall *)())*((_QWORD *)v10 - 2);
      if ( v11 )
      {
        v12 = *v9;
        if ( *v9 == a1[78] )
        {
          if ( v11 == MiImageCfgRvaIteratorNext )
          {
            v13 = *v10;
            v12 = 0;
            v24 = 0;
            v14 = 0;
            v25 = 0;
            v26 = v13;
            if ( v13 )
            {
              v15 = *((_QWORD *)v10 - 1);
              v16 = a1[21];
              v23 = v15;
              v22 = v16;
              while ( 1 )
              {
                if ( !v13 )
                  goto LABEL_13;
                if ( (int)MiQueryFlagsForRvaEntry(
                            v15,
                            v16,
                            (unsigned int)&v25,
                            v14,
                            a1[8],
                            a1[9],
                            0,
                            (__int64)(v10 - 7),
                            (__int64)&v24) < 0 )
                  break;
                v16 = v22;
                v13 = v26 - 1;
                v15 = v22 + v23;
                --v26;
                v23 = v15;
                if ( !v24 )
                {
                  v12 = v25;
LABEL_13:
                  *v10 = v13;
                  *((_QWORD *)v10 - 1) = v15;
                  goto LABEL_14;
                }
                v14 = v25;
              }
              dword_140E2D868 = 14;
            }
          }
          else
          {
            v12 = guard_dispatch_icall_no_overrides(a1, v10 - 2);
          }
LABEL_14:
          *v9 = v12;
        }
        if ( v12 )
        {
          if ( v8 )
          {
            if ( v8 >= v12 )
              v8 = v12;
          }
          else
          {
            v8 = v12;
          }
        }
      }
      v4 = a1[36];
      ++v7;
      v9 += 10;
      v10 += 10;
    }
    while ( v7 < v4 );
    v5 = a1 + 38;
  }
  if ( a2 && v8 )
  {
    v17 = 0;
    if ( v4 )
    {
      v18 = v4;
      do
      {
        if ( *v5 == v8 )
          v17 |= v5[1];
        v5 += 10;
        --v18;
      }
      while ( v18 );
      v19 = 0;
      v20 = a1 + 32;
      do
      {
        if ( (v17 & *v20) != 0 )
          v6 |= 1 << v19;
        ++v19;
        ++v20;
      }
      while ( v19 < v4 );
    }
    *a2 = v6;
  }
  result = v8;
  a1[78] = v8;
  return result;
}
