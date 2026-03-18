/*
 * XREFs of Controller_DisableController @ 0x14003FE84
 * Callers:
 *     Controller_InitiateRecovery @ 0x14004032C (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1400406EC (Controller_InternalReset.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001A724 (WPP_RECORDER_SF_.c)
 *     Controller_SetControllerGone @ 0x14003C400 (Controller_SetControllerGone.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

void __fastcall Controller_DisableController(__int64 a1)
{
  int v2; // edx
  __int16 v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  Controller_SetControllerGone(a1, 0);
  if ( *(_DWORD *)(a1 + 644) != 1 || *(_BYTE *)(a1 + 1001) || (*(_QWORD *)(a1 + 744) & 0x10) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v2, 4, 186, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
    }
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, __int16 *, __int64, int))(a1 + 688))(
      *(_QWORD *)(a1 + 680),
      0LL,
      &v3,
      4LL,
      2);
  }
  KeFlushQueuedDpcs();
}
