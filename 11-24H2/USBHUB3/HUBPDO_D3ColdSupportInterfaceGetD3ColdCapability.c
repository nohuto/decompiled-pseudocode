/*
 * XREFs of HUBPDO_D3ColdSupportInterfaceGetD3ColdCapability @ 0x140081480
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBPDO_D3ColdSupportInterfaceGetD3ColdCapability(_QWORD *a1, _BYTE *a2)
{
  __int64 (__fastcall *v2)(_QWORD); // rax
  int v5; // esi
  __int64 v6; // rdx

  v2 = (__int64 (__fastcall *)(_QWORD))a1[45];
  if ( v2 )
  {
    v5 = v2(a1[40]);
    if ( v5 >= 0 )
    {
      if ( *a2 )
      {
        v6 = *(_QWORD *)(a1[3] + 8LL);
        if ( (*(_DWORD *)(v6 + 204) & 1) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v6) = 2;
          WPP_RECORDER_SF_(
            *(_QWORD *)(a1[2] + 2536LL),
            v6,
            6,
            107,
            (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids);
        }
      }
    }
  }
  else
  {
    *a2 = 0;
    return 0;
  }
  return (unsigned int)v5;
}
