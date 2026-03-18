/*
 * XREFs of ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1400673D0
 * Callers:
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x140025B10 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1400671D0 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1400EF910 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     EngUpdateDeviceSurface @ 0x140174F70 (EngUpdateDeviceSurface.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEBVRustAutoHotpatchLockSH@@AEAV1@@Z @ 0x1401C13D0 (-bCopy@RGNOBJ@@QEAAHAEBVRustAutoHotpatchLockSH@@AEAV1@@Z.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 */

void __fastcall RGNOBJ::vSwap(RGNOBJ *this, struct RGNOBJ *a2)
{
  __int64 v2; // rdi
  int v5; // r10d
  __int64 *v6; // rbx
  _QWORD *v7; // r15
  __int64 v8; // rbp
  _QWORD *v9; // r12
  __int64 **v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rdx
  __int64 v14; // rcx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rbp
  __int64 *v19; // rbx
  __int64 *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 **v24; // rax
  _QWORD *v25; // rsi
  _QWORD *v26; // rbx
  __int64 *v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rcx

  v2 = 0LL;
  v5 = *(_DWORD *)(*(_QWORD *)this + 76LL);
  *(_DWORD *)(*(_QWORD *)this + 76LL) = *(_DWORD *)(*(_QWORD *)a2 + 76LL);
  *(_DWORD *)(*(_QWORD *)a2 + 76LL) = v5;
  v6 = (__int64 *)(*(_QWORD *)this + 80LL);
  v7 = (_QWORD *)(*(_QWORD *)a2 + 80LL);
  v8 = *v6;
  v9 = (_QWORD *)*v7;
  if ( *(_QWORD *)this != -80LL )
  {
    if ( *(__int64 **)(v8 + 8) != v6 )
      goto LABEL_26;
    v10 = *(__int64 ***)(*(_QWORD *)this + 88LL);
    if ( *v10 != v6 )
      goto LABEL_26;
    *v10 = (__int64 *)v8;
    *(_QWORD *)(v8 + 8) = v10;
    v6[1] = (__int64)v6;
    *v6 = (__int64)v6;
  }
  v11 = (_QWORD *)(*(_QWORD *)a2 + 80LL);
  if ( *(_QWORD *)a2 != -80LL )
  {
    v12 = *v11;
    if ( *(_QWORD **)(*v11 + 8LL) != v11 )
      goto LABEL_26;
    v13 = *(_QWORD **)(*(_QWORD *)a2 + 88LL);
    if ( (_QWORD *)*v13 != v11 )
      goto LABEL_26;
    *v13 = v12;
    *(_QWORD *)(v12 + 8) = v13;
    v11[1] = v11;
    *v11 = v11;
  }
  v14 = *(_QWORD *)this;
  *(_QWORD *)this = *(_QWORD *)a2;
  *(_QWORD *)a2 = v14;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(v14);
  if ( CurrentThreadNonPaged )
  {
    v16 = *CurrentThreadNonPaged;
    v17 = v16 + 8;
    if ( (-(__int64)(v16 != 0) & (v16 + 8)) != 0 )
    {
      if ( (__int64 *)v8 != v6 )
      {
        v18 = *(_QWORD *)this;
        v19 = (__int64 *)(*(_QWORD *)this + 80LL);
        if ( *(_QWORD *)this != -80LL )
        {
          v20 = (__int64 *)W32GetCurrentThreadNonPaged(v17);
          if ( v20 )
            v21 = *v20;
          else
            v21 = 0LL;
          v22 = v21 + 8;
          v19[2] = v18;
          v17 = -v21;
          v19[3] = (__int64)CleanUpRegion;
          v23 = v22 & -(__int64)(v17 != 0);
          if ( v23 )
          {
            v24 = (__int64 **)(v23 + 88);
            v17 = *(_QWORD *)(v23 + 88);
            if ( *(_QWORD *)(v17 + 8) != v23 + 88 )
              goto LABEL_26;
            *v19 = v17;
            v19[1] = (__int64)v24;
            *(_QWORD *)(v17 + 8) = v19;
            *v24 = v19;
          }
          else
          {
            v19[1] = (__int64)v19;
            *v19 = (__int64)v19;
          }
        }
      }
      if ( v9 != v7 )
      {
        v25 = *(_QWORD **)a2;
        v26 = v25 + 10;
        if ( v25 != (_QWORD *)-80LL )
        {
          v27 = (__int64 *)W32GetCurrentThreadNonPaged(v17);
          if ( v27 )
            v2 = *v27;
          v25[12] = v25;
          v25[13] = CleanUpRegion;
          v28 = (v2 + 8) & -(__int64)(v2 != 0);
          if ( !v28 )
          {
            v25[11] = v25 + 10;
            *v26 = v26;
            return;
          }
          v29 = (_QWORD *)(v28 + 88);
          v30 = *(_QWORD *)(((v2 + 8) & -(__int64)(v2 != 0)) + 0x58);
          if ( *(_QWORD **)(v30 + 8) == v29 )
          {
            *v26 = v30;
            v25[11] = v29;
            *(_QWORD *)(v30 + 8) = v26;
            *v29 = v26;
            return;
          }
LABEL_26:
          __fastfail(3u);
        }
      }
    }
  }
}
