/*
 * XREFs of Controller_PopulateVIAFirmwareVersion @ 0x140077C14
 * Callers:
 *     Controller_PopulatePciDeviceInformation @ 0x14007799C (Controller_PopulatePciDeviceInformation.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddL @ 0x14001F9A4 (WPP_RECORDER_SF_ddL.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

void __fastcall Controller_PopulateVIAFirmwareVersion(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 *a4)
{
  __int64 (__fastcall *v7)(__int64, _QWORD, _DWORD *, __int64, int); // rax
  __int64 v8; // rcx
  int v9; // eax
  int v10; // edx
  int v11; // r9d
  __int64 (__fastcall *v12)(__int64, _QWORD, _BYTE *, __int64, int); // rax
  __int64 v13; // rcx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  char v17; // [rsp+28h] [rbp-28h]
  unsigned __int8 v18; // [rsp+40h] [rbp-10h] BYREF
  _BYTE v19[3]; // [rsp+41h] [rbp-Fh] BYREF
  _DWORD v20[3]; // [rsp+44h] [rbp-Ch] BYREF
  unsigned __int8 v21; // [rsp+80h] [rbp+30h] BYREF

  if ( *(_WORD *)(a3 + 2) == 13362 )
  {
    v12 = *(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *, __int64, int))(a2 + 56);
    v13 = *(_QWORD *)(a2 + 8);
    v19[0] = 0;
    v18 = 0;
    v21 = 0;
    v14 = v12(v13, 0LL, v19, 609LL, 1);
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int8 *, __int64, int))(a2 + 56))(
            *(_QWORD *)(a2 + 8),
            0LL,
            &v18,
            610LL,
            1)
        + v14;
    v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int8 *, __int64, int))(a2 + 56))(
            *(_QWORD *)(a2 + 8),
            0LL,
            &v21,
            611LL,
            1)
        + v15;
    if ( v16 != 3 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return;
      v11 = 257;
      v17 = v16;
      goto LABEL_13;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddL(
        a1,
        4u,
        4u,
        0x102u,
        (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
        v21,
        v18,
        v19[0]);
    *a4 = v19[0] | ((v18 | ((unsigned __int64)v21 << 8)) << 8);
  }
  else if ( *(_WORD *)(a3 + 2) == 13443 || *(unsigned __int16 *)(a3 + 2) == 37377 )
  {
    v7 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64, int))(a2 + 56);
    v8 = *(_QWORD *)(a2 + 8);
    v20[0] = 0;
    v9 = v7(v8, 0LL, v20, 80LL, 4);
    if ( v9 != 4 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return;
      v11 = 259;
      v17 = v9;
LABEL_13:
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_d(a1, v10, 4, v11, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, v17);
      return;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_d(a1, v10, 4, 260, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, v20[0]);
    }
    *a4 = v20[0];
  }
}
