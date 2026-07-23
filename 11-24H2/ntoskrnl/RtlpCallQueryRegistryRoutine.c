/*
 * XREFs of RtlpCallQueryRegistryRoutine @ 0x140835044
 * Callers:
 *     RtlpQueryRegistryValues @ 0x1409B4DD0 (RtlpQueryRegistryValues.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlpValidateKeyTrust @ 0x140833F14 (RtlpValidateKeyTrust.c)
 *     RtlpQueryRegistryDirect @ 0x1408353D4 (RtlpQueryRegistryDirect.c)
 *     WmipSDRegistryQueryRoutine @ 0x1408354E0 (WmipSDRegistryQueryRoutine.c)
 */

__int64 __fastcall RtlpCallQueryRegistryRoutine(
        void *a1,
        __int64 a2,
        unsigned __int64 a3,
        int *a4,
        __int64 a5,
        int a6,
        char a7)
{
  int v7; // r12d
  unsigned int v8; // ebx
  _DWORD *v9; // rsi
  unsigned int v11; // ebp
  void *v12; // r10
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  char *v16; // r15
  char *v17; // rdi
  unsigned int v18; // esi
  int v19; // ecx
  int v20; // edx
  unsigned int Routine; // eax
  __int64 result; // rax
  bool v23; // cf
  unsigned int v24; // eax
  unsigned int v25; // edx
  int v26; // ecx
  unsigned __int64 v27; // rdi
  int v28; // r12d
  _WORD *v29; // rcx
  int v30; // ecx
  __int64 v31; // r12
  char *v32; // rsi
  char *v33; // r12
  __int16 v34; // ax
  int v35; // edx
  int RegistryDirect; // eax
  unsigned int v39; // eax
  char *v40; // rcx

  v7 = *a4;
  v8 = 0;
  *a4 = 0;
  v9 = (_DWORD *)a3;
  v11 = (unsigned __int8)*(_DWORD *)(a2 + 32);
  v12 = a1;
  v13 = *(_DWORD *)(a3 + 4);
  if ( v13 )
  {
    v14 = *(_DWORD *)(a3 + 8);
    if ( v14 != -1 )
    {
      v15 = *(_DWORD *)(a3 + 12);
      if ( v15 || v13 != v11 )
      {
        if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
        {
          v16 = *(char **)(a2 + 16);
LABEL_6:
          v11 = v9[1];
          v17 = (char *)v9 + (unsigned int)v9[2];
          v18 = v9[3];
          goto LABEL_7;
        }
        if ( v15 )
          v24 = v15 + v14;
        else
          v24 = *(_DWORD *)(a3 + 16) + 20;
        v25 = *(_DWORD *)(a3 + 16);
        v26 = v25 + 2;
        v16 = (char *)((a3 + v24 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL);
        v27 = (int)(v25 + 2);
        if ( v27 >= 2 )
        {
          v28 = a3 + v7;
          if ( v28 - (int)v16 < v26 )
          {
            result = 3221225507LL;
            *a4 = v26 + (_DWORD)v16 - a3;
            return result;
          }
          memmove(v16, (const void *)(a3 + 20), v25);
          v12 = a1;
          a3 = (unsigned __int64)&v16[v27 + 7] & 0xFFFFFFFFFFFFFFF8uLL;
          v7 = v28 - a3;
          *(_WORD *)&v16[v9[4]] = 0;
          goto LABEL_6;
        }
        return 3221225532LL;
      }
    }
  }
  if ( !v11 )
  {
    v23 = (*(_BYTE *)(a2 + 8) & 4) != 0;
    return v23 ? 0xC0000034 : 0;
  }
  v18 = *(_DWORD *)(a2 + 48);
  v16 = *(char **)(a2 + 16);
  v17 = *(char **)(a2 + 40);
  if ( !v18 )
  {
    v29 = *(_WORD **)(a2 + 40);
    if ( v11 - 1 <= 1 )
    {
      if ( !v17 )
        return 3221225532LL;
      while ( *v29++ )
        ;
      v18 = (_DWORD)v29 - (_DWORD)v17;
    }
    else if ( v11 == 7 )
    {
      if ( !v17 )
        return 3221225532LL;
      if ( *(_WORD *)v17 )
      {
        do
        {
          while ( *v29++ )
            ;
        }
        while ( *v29 );
      }
      v18 = (_DWORD)v29 - (_DWORD)v17 + 2;
    }
  }
LABEL_7:
  v19 = *(_DWORD *)(a2 + 8);
  if ( (v19 & 0x20) == 0 )
    goto LABEL_10;
  if ( (v19 & 0x100) == 0 )
  {
    if ( (v19 & 0x80u) == 0 || v11 - 1 > 1 && v11 != 7 )
      goto LABEL_10;
    v23 = (v19 & 4) != 0;
    return v23 ? 0xC0000034 : 0;
  }
  if ( *(unsigned __int8 *)(a2 + 35) != v11 )
    return 3221225508LL;
LABEL_10:
  if ( (v19 & 0x10) == 0 )
  {
    if ( v11 == 7 )
    {
      v30 = 0;
      v31 = v18 - 4LL;
      v32 = v17;
      v33 = &v17[v31];
      if ( v17 < v33 )
      {
        do
        {
          do
          {
            v34 = *(_WORD *)v32;
            v32 += 2;
          }
          while ( v34 );
          v35 = *(_DWORD *)(a2 + 8);
          if ( (v35 & 0x20) != 0 )
          {
            if ( a7 )
            {
              v30 = RtlpValidateKeyTrust(v12, v35);
              if ( v30 < 0 )
                return (unsigned int)v30;
            }
            RegistryDirect = RtlpQueryRegistryDirect(
                               1LL,
                               v17,
                               (unsigned int)((_DWORD)v32 - (_DWORD)v17),
                               *(_QWORD *)(a2 + 24));
            *(_QWORD *)(a2 + 24) += 16LL;
          }
          else
          {
            RegistryDirect = guard_dispatch_icall_no_overrides(v16, 1LL);
          }
          v30 = 0;
          if ( RegistryDirect != -1073741789 )
            v30 = RegistryDirect;
          if ( v30 < 0 )
            break;
          v12 = a1;
          v17 = v32;
        }
        while ( v32 < v33 );
      }
      return (unsigned int)v30;
    }
    if ( v11 == 2 )
    {
      v39 = v18 - 2;
      if ( v18 - 2 <= 0xFFFA && (v18 & 1) == 0 )
      {
        v40 = v17;
        while ( v39 )
        {
          if ( *(_WORD *)v40 == 37 )
          {
            if ( v7 > 0 )
            {
              if ( (unsigned __int64)v7 > 0xFFFE )
                *(_WORD *)(a3 + 65532) = 0;
              else
                *(_WORD *)(a3 + 2 * ((unsigned __int64)v7 >> 1) - 2) = 0;
            }
            return 3221225485LL;
          }
          v40 += 2;
          v39 -= 2;
        }
      }
    }
  }
  v20 = *(_DWORD *)(a2 + 8);
  if ( (v20 & 0x20) != 0 )
  {
    if ( a7 )
    {
      result = RtlpValidateKeyTrust(v12, v20);
      if ( (int)result < 0 )
        return result;
    }
    Routine = RtlpQueryRegistryDirect(v11, v17, v18, *(_QWORD *)(a2 + 24));
  }
  else if ( *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))a2 == WmipSDRegistryQueryRoutine )
  {
    Routine = WmipSDRegistryQueryRoutine(v16, v11, v17, v18, a5, *(_QWORD *)(a2 + 24));
  }
  else
  {
    Routine = guard_dispatch_icall_no_overrides(v16, v11);
  }
  if ( Routine != -1073741789 )
    return Routine;
  return v8;
}
