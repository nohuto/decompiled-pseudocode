/*
 * XREFs of ParseAssignNamespace @ 0x14013D4F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x140055B28 (WPP_SF_d.c)
 *     WPP_SF_DD @ 0x140067CBC (WPP_SF_DD.c)
 *     TcglibEalLogError @ 0x140085AEC (TcglibEalLogError.c)
 *     TcglibReverseBytes @ 0x14013C3EC (TcglibReverseBytes.c)
 *     GetTokenData @ 0x140141D08 (GetTokenData.c)
 *     memmove @ 0x140143780 (memmove.c)
 */

__int64 __fastcall ParseAssignNamespace(int **a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int *v5; // rbx
  unsigned int v6; // edi
  __int64 v9; // rbx
  __int64 v10; // rcx
  const void *TokenData; // rax
  size_t v12; // r8
  const char *v13; // rdx
  char v14; // r8
  int v15; // r9d
  __int64 v17; // [rsp+20h] [rbp-18h]
  int v18; // [rsp+20h] [rbp-18h]

  v5 = (unsigned int *)(a3 + 12);
  v6 = 0;
  if ( *(_QWORD *)(a3 + 8) != 0x200000005LL )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      v18 = *v5;
      WPP_SF_DD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xAu,
        (__int64)&WPP_049e0c7a54583f65b6c0044bb56b30ca_Traceguids,
        *(_DWORD *)(a3 + 8),
        v18);
    }
    v13 = "ErrInvalidAssignNamespaceResult";
    v14 = 1;
    v15 = *(_DWORD *)(a3 + 8);
    v17 = *v5;
    goto LABEL_12;
  }
  v9 = *(_QWORD *)(a3 + 16);
  if ( *(_QWORD *)(v9 + 8) != 0x80000000FLL )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xBu,
        (__int64)&WPP_049e0c7a54583f65b6c0044bb56b30ca_Traceguids,
        *(_DWORD *)(v9 + 8));
    v13 = "ErrInvalidBandMetadata";
    v17 = 0LL;
    v14 = 2;
    v15 = *(_DWORD *)(v9 + 8);
LABEL_12:
    v6 = -1073741435;
    TcglibEalLogError(*a1, v13, v14, v15, v17, 0LL);
    return v6;
  }
  v10 = *(_QWORD *)(a3 + 16);
  *a4 = 0LL;
  TokenData = (const void *)GetTokenData(v10, a2, *(unsigned int *)(v9 + 12));
  memmove(a4, TokenData, v12);
  TcglibReverseBytes((char *)a4, 8u);
  return v6;
}
