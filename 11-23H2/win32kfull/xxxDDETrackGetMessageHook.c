/*
 * XREFs of xxxDDETrackGetMessageHook @ 0x1C01FA884
 * Callers:
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z @ 0x1C012AFD0 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z.c)
 *     SfnSENTDDEMSG @ 0x1C020E720 (SfnSENTDDEMSG.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C01F90CC (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C01F9968 (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxCopyDDEOut@@YAPEAXPEAUtagINTDDEINFO@@PEAPEAX@Z @ 0x1C01F9BA4 (-xxxCopyDDEOut@@YAPEAXPEAUtagINTDDEINFO@@PEAPEAX@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01F9FA8 (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     FreeDdeXact @ 0x1C01FA700 (FreeDdeXact.c)
 *     xxxFreeDdeConv @ 0x1C01FAFF0 (xxxFreeDdeConv.c)
 *     HMValidateCatHandleNoSecure @ 0x1C024B0B4 (HMValidateCatHandleNoSecure.c)
 *     HMValidateHandleNoRipNoIL @ 0x1C024B168 (HMValidateHandleNoRipNoIL.c)
 */

struct _HANDLEENTRY *__fastcall xxxDDETrackGetMessageHook(__int64 *a1)
{
  bool v1; // zf
  __int64 v3; // rcx
  struct _HANDLEENTRY *result; // rax
  struct tagWND *v5; // rsi
  struct tagWND *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  struct tagDDECONV *DdeConv; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct tagDDECONV *v13; // rbx
  int v14; // edx
  struct tagFREELIST *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct tagDDECONV *v19; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v21; // r9
  struct _HANDLEENTRY *v22; // rbx
  int v23; // esi
  void *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int128 v28; // [rsp+20h] [rbp-50h] BYREF
  __int64 v29; // [rsp+30h] [rbp-40h]
  __int128 v30; // [rsp+38h] [rbp-38h] BYREF
  __int64 v31; // [rsp+48h] [rbp-28h]
  __int128 v32; // [rsp+50h] [rbp-20h] BYREF
  __int64 v33; // [rsp+60h] [rbp-10h]
  void *v34; // [rsp+80h] [rbp+10h] BYREF

  v34 = 0LL;
  v1 = *((_DWORD *)a1 + 2) == 993;
  v31 = 0LL;
  v33 = 0LL;
  v30 = 0LL;
  v32 = 0LL;
  if ( v1 )
  {
    v3 = *a1;
    v28 = 0LL;
    v29 = 0LL;
    result = (struct _HANDLEENTRY *)ValidateHwnd(v3);
    v5 = result;
    if ( !result )
      return result;
    ThreadLockAlways(result, &v28);
    v6 = (struct tagWND *)HMValidateCatHandleNoSecure(a1[2]);
    if ( v6 )
    {
      DdeConv = FindDdeConv(v5, v6, v7, v8);
      v13 = DdeConv;
      if ( !DdeConv )
        return (struct _HANDLEENTRY *)ThreadUnlock1(v11, v10, v12);
      v14 = *((_DWORD *)DdeConv + 20);
      if ( (v14 & 2) != 0 && (*(_DWORD *)(*((_QWORD *)DdeConv + 4) + 80LL) & 2) != 0 )
      {
        ThreadLockAlways(DdeConv, &v30);
        v15 = (struct tagFREELIST *)*((_QWORD *)v13 + 9);
        if ( v15 )
        {
          *((_QWORD *)v13 + 9) = 0LL;
          xxxFreeListFree(v15);
        }
        if ( (*(_BYTE *)(_HMPheFromObject(v13) + 25) & 1) == 0 )
          *((_QWORD *)v13 + 4) = xxxFreeDdeConv(*((struct tagDDECONV **)v13 + 4));
        v19 = (struct tagDDECONV *)ThreadUnlock1(v17, v16, v18);
        if ( v19 )
          xxxFreeDdeConv(v19);
      }
      else
      {
        *((_DWORD *)DdeConv + 20) = v14 | 8;
      }
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( *(_DWORD *)(ThreadWin32Thread + 632) <= 0x9900u && (*(_DWORD *)(ThreadWin32Thread + 648) & 0x2000) != 0 )
      xxxCleanupDdeConv(v5, v10, v12, v21);
    return (struct _HANDLEENTRY *)ThreadUnlock1(v11, v10, v12);
  }
  result = (struct _HANDLEENTRY *)HMValidateHandleNoRipNoIL(a1[3]);
  v22 = result;
  if ( result )
  {
    v23 = *((_DWORD *)result + 16);
    ThreadLockAlways(result, &v32);
    v24 = xxxCopyDDEOut(*((struct tagINTDDEINFO **)v22 + 7), &v34);
    a1[3] = (__int64)v24;
    if ( !v24 )
      *((_DWORD *)a1 + 2) = 993;
    result = (struct _HANDLEENTRY *)ThreadUnlock1(v26, v25, v27);
    if ( result )
    {
      if ( (v23 & 0x200) != 0 )
      {
        return FreeDdeXact((void **)v22);
      }
      else
      {
        result = (struct _HANDLEENTRY *)v34;
        if ( *((_QWORD *)v22 + 5) )
          *((_QWORD *)v22 + 6) = v34;
        else
          *((_QWORD *)v22 + 5) = v34;
      }
    }
  }
  else
  {
    a1[3] = 0LL;
    *((_DWORD *)a1 + 2) = 0;
  }
  return result;
}
