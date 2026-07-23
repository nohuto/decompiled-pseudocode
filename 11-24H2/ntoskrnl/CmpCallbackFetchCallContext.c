/*
 * XREFs of CmpCallbackFetchCallContext @ 0x140844980
 * Callers:
 *     CmpCallCallBacksEx @ 0x140843FD0 (CmpCallCallBacksEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpCallbackFetchCallContext(int a1, _QWORD *a2, __int64 a3)
{
  __int64 result; // rax

  if ( a1 == 28 )
  {
LABEL_2:
    *(_QWORD *)(a3 + 32) = a2[10];
    result = 0LL;
    a2[10] = 0LL;
  }
  else if ( a1 == 30 )
  {
LABEL_4:
    *(_QWORD *)(a3 + 32) = a2[1];
    result = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    result = a1;
    switch ( a1 )
    {
      case 0:
      case 14:
        goto LABEL_4;
      case 1:
      case 5:
      case 6:
      case 7:
        *(_QWORD *)(a3 + 32) = a2[5];
        result = 0LL;
        a2[5] = 0LL;
        break;
      case 2:
      case 4:
      case 34:
        *(_QWORD *)(a3 + 32) = a2[2];
        result = 0LL;
        a2[2] = 0LL;
        break;
      case 3:
      case 36:
      case 47:
      case 49:
        *(_QWORD *)(a3 + 32) = a2[4];
        result = 0LL;
        a2[4] = 0LL;
        break;
      case 8:
      case 9:
        *(_QWORD *)(a3 + 32) = a2[6];
        result = 0LL;
        a2[6] = 0LL;
        break;
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
      case 27:
      case 29:
      case 31:
      case 33:
      case 35:
      case 37:
      case 39:
      case 42:
      case 44:
      case 46:
      case 48:
      case 50:
        result = *(_QWORD *)(a3 + 32);
        a2[4] = result;
        break;
      case 26:
        goto LABEL_2;
      case 32:
        *(_QWORD *)(a3 + 32) = a2[8];
        result = 0LL;
        a2[8] = 0LL;
        break;
      case 38:
      case 41:
      case 43:
      case 45:
        *(_QWORD *)(a3 + 32) = a2[3];
        result = 0LL;
        a2[3] = 0LL;
        break;
      default:
        return result;
    }
  }
  return result;
}
