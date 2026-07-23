/*
 * XREFs of sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800B41BC
 * Callers:
 *     sxsisol_SearchActCtxForDllName @ 0x180019210 (sxsisol_SearchActCtxForDllName.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlExpandEnvironmentStrings @ 0x1800AD3A0 (RtlExpandEnvironmentStrings.c)
 *     RtlpEnsureBufferSize @ 0x1800B4050 (RtlpEnsureBufferSize.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall sxsisol_ExpandEnvironmentStrings_UEx(__int64 a1, PCWSTR *a2, unsigned __int16 *a3)
{
  NTSTATUS v5; // eax
  NTSTATUS v6; // ebx
  unsigned int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // edx
  unsigned int v10; // r8d
  SIZE_T v11; // r8
  WCHAR **v12; // r14
  SIZE_T *v13; // rbx
  WCHAR *v14; // r9
  unsigned __int64 v15; // rax
  bool v16; // sf
  SIZE_T v18; // r8
  __int64 *v19; // rbx
  __int64 v20; // rcx
  unsigned __int16 v21; // cx
  unsigned __int64 v22; // rcx
  ULONG_PTR ReturnLength; // [rsp+88h] [rbp+10h] BYREF
  ULONG_PTR v24; // [rsp+98h] [rbp+20h] BYREF

  if ( !a2 || !a3 || a2 == (PCWSTR *)a3 )
    return (unsigned int)-1073741811;
  if ( *(_WORD *)a2 )
  {
    RtlEnterCriticalSection(&FastPebLock);
    ReturnLength = 0LL;
    v5 = RtlExpandEnvironmentStrings(
           0LL,
           a2[1],
           (unsigned __int64)*(unsigned __int16 *)a2 >> 1,
           0LL,
           0LL,
           &ReturnLength);
    v6 = v5;
    if ( ReturnLength > 0x7FFF )
    {
      v6 = -1073741823;
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v10 = 0;
    }
    else
    {
      v7 = 2 * ReturnLength;
      v8 = 2 * ReturnLength;
      v9 = 2 * ReturnLength;
      v10 = 2 * ReturnLength;
    }
    if ( v6 < 0 )
    {
      v7 = v8;
      v9 = v10;
      if ( v6 != -1073741789 )
        goto LABEL_25;
    }
    if ( v7 > 0xFFFE || (v11 = v9 + 4LL, v11 > 0xFFFE) )
    {
      v6 = -1073741562;
    }
    else
    {
      v12 = (WCHAR **)(a3 + 8);
      v13 = (SIZE_T *)(a3 + 16);
      if ( a3 != (unsigned __int16 *)-16LL && v11 <= *v13 || (int)RtlpEnsureBufferSize(0, (__int64)(a3 + 8), v11) >= 0 )
      {
        v14 = *v12;
        *((_QWORD *)a3 + 1) = *v12;
        v15 = *(unsigned __int16 *)v13;
        a3[1] = v15;
        v24 = 0LL;
        v6 = RtlExpandEnvironmentStrings(
               0LL,
               a2[1],
               (unsigned __int64)*(unsigned __int16 *)a2 >> 1,
               v14,
               v15 >> 1,
               &v24);
        if ( v24 > 0x7FFF )
        {
          v6 = -1073741823;
        }
        else
        {
          v16 = v6 < 0;
          if ( v6 < 0 )
            goto LABEL_18;
          *a3 = 2 * (v24 - 1);
        }
        v16 = v6 < 0;
LABEL_18:
        if ( !v16 )
          v6 = 0;
        goto LABEL_25;
      }
      v6 = -1073741801;
    }
LABEL_25:
    RtlLeaveCriticalSection(&FastPebLock);
    return (unsigned int)v6;
  }
  *a3 = 0;
  v18 = *(unsigned __int16 *)a2 + 2LL;
  if ( v18 <= 0xFFFE )
  {
    v19 = (__int64 *)(a3 + 8);
    if ( (a3 == (unsigned __int16 *)-16LL || v18 > *((_QWORD *)a3 + 4))
      && (int)RtlpEnsureBufferSize(0, (__int64)(a3 + 8), v18) < 0 )
    {
      return (unsigned int)-1073741801;
    }
    else
    {
      v20 = *v19;
      *((_QWORD *)a3 + 1) = *v19;
      memmove((void *)(v20 + 2 * ((unsigned __int64)*a3 >> 1)), a2[1], *(unsigned __int16 *)a2);
      v21 = *a3;
      a3[1] = *(_WORD *)a2 + *a3 + 2;
      v22 = (unsigned __int16)(*(_WORD *)a2 + v21);
      *a3 = v22;
      *(_WORD *)(*((_QWORD *)a3 + 1) + 2 * (v22 >> 1)) = 0;
      return 0;
    }
  }
  else
  {
    return (unsigned int)-1073741562;
  }
}
