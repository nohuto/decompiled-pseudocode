/*
 * XREFs of sub_180080160 @ 0x180080160
 * Callers:
 *     sub_180080100 @ 0x180080100 (sub_180080100.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_1800371C0 @ 0x1800371C0 (sub_1800371C0.c)
 *     sub_18007FE30 @ 0x18007FE30 (sub_18007FE30.c)
 */

__int64 __fastcall sub_180080160(__int64 a1, int a2)
{
  __int64 *v2; // rbx
  _DWORD *v4; // rax
  int v5; // r12d
  int v6; // r15d
  int v7; // r14d
  int v8; // ebp
  int v9; // esi
  __int64 v10; // rax
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = (__int64 *)(a1 + 96);
  v4 = *(_DWORD **)(a1 + 96);
  if ( v4 )
  {
    v5 = v4[6];
    v6 = v4[5];
    v7 = v4[4];
    v8 = v4[3];
    v9 = v4[2];
  }
  else
  {
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v9 = 0;
  }
  v10 = sub_18001B1F8(40LL);
  if ( v10 )
  {
    *(_DWORD *)(v10 + 8) = v9;
    *(_QWORD *)v10 = &Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc::`vftable';
    *(_DWORD *)(v10 + 12) = v8;
    *(_DWORD *)(v10 + 16) = v7;
    *(_DWORD *)(v10 + 20) = v6;
    *(_DWORD *)(v10 + 24) = v5;
    *(_DWORD *)(v10 + 32) = a2;
  }
  v12 = v10;
  sub_1800371C0(v2, &v12);
  return sub_18007FE30(&v12);
}
