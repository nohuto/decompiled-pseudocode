/*
 * XREFs of Controller_DisableController @ 0x140040534
 * Callers:
 *     Controller_InitiateRecovery @ 0x1400409DC (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x140040D9C (Controller_InternalReset.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 *     Controller_SetControllerGone @ 0x14003C470 (Controller_SetControllerGone.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
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
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v2, 4, 189, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids);
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
