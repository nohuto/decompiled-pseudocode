/*
 * XREFs of WheapExecuteRowFailureCheck @ 0x1407C93D8
 * Callers:
 *     WheapPfaMemoryCheck @ 0x1407C9714 (WheapPfaMemoryCheck.c)
 * Callees:
 *     WheaAttemptRowOffline @ 0x14065B230 (WheaAttemptRowOffline.c)
 *     WheaGetNotifyAllOfflinesPolicy @ 0x14065B4E0 (WheaGetNotifyAllOfflinesPolicy.c)
 *     WheaLogInternalEvent @ 0x14065C840 (WheaLogInternalEvent.c)
 *     MmGetPageBadStatus @ 0x140675C80 (MmGetPageBadStatus.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     WheaAttemptPhysicalPageOffline @ 0x1407C7790 (WheaAttemptPhysicalPageOffline.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

char __fastcall WheapExecuteRowFailureCheck(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v5; // rdi
  char v7; // r15
  PVOID *v8; // rdx
  PVOID *v9; // r8
  unsigned int v10; // r10d
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rsi
  unsigned int v13; // r13d
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r11
  unsigned __int64 v16; // rax
  PVOID *v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  PVOID **v20; // rax
  PVOID **v21; // rax
  void *v22; // rcx
  unsigned __int64 v23; // rax
  _QWORD *v25; // rcx
  _QWORD *v26; // rax
  _QWORD *P; // [rsp+30h] [rbp-50h] BYREF
  PVOID *p_P; // [rsp+38h] [rbp-48h]
  unsigned __int64 v29; // [rsp+40h] [rbp-40h] BYREF
  __int128 Src; // [rsp+48h] [rbp-38h] BYREF
  __int128 v31; // [rsp+58h] [rbp-28h]
  __int128 v32; // [rsp+68h] [rbp-18h]

  p_P = (PVOID *)&P;
  v5 = &P;
  P = &P;
  Src = 0LL;
  v7 = 0;
  v31 = 0LL;
  v32 = 0LL;
  if ( *(_BYTE *)off_140E097E8 )
  {
    v8 = &WheapPfaList;
    v9 = (PVOID *)WheapPfaList;
    v10 = 1;
    v11 = a1;
    v12 = a1;
    v13 = *(_DWORD *)off_140E09808;
    v14 = *(unsigned int *)off_140E097C8;
    v15 = a1 - v14;
    if ( a1 < v14 )
      v15 = 0LL;
    v16 = v14 + a1;
    if ( WheapPfaList != &WheapPfaList )
    {
      do
      {
        v17 = v9;
        v9 = (PVOID *)*v9;
        v18 = (unsigned __int64)v17[5];
        if ( v18 >= v15 && v18 <= v16 )
        {
          if ( v18 != a1 )
          {
            ++v10;
            v19 = (unsigned __int64)v17[5];
            if ( v18 >= v11 )
              v19 = v11;
            v11 = v19;
            if ( v18 <= v12 )
              v18 = v12;
            v12 = v18;
          }
          if ( v9[1] != v17
            || (v20 = (PVOID **)v17[1], *v20 != v17)
            || (*v20 = v9, v9[1] = v20, v21 = (PVOID **)p_P, *p_P != &P) )
          {
LABEL_40:
            __fastfail(3u);
          }
          v17[1] = p_P;
          *v17 = &P;
          *v21 = v17;
          v16 = v14 + a1;
          p_P = v17;
        }
        v8 = &WheapPfaList;
      }
      while ( v9 != &WheapPfaList );
      v5 = P;
    }
    if ( v10 < v13 )
    {
      while ( v5 != &P )
      {
        v25 = WheapPfaList;
        v26 = v5;
        v5 = (_QWORD *)*v5;
        if ( *((PVOID **)WheapPfaList + 1) != &WheapPfaList )
          goto LABEL_40;
        *v26 = WheapPfaList;
        v26[1] = &WheapPfaList;
        v25[1] = v26;
        WheapPfaList = v26;
      }
    }
    else
    {
      v7 = 1;
      while ( v5 != &P )
      {
        v22 = v5;
        v5 = (_QWORD *)*v5;
        ExFreePoolWithTag(v22, 0x61656857u);
      }
      if ( v12 - v11 < v14 )
      {
        v23 = v12;
        v12 = v14 + v11;
        if ( v23 < v14 )
          v11 = 0LL;
        else
          v11 = v23 - v14;
      }
      *(_QWORD *)&Src = 0x1674C6857LL;
      *((_QWORD *)&Src + 1) = 48LL;
      *(_QWORD *)&v31 = 0x800000544C4E524BuLL;
      *((_QWORD *)&v31 + 1) = 0x1000000002LL;
      *(_QWORD *)&v32 = v11;
      *((_QWORD *)&v32 + 1) = v12;
      WheaLogInternalEvent(&Src, (__int64)v8);
      if ( WheaGetNotifyAllOfflinesPolicy() && *(_BYTE *)off_140E09848 )
      {
        WheaAttemptRowOffline(v11, 0LL, v12 - v11 + 1, a5);
      }
      else
      {
        while ( v11 <= v12 )
        {
          v29 = v11 << 12;
          if ( !(unsigned int)MmGetPageBadStatus(&v29) )
            WheaAttemptPhysicalPageOffline(v11, 0, 0, 0, a5);
          ++v11;
        }
      }
    }
  }
  return v7;
}
