/*
 * XREFs of HmgAllocateDcAttr @ 0x14001E2CC
 * Callers:
 *     GreCreateDisplayDC @ 0x14000E640 (GreCreateDisplayDC.c)
 *     ?GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x1401C5800 (-GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001F87C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001FCA8 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     PALLOCNOZ @ 0x1400254A4 (PALLOCNOZ.c)
 *     ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1401755F8 (-HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 *     ?HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z @ 0x1401C4D30 (-HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z.c)
 */

__int64 HmgAllocateDcAttr()
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v1; // rdx
  __int64 v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 *v5; // rcx
  __int64 **v6; // rax
  __int64 v7; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 *v12; // rdx
  int v13; // eax
  char *v14; // rdi
  __int64 v15; // rax
  __int64 *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  void *v20; // [rsp+30h] [rbp+8h] BYREF
  char v21; // [rsp+38h] [rbp+10h] BYREF

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged();
  if ( CurrentThreadNonPaged )
    v1 = *CurrentThreadNonPaged;
  else
    v1 = 0LL;
  v2 = 0LL;
  v3 = 32LL;
  if ( v1 )
    v3 = v1 + 40;
  v4 = *(_QWORD *)v3;
  if ( *(_QWORD *)v3 )
  {
    *(_QWORD *)v3 = 0LL;
    goto LABEL_13;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  v10 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  SEMOBJ<20>::SEMOBJ<20>(&v21);
  if ( *(_QWORD *)(v10 + 40) )
    goto LABEL_18;
  v20 = 0LL;
  v14 = (char *)HmgAllocateSecureUserMemory(&v20);
  if ( !v14 )
    goto LABEL_18;
  v15 = PALLOCNOZ(112LL, 1717789767LL);
  if ( v15 )
  {
    v16 = (__int64 *)(v10 + 192);
    v17 = *(_QWORD *)(v10 + 192);
    if ( *(_QWORD *)(v17 + 8) != v10 + 192 )
      goto LABEL_30;
    *(_QWORD *)v15 = v17;
    *(_QWORD *)(v15 + 8) = v16;
    *(_QWORD *)(v17 + 8) = v15;
    v18 = 11LL;
    *v16 = v15;
    v19 = (_QWORD *)(v15 + 24);
    *(_DWORD *)(v15 + 16) = 11;
    *(_QWORD *)(v10 + 40) = v14 + 3680;
    do
    {
      *v19 = v14;
      v14 += 368;
      ++v19;
      --v18;
    }
    while ( v18 );
LABEL_18:
    if ( !*(_QWORD *)(v10 + 40) )
      goto LABEL_12;
    v2 = *(_QWORD *)(v10 + 40);
    v11 = v10 + 192;
    v12 = *(__int64 **)(v10 + 192);
    v13 = *((_DWORD *)v12 + 4) - 1;
    *((_DWORD *)v12 + 4) = v13;
    if ( v13 )
    {
      *(_QWORD *)(v10 + 40) = v12[(unsigned int)(v13 - 1) + 3];
      goto LABEL_12;
    }
    v5 = (__int64 *)*v12;
    if ( *(__int64 **)(*v12 + 8) == v12 )
    {
      v6 = (__int64 **)v12[1];
      if ( *v6 == v12 )
      {
        *v6 = v5;
        v5[1] = (__int64)v6;
        GreDeleteFastMutex((char *)v12);
        if ( *(_QWORD *)v11 == v11 )
          v7 = 0LL;
        else
          v7 = *(_QWORD *)(*(_QWORD *)v11 + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)v11 + 16LL) - 1) + 24);
        *(_QWORD *)(v10 + 40) = v7;
LABEL_12:
        v4 = v2;
        SEMOBJ<20>::vUnlock(&v21);
        if ( !v2 )
          return v4;
LABEL_13:
        *(_QWORD *)(v4 + 352) = 0LL;
        return v4;
      }
    }
LABEL_30:
    __fastfail(3u);
  }
  HmgFreeAllocateSecureUserMemory(v14, v20);
  SEMOBJ<20>::vUnlock(&v21);
  return 0LL;
}
