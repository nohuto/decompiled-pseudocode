/*
 * XREFs of ?ConstructInputInteropMessageFromMouseInputMessageForWheel@@YA?AU_MIT_INPUT_INTEROP_MESSAGE@@AEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x1800813C8
 * Callers:
 *     ?ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x180034A30 (-ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18009D598 (memset_0.c)
 */

__int64 __fastcall ConstructInputInteropMessageFromMouseInputMessageForWheel(__int64 a1, __int64 a2)
{
  __int64 v4; // rax

  memset_0((void *)(a1 + 4), 0, 0x194uLL);
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 156) = 1;
  *(_OWORD *)(a1 + 312) = *(_OWORD *)(a2 + 104);
  *(_OWORD *)(a1 + 328) = *(_OWORD *)(a2 + 120);
  *(_OWORD *)(a1 + 344) = *(_OWORD *)(a2 + 136);
  *(_DWORD *)(a1 + 360) = *(_DWORD *)(a2 + 184);
  v4 = -1LL;
  if ( *(_QWORD *)a2 )
    v4 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 184) = v4;
  *(_DWORD *)(a1 + 172) = 1;
  *(_DWORD *)(a1 + 168) = 4;
  *(_DWORD *)(a1 + 176) = *(_DWORD *)(a2 + 276);
  *(_DWORD *)(a1 + 236) = 1;
  *(_DWORD *)(a1 + 232) = *(_DWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 248) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a1 + 208) = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(a1 + 216) = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a1 + 224) = *(_QWORD *)(a2 + 64);
  *(_DWORD *)(a1 + 244) = *(_DWORD *)(a2 + 280);
  *(_DWORD *)(a1 + 180) = (*(_WORD *)(a2 + 12) & 0x400) != 0 ? 0x80000 : 0x100000;
  *(_OWORD *)(a1 + 384) = *(_OWORD *)(a2 + 284);
  *(_DWORD *)(a1 + 240) = *(__int16 *)(a2 + 14);
  return a1;
}
