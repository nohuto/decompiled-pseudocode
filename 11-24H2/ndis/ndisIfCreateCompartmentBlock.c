/*
 * XREFs of ndisIfCreateCompartmentBlock @ 0x1400CA640
 * Callers:
 *     ?ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ @ 0x1400C9B20 (-ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ.c)
 *     ndisIfCreateCompartment @ 0x1400CA194 (ndisIfCreateCompartment.c)
 * Callees:
 *     ?ndisIfFindAvailableCompartmentId@@YAIPEBU_GUID@@@Z @ 0x1400CB028 (-ndisIfFindAvailableCompartmentId@@YAIPEBU_GUID@@@Z.c)
 *     WPP_RECORDER_SF_L_guid_q @ 0x1400CB658 (WPP_RECORDER_SF_L_guid_q.c)
 *     WPP_RECORDER_SF_L_guid_qd @ 0x1400CB748 (WPP_RECORDER_SF_L_guid_qd.c)
 *     WPP_RECORDER_SF_l_guid_ @ 0x1400CB918 (WPP_RECORDER_SF_l_guid_.c)
 *     WPP_RECORDER_SF_l_guid_d @ 0x1400CBAFC (WPP_RECORDER_SF_l_guid_d.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

__int64 __fastcall ndisIfCreateCompartmentBlock(
        unsigned int a1,
        const struct _GUID *a2,
        unsigned __int16 *a3,
        _QWORD *a4)
{
  int v5; // ebx
  __int64 Pool2; // rax
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  _QWORD *v13; // rdi
  _QWORD *v14; // rax
  size_t v15; // r8
  NTSTATUS v16; // eax
  int v17; // edx
  int v18; // r8d
  int v19; // r8d
  KIRQL v20; // r15
  int v21; // edx
  unsigned int AvailableCompartmentId; // r14d
  struct _GUID v23; // xmm0
  struct _NDIS_IF_COMPARTMENT_BLOCK *v24; // rax
  struct _NDIS_IF_COMPARTMENT_BLOCK **v25; // rdx
  __int64 *v26; // rcx
  __int64 v27; // rax

  v5 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_L_guid_q(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)a2, (_DWORD)a3, (_DWORD)a4);
  *a4 = 0LL;
  Pool2 = ExAllocatePool2(64LL, 1768LL, 1718174798LL);
  v13 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 16) = a1;
    v14 = (_QWORD *)(Pool2 + 24);
    *(_QWORD *)((char *)v13 + 44) = 1LL;
    *((_DWORD *)v13 + 10) = 8;
    v14[1] = v14;
    *v14 = v14;
    v13[217] = v13 + 216;
    v13[216] = v13 + 216;
    if ( a3 )
    {
      v15 = 1640LL;
      if ( a3[1] < 0x668u )
        v15 = a3[1];
      memmove(v13 + 8, a3, v15);
    }
    else
    {
      v16 = ExUuidCreate((UUID *)v13 + 5);
      v5 = v16;
      if ( v16 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_l_guid_d(*((_QWORD *)WPP_GLOBAL_Control + 8), v17, v18, 15);
        goto LABEL_37;
      }
      if ( v16 == 1073872982 )
        v5 = 0;
    }
    v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
    if ( a2 )
    {
      AvailableCompartmentId = ndisIfFindAvailableCompartmentId(a2);
      if ( !AvailableCompartmentId )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v21) = 2;
          WPP_RECORDER_SF_l_guid_(*((_QWORD *)WPP_GLOBAL_Control + 8), v21, v19, 16);
        }
        v5 = -1073741270;
LABEL_25:
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v20);
        if ( v5 >= 0 )
        {
LABEL_39:
          *a4 = v13;
          goto LABEL_40;
        }
LABEL_37:
        ExFreePoolWithTag(v13, 0);
        goto LABEL_40;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v21) = 4;
        WPP_RECORDER_SF_l_guid_(*((_QWORD *)WPP_GLOBAL_Control + 8), v21, v19, 17);
      }
      v23 = *a2;
      a1 = AvailableCompartmentId;
      *((_DWORD *)v13 + 4) = AvailableCompartmentId;
      *(struct _GUID *)(v13 + 143) = v23;
    }
    if ( !v5 )
    {
      v24 = qword_14011CAA0;
      v25 = &qword_14011CAA0;
      while ( 1 )
      {
        if ( v24 == (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_14011CAA0 )
        {
LABEL_32:
          _InterlockedIncrement((volatile signed __int32 *)v13 + 11);
          v26 = (__int64 *)*((_QWORD *)v24 + 1);
          v27 = *v26;
          if ( *(__int64 **)(*v26 + 8) != v26 )
            __fastfail(3u);
          *v13 = v27;
          v13[1] = v26;
          *(_QWORD *)(v27 + 8) = v13;
          *v26 = (__int64)v13;
          _InterlockedIncrement(&dword_14011D514);
          KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v20);
          goto LABEL_39;
        }
        if ( *((_DWORD *)v24 + 4) == a1 )
          break;
        if ( *((_DWORD *)v24 + 4) > a1 )
          goto LABEL_32;
        v24 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v24;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v25) = 2;
        WPP_RECORDER_SF_l_guid_(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)v25, v19, 18);
      }
      v5 = -1073741270;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v20);
      goto LABEL_37;
    }
    goto LABEL_25;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_l_guid_(*((_QWORD *)WPP_GLOBAL_Control + 8), v10, v11, 14);
  }
  v5 = -1073741670;
LABEL_40:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_L_guid_qd(*((_QWORD *)WPP_GLOBAL_Control + 8), v10, v11, v12);
  return (unsigned int)v5;
}
