/*
 * XREFs of Control_MapTransfer @ 0x140004680
 * Callers:
 *     Control_WdfEvtIoDefault @ 0x140022110 (Control_WdfEvtIoDefault.c)
 *     Control_EP_StartMapping @ 0x14002FD30 (Control_EP_StartMapping.c)
 * Callees:
 *     CommonBuffer_AcquireBuffer @ 0x140004238 (CommonBuffer_AcquireBuffer.c)
 *     Control_Transfer_Map @ 0x140004C90 (Control_Transfer_Map.c)
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     Control_Transfer_CompleteCancelable @ 0x140012B50 (Control_Transfer_CompleteCancelable.c)
 *     ESM_AddEvent @ 0x1400130A4 (ESM_AddEvent.c)
 *     WPP_RECORDER_SF_DDqDD @ 0x14001574C (WPP_RECORDER_SF_DDqDD.c)
 *     WPP_RECORDER_SF_DDi @ 0x1400370AC (WPP_RECORDER_SF_DDi.c)
 *     WPP_RECORDER_SF_DDqD @ 0x14004CA64 (WPP_RECORDER_SF_DDqD.c)
 */

void __fastcall Control_MapTransfer(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v3; // edx
  __int64 v4; // r8
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  int v9; // ecx
  __int64 v10; // rdi
  int v11; // ecx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r11
  int v15; // ecx
  unsigned int v16; // r8d
  unsigned int v17; // r10d
  int v18; // edi
  int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rcx
  PVOID v22; // rax
  int v23; // r9d
  int v24; // edx
  int v25; // edx
  KIRQL v26; // al
  __int64 v27; // rdx
  PMDL Mdl; // rax
  int v29; // edx
  __int64 v30; // r10
  __int64 v31; // r9
  __int64 v32; // rdx
  int v33; // edx
  KIRQL v34; // dl
  __int64 v35; // rcx
  __int64 v36; // rax

  v1 = *(_QWORD *)(a1 + 360);
  v3 = *(_DWORD *)(v1 + 104);
  v4 = *(_QWORD *)(v1 + 48);
  if ( !v3 )
  {
    v9 = 0;
    goto LABEL_15;
  }
  if ( *(_BYTE *)(a1 + 328) && v3 <= 8 && (*(_DWORD *)(v4 + 32) & 1) == 0 )
  {
    v9 = 1;
    goto LABEL_15;
  }
  if ( *(_WORD *)(v4 + 2) != 56 )
  {
    switch ( *(_WORD *)(v4 + 2) )
    {
      case '9':
      case ':':
        goto LABEL_8;
      default:
        break;
    }
  }
  v5 = *(_QWORD **)(v4 + 48);
  if ( v5 && *v5 )
  {
LABEL_26:
    v9 = 3;
    goto LABEL_15;
  }
LABEL_8:
  if ( v3 > *(_DWORD *)(a1 + 24) )
    goto LABEL_26;
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v6 = (_QWORD *)(a1 + 224);
  v7 = *(_QWORD **)(a1 + 224);
  if ( v7 == (_QWORD *)(a1 + 224) )
  {
    v7 = (_QWORD *)CommonBuffer_AcquireBuffer(
                     *(char **)(*(_QWORD *)(a1 + 40) + 120LL),
                     *(unsigned int *)(a1 + 24),
                     a1,
                     845639250LL);
  }
  else
  {
    if ( (_QWORD *)v7[1] != v6 || (v8 = *v7, *(_QWORD **)(*v7 + 8LL) != v7) )
      __fastfail(3u);
    *v6 = v8;
    *(_QWORD *)(v8 + 8) = v6;
    v7[1] = v7;
    *v7 = v7;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  *(_QWORD *)(v1 + 88) = v7;
  if ( !v7 )
    goto LABEL_26;
  v9 = 2;
LABEL_15:
  *(_DWORD *)(v1 + 64) = v9;
  v10 = *(_QWORD *)(a1 + 360);
  v11 = *(_DWORD *)(v10 + 64);
  v12 = *(_QWORD *)(v10 + 48);
  if ( v11 != 2 )
  {
    v19 = v11 - 1;
    if ( v19 )
    {
      if ( v19 != 2 )
        goto LABEL_18;
      v20 = *(_QWORD *)(v12 + 48);
      if ( v20 )
      {
        *(_QWORD *)(v10 + 72) = v20;
        goto LABEL_18;
      }
      Mdl = IoAllocateMdl(*(PVOID *)(v12 + 40), *(_DWORD *)(v10 + 104), 0, 0, 0LL);
      *(_QWORD *)(v10 + 72) = Mdl;
      if ( Mdl )
        goto LABEL_47;
      if ( (*(_DWORD *)(v12 + 32) & 0x10) != 0 && *(_QWORD *)(a1 + 120) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v29 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
          LOBYTE(v29) = 5;
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
            v29,
            14,
            28,
            (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
            *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
            *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
        }
        v30 = *(_QWORD *)(a1 + 120);
        v31 = *(unsigned int *)(v10 + 104);
        *(_QWORD *)(v10 + 72) = v30;
        v32 = *(_QWORD *)(v12 + 40);
        *(_QWORD *)v30 = 0LL;
        *(_WORD *)(v30 + 10) = 0;
        *(_DWORD *)(v30 + 40) = v31;
        *(_QWORD *)(v30 + 32) = v32 & 0xFFFFFFFFFFFFF000uLL;
        *(_WORD *)(v30 + 8) = 8 * ((((unsigned __int64)(v32 & 0xFFF) + v31 + 4095) >> 12) + 6);
        *(_DWORD *)(v30 + 44) = v32 & 0xFFF;
LABEL_47:
        MmBuildMdlForNonPagedPool(*(PMDL *)(v10 + 72));
        goto LABEL_18;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = 29;
        goto LABEL_37;
      }
      goto LABEL_62;
    }
  }
  v13 = *(_QWORD *)(v12 + 40);
  if ( v13 )
  {
    *(_QWORD *)(v10 + 80) = v13;
    goto LABEL_18;
  }
  v21 = *(_QWORD *)(v12 + 48);
  if ( (*(_BYTE *)(v21 + 10) & 5) != 0 )
    v22 = *(PVOID *)(v21 + 24);
  else
    v22 = MmMapLockedPagesSpecifyCache((PMDL)v21, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x40000010u);
  *(_QWORD *)(v10 + 80) = v22;
  if ( !v22 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = 27;
LABEL_37:
      v24 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      LOBYTE(v24) = 2;
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v24,
        14,
        v23,
        (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
      v18 = -1073741670;
      goto LABEL_41;
    }
LABEL_62:
    v18 = -1073741670;
    goto LABEL_41;
  }
LABEL_18:
  v14 = *(_QWORD *)(a1 + 360);
  v15 = *(_DWORD *)(v14 + 64);
  if ( !v15 )
    goto LABEL_23;
  v16 = *(_DWORD *)(v14 + 104);
  if ( v16 > 0x10000 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDqDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        v16,
        30,
        (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        *(_QWORD *)(v14 + 24),
        v16,
        0);
LABEL_59:
    v18 = -1073741637;
    goto LABEL_41;
  }
  v17 = *(_DWORD *)(a1 + 4);
  if ( v16 > v17 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDqDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        v16,
        31,
        (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        *(_QWORD *)(v14 + 24),
        v16,
        *(_DWORD *)(a1 + 4));
    goto LABEL_62;
  }
  if ( v16 != v17 || (*(_DWORD *)(v14 + 80) & 0xFFFLL) == 0 )
  {
    if ( v15 == 3 && **(_QWORD **)(v14 + 72) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v25 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        LOBYTE(v25) = 2;
        WPP_RECORDER_SF_DDi(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v25,
          v16,
          33,
          (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          *(_QWORD *)(v14 + 24));
        v18 = -1073741637;
        goto LABEL_41;
      }
      goto LABEL_59;
    }
LABEL_23:
    v18 = Control_Transfer_Map(a1);
    if ( v18 >= 0 )
      return;
    goto LABEL_41;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_62;
  v33 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
  LOBYTE(v33) = 2;
  WPP_RECORDER_SF_DDqD(
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
    v33,
    v16,
    32,
    (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
    *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
    *(_QWORD *)(v14 + 24),
    *(_DWORD *)(v14 + 104));
  v18 = -1073741670;
LABEL_41:
  v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v27 = *(_QWORD *)(a1 + 360);
  *(_BYTE *)(a1 + 104) = v26;
  *(_DWORD *)(v27 + 120) = v18;
  if ( *(_DWORD *)(a1 + 108) == 3 )
  {
    *(_DWORD *)(a1 + 108) = 2;
    Control_Transfer_CompleteCancelable(a1);
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  }
  else
  {
    v34 = *(_BYTE *)(a1 + 104);
    *(_DWORD *)(a1 + 108) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v34);
    v35 = *(_QWORD *)(a1 + 56);
    if ( !*(_BYTE *)(v35 + 37)
      || (v36 = *(_QWORD *)(v35 + 136),
          _InterlockedIncrement((volatile signed __int32 *)(v36 + 20)) == *(_DWORD *)(v36 + 8)) )
    {
      ESM_AddEvent((PVOID)(v35 + 296));
    }
  }
}
