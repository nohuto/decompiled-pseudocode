/*
 * XREFs of sub_180080060 @ 0x180080060
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18007FE30 @ 0x18007FE30 (sub_18007FE30.c)
 */

__int64 *__fastcall sub_180080060(__int64 a1, __int64 *a2, int a3, int a4, int a5, int a6, int a7)
{
  __int64 v7; // rdi
  int v11; // edi
  __int64 v12; // rax
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v7 = *(_QWORD *)(a1 + 112);
  if ( v7 )
    v11 = *(_DWORD *)(v7 + 32);
  else
    v11 = -1;
  v12 = sub_18001B1F8(40LL);
  if ( v12 )
  {
    *(_DWORD *)(v12 + 16) = a5;
    *(_DWORD *)(v12 + 20) = a7;
    *(_DWORD *)(v12 + 24) = a6;
    *(_QWORD *)v12 = &Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc::`vftable';
    *(_DWORD *)(v12 + 8) = a3;
    *(_DWORD *)(v12 + 12) = a4;
    *(_DWORD *)(v12 + 32) = v11;
  }
  v14 = 0LL;
  *a2 = v12;
  sub_18007FE30(&v14);
  return a2;
}
