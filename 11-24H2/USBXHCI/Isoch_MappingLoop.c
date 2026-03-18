/*
 * XREFs of Isoch_MappingLoop @ 0x14000E020
 * Callers:
 *     Isoch_MapTransfers @ 0x14000DF10 (Isoch_MapTransfers.c)
 * Callees:
 *     ESM_AddEvent @ 0x140006A44 (ESM_AddEvent.c)
 *     Isoch_RetrieveNextStage @ 0x14000E290 (Isoch_RetrieveNextStage.c)
 *     Isoch_PrepareStage @ 0x14000F1B0 (Isoch_PrepareStage.c)
 *     Isoch_MapStage @ 0x140010000 (Isoch_MapStage.c)
 *     WPP_RECORDER_SF_ddL @ 0x14001F9A4 (WPP_RECORDER_SF_ddL.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

void __fastcall Isoch_MappingLoop(_QWORD *a1, __int64 a2)
{
  volatile signed __int32 *v2; // rbx
  char i; // bp
  void *v5; // r8
  volatile signed __int32 *v6; // rsi
  int v7; // eax
  int v8; // eax
  signed __int32 v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // rax

  v2 = (volatile signed __int32 *)a1 + 27;
  for ( i = 0; ; ++i )
  {
    v5 = &WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids;
    v6 = v2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v13 = *(unsigned __int8 *)(a1[6] + 143LL);
      LOBYTE(v13) = 5;
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(a1[7] + 80LL),
        v13,
        14,
        67,
        (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
        *(_BYTE *)(a1[6] + 143LL),
        *(_DWORD *)(a1[7] + 152LL),
        i);
      v6 = (volatile signed __int32 *)a1 + 27;
    }
    a1[44] = 0LL;
    if ( !(unsigned __int8)Isoch_RetrieveNextStage(a1, a2, v5) )
    {
      if ( _InterlockedCompareExchange(v2, 2, 3) != 3 && _InterlockedCompareExchange(v2, 0, 1) == 1 )
      {
        v10 = a1[7];
        if ( !*(_BYTE *)(v10 + 37) )
          goto LABEL_21;
        v11 = *(_QWORD *)(v10 + 144);
        if ( _InterlockedIncrement((volatile signed __int32 *)(v11 + 20)) == *(_DWORD *)(v11 + 8) )
          goto LABEL_21;
      }
      return;
    }
    v7 = Isoch_PrepareStage((__int64)a1);
    switch ( v7 )
    {
      case 1:
        v2 = (volatile signed __int32 *)a1 + 27;
        continue;
      case 3:
        return;
      case 4:
        if ( _InterlockedCompareExchange(v6, 2, 3) == 3 )
          return;
LABEL_26:
        if ( _InterlockedCompareExchange(v6, 0, 1) == 1 )
        {
          v10 = a1[7];
          if ( !*(_BYTE *)(v10 + 37)
            || (v12 = *(_QWORD *)(v10 + 144),
                _InterlockedIncrement((volatile signed __int32 *)(v12 + 20)) == *(_DWORD *)(v12 + 8)) )
          {
LABEL_21:
            ESM_AddEvent((KSPIN_LOCK *)(v10 + 304), 20);
            return;
          }
        }
        return;
      case 2:
        if ( _InterlockedCompareExchange(v6, 4, 3) == 3 )
        {
LABEL_23:
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01033 + 2552))(
            WdfDriverGlobals,
            a1[41],
            -100000000LL);
          return;
        }
        goto LABEL_26;
    }
    v8 = Isoch_MapStage(a1);
    if ( v8 == 2 )
      return;
    v2 = (volatile signed __int32 *)a1 + 27;
    if ( v8 == 4 )
      break;
    v9 = _InterlockedCompareExchange(v2, 3, 3);
    if ( v9 != 3 && _InterlockedCompareExchange(v2, 0, 1) == 1 )
      goto LABEL_33;
    if ( v9 != 3 )
      return;
  }
  if ( _InterlockedCompareExchange(v2, 4, 3) == 3 )
    goto LABEL_23;
  if ( _InterlockedCompareExchange(v2, 0, 1) == 1 )
  {
LABEL_33:
    v10 = a1[7];
    if ( !*(_BYTE *)(v10 + 37) )
      goto LABEL_21;
    v14 = *(_QWORD *)(v10 + 144);
    if ( _InterlockedIncrement((volatile signed __int32 *)(v14 + 20)) == *(_DWORD *)(v14 + 8) )
      goto LABEL_21;
  }
}
