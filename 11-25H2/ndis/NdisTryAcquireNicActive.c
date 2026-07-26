/*
 * XREFs of NdisTryAcquireNicActive @ 0x140091900
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_d @ 0x140026510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x140064B40 (-ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     McTemplateK0xqqq_EtwWriteTransfer @ 0x140065D00 (McTemplateK0xqqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_DDD @ 0x14007B380 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_LDD @ 0x14009B758 (WPP_RECORDER_SF_LDD.c)
 */

__int64 __fastcall NdisTryAcquireNicActive(__int64 a1, int a2)
{
  __int64 v2; // rbp
  unsigned int v3; // edi
  int v4; // r14d
  int v6; // r15d
  __int64 v7; // rbx
  __int64 v9; // rbx
  KIRQL v10; // al
  KIRQL v11; // al
  int v12; // edx
  int v13; // ecx
  KIRQL v14; // r12
  unsigned int v15; // esi
  int active; // eax
  int v17; // r13d
  __int64 v18; // rcx
  struct _GUID *v19; // [rsp+20h] [rbp-48h]
  char v20[8]; // [rsp+28h] [rbp-40h]
  __int64 v21; // [rsp+30h] [rbp-38h]
  __int64 v22; // [rsp+38h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v4 = a2;
  v6 = 0;
  v7 = *(_QWORD *)(v2 + 4456);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x30u,
      (struct _GUID *)WPP_f95a930beee8328147ea537ccd3c5542_Traceguids,
      a1,
      a2);
  if ( !v4 || v4 >= 17 )
    return 3221225485LL;
  if ( *(_QWORD *)(v2 + 4456) )
  {
    if ( ndisWdfTryAcquireNicActive && (*(_DWORD *)(v2 + 120) & 0x80u) != 0 )
    {
      v9 = *(_QWORD *)(v2 + 4448);
      if ( v9 && ndisIdleCondition > NdisIdleConditionAny )
      {
        v10 = KeAcquireSpinLockRaiseToDpc(*(PKSPIN_LOCK *)(v2 + 4448));
        if ( !*(_DWORD *)(v9 + 512)
          && !*(_DWORD *)(v9 + 516)
          && !*(_DWORD *)(v9 + 528)
          && !*(_DWORD *)(v9 + 532)
          && !*(_DWORD *)(v9 + 520)
          && !*(_DWORD *)(v9 + 524)
          && !*(_DWORD *)(v9 + 576)
          && !*(_DWORD *)(v9 + 508) )
        {
          v3 = -1071448017;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v9, v10);
      }
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v20 = v3;
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x32u,
          (struct _GUID *)WPP_f95a930beee8328147ea537ccd3c5542_Traceguids,
          *(_QWORD *)v20);
      }
      return v3;
    }
    else
    {
      v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7);
      v13 = *(_DWORD *)(v7 + 52);
      v14 = v11;
      if ( (v13 || *(_DWORD *)(v7 + 380)) && ((v12 = *(_DWORD *)(v7 + 376)) == 0 || v12 == 3) )
      {
        if ( v13 == 0x7FFFFFFF )
        {
          v15 = -1073741675;
          KeReleaseSpinLock((PKSPIN_LOCK)v7, v11);
        }
        else
        {
          active = ndisAoAcActiveRefIncrement(v7, v4);
          v6 = ++*(_DWORD *)(a1 + 848);
          v15 = 0;
          v17 = active;
          KeReleaseSpinLock((PKSPIN_LOCK)v7, v14);
          LOBYTE(v3) = v17;
          if ( (byte_140125103 & 4) != 0 )
          {
            LODWORD(v21) = v17;
            *(_DWORD *)v20 = v6;
            LODWORD(v19) = v4;
            McTemplateK0xqqq_EtwWriteTransfer(
              v18,
              &NicActiveAcquired,
              (const GUID *)(v2 + 4008),
              *(_QWORD *)(v2 + 4024),
              v19,
              *(_QWORD *)v20,
              v21);
          }
        }
      }
      else
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = 3;
          WPP_RECORDER_SF_LDD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v12,
            14,
            51,
            (struct _GUID *)WPP_f95a930beee8328147ea537ccd3c5542_Traceguids,
            *(_DWORD *)(v7 + 376),
            v13,
            *(_DWORD *)(v7 + 380));
        }
        v15 = -1071448017;
        KeReleaseSpinLock((PKSPIN_LOCK)v7, v14);
      }
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v22) = v6;
        WPP_RECORDER_SF_DDD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x34u,
          (struct _GUID *)WPP_f95a930beee8328147ea537ccd3c5542_Traceguids,
          v15,
          v3,
          v22);
      }
      return v15;
    }
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a2,
        14,
        49,
        (struct _GUID *)WPP_f95a930beee8328147ea537ccd3c5542_Traceguids);
    }
    return 3221225659LL;
  }
}
