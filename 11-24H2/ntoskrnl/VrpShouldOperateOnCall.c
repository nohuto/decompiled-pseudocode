/*
 * XREFs of VrpShouldOperateOnCall @ 0x14092B600
 * Callers:
 *     VrpRegistryCallback @ 0x1408454F0 (VrpRegistryCallback.c)
 * Callees:
 *     VRegEnabledInJob @ 0x14092B820 (VRegEnabledInJob.c)
 */

__int64 __fastcall VrpShouldOperateOnCall(int a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edx
  _QWORD *v10; // rcx
  _QWORD *i; // rax
  __int64 v12; // rdx
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v13[0] = 0LL;
  switch ( a1 )
  {
    case 48:
LABEL_2:
      v6 = a2[4];
LABEL_3:
      v7 = a2[5];
      break;
    case 26:
LABEL_14:
      v6 = 0LL;
      v7 = *(_QWORD *)(*a2 + 88LL);
      break;
    case 33:
LABEL_13:
      v7 = *(_QWORD *)(*a2 + 40LL);
      v6 = *(_QWORD *)(*a2 + 32LL);
      break;
    default:
      switch ( a1 )
      {
        case 0:
        case 14:
        case 30:
          v7 = a2[2];
          v6 = 0LL;
          goto LABEL_4;
        case 1:
        case 5:
        case 6:
        case 7:
          v7 = a2[6];
          v6 = 0LL;
          goto LABEL_4;
        case 2:
        case 4:
        case 34:
          v7 = a2[3];
          v6 = 0LL;
          goto LABEL_4;
        case 3:
        case 36:
        case 47:
        case 49:
          v6 = 0LL;
          goto LABEL_3;
        case 8:
        case 9:
          v7 = a2[7];
          v6 = 0LL;
          goto LABEL_4;
        case 11:
        case 13:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 31:
        case 35:
        case 37:
        case 39:
        case 42:
        case 44:
        case 46:
        case 50:
          goto LABEL_2;
        case 27:
        case 29:
          goto LABEL_13;
        case 28:
          goto LABEL_14;
        case 32:
          v6 = 0LL;
          v7 = *(_QWORD *)(*a2 + 72LL);
          goto LABEL_4;
        case 38:
        case 41:
        case 43:
        case 45:
          v7 = a2[4];
          v6 = 0LL;
          goto LABEL_4;
        case 40:
          v7 = a2[1];
          v6 = 0LL;
          goto LABEL_4;
        default:
          v7 = 0LL;
          goto LABEL_6;
      }
  }
LABEL_4:
  if ( v7 )
  {
    v8 = 1;
    *a4 = *(_QWORD *)(v7 + 40);
  }
  else if ( v6 )
  {
    v8 = 1;
    *a4 = *(_QWORD *)(v6 + 8);
  }
  else
  {
LABEL_6:
    if ( a1 == 32 )
    {
      v8 = VRegEnabledInJob(v13);
      if ( v8 )
      {
        *a4 = v13[0];
        goto LABEL_10;
      }
    }
    else if ( ((a1 - 27) & 0xFFFFFFFD) == 0 )
    {
      v10 = *(_QWORD **)(a2[1] + 16LL);
      for ( i = (_QWORD *)*v10; i != v10; i = (_QWORD *)*i )
      {
        v12 = i[2] - VRP_ORIGINAL_KEY_NAME_PARAMETER_GUID;
        if ( !v12 )
          v12 = i[3] - *((_QWORD *)&VRP_ORIGINAL_KEY_NAME_PARAMETER_GUID + 1);
        if ( !v12 )
        {
          v8 = 1;
          *a4 = i[6];
          goto LABEL_9;
        }
      }
    }
    v8 = 0;
    *a4 = 0LL;
LABEL_9:
    v7 = 0LL;
  }
LABEL_10:
  *a3 = v7;
  return v8;
}
