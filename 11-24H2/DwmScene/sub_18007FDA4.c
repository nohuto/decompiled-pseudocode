/*
 * XREFs of sub_18007FDA4 @ 0x18007FDA4
 * Callers:
 *     sub_180044BFC @ 0x180044BFC (sub_180044BFC.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_1800371C0 @ 0x1800371C0 (sub_1800371C0.c)
 *     sub_18007F388 @ 0x18007F388 (sub_18007F388.c)
 *     sub_18007FE30 @ 0x18007FE30 (sub_18007FE30.c)
 */

_QWORD *__fastcall sub_18007FDA4(_QWORD *a1, int a2)
{
  __int64 v4; // rax
  _QWORD *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a1;
  sub_18007F388(a1, 11, 5);
  *a1 = &Spectre::Engine::VertexBuffer::`vftable';
  v4 = sub_18001B1F8(40LL);
  if ( v4 )
  {
    *(_QWORD *)(v4 + 8) = 0LL;
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_DWORD *)(v4 + 24) = 0;
    *(_QWORD *)v4 = &Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc::`vftable';
    *(_DWORD *)(v4 + 32) = a2;
  }
  else
  {
    v4 = 0LL;
  }
  v6 = (_QWORD *)v4;
  sub_1800371C0(a1 + 14, (__int64 *)&v6);
  sub_18007FE30(&v6);
  return a1;
}
