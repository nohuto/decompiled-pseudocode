/*
 * XREFs of sub_18007FF00 @ 0x18007FF00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_18007FCD0 @ 0x18007FCD0 (sub_18007FCD0.c)
 */

__int64 *__fastcall sub_18007FF00(__int64 a1, __int64 *a2, int a3, int a4, int a5, int a6, int a7)
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
  v12 = sub_18001B098(40LL);
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
  sub_18007FCD0(&v14);
  return a2;
}
