/*
 * XREFs of UsbhValidateMsOs20CompatibleId @ 0x14005B260
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1400298B0 (Log.c)
 */

char __fastcall UsbhValidateMsOs20CompatibleId(__int64 a1, __int64 a2, _WORD *a3)
{
  char result; // al
  char v6; // r11
  __int64 v7; // rbx
  __int64 i; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // r8d
  char v12; // r11
  __int64 j; // rcx

  if ( *a3 == 20 )
  {
    v6 = 0;
    v7 = 0x87FFFFFE03FFLL;
    for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
    {
      v9 = *((unsigned __int8 *)a3 + i + 4);
      v10 = (unsigned int)i;
      if ( (_BYTE)v9 )
      {
        if ( v6 == 1 )
        {
          v11 = 1447250226;
          goto LABEL_14;
        }
        if ( (unsigned __int8)(v9 - 48) > 0x2Fu || !_bittest64(&v7, (unsigned __int8)(v9 - 48)) )
        {
          v10 = (unsigned int)i;
          v11 = 1447250227;
LABEL_14:
          Log(a1, 256, v11, v9, v10);
          return 0;
        }
      }
      else
      {
        v6 = 1;
      }
    }
    v12 = 0;
    for ( j = 0LL; (unsigned int)j < 8; j = (unsigned int)(j + 1) )
    {
      v9 = *((unsigned __int8 *)a3 + j + 12);
      v10 = (unsigned int)j;
      if ( (_BYTE)v9 )
      {
        if ( v12 == 1 )
        {
          v11 = 1447250228;
          goto LABEL_14;
        }
        if ( (unsigned __int8)(v9 - 48) > 0x2Fu || !_bittest64(&v7, (unsigned __int8)(v9 - 48)) )
        {
          v10 = (unsigned int)j;
          v11 = 1447250229;
          goto LABEL_14;
        }
      }
      else
      {
        v12 = 1;
      }
    }
    *(_DWORD *)a2 |= 0x20u;
    result = 1;
    *(_QWORD *)(a2 + 24) = a3;
  }
  else
  {
    Log(a1, 256, 1447250225, (unsigned __int16)*a3, 0LL);
    return 0;
  }
  return result;
}
