/*
 * XREFs of ?CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x140158A00
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140157050 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x140166CD0 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Ld @ 0x140058010 (WPP_RECORDER_SF_Ld.c)
 *     WPP_RECORDER_SF_Zq @ 0x1400598A0 (WPP_RECORDER_SF_Zq.c)
 *     WPP_RECORDER_SF__guid_D @ 0x1400C64FC (WPP_RECORDER_SF__guid_D_ea_1400C64FC.c)
 */

void __fastcall Ndis::BindRules::CoalesceFilterAttachDuringBoot(
        Ndis::BindRules *this,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct Ndis::BindStack *a3)
{
  int v3; // r13d
  __int64 BaseMiniport_high; // r15
  unsigned __int64 i; // rbx
  char *v8; // rsi
  __int64 v9; // r14
  __int64 v10; // r8
  __int64 v11; // rdx
  int SpinLock; // edx
  $6A74A2D77AECD4C8EC53F6C92D95B01A *v13; // rsi
  $6A74A2D77AECD4C8EC53F6C92D95B01A *v14; // r14
  bool v15; // cf
  __int64 v16; // rax
  unsigned int v17; // edx
  unsigned __int16 *v18; // rax
  unsigned __int16 v19; // r9
  int v20; // r8d
  unsigned int v21; // edx
  int v22; // ecx
  bool v23; // zf
  int v24; // eax
  int v25; // r8d
  int SpinLock_high; // r8d
  int v27; // [rsp+20h] [rbp-48h]
  char v28[8]; // [rsp+30h] [rbp-38h]

  v3 = 0;
  if ( *((_BYTE *)this + 1995) )
  {
    BaseMiniport_high = HIDWORD(a2->BaseMiniport);
    for ( i = 0LL; i != BaseMiniport_high; ++i )
    {
      if ( i >= HIDWORD(a2->BaseMiniport) )
        __fastfail(5u);
      v8 = (char *)a2->MiniportAdapterContext + 8 * i;
      if ( *(_DWORD *)(*(_QWORD *)v8 + 52LL) || *(_DWORD *)(*(_QWORD *)v8 + 28LL) )
      {
        v9 = qword_14011D080 + 16;
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(v9, 0LL);
        v10 = *(_QWORD *)v8;
        v11 = *(_QWORD *)(*(_QWORD *)v8 + 80LL);
        if ( (*(_DWORD *)(v11 + 40) & 1) == 0 && !*(_QWORD *)(v11 + 56) && !*(_BYTE *)(v10 + 8) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
            WPP_RECORDER_SF__guid_D(*((_QWORD *)WPP_GLOBAL_Control + 8), v11 + 24, v10, 0x22u, v27, v11 + 24);
          ExReleasePushLockEx(v9, 0LL);
          KeLeaveCriticalRegion();
          SpinLock = a2->ShortRef.SpinLock;
          v13 = &a2->32;
          LODWORD(a2->ShortRef.SpinLock) = SpinLock | 0x100;
          if ( !SpinLock || !*(_QWORD *)&v13->Reserved4.Length )
          {
            v14 = &a2->32;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && *((_WORD *)WPP_GLOBAL_Control + 36) )
            {
              WPP_RECORDER_SF_Ld(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                5u,
                0x1Cu,
                0xEu,
                (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
                SpinLock,
                SpinLock | 0x100);
              v14 = &a2->32;
            }
            v15 = (unsigned __int8)byte_14011CBA3 < 4u;
            v16 = *(_QWORD *)&v13->Reserved4.Length;
            v13 = v14;
            *(_BYTE *)(v16 + 5224) = 1;
            if ( !v15 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                SpinLock,
                0x1Cu,
                0x23u,
                (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
                *((unsigned __int16 **)this + 482),
                this);
          }
          v17 = *(_DWORD *)(&v13[2].MinorNdisVersion + 3);
          *(_DWORD *)(&v13[2].MinorNdisVersion + 3) = v17 | 0x40;
          if ( !v17 || !*(_QWORD *)&v13->Reserved4.Length )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && *((_WORD *)WPP_GLOBAL_Control + 36) )
            {
              *(_DWORD *)v28 = v17 | 0x40;
              WPP_RECORDER_SF_Ld(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                5u,
                0x1Cu,
                0xFu,
                (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
                v17,
                *(_QWORD *)v28);
            }
            v15 = (unsigned __int8)byte_14011CBA3 < 4u;
            *(_BYTE *)(*(_QWORD *)&v13->Reserved4.Length + 5224LL) = 1;
            if ( !v15 )
            {
              v18 = (unsigned __int16 *)*((_QWORD *)this + 482);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v19 = 36;
                goto LABEL_65;
              }
            }
          }
          return;
        }
        ExReleasePushLockEx(v9, 0LL);
        KeLeaveCriticalRegion();
      }
    }
  }
  v20 = a2->ShortRef.SpinLock;
  v21 = v20 & 0xFFFFFEFF;
  v22 = 0;
  v23 = *((_BYTE *)this + 1995) == 0;
  LODWORD(a2->ShortRef.SpinLock) = v20 & 0xFFFFFEFF;
  v24 = 0;
  if ( v23 )
  {
    LOBYTE(v22) = v20 != 0;
    LOBYTE(v24) = v21 != 0;
    if ( v22 != v24 || !*(_QWORD *)&a2->Reserved4.Length )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        WPP_RECORDER_SF_Ld(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0x1Cu,
          0xEu,
          (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
          v20,
          v21);
      v15 = (unsigned __int8)byte_14011CBA3 < 4u;
      *(_BYTE *)(*(_QWORD *)&a2->Reserved4.Length + 5224LL) = 1;
      if ( !v15 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v21,
          0x1Cu,
          0x27u,
          (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
          *((unsigned __int16 **)this + 482),
          this);
    }
    SpinLock_high = HIDWORD(a2->ShortRef.SpinLock);
    v17 = SpinLock_high & 0xFFFFFFBF;
    HIDWORD(a2->ShortRef.SpinLock) = SpinLock_high & 0xFFFFFFBF;
    LOBYTE(v3) = (SpinLock_high & 0xFFFFFFBF) != 0;
    if ( (SpinLock_high != 0) != v3 || !*(_QWORD *)&a2->Reserved4.Length )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        *(_DWORD *)v28 = SpinLock_high & 0xFFFFFFBF;
        WPP_RECORDER_SF_Ld(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0x1Cu,
          0xFu,
          (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
          SpinLock_high,
          *(_QWORD *)v28);
      }
      v15 = (unsigned __int8)byte_14011CBA3 < 4u;
      *(_BYTE *)(*(_QWORD *)&a2->Reserved4.Length + 5224LL) = 1;
      if ( !v15 )
      {
        v18 = (unsigned __int16 *)*((_QWORD *)this + 482);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v19 = 40;
          goto LABEL_65;
        }
      }
    }
  }
  else
  {
    LOBYTE(v22) = v20 != 0;
    LOBYTE(v24) = v21 != 0;
    if ( v22 != v24 || !*(_QWORD *)&a2->Reserved4.Length )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        WPP_RECORDER_SF_Ld(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0x1Cu,
          0xEu,
          (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
          v20,
          v21);
      v15 = (unsigned __int8)byte_14011CBA3 < 4u;
      *(_BYTE *)(*(_QWORD *)&a2->Reserved4.Length + 5224LL) = 1;
      if ( !v15 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v21,
          0x1Cu,
          0x25u,
          (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
          *((unsigned __int16 **)this + 482),
          this);
    }
    v25 = HIDWORD(a2->ShortRef.SpinLock);
    v17 = v25 & 0xFFFFFFBF;
    HIDWORD(a2->ShortRef.SpinLock) = v25 & 0xFFFFFFBF;
    LOBYTE(v3) = (v25 & 0xFFFFFFBF) != 0;
    if ( (v25 != 0) != v3 || !*(_QWORD *)&a2->Reserved4.Length )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        *(_DWORD *)v28 = v25 & 0xFFFFFFBF;
        WPP_RECORDER_SF_Ld(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0x1Cu,
          0xFu,
          (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
          v25,
          *(_QWORD *)v28);
      }
      v15 = (unsigned __int8)byte_14011CBA3 < 4u;
      *(_BYTE *)(*(_QWORD *)&a2->Reserved4.Length + 5224LL) = 1;
      if ( !v15 )
      {
        v18 = (unsigned __int16 *)*((_QWORD *)this + 482);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v19 = 38;
LABEL_65:
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v17,
            0x1Cu,
            v19,
            (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
            v18,
            this);
        }
      }
    }
  }
}
