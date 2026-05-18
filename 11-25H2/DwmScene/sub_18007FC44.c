/*
 * XREFs of sub_18007FC44 @ 0x18007FC44
 * Callers:
 *     sub_180044A9C @ 0x180044A9C (sub_180044A9C.c)
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_180037060 @ 0x180037060 (sub_180037060.c)
 *     sub_18007F228 @ 0x18007F228 (sub_18007F228.c)
 *     sub_18007FCD0 @ 0x18007FCD0 (sub_18007FCD0.c)
 */

_QWORD *__fastcall sub_18007FC44(_QWORD *a1, int a2)
{
  __int64 v4; // rax
  _QWORD *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a1;
  sub_18007F228(a1, 11, 5);
  *a1 = &Spectre::Engine::VertexBuffer::`vftable';
  v4 = sub_18001B098(40LL);
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
  sub_180037060(a1 + 14, (__int64 *)&v6);
  sub_18007FCD0(&v6);
  return a1;
}
