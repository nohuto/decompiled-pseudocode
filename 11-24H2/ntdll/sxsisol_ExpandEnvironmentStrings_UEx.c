/*
 * XREFs of sxsisol_ExpandEnvironmentStrings_UEx @ 0x18008B22C
 * Callers:
 *     sxsisol_SearchActCtxForDllName @ 0x18005D5B0 (sxsisol_SearchActCtxForDllName.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlExpandEnvironmentStrings @ 0x180085010 (RtlExpandEnvironmentStrings.c)
 *     RtlpEnsureBufferSize @ 0x18008B0C0 (RtlpEnsureBufferSize.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall sxsisol_ExpandEnvironmentStrings_UEx(__int64 a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  int v5; // eax
  int v6; // ebx
  unsigned int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // edx
  unsigned int v10; // r8d
  unsigned __int64 v11; // r8
  _WORD **v12; // r14
  unsigned __int64 *v13; // rbx
  _WORD *v14; // r9
  unsigned __int64 v15; // rax
  bool v16; // sf
  unsigned __int64 v18; // r8
  __int64 *v19; // rbx
  __int64 v20; // rcx
  unsigned __int16 v21; // cx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v24; // [rsp+98h] [rbp+20h] BYREF

  if ( !a2 || !a3 || a2 == a3 )
    return (unsigned int)-1073741811;
  if ( *a2 )
  {
    RtlEnterCriticalSection((__int64)&FastPebLock);
    v23 = 0LL;
    v5 = RtlExpandEnvironmentStrings(0LL, *((_WORD **)a2 + 1), (unsigned __int64)*a2 >> 1, 0LL, 0LL, &v23);
    v6 = v5;
    if ( v23 > 0x7FFF )
    {
      v6 = -1073741823;
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v10 = 0;
    }
    else
    {
      v7 = 2 * v23;
      v8 = 2 * v23;
      v9 = 2 * v23;
      v10 = 2 * v23;
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
      v12 = (_WORD **)(a3 + 8);
      v13 = (unsigned __int64 *)(a3 + 16);
      if ( a3 != (unsigned __int16 *)-16LL && v11 <= *v13 || (int)RtlpEnsureBufferSize(0, (__int64)(a3 + 8), v11) >= 0 )
      {
        v14 = *v12;
        *((_QWORD *)a3 + 1) = *v12;
        v15 = *(unsigned __int16 *)v13;
        a3[1] = v15;
        v24 = 0LL;
        v6 = RtlExpandEnvironmentStrings(0LL, *((_WORD **)a2 + 1), (unsigned __int64)*a2 >> 1, v14, v15 >> 1, &v24);
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
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    return (unsigned int)v6;
  }
  *a3 = 0;
  v18 = *a2 + 2LL;
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
      memmove((void *)(v20 + 2 * ((unsigned __int64)*a3 >> 1)), *((const void **)a2 + 1), *a2);
      v21 = *a3;
      a3[1] = *a2 + *a3 + 2;
      v22 = (unsigned __int16)(*a2 + v21);
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
