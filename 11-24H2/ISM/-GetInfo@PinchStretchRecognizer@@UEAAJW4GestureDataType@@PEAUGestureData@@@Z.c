/*
 * XREFs of ?GetInfo@PinchStretchRecognizer@@UEAAJW4GestureDataType@@PEAUGestureData@@@Z @ 0x1801B42A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PinchStretchRecognizer::GetInfo(__int64 a1, int a2, __int64 a3)
{
  int v3; // r11d
  int v4; // r10d
  int v5; // edi
  int v6; // ebx
  __int64 v8; // [rsp+50h] [rbp+18h]

  if ( *(_DWORD *)a3 != 56 || a2 != 6 || (*(_BYTE *)(a1 + 56) & 2) == 0 )
    return 2147942487LL;
  *(_QWORD *)(a3 + 4) = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a3 + 12) = *(_QWORD *)(a1 + 40);
  LODWORD(v8) = *(_DWORD *)(a1 + 32) - *(_DWORD *)(a1 + 16);
  HIDWORD(v8) = *(_DWORD *)(a1 + 36) - *(_DWORD *)(a1 + 20);
  *(_QWORD *)(a3 + 28) = v8;
  LODWORD(v8) = *(_DWORD *)(a1 + 40) - *(_DWORD *)(a1 + 24);
  HIDWORD(v8) = *(_DWORD *)(a1 + 44) - *(_DWORD *)(a1 + 28);
  *(_QWORD *)(a3 + 36) = v8;
  v3 = *(_DWORD *)(a1 + 24);
  v4 = *(_DWORD *)(a1 + 16);
  v5 = *(_DWORD *)(a1 + 20);
  v6 = *(_DWORD *)(a1 + 28);
  LODWORD(v8) = (*(_DWORD *)(a1 + 40) + *(_DWORD *)(a1 + 32)) / 2;
  HIDWORD(v8) = (*(_DWORD *)(a1 + 44) + *(_DWORD *)(a1 + 36)) / 2;
  *(_QWORD *)(a3 + 20) = v8;
  LODWORD(v8) = v8 - (v3 + v4) / 2;
  HIDWORD(v8) -= (v5 + v6) / 2;
  *(_QWORD *)(a3 + 44) = v8;
  *(_BYTE *)(a3 + 52) = (*(_BYTE *)(a1 + 56) & 1) == 0;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, 0xFFFFFFFFLL);
  return 0LL;
}
