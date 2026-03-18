/*
 * XREFs of VidSchiControlVSync @ 0x1400D5680
 * Callers:
 *     VidSchiControlVSyncThread @ 0x1400386D0 (VidSchiControlVSyncThread.c)
 *     ?VidSchiControlIndependentVidPnVSyncThread@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x14003883C (-VidSchiControlIndependentVidPnVSyncThread@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchSetMonitorPowerState @ 0x140040420 (VidSchSetMonitorPowerState.c)
 *     VidSchControlVSyncAdapter @ 0x1400D4F00 (VidSchControlVSyncAdapter.c)
 *     VidSchIsVSyncEnabled @ 0x1400D53E0 (VidSchIsVSyncEnabled.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x14000D490 (McTemplateK0p_EtwWriteTransfer.c)
 *     VidSchiGetVSyncSuspended @ 0x140036B60 (VidSchiGetVSyncSuspended.c)
 *     VidSchiSetVSyncSuspended @ 0x140038A4C (VidSchiSetVSyncSuspended.c)
 *     ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@EI@Z @ 0x14003C328 (-DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@EI@Z.c)
 */

__int64 __fastcall VidSchiControlVSync(__int64 a1, enum _DXGK_INTERRUPT_TYPE i, int a3, unsigned int a4)
{
  unsigned int v4; // edi
  __int64 v5; // rbp
  char v6; // r9
  char v8; // r15
  unsigned int *v10; // rsi
  int v11; // eax
  int v12; // r14d
  __int64 v13; // rcx
  int v15; // eax
  __int64 v16; // r8
  unsigned int v17; // edx
  __int64 v18; // rcx
  unsigned int j; // ecx
  __int64 v20; // rax

  v4 = 0;
  v5 = a4;
  v6 = *(_BYTE *)(a1 + 2468);
  v8 = i;
  if ( !v6 )
  {
    if ( *(_BYTE *)(a1 + 2064) != ((_BYTE)i != 0) )
      goto LABEL_3;
    return 0;
  }
  if ( (_DWORD)v5 == -3 )
  {
    v10 = (unsigned int *)(a1 + 40);
    for ( i = 0; (unsigned int)i < *(_DWORD *)(a1 + 40); ++i )
    {
      if ( *(_BYTE *)((unsigned int)i + a1 + 2064) != (v8 != 0) )
        goto LABEL_4;
    }
    return 0;
  }
  if ( *(_BYTE *)(v5 + a1 + 2064) == ((_BYTE)i != 0) )
    return 0;
LABEL_3:
  v10 = (unsigned int *)(a1 + 40);
LABEL_4:
  if ( v8 )
  {
    if ( v6 )
    {
      if ( (_DWORD)v5 == -3 )
      {
        v17 = 0;
        if ( *v10 )
        {
          do
          {
            v18 = v17++;
            _InterlockedExchange((volatile __int32 *)(a1 + 4 * v18 + 2528), 1);
          }
          while ( v17 < *v10 );
          v10 = (unsigned int *)(a1 + 40);
        }
      }
      else
      {
        _InterlockedExchange((volatile __int32 *)(a1 + 4 * v5 + 2528), 1);
      }
    }
    else
    {
      _InterlockedExchange((volatile __int32 *)(a1 + 2528), 1);
    }
    i = 0;
    if ( *v10 )
    {
      do
      {
        v15 = *(_DWORD *)(a1 + 2464);
        if ( _bittest(&v15, i) )
        {
          if ( VidSchiGetVSyncSuspended(a1, i) )
            _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 8 * v16 + 3432) + 44420LL), 1);
          *(_QWORD *)(*(_QWORD *)(a1 + 8 * v16 + 3432) + 44424LL) = 0LL;
        }
        ++i;
      }
      while ( i < *v10 );
      v10 = (unsigned int *)(a1 + 40);
    }
  }
  v11 = DXGADAPTER::DdiControlInterrupt(*(DXGADAPTER **)(a1 + 16), i);
  v12 = 0;
  if ( v11 != -1073741822 )
    v12 = v11;
  if ( v12 >= 0 )
  {
    if ( *(_BYTE *)(a1 + 2468) )
    {
      if ( (_DWORD)v5 == -3 )
      {
        for ( j = 0; j < *v10; *(_BYTE *)(v20 + a1 + 2064) = v8 != 0 )
          v20 = j++;
      }
      else
      {
        *(_BYTE *)(v5 + a1 + 2064) = v8 != 0;
      }
    }
    else
    {
      *(_BYTE *)(a1 + 2064) = v8 != 0;
    }
    if ( v8 )
    {
      if ( (byte_140081242 & 0x10) != 0 )
        McTemplateK0p_EtwWriteTransfer();
      VidSchiSetVSyncSuspended(a1, v5, 0);
      _InterlockedOr((volatile signed __int32 *)(a1 + 36), 0x10u);
    }
    else
    {
      if ( (byte_140081242 & 0x10) != 0 )
        McTemplateK0p_EtwWriteTransfer();
      if ( *(_BYTE *)(a1 + 2468) == 1 && (_DWORD)v5 != -3 )
      {
        while ( v4 < *(_DWORD *)(a1 + 40) )
        {
          if ( *(_BYTE *)(v4 + a1 + 2064) == 1 )
            goto LABEL_14;
          ++v4;
        }
      }
      _InterlockedAnd((volatile signed __int32 *)(a1 + 36), 0xFFFFFFEF);
    }
LABEL_14:
    v13 = *(unsigned int *)(a1 + 6648);
    *(_QWORD *)(a1 + 8 * v13 + 6656) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(a1 + 4 * v13 + 6688) = a3;
    *(_DWORD *)(a1 + 6648) = ((unsigned __int8)*(_DWORD *)(a1 + 6648) + 1) & 3;
  }
  return (unsigned int)v12;
}
