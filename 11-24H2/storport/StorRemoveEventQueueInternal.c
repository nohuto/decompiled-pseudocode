/*
 * XREFs of StorRemoveEventQueueInternal @ 0x1400279A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall StorRemoveEventQueueInternal(__int64 *a1, char a2, __int64 *a3)
{
  __int64 result; // rax
  __int64 *v5; // rdx
  __int64 *v6; // r9
  __int64 **v7; // rax
  __int64 *v8; // rdx
  __int64 v9; // r11

  result = *((unsigned __int8 *)a3 - 32);
  if ( (result & 2) == 0 )
    return result;
  *((_BYTE *)a3 - 32) = result & 0xFD;
  v5 = (__int64 *)*a3;
  v6 = (__int64 *)*a1;
  if ( *(__int64 **)(*a3 + 8) != a3 )
    goto LABEL_16;
  v7 = (__int64 **)a3[1];
  if ( *v7 != a3 )
    goto LABEL_16;
  *v7 = v5;
  v5[1] = (__int64)v7;
  result = *((unsigned int *)a3 + 12);
  if ( (result & 1) != 0 )
  {
    v8 = a3 + 2;
    if ( (__int64 *)a1[4] == a3 + 2 )
      a1[4] = *v8;
    v9 = *v8;
    if ( *(__int64 **)(*v8 + 8) == v8 )
    {
      result = a3[3];
      if ( *(__int64 **)result == v8 )
      {
        *(_QWORD *)result = v9;
        *(_QWORD *)(v9 + 8) = result;
        *((_DWORD *)a3 + 12) &= ~1u;
        goto LABEL_5;
      }
    }
LABEL_16:
    __fastfail(3u);
  }
LABEL_5:
  if ( (a2 & 4) == 0 && v6 == a3 )
  {
    result = *a1;
    if ( (__int64 *)*a1 == a1 )
    {
      *((_DWORD *)a1 + 12) = -1;
    }
    else
    {
      result = *(unsigned int *)(result + 32);
      *((_DWORD *)a1 + 12) = result;
    }
  }
  return result;
}
