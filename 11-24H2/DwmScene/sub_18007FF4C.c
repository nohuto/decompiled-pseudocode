/*
 * XREFs of sub_18007FF4C @ 0x18007FF4C
 * Callers:
 *     sub_180080000 @ 0x180080000 (sub_180080000.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_180045ACC @ 0x180045ACC (sub_180045ACC.c)
 */

__int64 *__fastcall sub_18007FF4C(__int64 a1, __int64 *a2, int a3, int a4, int a5, int a6, int a7)
{
  int v10; // ebx
  __int64 v11; // rax

  if ( a6 == 23 || a6 == 24 )
    v10 = ((a3 + 1) & 0xFFFFFFFE) * sub_180045ACC(a6);
  else
    v10 = a3 * sub_180045ACC(a6);
  v11 = sub_18001B1F8(40LL);
  if ( v11 )
  {
    *(_DWORD *)(v11 + 24) = a5;
    *(_QWORD *)v11 = &Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc::`vftable';
    *(_DWORD *)(v11 + 32) = a7;
    *(_DWORD *)(v11 + 8) = a3;
    *(_DWORD *)(v11 + 12) = v10;
    *(_DWORD *)(v11 + 16) = a4;
    *(_DWORD *)(v11 + 20) = a6;
  }
  *a2 = v11;
  return a2;
}
