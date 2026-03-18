/*
 * XREFs of ?GetVertexCount@CGeometry2DGroup@@UEAAIXZ @ 0x18020BB20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGeometry2DGroup::GetVertexCount(CGeometry2DGroup *this)
{
  _DWORD *v1; // r8
  unsigned int v2; // esi
  int v3; // eax
  __int64 result; // rax
  _QWORD *v6; // rbp
  int v7; // r14d
  _QWORD *i; // rdi

  v1 = (_DWORD *)((char *)this + 40);
  v2 = 0;
  v3 = *((_DWORD *)this + 10);
  *((_DWORD *)this + 10) = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6;
  if ( (((unsigned __int8)v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6) & 6) == 2 )
  {
    if ( (*((_BYTE *)this + 160) & 4) != 0 )
    {
      v6 = (_QWORD *)*((_QWORD *)this + 12);
      v7 = 0;
      for ( i = (_QWORD *)*((_QWORD *)this + 11); i != v6; ++i )
      {
        if ( *i )
          v7 += (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 184LL))(*i);
      }
      *((_DWORD *)this + 40) &= ~4u;
      v1 = (_DWORD *)((char *)this + 40);
      *((_DWORD *)this + 35) = v7;
    }
    v2 = *((_DWORD *)this + 35);
  }
  result = v2;
  *v1 ^= (*v1 ^ (2 * (*v1 >> 1) - 2)) & 6;
  return result;
}
