/*
 * XREFs of ?HampClientSerializeActivities@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@@Z @ 0x18006A6CC
 * Callers:
 *     ?HampClientStart@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAXKKPEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@@Z @ 0x18003D168 (-HampClientStart@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAXKKPEAU_HAM_CLIENT_CONNECTION_PARA.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF00 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x1800575E0 (-RtlULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ?HampClientGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18006A69C (-HampClientGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 */

__int64 __fastcall HampClientSerializeActivities(
        struct _HAM_CLIENT_CONTEXT *a1,
        struct _HAM_CLIENT_CONNECTION_PARAMETERS *a2)
{
  __int64 v2; // r8
  unsigned int v3; // edi
  __int64 v4; // r10
  bool v7; // zf
  __int64 i; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 result; // rax
  _DWORD *Heap; // rax
  _DWORD *v13; // rbx
  size_t v14; // r8
  struct _HAM_ACTIVITY *FirstActivity; // r8
  __int16 v16; // ax
  __int16 v17; // cx
  __int64 v18; // rdx
  __int64 v19; // rcx
  size_t Size; // [rsp+30h] [rbp+8h] BYREF

  Size = 0LL;
  v2 = *((_QWORD *)a1 + 7);
  v3 = 0;
  v4 = 0LL;
  v7 = v2 == (_QWORD)a1 + 56;
  for ( i = v2 - 48; ; i = v9 - 48 )
  {
    if ( !v7 )
      v4 = i;
    if ( !v4 )
      break;
    if ( v3 + 1 < v3 )
      return 3221225621LL;
    v9 = *(_QWORD *)(v4 + 48);
    ++v3;
    v10 = *(_QWORD *)(v4 + 64);
    v4 = 0LL;
    v7 = v9 == v10 + 56;
  }
  if ( v3 )
  {
    result = RtlULongLongMult(v3, 0x98uLL, &Size);
    if ( (int)result < 0 )
      return result;
    Heap = HampAllocateHeap(Size);
    *((_QWORD *)a2 + 1) = Heap;
    v13 = Heap;
    if ( !Heap )
      return 3221225495LL;
    v14 = Size;
    *((_DWORD *)a2 + 4) = v3;
    memset_0(Heap, 0, v14);
    FirstActivity = HampClientGetFirstActivity(a1);
    while ( FirstActivity )
    {
      if ( *((_BYTE *)FirstActivity + 562) == 3 )
        v13[36] |= 1u;
      *(_QWORD *)v13 = *((_QWORD *)FirstActivity + 5);
      *((_OWORD *)v13 + 1) = *(_OWORD *)((char *)FirstActivity + 124);
      *((_OWORD *)v13 + 2) = *(_OWORD *)((char *)FirstActivity + 140);
      *((_OWORD *)v13 + 3) = *(_OWORD *)((char *)FirstActivity + 156);
      *((_OWORD *)v13 + 4) = *(_OWORD *)((char *)FirstActivity + 172);
      *((_OWORD *)v13 + 5) = *(_OWORD *)((char *)FirstActivity + 188);
      *((_OWORD *)v13 + 6) = *(_OWORD *)((char *)FirstActivity + 204);
      *((_OWORD *)v13 + 7) = *(_OWORD *)((char *)FirstActivity + 220);
      *((_OWORD *)v13 + 8) = *(_OWORD *)((char *)FirstActivity + 236);
      v13[3] = *((_DWORD *)FirstActivity + 106);
      *((_WORD *)v13 + 5) = 7;
      v16 = *((_WORD *)v13 + 4) ^ (*((_WORD *)v13 + 4) ^ (2 * (*((_DWORD *)FirstActivity + 28) >> 7))) & 6;
      *((_WORD *)v13 + 4) = v16;
      v17 = v16 ^ ((unsigned __int8)v16 ^ (unsigned __int8)(8 * (*((_DWORD *)FirstActivity + 28) >> 14))) & 8;
      *((_WORD *)v13 + 4) = v17;
      *((_WORD *)v13 + 4) = v17 ^ (v17 ^ (*((_DWORD *)FirstActivity + 28) >> 9)) & 1;
      v13 += 38;
      v18 = *((_QWORD *)FirstActivity + 6);
      v19 = *((_QWORD *)FirstActivity + 8);
      FirstActivity = 0LL;
      if ( v18 != v19 + 56 )
        FirstActivity = (struct _HAM_ACTIVITY *)(v18 - 48);
    }
  }
  return 0LL;
}
