/*
 * XREFs of ?ndisFInvokeSetOptions@@_Y2PAGE@@AHPEAU_NDIS_FILTER_DRIVER_BLOCK@@@Z @ 0x140142E4C
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1400A3F50 (NdisFRegisterFilterDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisFInvokeSetOptions(struct _NDIS_FILTER_DRIVER_BLOCK *a1)
{
  unsigned int v1; // esi
  int v3; // eax
  char v5[4]; // [rsp+30h] [rbp-18h]

  v1 = 0;
  if ( a1->DefaultFilterCharacteristics.SetOptionsHandler )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        1,
        102,
        (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
        (char)a1);
    v3 = a1->DefaultFilterCharacteristics.SetOptionsHandler(a1, a1->FilterDriverContext);
    v1 = v3;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v5 = v3;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0x67u,
        (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
        (char)a1,
        *(_DWORD *)v5);
    }
  }
  else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      104,
      (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
      (char)a1);
  }
  return v1;
}
