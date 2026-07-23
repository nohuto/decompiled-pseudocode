/*
 * XREFs of PiControlQueryDeviceRelations @ 0x140A341F0
 * Callers:
 *     <none>
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140438B40 (PiControlFreeUserModeCallersBuffer.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1408CDB40 (PiControlMakeUserModeCallersCopy.c)
 *     PiQueryDeviceRelations @ 0x140A3435C (PiQueryDeviceRelations.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiControlQueryDeviceRelations(__int64 a1, __int16 *a2, __int64 a3, char a4)
{
  unsigned __int16 v4; // cx
  void **v7; // rsi
  int v8; // eax
  unsigned int v9; // eax
  void *Pool2; // rdi
  int UserModeCallersCopy; // ebp
  int v13; // eax
  _OWORD v14[2]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+68h] [rbp+10h] BYREF

  v4 = *a2;
  v14[0] = 0LL;
  WORD1(v14[0]) = v4;
  LOWORD(v14[0]) = v4;
  if ( (unsigned __int16)(v4 - 1) <= 0x18Fu && (v4 & 1) == 0 )
  {
    *((_QWORD *)&v14[0] + 1) = 0LL;
    v7 = (void **)(a2 + 12);
    v8 = *((_DWORD *)a2 + 5);
    if ( v8 && *v7 )
      v9 = 2 * v8;
    else
      v9 = 0;
    v15 = v9;
    if ( v9 )
    {
      if ( a4 )
      {
        Pool2 = (void *)ExAllocatePool2(0x101uLL, v9, 0x20207050u);
        if ( !Pool2 )
        {
          UserModeCallersCopy = -1073741670;
LABEL_11:
          PiControlFreeUserModeCallersBuffer(a4, Pool2);
          PiControlFreeUserModeCallersBuffer(a4, *((void **)&v14[0] + 1));
          return (unsigned int)UserModeCallersCopy;
        }
        v4 = v14[0];
      }
      else
      {
        Pool2 = *v7;
      }
    }
    else
    {
      Pool2 = 0LL;
    }
    UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)v14 + 1, *((void **)a2 + 1), v4, 2LL, a4, 1);
    if ( UserModeCallersCopy >= 0 )
    {
      UserModeCallersCopy = PiQueryDeviceRelations(v14, *((unsigned int *)a2 + 4), &v15, Pool2);
      if ( Pool2 )
      {
        v13 = PiControlMakeUserModeCallersCopy((void **)a2 + 3, Pool2, 2 * *((_DWORD *)a2 + 5), 2LL, a4, 0);
        if ( v13 < 0 )
          UserModeCallersCopy = v13;
      }
      *((_DWORD *)a2 + 5) = v15 >> 1;
    }
    goto LABEL_11;
  }
  return 3221225485LL;
}
