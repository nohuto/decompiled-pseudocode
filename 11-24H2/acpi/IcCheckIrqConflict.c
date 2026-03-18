/*
 * XREFs of IcCheckIrqConflict @ 0x1400BD0F4
 * Callers:
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1400C110C (ProcessorpFindAffinitizedIdtEntries.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400283FC (WPP_RECORDER_SF_.c)
 *     IcIsActiveBothPrimaryInterrupt @ 0x1400AADAC (IcIsActiveBothPrimaryInterrupt.c)
 */

__int64 __fastcall IcCheckIrqConflict(unsigned int a1, int a2, char a3, _BYTE *a4)
{
  __int64 v4; // r10
  char v6; // si
  __int16 v9; // bx
  int v10; // edi
  __int64 i; // rcx
  unsigned int j; // edx
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r9
  int v16; // eax
  int v17; // r9d
  unsigned int k; // r8d
  __int64 v19; // r9
  bool IsActiveBothPrimaryInterrupt; // al
  __int64 v21; // r9
  __int64 v22; // r10
  int v23; // r8d
  int v24; // r11d
  int v25; // r9d
  int v26; // eax

  v4 = IcListHead;
  v6 = 0;
  v9 = a3 & 1;
  while ( 1 )
  {
    if ( &IcListHead == (__int64 *)v4 )
    {
      *a4 = 1;
      return 3221226021LL;
    }
    v10 = *(_DWORD *)(v4 + 28);
    if ( v10 >= 0 && a1 >= *(_DWORD *)(v4 + 16) && a1 <= *(_DWORD *)(v4 + 20) )
      break;
    v4 = *(_QWORD *)v4;
  }
  if ( (v10 & 4) == 0 && (a3 & 2) != 0 )
    v6 = 1;
  for ( i = IcListHead; ; i = *(_QWORD *)i )
  {
    if ( &IcListHead == (__int64 *)i )
      goto LABEL_30;
    if ( *(int *)(i + 28) >= 0 && v4 != i )
      break;
LABEL_19:
    ;
  }
  for ( j = 0; ; ++j )
  {
    if ( j >= *(_DWORD *)(i + 20) - *(_DWORD *)(i + 16) + 1 )
      goto LABEL_19;
    v13 = 200LL * j;
    if ( *(_DWORD *)(v13 + i + 36) )
    {
      if ( *(_DWORD *)(v13 + i + 140) == a2 )
        break;
    }
  }
  if ( v6 || IcIsActiveBothPrimaryInterrupt(i, j) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_59;
    v17 = 10;
    goto LABEL_58;
  }
  v16 = *(_DWORD *)(v15 + v14 + 152);
  if ( (v16 || !v9) && (v16 != 1 || v9) )
  {
LABEL_30:
    for ( k = 0; ; ++k )
    {
      if ( k >= *(_DWORD *)(v4 + 20) - *(_DWORD *)(v4 + 16) + 1 )
        goto LABEL_53;
      v19 = 200LL * k;
      if ( *(_DWORD *)(v19 + v4 + 36) )
      {
        if ( *(_DWORD *)(v19 + v4 + 140) == a2 )
          break;
      }
    }
    IsActiveBothPrimaryInterrupt = IcIsActiveBothPrimaryInterrupt(v4, k);
    if ( a1 == v24 + v23 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v25 = 12;
LABEL_52:
        LOBYTE(j) = 4;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          j,
          20,
          v25,
          (__int64)&WPP_929e7a6a75053a8d29f65faa15fdd808_Traceguids);
        goto LABEL_53;
      }
      goto LABEL_53;
    }
    if ( v6 || IsActiveBothPrimaryInterrupt )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_59;
      v17 = 13;
    }
    else
    {
      v26 = *(_DWORD *)(v21 + v22 + 152);
      if ( !v26 && v9 )
        goto LABEL_44;
      if ( !v9 )
      {
        if ( v26 == 1 )
        {
LABEL_44:
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_59;
          v17 = 14;
          goto LABEL_58;
        }
        if ( (v10 & 2) != 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v25 = 15;
            goto LABEL_52;
          }
LABEL_53:
          *a4 = 0;
          return 0LL;
        }
      }
      if ( (v9 & 1) != 0 && (v10 & 1) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v25 = 16;
          goto LABEL_52;
        }
        goto LABEL_53;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_59;
      v17 = 17;
    }
LABEL_58:
    LOBYTE(j) = 4;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      j,
      20,
      v17,
      (__int64)&WPP_929e7a6a75053a8d29f65faa15fdd808_Traceguids);
    goto LABEL_59;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = 11;
    goto LABEL_58;
  }
LABEL_59:
  *a4 = 1;
  return 0LL;
}
