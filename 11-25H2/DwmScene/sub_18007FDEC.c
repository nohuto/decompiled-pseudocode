/*
 * XREFs of sub_18007FDEC @ 0x18007FDEC
 * Callers:
 *     sub_18007FEA0 @ 0x18007FEA0 (sub_18007FEA0.c)
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_18004596C @ 0x18004596C (sub_18004596C.c)
 */

__int64 *__fastcall sub_18007FDEC(__int64 a1, __int64 *a2, int a3, int a4, int a5, int a6, int a7)
{
  int v10; // ebx
  __int64 v11; // rax

  if ( a6 == 23 || a6 == 24 )
    v10 = ((a3 + 1) & 0xFFFFFFFE) * sub_18004596C(a6);
  else
    v10 = a3 * sub_18004596C(a6);
  v11 = sub_18001B098(40LL);
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
