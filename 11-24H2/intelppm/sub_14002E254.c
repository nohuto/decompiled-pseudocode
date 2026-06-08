/*
 * XREFs of sub_14002E254 @ 0x14002E254
 * Callers:
 *     sub_140035274 @ 0x140035274 (sub_140035274.c)
 *     sub_1400353C8 @ 0x1400353C8 (sub_1400353C8.c)
 * Callees:
 *     sub_14000BEA8 @ 0x14000BEA8 (sub_14000BEA8.c)
 */

__int64 __fastcall sub_14002E254(unsigned int *a1, char a2, const wchar_t *a3)
{
  __int64 v4; // rdx
  bool v5; // zf
  unsigned __int16 v6; // r9
  __int64 result; // rax
  const char *v8; // rcx
  int v9; // [rsp+20h] [rbp-28h]

  v4 = *a1;
  if ( (_DWORD)v4 == 1 )
  {
    if ( a1[1] == 5 )
    {
      v4 = a1[4];
      if ( (_DWORD)v4 == 1 || (unsigned int)(v4 - 252) <= 2 )
      {
        v4 = a1[5];
        if ( (unsigned int)v4 <= 0x800 )
        {
          result = 0LL;
          if ( (_DWORD)v4 )
            return result;
          if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
          {
            v5 = a2 == 0;
            v6 = 33;
            goto LABEL_17;
          }
        }
        else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          v5 = a2 == 0;
          v6 = 32;
          goto LABEL_17;
        }
      }
      else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        v5 = a2 == 0;
        v6 = 31;
        goto LABEL_17;
      }
    }
    else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      v5 = a2 == 0;
      v6 = 30;
LABEL_17:
      v8 = "_PSD";
      if ( v5 )
        v8 = "_TSD";
      sub_14000BEA8((__int64)off_140018050->DeviceExtension, v4, (__int64)"_TSD", v6, v9, a3, v8);
    }
  }
  else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    v5 = a2 == 0;
    v6 = 29;
    goto LABEL_17;
  }
  return 3221225473LL;
}
