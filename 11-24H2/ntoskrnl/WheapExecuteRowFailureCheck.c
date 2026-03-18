/*
 * XREFs of WheapExecuteRowFailureCheck @ 0x1407C8EE8
 * Callers:
 *     WheapPfaMemoryCheck @ 0x1407C9224 (WheapPfaMemoryCheck.c)
 * Callees:
 *     WheaAttemptRowOffline @ 0x14065CB10 (WheaAttemptRowOffline.c)
 *     WheaGetNotifyAllOfflinesPolicy @ 0x14065CDC0 (WheaGetNotifyAllOfflinesPolicy.c)
 *     WheaLogInternalEvent @ 0x14065E070 (WheaLogInternalEvent.c)
 *     MmGetPageBadStatus @ 0x140674AB0 (MmGetPageBadStatus.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     WheaAttemptPhysicalPageOffline @ 0x1407C72F0 (WheaAttemptPhysicalPageOffline.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

char __fastcall WheapExecuteRowFailureCheck(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v5; // rdi
  char v7; // r15
  PVOID *v8; // r8
  unsigned int v9; // r10d
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  unsigned int v12; // r13d
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // rax
  PVOID *v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  PVOID **v19; // rax
  PVOID **v20; // rax
  void *v21; // rcx
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  _QWORD *v26; // rcx
  _QWORD *v27; // rax
  _QWORD *P; // [rsp+30h] [rbp-50h] BYREF
  PVOID *p_P; // [rsp+38h] [rbp-48h]
  unsigned __int64 v30; // [rsp+40h] [rbp-40h] BYREF
  __int128 Src; // [rsp+48h] [rbp-38h] BYREF
  __int128 v32; // [rsp+58h] [rbp-28h]
  __int128 v33; // [rsp+68h] [rbp-18h]

  p_P = (PVOID *)&P;
  v5 = &P;
  P = &P;
  Src = 0LL;
  v7 = 0;
  v32 = 0LL;
  v33 = 0LL;
  if ( *(_BYTE *)off_140E09778 )
  {
    v8 = (PVOID *)WheapPfaList;
    v9 = 1;
    v10 = a1;
    v11 = a1;
    v12 = *(_DWORD *)off_140E09798;
    v13 = *(unsigned int *)off_140E09758;
    v14 = a1 - v13;
    if ( a1 < v13 )
      v14 = 0LL;
    v15 = v13 + a1;
    if ( WheapPfaList != &WheapPfaList )
    {
      do
      {
        v16 = v8;
        v8 = (PVOID *)*v8;
        v17 = (unsigned __int64)v16[5];
        if ( v17 >= v14 && v17 <= v15 )
        {
          if ( v17 != a1 )
          {
            ++v9;
            v18 = (unsigned __int64)v16[5];
            if ( v17 >= v10 )
              v18 = v10;
            v10 = v18;
            if ( v17 <= v11 )
              v17 = v11;
            v11 = v17;
          }
          if ( v8[1] != v16
            || (v19 = (PVOID **)v16[1], *v19 != v16)
            || (*v19 = v8, v8[1] = v19, v20 = (PVOID **)p_P, *p_P != &P) )
          {
LABEL_40:
            __fastfail(3u);
          }
          v16[1] = p_P;
          *v16 = &P;
          *v20 = v16;
          v15 = v13 + a1;
          p_P = v16;
        }
      }
      while ( v8 != &WheapPfaList );
      v5 = P;
    }
    if ( v9 < v12 )
    {
      while ( v5 != &P )
      {
        v26 = WheapPfaList;
        v27 = v5;
        v5 = (_QWORD *)*v5;
        if ( *((PVOID **)WheapPfaList + 1) != &WheapPfaList )
          goto LABEL_40;
        *v27 = WheapPfaList;
        v27[1] = &WheapPfaList;
        v26[1] = v27;
        WheapPfaList = v27;
      }
    }
    else
    {
      v7 = 1;
      while ( v5 != &P )
      {
        v21 = v5;
        v5 = (_QWORD *)*v5;
        ExFreePoolWithTag(v21, 0x61656857u);
      }
      if ( v11 - v10 < v13 )
      {
        v22 = v11;
        v11 = v13 + v10;
        if ( v22 < v13 )
          v10 = 0LL;
        else
          v10 = v22 - v13;
      }
      *(_QWORD *)&Src = 0x1674C6857LL;
      *((_QWORD *)&Src + 1) = 48LL;
      *(_QWORD *)&v32 = 0x800000544C4E524BuLL;
      *((_QWORD *)&v32 + 1) = 0x1000000002LL;
      *(_QWORD *)&v33 = v10;
      *((_QWORD *)&v33 + 1) = v11;
      WheaLogInternalEvent(&Src);
      if ( WheaGetNotifyAllOfflinesPolicy() && *(_BYTE *)off_140E097D8 )
      {
        WheaAttemptRowOffline(v10, 0LL, v11 - v10 + 1, a5);
      }
      else
      {
        while ( v10 <= v11 )
        {
          v30 = v10 << 12;
          if ( !(unsigned int)MmGetPageBadStatus(&v30, v23, v24) )
            WheaAttemptPhysicalPageOffline(v10, 0, 0, 0, a5);
          ++v10;
        }
      }
    }
  }
  return v7;
}
