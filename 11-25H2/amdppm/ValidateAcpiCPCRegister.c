/*
 * XREFs of ValidateAcpiCPCRegister @ 0x14002F270
 * Callers:
 *     ValidateAcpiCPC @ 0x14002F0D4 (ValidateAcpiCPC.c)
 *     ValidateCpcResourcePriorities @ 0x140030204 (ValidateCpcResourcePriorities.c)
 * Callees:
 *     WPP_RECORDER_SF_Ss @ 0x140009C94 (WPP_RECORDER_SF_Ss.c)
 */

__int64 __fastcall ValidateAcpiCPCRegister(
        unsigned __int8 *a1,
        __int64 a2,
        __int64 a3,
        const char *a4,
        const wchar_t *a5)
{
  int v5; // eax
  unsigned int v6; // ebx
  _DWORD *v8; // r9
  unsigned __int16 v9; // r9
  int v10; // eax
  int v11; // eax
  int v13; // [rsp+20h] [rbp-28h]

  v5 = *a1;
  v6 = 0;
  v8 = a1 + 4;
  if ( (_BYTE)v5 || *(_QWORD *)v8 )
  {
    if ( (_BYTE)v5 )
    {
      switch ( v5 )
      {
        case 1:
          if ( *((_DWORD *)a1 + 2)
            || (*v8 & 0xFFFF0000) != 0
            || !*v8
            || (v10 = a1[1], !(_BYTE)v10)
            || v10 + (unsigned int)a1[2] > a1[3] )
          {
            v6 = -1073741811;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v9 = 55;
              goto LABEL_6;
            }
          }
          break;
        case 10:
          return v6;
        case 126:
          if ( !(_BYTE)a2 )
          {
            v6 = -1073741811;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v9 = 62;
              goto LABEL_6;
            }
          }
          break;
        case 127:
          if ( a1[3] != 64 )
          {
            v6 = -1073741811;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              return v6;
            v9 = 56;
            goto LABEL_6;
          }
          if ( !*(_QWORD *)v8 )
          {
            v6 = -1073741811;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v9 = 57;
              goto LABEL_6;
            }
          }
          break;
        default:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Ss((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, 0x3Fu, v13, a5, a4);
          return (unsigned int)-1073741637;
      }
    }
    else
    {
      v11 = a1[1];
      if ( !(_BYTE)v11 || v11 + (unsigned int)a1[2] > a1[3] )
      {
        v6 = -1073741811;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Ss((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, 0x36u, v13, a5, a4);
      }
    }
  }
  else if ( !(_BYTE)a3 )
  {
    v6 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 53;
LABEL_6:
      WPP_RECORDER_SF_Ss((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, v9, v13, a5, a4);
    }
  }
  return v6;
}
