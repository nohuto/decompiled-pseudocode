/*
 * XREFs of RootHub_UcxEvtGet20PortInfo @ 0x140049B50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RootHub_UcxEvtGet20PortInfo(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  __int16 v5; // ax
  __int64 v6; // r8
  unsigned int v7; // edx
  __int64 v8; // r10
  int v9; // r9d
  unsigned __int16 v10; // cx
  unsigned __int16 v11; // si
  unsigned __int16 v12; // dx
  __int64 v13; // rax
  __int64 v14; // r11
  __int64 v15; // r9
  int v16; // eax
  int v17; // eax
  __int16 v19; // [rsp+28h] [rbp-50h]
  _OWORD v20[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v21; // [rsp+50h] [rbp-28h]

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B0B0);
  v4 = 0;
  memset(v20, 0, sizeof(v20));
  v21 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount > 0x33 )
    {
      LOWORD(v20[0]) = *(_WORD *)(WdfStructures + 408);
      goto LABEL_7;
    }
    v5 = -1;
  }
  else
  {
    v5 = 40;
  }
  LOWORD(v20[0]) = v5;
LABEL_7:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    a2,
    v20);
  v6 = *((_QWORD *)&v20[0] + 1);
  v7 = **((_DWORD **)&v20[0] + 1);
  v8 = *(_QWORD *)(*((_QWORD *)&v20[0] + 1) + 8LL);
  if ( **((_DWORD **)&v20[0] + 1) < 0x10u )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_12:
      v4 = -1073741811;
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
               WdfDriverGlobals,
               a2,
               v4);
    }
    v9 = 203;
    goto LABEL_10;
  }
  v10 = *(_WORD *)(*((_QWORD *)&v20[0] + 1) + 4LL);
  if ( v10 != *(_WORD *)(v3 + 20) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_12;
    v19 = *(_WORD *)(*((_QWORD *)&v20[0] + 1) + 4LL);
    v9 = 204;
    goto LABEL_11;
  }
  v7 = *(unsigned __int16 *)(*((_QWORD *)&v20[0] + 1) + 6LL);
  if ( v7 < 0x14 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_12;
    v9 = 205;
LABEL_10:
    LOBYTE(v19) = v7;
LABEL_11:
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v7,
      11,
      v9,
      (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
      v19);
    goto LABEL_12;
  }
  v11 = 0;
  v12 = 0;
  while ( v12 < *(_WORD *)(v3 + 16) )
  {
    if ( v11 >= v10 )
      break;
    v13 = v12++;
    v14 = 120 * v13;
    if ( *(_BYTE *)(120 * v13 + *(_QWORD *)(v3 + 48) + 13) == 2 )
    {
      v15 = v11;
      **(_WORD **)(v8 + 8LL * v11) = v12;
      v16 = 116;
      if ( *(_BYTE *)(*(_QWORD *)(v3 + 48) + v14 + 17) != 1 )
        v16 = 102;
      *(_DWORD *)(*(_QWORD *)(v8 + 8LL * v11) + 4LL) = v16;
      v17 = 116;
      if ( *(_BYTE *)(*(_QWORD *)(v3 + 48) + v14 + 16) != 1 )
        v17 = 102;
      *(_DWORD *)(*(_QWORD *)(v8 + 8LL * v11) + 8LL) = v17;
      if ( (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 736LL) & 0x400000LL) != 0 )
        *(_BYTE *)(*(_QWORD *)(v8 + 8LL * v11) + 16LL) = 0;
      else
        *(_BYTE *)(*(_QWORD *)(v8 + 8LL * v11) + 16LL) = *(_BYTE *)(*(_QWORD *)(v3 + 48) + v14 + 19);
      ++v11;
      *(_BYTE *)(*(_QWORD *)(v8 + 8 * v15) + 2LL) = *(_BYTE *)(*(_QWORD *)(v3 + 48) + v14 + 12);
      *(_BYTE *)(*(_QWORD *)(v8 + 8 * v15) + 3LL) = *(_BYTE *)(*(_QWORD *)(v3 + 48) + v14 + 14);
      v10 = *(_WORD *)(v6 + 4);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
           WdfDriverGlobals,
           a2,
           v4);
}
