/*
 * XREFs of ParseBooleanData @ 0x140140C80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_DD @ 0x140067CBC (WPP_SF_DD.c)
 *     TcglibEalLogError @ 0x140085AEC (TcglibEalLogError.c)
 */

__int64 __fastcall ParseBooleanData(int **a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rsi
  int v7; // r8d
  unsigned int *v8; // rdi
  char v9; // r8
  int v10; // r9d
  int v12; // [rsp+20h] [rbp-18h]
  __int64 v13; // [rsp+20h] [rbp-18h]
  int v14; // [rsp+20h] [rbp-18h]

  v4 = 0;
  if ( *(_DWORD *)(a3 + 8) != 5 || *(_DWORD *)(a3 + 12) != 1 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      v14 = MEMORY[0xC];
      WPP_SF_DD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xCu,
        (__int64)&WPP_0fcae427bce03ba20eb03603e1248831_Traceguids,
        MEMORY[8],
        v14);
    }
    v9 = 1;
    LOBYTE(v10) = MEMORY[8];
    v13 = MEMORY[0xC];
    goto LABEL_14;
  }
  v6 = *(_QWORD *)(a3 + 16);
  v7 = *(_DWORD *)(v6 + 8);
  v8 = (unsigned int *)(v6 + 12);
  if ( (unsigned int)(v7 - 7) > 7 || *v8 > 1 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      v12 = *v8;
      WPP_SF_DD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xDu,
        (__int64)&WPP_0fcae427bce03ba20eb03603e1248831_Traceguids,
        v7,
        v12);
    }
    v9 = 2;
    v10 = *(_DWORD *)(v6 + 8);
    v13 = *v8;
LABEL_14:
    v4 = -1073741435;
    TcglibEalLogError(*a1, "ErrInvalidBoolData", v9, v10, v13, 0LL);
    return v4;
  }
  *a4 = *(_BYTE *)(v6 + 16);
  return v4;
}
