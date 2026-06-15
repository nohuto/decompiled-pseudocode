/*
 * XREFs of ?NotifyAudioDGTerminated@CVolumeStrip@@UEAAXXZ @ 0x18007DEC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1800C1670 (WPP_SF_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVolumeStrip::NotifyAudioDGTerminated(CVolumeStrip *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_ffca69456fc43fc517c726147dcc355b_Traceguids);
  }
  v2 = *((_QWORD *)this + 20);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 80LL))(v2);
  v3 = *((_QWORD *)this + 21);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
  v4 = *((_QWORD *)this + 22);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 104LL))(v4);
}
