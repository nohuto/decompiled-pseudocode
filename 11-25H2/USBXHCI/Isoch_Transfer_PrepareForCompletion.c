/*
 * XREFs of Isoch_Transfer_PrepareForCompletion @ 0x14001F040
 * Callers:
 *     Isoch_RetrieveNextStage @ 0x14001CE90 (Isoch_RetrieveNextStage.c)
 *     Isoch_Transfer_Complete @ 0x14002079C (Isoch_Transfer_Complete.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqdDDDD @ 0x14001F300 (WPP_RECORDER_SF_DDqdDDDD.c)
 */

void __fastcall Isoch_Transfer_PrepareForCompletion(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rdi
  _DWORD *v8; // rcx
  int v9; // r8d
  unsigned int v10; // eax
  unsigned int i; // edx
  int v12; // eax
  int v13; // eax
  struct _MDL *v14; // rcx
  __int64 v15; // r8

  v4 = *(_QWORD *)(a2 + 48);
  if ( *(_WORD *)(v4 + 2) == 56 )
  {
LABEL_2:
    v8 = (_DWORD *)(v4 + 36);
  }
  else
  {
    switch ( *(_WORD *)(v4 + 2) )
    {
      case '9':
      case ':':
        v8 = (_DWORD *)(v4 + 52);
        break;
      default:
        goto LABEL_2;
    }
  }
  *v8 = *(_DWORD *)(a2 + 84);
  v9 = 0;
  v10 = *(_DWORD *)(a2 + 96);
  for ( i = 0; i < v10; v10 = *(_DWORD *)(a2 + 96) )
  {
    if ( a3 == -1 )
    {
      v12 = *(_DWORD *)(v4 + 12LL * i + 148);
      if ( v12 == -1 )
      {
        *(_DWORD *)(v4 + 12LL * i + 148) = -1073610752;
LABEL_26:
        ++*(_DWORD *)(v4 + 136);
        ++*(_DWORD *)(a1 + 268);
        goto LABEL_8;
      }
    }
    else
    {
      *(_DWORD *)(v4 + 12LL * i + 148) = a3;
      v12 = a3;
    }
    if ( v12 )
      goto LABEL_26;
    ++v9;
LABEL_8:
    ++*(_DWORD *)(a1 + 264);
    ++i;
  }
  if ( a4 == -1 )
  {
    if ( *(_DWORD *)(v4 + 136) != v10 )
    {
      *(_DWORD *)(v4 + 4) = 0;
LABEL_13:
      v13 = 0;
      goto LABEL_14;
    }
    *(_DWORD *)(v4 + 4) = -1073739008;
    goto LABEL_33;
  }
  *(_DWORD *)(v4 + 4) = a4;
  if ( a4 == 1 )
    goto LABEL_13;
  if ( a4 <= -1073738240 )
  {
    if ( a4 == -1073738240 )
    {
      v13 = -1073741637;
    }
    else
    {
      if ( a4 != -1073739264 && a4 != -2147483136 && a4 != -2147482880 && a4 != -2147482112 )
      {
LABEL_33:
        v13 = -1073741823;
        goto LABEL_14;
      }
      v13 = -1073741811;
    }
  }
  else
  {
    switch ( a4 )
    {
      case -1073676288:
        v13 = -1073741536;
        break;
      case -1073737728:
        v13 = -1073741670;
        break;
      case -1073713152:
        v13 = -1073741810;
        break;
      case 0:
        goto LABEL_13;
      default:
        goto LABEL_33;
    }
  }
LABEL_14:
  *(_DWORD *)(a2 + 68) = v13;
  ++*(_DWORD *)(a1 + 248);
  *(_QWORD *)(a1 + 256) += *(unsigned int *)(a2 + 84);
  if ( *(int *)(a2 + 68) < 0 )
    ++*(_DWORD *)(a1 + 252);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDqdDDDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      v9,
      a4);
  v14 = *(struct _MDL **)(a2 + 72);
  if ( v14 )
  {
    v15 = *(_QWORD *)(a2 + 48);
    if ( *(_WORD *)(v15 + 2) != 56 )
    {
      switch ( *(_WORD *)(v15 + 2) )
      {
        case '9':
        case ':':
          goto LABEL_24;
        default:
          break;
      }
    }
    if ( v14 != *(struct _MDL **)(v15 + 48) )
    {
LABEL_24:
      IoFreeMdl(v14);
      *(_QWORD *)(a2 + 72) = 0LL;
    }
  }
  *(_BYTE *)(a2 + 16) = 0;
}
