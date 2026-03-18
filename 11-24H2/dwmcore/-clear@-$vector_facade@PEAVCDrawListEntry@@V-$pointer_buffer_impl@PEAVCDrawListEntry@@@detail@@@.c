/*
 * XREFs of ?clear@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@QEAAXXZ @ 0x18004FAF0
 * Callers:
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x18004FDB0 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800516E0 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ??1CDrawListCache@@EEAA@XZ @ 0x1801106D8 (--1CDrawListCache@@EEAA@XZ.c)
 *     ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x18013A290 (--_GCDrawListCache@@EEAAPEAXI@Z.c)
 *     ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x18013D1F0 (-Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x1801C6DE0 (-ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ.c)
 * Callees:
 *     ??$move@V?$move_iterator@PEAPEAVCDrawListEntry@@@std@@V?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@V?$move_iterator@PEAPEAVCDrawListEntry@@@0@0V12@@Z @ 0x18019C20C (--$move@V-$move_iterator@PEAPEAVCDrawListEntry@@@std@@V-$checked_array_iterator@PEAPEAVCDrawList.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall detail::vector_facade<CDrawListEntry *,detail::pointer_buffer_impl<CDrawListEntry *>>::clear(
        __int64 *a1)
{
  __int64 v1; // r9
  __int64 v2; // r8
  __int64 result; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rbx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r9
  __int64 v13; // rax
  _QWORD v14[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v15[40]; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  v1 = *a1;
  v2 = 1LL;
  result = *a1 & 3;
  if ( result == 1 )
  {
    v5 = v1 & 0xFFFFFFFFFFFFFFFCuLL;
    v6 = *(_QWORD *)((v1 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
    v7 = v1 & 0xFFFFFFFFFFFFFFFCuLL;
    goto LABEL_3;
  }
  if ( result == 2 )
  {
    v5 = 0LL;
  }
  else
  {
    v5 = (unsigned __int64)a1;
    if ( !result )
    {
      v6 = 1LL;
LABEL_16:
      v7 = (unsigned __int64)a1;
      goto LABEL_3;
    }
  }
  v6 = 0LL;
  v7 = result - 2;
  if ( result != 2 )
    goto LABEL_16;
LABEL_3:
  v8 = (__int64)(v5 + 8 * v6 - v7) >> 3;
  if ( !v8 )
    return result;
  if ( result == 1 )
  {
    v9 = v1 & 0xFFFFFFFFFFFFFFFCuLL;
    v10 = v1 & 0xFFFFFFFFFFFFFFFCuLL;
    v2 = *(_QWORD *)((v1 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
    goto LABEL_6;
  }
  if ( result == 2 )
  {
    v9 = 0LL;
  }
  else
  {
    v9 = (unsigned __int64)a1;
    if ( !result )
    {
LABEL_19:
      v10 = (unsigned __int64)a1;
      goto LABEL_6;
    }
  }
  v2 = 0LL;
  if ( result != 2 )
    goto LABEL_19;
  v10 = 0LL;
LABEL_6:
  v11 = (__int64)(v9 + 8 * v2 - v10) >> 3;
  if ( v8 <= v11 )
  {
    if ( result == 1 )
    {
      v12 = v1 & 0xFFFFFFFFFFFFFFFCuLL;
      goto LABEL_9;
    }
    if ( result )
    {
      v13 = result - 2;
      if ( !v13 )
      {
        v12 = 0LL;
LABEL_9:
        if ( v8 == v11 )
          goto LABEL_10;
        goto LABEL_42;
      }
      if ( v13 != 1 )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
    }
    v12 = (unsigned __int64)a1;
    goto LABEL_9;
  }
  std::_Xoverflow_error("overflow");
  __debugbreak();
LABEL_42:
  v14[0] = v12;
  v14[1] = v11;
  v14[2] = 0LL;
  ((void (__fastcall *)(_BYTE *, unsigned __int64, unsigned __int64, _QWORD *))std::move<std::move_iterator<CDrawListEntry * *>,stdext::checked_array_iterator<CDrawListEntry * *>>)(
    v15,
    v12 + 8 * v8,
    v12 + 8 * v11,
    v14);
LABEL_10:
  result = *a1 & 3;
  if ( result == 1 )
  {
    *(_QWORD *)((*a1 & 0xFFFFFFFFFFFFFFFCuLL) - 16) -= v8;
  }
  else
  {
    if ( !result )
      goto LABEL_26;
    result -= 2LL;
    if ( result )
    {
      if ( result != 1 )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
      if ( v8 != -1LL )
LABEL_26:
        *a1 = 2LL;
    }
  }
  return result;
}
