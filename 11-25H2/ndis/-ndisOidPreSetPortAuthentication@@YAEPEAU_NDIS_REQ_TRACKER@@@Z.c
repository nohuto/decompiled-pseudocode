/*
 * XREFs of ?ndisOidPreSetPortAuthentication@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140089C00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140059960 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14005A650 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisOidPreSetPortAuthentication(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  unsigned __int8 v3; // r14
  _DWORD *v5; // r13
  __int64 v6; // r15
  unsigned __int8 v7; // r8
  KIRQL v8; // dl
  KSPIN_LOCK *v9; // rcx
  KIRQL v10; // dl
  __int64 v11; // rcx
  KIRQL v12; // dl
  __int64 v14; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v15[16]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v16; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v17; // [rsp+60h] [rbp-A0h]
  __int128 v18; // [rsp+70h] [rbp-90h]
  __int128 v19; // [rsp+80h] [rbp-80h]
  __int128 v20; // [rsp+90h] [rbp-70h]
  __int128 v21; // [rsp+A0h] [rbp-60h]
  __int128 v22; // [rsp+B0h] [rbp-50h]
  __int128 v23; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v24; // [rsp+D0h] [rbp-30h]
  __int128 v25; // [rsp+E0h] [rbp-20h]

  v1 = *(_QWORD *)a1;
  v2 = *((_QWORD *)a1 + 4);
  v3 = 0;
  v16 = 0LL;
  v15[0] = 0;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xA2u,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      v1,
      *(_DWORD *)(v2 + 8));
  if ( *(_QWORD *)a1 )
  {
    if ( (*(_DWORD *)(v2 + 4) & 0xFFFFFFFD) != 0 )
    {
      if ( *(_DWORD *)(v2 + 48) >= 0x14u )
      {
        v5 = *(_DWORD **)(v2 + 40);
        if ( *(_DWORD *)(v2 + 8) )
          goto LABEL_17;
        if ( (*(_DWORD *)(v1 + 124) & 0x8000000) != 0 )
        {
          v6 = *(_QWORD *)(v1 + 16);
          NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)v6, v15);
          if ( (*(_DWORD *)(v6 + 124) & 0x80u) == 0 )
          {
            v7 = v15[0];
            *(_DWORD *)(v6 + 3320) = v5[1];
            *(_DWORD *)(v6 + 3324) = v5[2];
            *(_DWORD *)(v6 + 3328) = v5[3];
            *(_DWORD *)(v6 + 3332) = v5[4];
            ndisIfSetInterfaceState((struct _NDIS_MINIPORT_BLOCK *)v6, 1, v7);
          }
          v8 = v15[0];
          *(_QWORD *)(v6 + 520) = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 96), v8);
        }
        v15[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
        v9 = (KSPIN_LOCK *)(v1 + 96);
        *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
        if ( (*(_DWORD *)(v1 + 124) & 0x80u) != 0 )
        {
          v12 = v15[0];
          *(_QWORD *)(v1 + 520) = 0LL;
          KeReleaseSpinLock(v9, v12);
          goto LABEL_17;
        }
        *(_DWORD *)(v1 + 3320) = v5[1];
        *(_DWORD *)(v1 + 3324) = v5[2];
        *(_DWORD *)(v1 + 3328) = v5[3];
        *(_DWORD *)(v1 + 3332) = v5[4];
        LODWORD(v23) = 3146112;
        DWORD1(v23) = *(_DWORD *)(v1 + 480);
        *((_QWORD *)&v23 + 1) = *(_QWORD *)(v1 + 792);
        *(_QWORD *)&v24 = *(_QWORD *)(v1 + 800);
        DWORD2(v24) = *(_DWORD *)(*(_QWORD *)(v1 + 4040) + 532LL);
        v10 = v15[0];
        HIDWORD(v24) = *(_DWORD *)(v1 + 3320);
        *(_QWORD *)&v25 = *(_QWORD *)(v1 + 3324);
        DWORD2(v25) = *(_DWORD *)(v1 + 3332);
        *(_QWORD *)(v1 + 520) = 0LL;
        KeReleaseSpinLock(v9, v10);
        *(_QWORD *)&v16 = 7340440LL;
        *(_QWORD *)&v19 = &v23;
        v17 = 0LL;
        *((_QWORD *)&v16 + 1) = v1;
        DWORD1(v17) = 1073807394;
        *((_QWORD *)&v19 + 1) = 48LL;
        v18 = 0LL;
        v20 = 0LL;
        v21 = 0LL;
        v22 = 0LL;
        v11 = (__int64)*(int *)(*(_QWORD *)(v1 + 3760) + 896LL) << 7;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int128 *))((char *)g_MiniportHookDrivers + v11 + 64))(
          *(_QWORD *)((char *)g_MiniportHookDrivers + v11 + 24),
          *(_QWORD *)(v1 + 5288),
          v1,
          &v16);
        *(_QWORD *)(v2 + 52) = 20LL;
        *((_DWORD *)a1 + 10) = 0;
      }
      else
      {
        *(_DWORD *)(v2 + 56) = 20;
        *(_DWORD *)(v2 + 52) = 0;
        *((_DWORD *)a1 + 10) = -1073676268;
      }
    }
    else
    {
      *(_DWORD *)(v2 + 56) = 20;
      *(_DWORD *)(v2 + 52) = 0;
      *((_DWORD *)a1 + 10) = -1073741637;
    }
    v3 = 1;
  }
LABEL_17:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v14) = *(_DWORD *)(v2 + 8);
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xA3u,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      v1,
      v14);
  }
  return v3;
}
