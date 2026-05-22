/*
 * XREFs of ?ConstructInputNotificationFromMouseInputMessage@@YA?AU_InputMessageNotification@@AEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x1800EEA50
 * Callers:
 *     ?ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x180037FA0 (-ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConstructInputNotificationFromMouseInputMessage(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  int v4; // eax
  __int128 v5; // xmm0
  int v6; // eax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int64 v13; // rax
  __int128 v14; // xmm0
  __int64 result; // rax
  __int128 v16; // xmm1

  v2 = *(_OWORD *)(a2 + 72);
  *(_DWORD *)(a1 + 116) = 0;
  *(_DWORD *)(a1 + 140) = 0;
  v3 = *(_OWORD *)(a2 + 88);
  v4 = *(_DWORD *)(a2 + 192);
  *(_OWORD *)a1 = v2;
  *(_DWORD *)(a1 + 112) = v4;
  v5 = *(_OWORD *)(a2 + 104);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 200);
  v6 = *(unsigned __int16 *)(a2 + 56);
  *(_OWORD *)(a1 + 16) = v3;
  v7 = *(_OWORD *)(a2 + 120);
  *(_OWORD *)(a1 + 32) = v5;
  v8 = *(_OWORD *)(a2 + 136);
  *(_OWORD *)(a1 + 48) = v7;
  v9 = *(_OWORD *)(a2 + 152);
  *(_OWORD *)(a1 + 64) = v8;
  v10 = *(_OWORD *)(a2 + 168);
  *(_OWORD *)(a1 + 80) = v9;
  v11 = *(_OWORD *)(a2 + 224);
  *(_OWORD *)(a1 + 96) = v10;
  v12 = *(_OWORD *)(a2 + 208);
  *(_QWORD *)(a1 + 128) = (*(unsigned __int16 *)(a2 + 60) << 16) | v6;
  *(_DWORD *)(a1 + 136) = *(_DWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 144) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 152) = *(_QWORD *)a2;
  v13 = *(_QWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 168) = v12;
  *(_QWORD *)(a1 + 160) = v13;
  v14 = *(_OWORD *)(a2 + 240);
  *(_DWORD *)(a1 + 232) = *(_DWORD *)(a2 + 272);
  LODWORD(v13) = *(_DWORD *)(a2 + 300);
  *(_OWORD *)(a1 + 184) = v11;
  *(_DWORD *)(a1 + 236) = v13;
  result = a1;
  v16 = *(_OWORD *)(a2 + 256);
  *(_OWORD *)(a1 + 200) = v14;
  *(_OWORD *)(a1 + 216) = v16;
  return result;
}
