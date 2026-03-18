/*
 * XREFs of ?GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEBX0@Z @ 0x1801D4D7C
 * Callers:
 *     ?CheckPrimitives@CRenderData@@AEAAJXZ @ 0x1801315F0 (-CheckPrimitives@CRenderData@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDataBlockReader::GetFirstItemSafe(
        __int64 **this,
        unsigned int *a2,
        unsigned int **a3,
        unsigned int *a4)
{
  __int64 *v4; // rax
  __int64 v8; // rcx
  unsigned int *v9; // rbx
  unsigned __int64 v10; // rax
  unsigned int v11; // edx
  unsigned __int64 v12; // r8
  unsigned int *v13; // rcx
  __int64 *v15; // rax

  v4 = *this;
  v8 = **this;
  if ( v4 == (__int64 *)v8 )
    return 1;
  this[1] = (__int64 *)v8;
  v9 = (unsigned int *)(v8 + 24);
  v10 = *(unsigned int *)(v8 + 20);
  v11 = 0;
  this[2] = (__int64 *)(v8 + 24);
  *((_DWORD *)this + 8) = v10;
  this[3] = (__int64 *)(v8 + 24);
  if ( !(_DWORD)v10 )
  {
    v15 = *this;
    *a3 = 0LL;
    *a4 = 0;
    v11 = 1;
    if ( *(__int64 **)v8 == v15 )
      return v11;
    return (unsigned int)-2147467259;
  }
  if ( v10 < 8 )
    return (unsigned int)-2147467259;
  v12 = *v9;
  if ( (unsigned int)v12 < 8 || (v12 & 3) != 0 || v12 > v10 )
    return (unsigned int)-2147467259;
  v13 = (unsigned int *)(v8 + 28);
  *a3 = v13;
  *a2 = *v13;
  *a4 = v12 - 4;
  this[3] = (__int64 *)((char *)v9 + v12);
  return v11;
}
