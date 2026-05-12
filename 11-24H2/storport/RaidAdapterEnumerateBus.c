/*
 * XREFs of RaidAdapterEnumerateBus @ 0x140018740
 * Callers:
 *     RaidAdapterRescanBus @ 0x140017248 (RaidAdapterRescanBus.c)
 * Callees:
 *     RaidAdapterFindUnitAtDirql @ 0x140017930 (RaidAdapterFindUnitAtDirql.c)
 *     RaidBusEnumeratorVisitUnit @ 0x140017A7C (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x140018EB0 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidBusEnumeratorGetUnit @ 0x140019940 (RaidBusEnumeratorGetUnit.c)
 *     RaidBusEnumeratorProbeLunZero @ 0x14001A200 (RaidBusEnumeratorProbeLunZero.c)
 *     RaidAdapterAcquireInterruptLock @ 0x14001A910 (RaidAdapterAcquireInterruptLock.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall RaidAdapterEnumerateBus(unsigned __int8 *a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // esi
  unsigned int v5; // ebx
  unsigned int v6; // edi
  unsigned int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // r15d
  __int64 result; // rax
  __int64 v11; // rbx
  KIRQL v12; // r13
  __int64 v13; // rdi
  unsigned int i; // esi
  __int64 v15; // r14
  unsigned __int64 v16; // rdx
  unsigned int (__fastcall *v17)(unsigned __int64); // rax
  _QWORD **v18; // rsi
  _QWORD *j; // rdi
  __int64 v20; // rax
  int v21; // eax
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rsi
  unsigned int v25; // edi
  struct _KINTERRUPT *v26; // rcx
  __int64 v27; // rdx
  _QWORD *v28; // rcx
  unsigned __int8 v29; // di
  unsigned __int8 v30; // r13
  __int64 v31; // rsi
  KIRQL CurrentIrql; // al
  __int64 *v33; // r14
  __int64 **v34; // rsi
  __int64 *m; // rbx
  _QWORD *UnitAtDirql; // r15
  __int64 v37; // rbx
  __int64 (__fastcall *v38)(_QWORD *); // r13
  unsigned __int64 v39; // rbx
  _QWORD **v40; // r14
  _QWORD *k; // r15
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // r14
  unsigned int v45; // ebx
  KIRQL v46; // dl
  struct _KINTERRUPT *v47; // rcx
  __int64 v48; // rbx
  __int64 *v49; // r14
  __int64 **v50; // rbx
  __int64 *n; // rsi
  __int64 *v52; // rax
  __int64 ii; // rbx
  PKINTERRUPT *v54; // r13
  PKINTERRUPT *v55; // rsi
  struct _KINTERRUPT *v56; // rcx
  KIRQL v57; // [rsp+20h] [rbp-E0h]
  KIRQL v58; // [rsp+20h] [rbp-E0h]
  unsigned int v59; // [rsp+24h] [rbp-DCh]
  struct _KINTERRUPT **v60; // [rsp+28h] [rbp-D8h]
  int v61; // [rsp+28h] [rbp-D8h]
  unsigned int v62; // [rsp+30h] [rbp-D0h]
  unsigned int v63; // [rsp+34h] [rbp-CCh]
  unsigned int v64; // [rsp+38h] [rbp-C8h]
  unsigned int v65; // [rsp+3Ch] [rbp-C4h]
  unsigned int v66; // [rsp+40h] [rbp-C0h]
  __int64 (__fastcall *v67)(__int64, unsigned __int64); // [rsp+48h] [rbp-B8h]
  __int64 (__fastcall *v68)(__int64, unsigned __int64); // [rsp+48h] [rbp-B8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-B0h] BYREF
  __int64 (__fastcall *v70)(_QWORD *); // [rsp+68h] [rbp-98h]
  unsigned __int64 v71; // [rsp+70h] [rbp-90h]
  struct _KLOCK_QUEUE_HANDLE v72; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v73[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v74; // [rsp+98h] [rbp-68h]
  char v75; // [rsp+ECh] [rbp-14h]
  _QWORD v76[32]; // [rsp+F0h] [rbp-10h] BYREF

  v3 = a1[456];
  v5 = a1[481];
  v6 = 0;
  v66 = v3;
  v65 = v5;
  v64 = a1[530];
  memset_0(v76, 1, 0xFFuLL);
  v7 = 0;
LABEL_2:
  v63 = v7;
  if ( v7 < v3 )
  {
    v8 = 0;
    while ( 1 )
    {
      v62 = v8;
      if ( v8 >= v5 )
      {
        v3 = v66;
        ++v7;
        goto LABEL_2;
      }
      BYTE1(v59) = v8;
      LOBYTE(v59) = v7;
      HIBYTE(v59) = 0;
      v9 = (unsigned __int8)v7 | ((unsigned __int8)v8 << 8);
      memset_0(v73, 0, 0x60uLL);
      result = RaidBusEnumeratorGetUnit(a3, v9, v73);
      if ( (int)result < 0 )
        return result;
      if ( (int)RaidBusEnumeratorGetLunListFromTarget(a3, v9, v73, v76) < 0 )
      {
        memset_0(v76, 0, 0xFFuLL);
        if ( (int)RaidBusEnumeratorProbeLunZero(a3, v9) >= 0 )
          v76[0] = 0x101010101010101LL;
      }
      v11 = *a3;
      if ( !v75 )
        goto LABEL_28;
      v12 = 0;
      memset(&LockHandle, 0, sizeof(LockHandle));
      v57 = 0;
      if ( *(_BYTE *)(v11 + 4369) )
      {
        v13 = *(_QWORD *)(v11 + 4352);
        v12 = KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v13 + 24));
        v57 = v12;
        if ( *(_DWORD *)(v11 + 4336) == 2 )
        {
          for ( i = 1; i < *(_DWORD *)(v13 + 4); ++i )
            KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v13 + 48LL * i + 24));
        }
        v60 = (struct _KINTERRUPT **)(v11 + 848);
      }
      else
      {
        v56 = *(struct _KINTERRUPT **)(v11 + 848);
        v60 = (struct _KINTERRUPT **)(v11 + 848);
        if ( v56 )
        {
          v12 = KeAcquireInterruptSpinLock(v56);
          v57 = v12;
          v60 = (struct _KINTERRUPT **)(v11 + 848);
        }
      }
      v15 = v74;
      v16 = (unsigned __int8)BYTE2(*(_DWORD *)(v74 + 104)) | ((((unsigned __int64)(unsigned __int8)*(_DWORD *)(v74 + 104) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(v74 + 104))) << 8);
      v70 = *(__int64 (__fastcall **)(_QWORD *))(v11 + 192);
      v67 = *(__int64 (__fastcall **)(__int64, unsigned __int64))(v11 + 200);
      v17 = *(unsigned int (__fastcall **)(unsigned __int64))(v11 + 208);
      v71 = v16;
      v18 = (_QWORD **)(*(_QWORD *)(v11 + 184) + 16LL * (v17(v16) % *(_DWORD *)(v11 + 172)));
      for ( j = *v18; ; j = (_QWORD *)*j )
      {
        if ( j == v18 )
          goto LABEL_20;
        v20 = v70(j);
        v21 = v67(v20, v71);
        if ( !v21 )
          break;
        if ( v21 < 0 )
          goto LABEL_20;
      }
      v22 = (_QWORD *)*j;
      if ( *(_QWORD **)(*j + 8LL) != j || (v23 = (_QWORD *)j[1], (_QWORD *)*v23 != j) )
LABEL_76:
        __fastfail(3u);
      *v23 = v22;
      v22[1] = v23;
      --*(_DWORD *)(v11 + 168);
LABEL_20:
      if ( *(_BYTE *)(v11 + 4369) )
        break;
      v26 = *v60;
      if ( *v60 )
        goto LABEL_24;
LABEL_25:
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v11 + 136), &LockHandle);
      v27 = *(_QWORD *)(v15 + 64);
      if ( *(_QWORD *)(v27 + 8) != v15 + 64 )
        goto LABEL_76;
      v28 = *(_QWORD **)(v15 + 72);
      if ( *v28 != v15 + 64 )
        goto LABEL_76;
      *v28 = v27;
      *(_QWORD *)(v27 + 8) = v28;
      --*(_DWORD *)(v11 + 160);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      KeCancelTimer((PKTIMER)(v15 + 1184));
      *(_DWORD *)(v15 + 744) = 0;
LABEL_28:
      v61 = v9;
      v29 = 0;
      v30 = v9;
      do
      {
        v31 = *a3;
        BYTE2(v61) = v29;
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql )
        {
          if ( (unsigned int)CurrentIrql >= *(_DWORD *)(v31 + 856) )
          {
            UnitAtDirql = RaidAdapterFindUnitAtDirql(v31, v61);
            goto LABEL_47;
          }
          v58 = RaidAdapterAcquireInterruptLock(v31);
          v37 = v30;
          v38 = *(__int64 (__fastcall **)(_QWORD *))(v31 + 192);
          v39 = v29 | ((BYTE1(v61) | (unsigned __int64)(v37 << 8)) << 8);
          v68 = *(__int64 (__fastcall **)(__int64, unsigned __int64))(v31 + 200);
          v40 = (_QWORD **)(*(_QWORD *)(v31 + 184)
                          + 16LL
                          * ((*(unsigned int (__fastcall **)(unsigned __int64))(v31 + 208))(v39) % *(_DWORD *)(v31 + 172)));
          for ( k = *v40; k != v40; k = (_QWORD *)*k )
          {
            v42 = v38(k);
            v43 = v68(v42, v39);
            if ( !v43 )
            {
              UnitAtDirql = k - 10;
              goto LABEL_41;
            }
            if ( v43 < 0 )
              break;
          }
          UnitAtDirql = 0LL;
LABEL_41:
          if ( *(_BYTE *)(v31 + 4369) )
          {
            v44 = *(_QWORD *)(v31 + 4352);
            if ( *(_DWORD *)(v31 + 4336) == 2 )
            {
              v45 = *(_DWORD *)(v44 + 4) - 1;
              if ( *(_DWORD *)(v44 + 4) != 1 )
              {
                v55 = (PKINTERRUPT *)(v44 + 48LL * v45 + 24);
                do
                {
                  KeReleaseInterruptSpinLock(*v55, *(_BYTE *)v44);
                  v55 -= 6;
                  --v45;
                }
                while ( v45 );
              }
            }
            v46 = v58;
            v47 = *(struct _KINTERRUPT **)(v44 + 24);
LABEL_45:
            KeReleaseInterruptSpinLock(v47, v46);
          }
          else
          {
            v47 = *(struct _KINTERRUPT **)(v31 + 848);
            if ( v47 )
            {
              v46 = v58;
              goto LABEL_45;
            }
          }
          v30 = v61;
          goto LABEL_47;
        }
        memset(&v72, 0, sizeof(v72));
        v33 = 0LL;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v31 + 136), &v72);
        v34 = (__int64 **)(v31 + 144);
        for ( m = *v34; m != (__int64 *)v34; m = (__int64 *)*m )
        {
          v33 = m - 8;
          if ( ((unsigned __int8)BYTE2(*((_DWORD *)m + 10)) | ((((unsigned __int8)*((_DWORD *)m + 10) << 8) | (unsigned __int8)BYTE1(*((_DWORD *)m + 10))) << 8)) == (v29 | ((BYTE1(v61) | (v30 << 8)) << 8)) )
            break;
        }
        KeReleaseInStackQueuedSpinLock(&v72);
        UnitAtDirql = 0LL;
        if ( m != (__int64 *)v34 )
          UnitAtDirql = v33;
LABEL_47:
        if ( UnitAtDirql )
          goto LABEL_56;
        v48 = *a3;
        v49 = 0LL;
        memset(&LockHandle, 0, sizeof(LockHandle));
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v48 + 216), &LockHandle);
        v50 = (__int64 **)(v48 + 224);
        for ( n = *v50; n != (__int64 *)v50; n = (__int64 *)*n )
        {
          v49 = n - 8;
          if ( ((unsigned __int8)BYTE2(*((_DWORD *)n + 10)) | ((((unsigned __int8)*((_DWORD *)n + 10) << 8) | (unsigned __int8)BYTE1(*((_DWORD *)n + 10))) << 8)) == (v29 | ((BYTE1(v61) | (v30 << 8)) << 8)) )
            break;
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v52 = 0LL;
        if ( n != (__int64 *)v50 )
          v52 = v49;
        if ( v52 )
LABEL_56:
          *((_BYTE *)v76 + v29) = 1;
        ++v29;
      }
      while ( v29 != 0xFF );
      v6 = 0;
      for ( ii = 0LL; (unsigned int)ii < v64; ii = (unsigned int)(ii + 1) )
      {
        if ( *((_BYTE *)v76 + ii) )
        {
          BYTE2(v59) = ii;
          result = RaidBusEnumeratorVisitUnit(a3, v59);
          v6 = result;
          if ( (int)result < 0 )
            return result;
        }
      }
      v5 = v65;
      v8 = v62 + 1;
      v7 = v63;
    }
    v24 = *(_QWORD *)(v11 + 4352);
    if ( *(_DWORD *)(v11 + 4336) == 2 )
    {
      v25 = *(_DWORD *)(v24 + 4) - 1;
      if ( *(_DWORD *)(v24 + 4) != 1 )
      {
        v54 = (PKINTERRUPT *)(v24 + 48LL * v25 + 24);
        do
        {
          KeReleaseInterruptSpinLock(*v54, *(_BYTE *)v24);
          v54 -= 6;
          --v25;
        }
        while ( v25 );
        v12 = v57;
      }
    }
    v26 = *(struct _KINTERRUPT **)(v24 + 24);
LABEL_24:
    KeReleaseInterruptSpinLock(v26, v12);
    goto LABEL_25;
  }
  return v6;
}
