/*
 * XREFs of KiAssignProcessorNumberToPrcb @ 0x1405B8790
 * Callers:
 *     KiConfigureInitialNodes @ 0x1405B89B8 (KiConfigureInitialNodes.c)
 *     KiInitializeProcessorState @ 0x14073A9E0 (KiInitializeProcessorState.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140339940 (KeQueryActiveProcessorCountEx.c)
 *     KiFindSubNodeForProcessorNumber @ 0x1405B8C38 (KiFindSubNodeForProcessorNumber.c)
 */

unsigned __int64 __fastcall KiAssignProcessorNumberToPrcb(__int64 a1, char *a2, int a3)
{
  __int64 v6; // rbp
  char v7; // dl
  bool v8; // zf
  bool v9; // cc
  __int64 v10; // r8
  __int64 v11; // rdx
  int v12; // r11d
  unsigned __int64 result; // rax
  unsigned int v14; // edi
  int i; // edx
  unsigned int j; // r10d
  __int64 v17; // r9
  __int64 v18; // [rsp+40h] [rbp+8h] BYREF

  v18 = 0LL;
  KiFindSubNodeForProcessorNumber(a2, 0LL, 0LL, &v18);
  v6 = v18;
  *(_QWORD *)(a1 + 192) = v18;
  v7 = *a2;
  *(_BYTE *)(a1 + 208) = *a2;
  *(_BYTE *)(a1 + 209) = a2[2];
  v8 = KeForceGroupAwareness == 0;
  *(_QWORD *)(a1 + 200) = 1LL << a2[2];
  if ( v8 )
  {
    if ( v7 )
      *(_BYTE *)(a1 + 4) = (unsigned __int8)a2[2] % KeQueryActiveProcessorCountEx(0);
    else
      *(_BYTE *)(a1 + 4) = a2[2];
  }
  else
  {
    v9 = *(_DWORD *)(a1 + 36) <= 0xFFu;
    *(_BYTE *)(a1 + 4) = *(_BYTE *)(a1 + 36);
    if ( !v9 )
      *(_BYTE *)(a1 + 4) = -1;
  }
  v10 = *(unsigned int *)(a1 + 36);
  v11 = *(unsigned __int8 *)(a1 + 209) + (*(unsigned __int8 *)(a1 + 208) << 6);
  v12 = 0;
  *((_DWORD *)KiGlobalState + v10) = v11;
  result = (unsigned __int64)qword_140F22998;
  *((_DWORD *)qword_140F22998 + v11) = v10;
  v14 = *(unsigned __int8 *)(v6 + 185);
  do
  {
    for ( i = 0; i < 2; ++i )
    {
      for ( j = 0; j < v14; ++j )
      {
        v17 = *(_QWORD *)(v6 + 192);
        result = j + (i + 2 * v12) * *(unsigned __int8 *)(v6 + 185);
        *(_QWORD *)(v17 + 24 * result + 16) |= *(_QWORD *)(a1 + 200);
        if ( !a3 )
        {
          *(_QWORD *)(v17 + 24 * result) |= *(_QWORD *)(a1 + 200);
          *(_QWORD *)(v17 + 24 * result + 8) |= *(_QWORD *)(a1 + 200);
        }
      }
    }
    ++v12;
  }
  while ( v12 < 7 );
  return result;
}
