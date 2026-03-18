/*
 * XREFs of ?DisplayID_GetPreferredMode@@YAJPEBUDisplayIDObj@@PEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x140095AFC
 * Callers:
 *     ?GetNativeMode@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x140279960 (-GetNativeMode@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_PREFERRED_MODE_INFO@@@Z.c)
 * Callees:
 *     ?IsValidBlock@DisplayID_Type7Timing_Parser@@QEBA_NXZ @ 0x140096028 (-IsValidBlock@DisplayID_Type7Timing_Parser@@QEBA_NXZ.c)
 */

__int64 __fastcall DisplayID_GetPreferredMode(const struct DisplayIDObj *a1, struct DISPLAY_PREFERRED_MODE_INFO *a2)
{
  __int64 v4; // r9
  int v5; // r11d
  int v6; // r10d
  _BYTE *i; // r8
  unsigned __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r8
  char v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  __int16 v14; // cx
  __int64 v15; // rax
  __int16 v16; // cx
  __int64 v17; // rax
  __int16 v18; // cx
  __int64 v19; // rax
  __int16 v20; // cx
  __int64 v21; // rax
  _BYTE *v22; // [rsp+20h] [rbp-28h] BYREF
  char v23; // [rsp+28h] [rbp-20h]

  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( !*((_BYTE *)a1 + 16) )
    return 3223126019LL;
  v4 = *(_QWORD *)a1;
  v5 = 0;
LABEL_6:
  if ( v5 >= *((_DWORD *)a1 + 5) )
    return 3221226021LL;
  v6 = *(unsigned __int8 *)(v4 + 1);
  for ( i = (_BYTE *)((v4 + 4) & -(__int64)(*(_BYTE *)(v4 + 1) != 0)); ; i += v9 )
  {
    if ( (unsigned int)v6 < 3 || !*i || (v8 = (unsigned __int8)i[2], v9 = (unsigned int)(v8 + 3), v6 < (int)v9) )
    {
      v4 += (unsigned __int8)(*(_BYTE *)(v4 + 1) + 5);
      ++v5;
      goto LABEL_6;
    }
    if ( *i == 34 )
      break;
    v6 -= v9;
  }
  v22 = i;
  v23 = v8 / 0x14;
  if ( !DisplayID_Type7Timing_Parser::IsValidBlock((DisplayID_Type7Timing_Parser *)&v22) )
    return 3221226021LL;
  v12 = v10 + 3;
  if ( !v11 )
    v12 = 0LL;
  if ( !v12 )
    return 3221226021LL;
  v13 = v10 + 8;
  if ( !v11 )
    v13 = 5LL;
  v14 = *(unsigned __int8 *)v13;
  v15 = v10 + 7;
  v16 = v14 << 8;
  if ( !v11 )
    v15 = 4LL;
  *(_DWORD *)a2 = (unsigned __int16)(*(unsigned __int8 *)v15 + 1 + v16);
  v17 = v10 + 16;
  if ( !v11 )
    v17 = 13LL;
  v18 = *(unsigned __int8 *)v17;
  v19 = v10 + 15;
  v20 = v18 << 8;
  if ( !v11 )
    v19 = 12LL;
  *((_DWORD *)a2 + 1) = (unsigned __int16)(*(unsigned __int8 *)v19 + 1 + v20);
  v21 = v10 + 6;
  if ( !v11 )
    v21 = 3LL;
  *((_BYTE *)a2 + 8) = (*(_BYTE *)v21 & 0x10) != 0;
  return 0LL;
}
