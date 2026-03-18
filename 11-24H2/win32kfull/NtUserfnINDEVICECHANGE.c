/*
 * XREFs of NtUserfnINDEVICECHANGE @ 0x140047020
 * Callers:
 *     <none>
 * Callees:
 *     ??0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x14003D210 (--0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x14003E628 (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall NtUserfnINDEVICECHANGE(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4, __int64 a5, char a6)
{
  unsigned int *v6; // rsi
  unsigned int v8; // r13d
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned int v13; // r14d
  __int64 v14; // rdi
  struct tagTHREADINFO *v15; // rax
  struct tagTHREADINFO *BugCheckParameter4; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 UserSessionState; // rax
  ULONG_PTR BugCheckParameter2[2]; // [rsp+58h] [rbp-50h] BYREF
  void (*v23)(void *); // [rsp+68h] [rbp-40h]

  v6 = a4;
  v8 = a2;
  v9 = (unsigned __int16)a3 & 0x8000;
  W32GetCurrentThreadNonPaged(a1, a2);
  if ( a3 == 0x8000 || a3 == 32772 || a3 == 32775 || a3 == 32776 || (unsigned __int64)(a3 - 32777) < 2 )
  {
    v10 = 0LL;
    if ( !v6 )
    {
      UserSetLastError(87LL);
      return v10;
    }
  }
  else
  {
    v10 = 0LL;
  }
  tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)BugCheckParameter2);
  if ( !v9 )
  {
LABEL_66:
    UserSessionState = W32GetUserSessionState(v12, v11);
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, unsigned int *, __int64))(UserSessionState
                                                                                       + 8LL * ((a6 + 6) & 0x1F)
                                                                                       + 71176))(
            a1,
            v8,
            a3,
            v6,
            a5);
LABEL_67:
    Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
    return v10;
  }
  if ( !v6 )
  {
    UserSetLastError(87LL);
    goto LABEL_67;
  }
  if ( (unsigned __int64)v6 >= MmUserProbeAddress )
    v6 = (unsigned int *)MmUserProbeAddress;
  v13 = *v6;
  if ( *v6 < 0xC || (ProbeForRead(a4, *v6, 1u), v13 + 2 < v13) )
  {
    UserSetLastError(87LL);
    Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  }
  else
  {
    v6 = (unsigned int *)Win32AllocPoolWithQuotaZInit(v13 + 2, 1986294613LL);
    if ( v6 )
    {
      v14 = -1LL;
      if ( v23 != (void (*)(void *))-1LL )
      {
        BugCheckParameter4 = PtiCurrent();
        KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v6, (ULONG_PTR)BugCheckParameter4);
      }
      v15 = PtiCurrent();
      BugCheckParameter2[0] = *((_QWORD *)v15 + 48);
      *((_QWORD *)v15 + 48) = BugCheckParameter2;
      BugCheckParameter2[1] = (ULONG_PTR)v6;
      v23 = Win32FreePool;
      memmove(v6, a4, v13);
      *((_WORD *)v6 + ((unsigned __int64)v13 >> 1)) = 0;
      if ( *v6 != v13 )
        goto LABEL_67;
      if ( v6[1] == 3 )
      {
        if ( v13 < 0x10 )
          goto LABEL_67;
        do
          ++v14;
        while ( *((_WORD *)v6 + v14 + 6) );
        if ( (int)v14 + 1 < (unsigned int)v14 )
          goto LABEL_67;
        v12 = 2LL * (unsigned int)(v14 + 1);
        if ( v12 > 0xFFFFFFFF || (int)v12 + 12 < (unsigned int)v12 || (int)v12 + 12 > v13 )
          goto LABEL_67;
      }
      else if ( v6[1] == 5 )
      {
        if ( v13 < 0x20 )
          goto LABEL_67;
        do
          ++v14;
        while ( *((_WORD *)v6 + v14 + 14) );
        if ( (int)v14 + 1 < (unsigned int)v14 )
          goto LABEL_67;
        v12 = 2LL * (unsigned int)(v14 + 1);
        if ( v12 > 0xFFFFFFFF || (int)v12 + 28 < (unsigned int)v12 || (int)v12 + 28 > v13 )
          goto LABEL_67;
      }
      else
      {
        v12 = v6[1] - 6;
        if ( v6[1] == 6 )
        {
          if ( v13 < 0x38 )
            goto LABEL_67;
          if ( a3 == 32774 )
          {
            v11 = (int)v6[12];
            if ( (int)v11 >= 0 )
            {
              if ( (v11 & 1) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( (int)v11 + 52 > v13 )
                goto LABEL_67;
              v17 = (unsigned __int64)v6 + v11 + 52;
              if ( v17 < (unsigned __int64)(v6 + 13) )
                goto LABEL_67;
              do
                ++v14;
              while ( *(_WORD *)(v17 + 2 * v14) );
              if ( (int)v14 + 1 < (unsigned int)v14 )
                goto LABEL_67;
              v18 = 2LL * (unsigned int)(v14 + 1);
              if ( v18 > 0xFFFFFFFF )
                goto LABEL_67;
              v19 = v18 + 52;
              if ( (int)v18 + 52 < (unsigned int)v18 )
                goto LABEL_67;
              v12 = (unsigned int)v11 + v19;
              if ( (unsigned int)v12 < v19 || (unsigned int)v12 > v13 )
                goto LABEL_67;
            }
          }
        }
        else if ( v6[1] == 7 )
        {
          if ( v13 < 0x1A0 )
            goto LABEL_67;
          do
            ++v14;
          while ( *((_WORD *)v6 + v14 + 8) );
          if ( (int)v14 + 1 < (unsigned int)v14 )
            goto LABEL_67;
          v12 = 2LL * (unsigned int)(v14 + 1);
          if ( v12 > 0xFFFFFFFF || (int)v12 + 16 < (unsigned int)v12 || (int)v12 + 16 > v13 )
            goto LABEL_67;
        }
      }
      goto LABEL_66;
    }
    UserSetLastError(8LL);
    Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  }
  return v10;
}
