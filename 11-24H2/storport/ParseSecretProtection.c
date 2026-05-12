/*
 * XREFs of ParseSecretProtection @ 0x140140530
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_DD @ 0x140067CBC (WPP_SF_DD.c)
 *     TcglibEalLogError @ 0x140085AEC (TcglibEalLogError.c)
 *     WPP_SF_ddi @ 0x140140960 (WPP_SF_ddi.c)
 */

__int64 __fastcall ParseSecretProtection(int **a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  unsigned int *v5; // rdi
  __int64 v9; // rsi
  unsigned int *v10; // rdi
  __int64 v11; // rsi
  __int64 *v12; // rdi
  __int64 v13; // rdi
  int v14; // r9d
  char v15; // r8
  int v16; // r9d
  __int64 *i; // rdx
  __int64 v18; // rcx
  __int64 v20; // [rsp+20h] [rbp-18h]
  __int64 v21; // [rsp+28h] [rbp-10h]

  v4 = 0;
  v5 = (unsigned int *)(a3 + 12);
  *a4 = 0LL;
  if ( *(_QWORD *)(a3 + 8) != 0x100000005LL )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_DD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xEu,
        (__int64)&WPP_23f3f4b30f18360abc2b8cd6e59d0a71_Traceguids,
        *(_DWORD *)(a3 + 8),
        *v5);
    v18 = *v5;
    v15 = 1;
    v16 = *(_DWORD *)(a3 + 8);
    v21 = 0LL;
    goto LABEL_35;
  }
  v9 = *(_QWORD *)(a3 + 16);
  v10 = (unsigned int *)(v9 + 12);
  if ( *(_QWORD *)(v9 + 8) != 0x100000005LL )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_DD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xFu,
        (__int64)&WPP_23f3f4b30f18360abc2b8cd6e59d0a71_Traceguids,
        *(_DWORD *)(v9 + 8),
        *v10);
    v15 = 2;
    v21 = 0LL;
    v16 = *(_DWORD *)(v9 + 8);
    v20 = *v10;
    goto LABEL_36;
  }
  v11 = *(_QWORD *)(v9 + 16);
  if ( *(_QWORD *)(v11 + 8) != 0x200000006LL || (v12 = *(__int64 **)(v11 + 16)) == 0LL )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_DD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x10u,
        (__int64)&WPP_23f3f4b30f18360abc2b8cd6e59d0a71_Traceguids,
        *(_DWORD *)(v11 + 8),
        *(_DWORD *)(v11 + 12));
    v15 = 3;
    v21 = 0LL;
    v16 = *(_DWORD *)(v11 + 8);
    v20 = *(unsigned int *)(v11 + 12);
    goto LABEL_36;
  }
  if ( (unsigned int)(*((_DWORD *)v12 + 2) - 7) > 7 || *((_DWORD *)v12 + 3) > 4u || v12[2] != 3 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_ddi(WPP_GLOBAL_Control->AttachedDevice);
    v15 = 4;
    v18 = *((unsigned int *)v12 + 3);
    v16 = *((_DWORD *)v12 + 2);
    v21 = v12[2];
LABEL_35:
    v20 = v18;
LABEL_36:
    v4 = -1073741435;
    TcglibEalLogError(*a1, "ErrInvalidSecretProtection", v15, v16, v20, v21);
    return v4;
  }
  v13 = *v12;
  v14 = *(_DWORD *)(v13 + 8);
  if ( v14 != 5 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_DD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x12u,
        (__int64)&WPP_23f3f4b30f18360abc2b8cd6e59d0a71_Traceguids,
        v14,
        *(_DWORD *)(v13 + 12));
    v15 = 5;
    v21 = 0LL;
    v16 = *(_DWORD *)(v13 + 8);
    v20 = *(unsigned int *)(v13 + 12);
    goto LABEL_36;
  }
  for ( i = *(__int64 **)(v13 + 16); i; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 2) == 8 )
      *a4 |= 1LL << *((_BYTE *)i + 16);
  }
  return v4;
}
