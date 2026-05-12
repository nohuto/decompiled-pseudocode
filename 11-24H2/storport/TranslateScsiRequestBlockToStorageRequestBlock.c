/*
 * XREFs of TranslateScsiRequestBlockToStorageRequestBlock @ 0x140028180
 * Callers:
 *     TranslateToExtendedSrb @ 0x140027B60 (TranslateToExtendedSrb.c)
 * Callees:
 *     <none>
 */

void __fastcall TranslateScsiRequestBlockToStorageRequestBlock(__int64 a1, __int64 a2, char a3, char a4, int a5)
{
  int v6; // r8d
  int v7; // eax
  __int64 v8; // rax
  char v9; // al
  _DWORD *v10; // rax

  if ( a1 && a2 )
  {
    v6 = 0;
    *(_DWORD *)(a1 + 16) = a5;
    v7 = 2;
    *(_WORD *)(a1 + 36) = 2;
    *(_WORD *)a1 = 8;
    *(_BYTE *)(a1 + 2) = 40;
    *(_DWORD *)(a1 + 8) = 1397899864;
    *(_DWORD *)(a1 + 12) = 1;
    *(_DWORD *)(a1 + 52) = 128;
    if ( a3 )
    {
      if ( a4 )
        *(_DWORD *)(a1 + 52) = 136;
      else
        v7 = 1;
    }
    else
    {
      v7 = 0;
    }
    *(_DWORD *)(a1 + 56) = v7;
    *(_DWORD *)(a1 + 20) = *(unsigned __int8 *)(a2 + 2);
    *(_BYTE *)(a1 + 3) = *(_BYTE *)(a2 + 3);
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 12);
    *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 16);
    *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 24);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 20);
    *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 56);
    if ( *(_BYTE *)(a2 + 2) == 23 )
      v8 = 0LL;
    else
      v8 = *(_QWORD *)(a2 + 40);
    *(_QWORD *)(a1 + 112) = v8;
    v9 = *(_BYTE *)(a2 + 2);
    if ( v9 == 23 || (unsigned __int8)(v9 - 36) <= 1u )
    {
      *(_DWORD *)(a1 + 32) = 0;
      *(_WORD *)(a1 + 38) = 0;
    }
    else
    {
      *(_DWORD *)(a1 + 32) = *(unsigned __int8 *)(a2 + 8);
      *(_WORD *)(a1 + 38) = *(unsigned __int8 *)(a2 + 9);
      v6 = *(_DWORD *)(a2 + 64);
    }
    *(_DWORD *)(a1 + 44) = v6;
    v10 = *(_DWORD **)(a2 + 48);
    if ( v10 )
    {
      if ( *v10 == 523124044 )
      {
        *(_QWORD *)(a1 + 96) = v10;
        *(_QWORD *)(a1 + 80) = *(_QWORD *)(*(_QWORD *)(a2 + 48) + 176LL);
      }
      else
      {
        *(_QWORD *)(a1 + 80) = v10;
        *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 56);
      }
    }
  }
}
