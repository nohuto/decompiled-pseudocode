/*
 * XREFs of RegisterHiddenIdleStates @ 0x1400342B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14000D700 (_guard_dispatch_icall.c)
 *     DecodeAcpi2CState @ 0x1400244F0 (DecodeAcpi2CState.c)
 *     DecodeAcpiIdleState @ 0x140024548 (DecodeAcpiIdleState.c)
 */

__int64 __fastcall RegisterHiddenIdleStates(__int64 a1)
{
  unsigned int v2; // edx
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // r8d
  __int64 i; // r8
  __int64 v7; // r9
  int v8; // eax
  _DWORD *v9; // r8
  unsigned __int64 v11; // [rsp+50h] [rbp+8h] BYREF

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
                v8 = DecodeAcpiIdleState(
                       a1,
                       (char *)(v7 + 24),
                       0xFFFFFFFF,
                       *(unsigned int *)(v7 + 12),
                       &v11,
                       0LL,
                       0LL,
                       0LL);
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
            v8 = DecodeAcpi2CState(a1, (__int64)&v9[4 * (*v9 - 1) + 1 + *v9 - 1], (__int64)&v11, 0LL, 0LL);
LABEL_18:
            v2 = v8;
            if ( v8 >= 0 && v11 )
              return ((unsigned int (__fastcall *)(_QWORD, unsigned __int64))HalPrivateDispatchTable[147])(
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
