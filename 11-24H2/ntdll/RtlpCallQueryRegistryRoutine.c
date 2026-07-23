/*
 * XREFs of RtlpCallQueryRegistryRoutine @ 0x1800832B4
 * Callers:
 *     RtlpQueryRegistryValues @ 0x1800829E0 (RtlpQueryRegistryValues.c)
 * Callees:
 *     RtlExpandEnvironmentStrings @ 0x180006EC0 (RtlExpandEnvironmentStrings.c)
 *     RtlpQueryRegistryDirect @ 0x180083784 (RtlpQueryRegistryDirect.c)
 *     RtlpValidateKeyTrust @ 0x18008387C (RtlpValidateKeyTrust.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpCallQueryRegistryRoutine(
        __int64 a1,
        __int64 a2,
        WCHAR *a3,
        int *a4,
        __int64 a5,
        PVOID Environment,
        char a7)
{
  unsigned int v7; // ebx
  int v9; // r8d
  WCHAR *v11; // rdx
  __int64 v12; // r10
  unsigned int v13; // ebp
  int v14; // ecx
  int v15; // eax
  char *v16; // r15
  const WCHAR *v17; // rsi
  unsigned int v18; // edi
  int v19; // ecx
  __int64 result; // rax
  unsigned int v21; // eax
  bool v22; // cf
  _WORD *v23; // rcx
  unsigned int v25; // eax
  unsigned int v26; // edx
  int v27; // ecx
  unsigned __int64 v28; // rdi
  unsigned int v29; // eax
  const WCHAR *i; // rcx
  int v31; // ecx
  __int64 v32; // r12
  const WCHAR *v33; // rdi
  const WCHAR *v34; // r12
  unsigned int v36; // ebp
  int RegistryDirect; // eax
  unsigned __int16 v38; // r12
  NTSTATUS v39; // eax
  unsigned int v40; // edx
  ULONG_PTR ReturnLength[11]; // [rsp+40h] [rbp-58h] BYREF
  __int16 v44; // [rsp+A8h] [rbp+10h]
  int v45; // [rsp+A8h] [rbp+10h]
  WCHAR *v46; // [rsp+B0h] [rbp+18h]

  v7 = 0;
  v9 = *a4;
  *a4 = 0;
  v11 = a3;
  v12 = a1;
  v44 = v9;
  v46 = a3;
  v13 = *(unsigned __int8 *)(a2 + 32);
  if ( *((_DWORD *)a3 + 1) )
  {
    v14 = *((_DWORD *)a3 + 2);
    if ( v14 != -1 )
    {
      v15 = *((_DWORD *)a3 + 3);
      if ( v15 || *((_DWORD *)a3 + 1) != v13 )
      {
        if ( (*(_BYTE *)(a2 + 8) & 0x20) != 0 )
        {
          v16 = *(char **)(a2 + 16);
LABEL_6:
          v13 = *((_DWORD *)a3 + 1);
          v17 = (WCHAR *)((char *)a3 + *((unsigned int *)a3 + 2));
          v18 = *((_DWORD *)a3 + 3);
          goto LABEL_7;
        }
        if ( v15 )
          v25 = v14 + v15;
        else
          v25 = *((_DWORD *)a3 + 4) + 20;
        v26 = *((_DWORD *)a3 + 4);
        v27 = v26 + 2;
        v16 = (char *)(((unsigned __int64)a3 + v25 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        v28 = (int)(v26 + 2);
        if ( v28 >= 2 )
        {
          v45 = (_DWORD)a3 + v9;
          if ( (int)a3 + v9 - (int)v16 < v27 )
          {
            result = 3221225507LL;
            *a4 = v27 + (_DWORD)v16 - (_DWORD)a3;
            return result;
          }
          memmove(v16, a3 + 10, v26);
          v12 = a1;
          v11 = (WCHAR *)((unsigned __int64)&v16[v28 + 7] & 0xFFFFFFFFFFFFFFF8uLL);
          v9 = v45 - (_DWORD)v11;
          v46 = v11;
          v44 = v45 - (_WORD)v11;
          *(_WORD *)&v16[*((unsigned int *)a3 + 4)] = 0;
          goto LABEL_6;
        }
        return 3221225532LL;
      }
    }
  }
  if ( !*(_BYTE *)(a2 + 32) )
  {
    v22 = (*(_BYTE *)(a2 + 8) & 4) != 0;
    return v22 ? 0xC0000034 : 0;
  }
  v18 = *(_DWORD *)(a2 + 48);
  v16 = *(char **)(a2 + 16);
  v17 = *(const WCHAR **)(a2 + 40);
  if ( !v18 )
  {
    v23 = *(_WORD **)(a2 + 40);
    if ( v13 - 1 <= 1 )
    {
      if ( !v17 )
        return 3221225532LL;
      while ( *v23++ )
        ;
      v18 = (_DWORD)v23 - (_DWORD)v17;
    }
    else if ( v13 == 7 )
    {
      if ( !v17 )
        return 3221225532LL;
      if ( *v17 )
      {
        do
        {
          while ( *v23++ )
            ;
        }
        while ( *v23 );
      }
      v18 = (_DWORD)v23 - (_DWORD)v17 + 2;
    }
  }
LABEL_7:
  v19 = *(_DWORD *)(a2 + 8);
  if ( (v19 & 0x20) == 0 )
    goto LABEL_10;
  if ( (v19 & 0x100) == 0 )
  {
    if ( (v19 & 0x80u) == 0 || v13 - 1 > 1 && v13 != 7 )
      goto LABEL_10;
    v22 = (v19 & 4) != 0;
    return v22 ? 0xC0000034 : 0;
  }
  if ( *(unsigned __int8 *)(a2 + 35) != v13 )
    return 3221225508LL;
LABEL_10:
  if ( (v19 & 0x10) == 0 )
  {
    if ( v13 == 7 )
    {
      v31 = 0;
      v32 = v18 - 4LL;
      v33 = v17;
      v34 = (const WCHAR *)((char *)v17 + v32);
      if ( v17 < v34 )
      {
        do
        {
          while ( *v33++ )
            ;
          v36 = (_DWORD)v33 - (_DWORD)v17;
          if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
          {
            if ( a7 )
            {
              v31 = RtlpValidateKeyTrust(v12);
              if ( v31 < 0 )
                return (unsigned int)v31;
            }
            RegistryDirect = RtlpQueryRegistryDirect(1LL, v17, v36, *(_QWORD *)(a2 + 24));
            *(_QWORD *)(a2 + 24) += 16LL;
          }
          else
          {
            RegistryDirect = (*(__int64 (__fastcall **)(char *, __int64, const WCHAR *, _QWORD, __int64, _QWORD))a2)(
                               v16,
                               1LL,
                               v17,
                               v36,
                               a5,
                               *(_QWORD *)(a2 + 24));
          }
          v31 = 0;
          if ( RegistryDirect != -1073741789 )
            v31 = RegistryDirect;
          if ( v31 < 0 )
            break;
          v12 = a1;
          v17 = v33;
        }
        while ( v33 < v34 );
      }
      return (unsigned int)v31;
    }
    if ( v13 == 2 && v18 - 2 <= 0xFFFA && (v18 & 1) == 0 )
    {
      v29 = v18 - 2;
      for ( i = v17; ; ++i )
      {
        if ( !v29 )
          goto LABEL_13;
        if ( *i == 37 )
          break;
        v29 -= 2;
      }
      v38 = 0;
      if ( v9 <= 0 )
      {
        LOWORD(v9) = 0;
      }
      else
      {
        if ( (unsigned __int64)v9 <= 0xFFFE )
        {
          v11[((unsigned __int64)v9 >> 1) - 1] = 0;
LABEL_71:
          ReturnLength[0] = 0LL;
          v39 = RtlExpandEnvironmentStrings(
                  Environment,
                  v17,
                  (unsigned __int64)(unsigned __int16)(v18 - 2) >> 1,
                  v11,
                  (unsigned __int64)(unsigned __int16)v9 >> 1,
                  ReturnLength);
          v31 = v39;
          if ( ReturnLength[0] > 0x7FFF )
            return (unsigned int)-1073741823;
          if ( v39 >= 0 )
            v38 = 2 * (LOWORD(ReturnLength[0]) - 1);
          v40 = 2 * LODWORD(ReturnLength[0]);
          v13 = 1;
          if ( v39 >= 0 )
          {
            v17 = v46;
            v18 = v38 + 2;
            goto LABEL_13;
          }
          if ( v39 != -1073741789 )
          {
            if ( v39 == -2147483643 )
              goto LABEL_13;
            return (unsigned int)v31;
          }
          *a4 = (_DWORD)v46 + v40 - (_DWORD)a3;
          if ( v40 <= 0xFFFC && v44 != -2 )
            return (unsigned int)v31;
          goto LABEL_13;
        }
        LOWORD(v9) = -2;
        v11[32766] = 0;
      }
      v44 = v9;
      goto LABEL_71;
    }
  }
LABEL_13:
  if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
  {
    if ( a7 )
    {
      result = RtlpValidateKeyTrust(a1);
      if ( (int)result < 0 )
        return result;
    }
    v21 = RtlpQueryRegistryDirect(v13, v17, v18, *(_QWORD *)(a2 + 24));
  }
  else
  {
    v21 = (*(__int64 (__fastcall **)(char *, _QWORD, const WCHAR *, _QWORD, __int64, _QWORD))a2)(
            v16,
            v13,
            v17,
            v18,
            a5,
            *(_QWORD *)(a2 + 24));
  }
  if ( v21 != -1073741789 )
    return v21;
  return v7;
}
