/*
 * XREFs of sub_140037AD0 @ 0x140037AD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_14003E448 @ 0x14003E448 (sub_14003E448.c)
 *     sub_14003E4A0 @ 0x14003E4A0 (sub_14003E4A0.c)
 */

__int64 __fastcall sub_140037AD0(__int64 a1)
{
  unsigned int v2; // edx
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // r8d
  __int64 i; // r8
  __int64 v7; // r9
  int v8; // eax
  _DWORD *v9; // r8
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = 0LL;
  v2 = -1073741823;
  if ( *(_DWORD *)(a1 + 80) == 2 )
  {
    if ( HalPrivateDispatchTable[147] )
    {
      v3 = *(_QWORD *)(a1 + 280);
      if ( (v3 & 0x20E0000000000LL) != 0 )
      {
        v4 = *(_QWORD *)(a1 + 544);
        if ( v4 )
        {
          v5 = *(_DWORD *)(v4 + 16);
          if ( v5 )
          {
            for ( i = (unsigned int)(v5 - 1); (_DWORD)i; i = (unsigned int)(i - 1) )
            {
              if ( (*(_DWORD *)(80 * i + v4 + 32) & 1) != 0 )
              {
                v7 = v4 + 80 * i + 24;
                if ( !v7 )
                  return v2;
                v8 = sub_14003E4A0(a1, (int)v7 + 24, -1, *(_DWORD *)(v7 + 12), (__int64)&v11, 0LL, 0LL, 0LL);
                goto LABEL_18;
              }
            }
          }
        }
      }
      else if ( (v3 & 0x7F077) != 0 )
      {
        v9 = *(_DWORD **)(a1 + 528);
        if ( v9 )
        {
          if ( *v9 )
          {
            v8 = sub_14003E448(a1, (int)v9 + 4 * (*v9 + 4 * (*v9 - 1)), (unsigned int)&v11, 0, 0LL);
LABEL_18:
            v2 = v8;
            if ( v8 >= 0 && v11 )
              return ((unsigned int (__fastcall *)(_QWORD, __int64))HalPrivateDispatchTable[147])(
                       *(unsigned int *)(a1 + 84),
                       v11);
          }
        }
      }
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
