/*
 * XREFs of ?_AreAllItemsCurated@CAppLayout@@AEAAHXZ @ 0x1806C5400
 * Callers:
 *     ?IsCurated@CAppLayout@@UEAAHPEAUIAppLayoutItem@@@Z @ 0x1806C4400 (-IsCurated@CAppLayout@@UEAAHPEAUIAppLayoutItem@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x18067EEB4 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?VerifyLayout@CAppLayout@@UEAAJXZ @ 0x1806C4D70 (-VerifyLayout@CAppLayout@@UEAAJXZ.c)
 *     ?_GetItemCountOfType@CAppLayout@@AEAAIW4APP_LAYOUT_ITEM_TYPE@@@Z @ 0x1806C5AD8 (-_GetItemCountOfType@CAppLayout@@AEAAIW4APP_LAYOUT_ITEM_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppLayout::_AreAllItemsCurated(RTL_SRWLOCK *this)
{
  unsigned int v2; // ebx
  int ItemCountOfType; // esi
  int v4; // edi
  int v5; // ebx
  struct tagSIZE Ptr_low; // rdx
  enum DEVICE_SCALE_FACTOR v7; // r8d
  int v8; // eax
  unsigned int v9; // ecx
  PVOID Ptr; // r15
  int v11; // eax
  unsigned __int64 v12; // rdi
  unsigned int v13; // r14d
  _QWORD **v14; // rax
  int v15; // esi
  __int64 v16; // rcx
  __int64 v17; // rcx
  ImmersiveApplicationLayout *v19[2]; // [rsp+20h] [rbp-48h] BYREF

  v2 = 0;
  if ( (int)CAppLayout::VerifyLayout(this + 5) >= 0 )
  {
    ItemCountOfType = CAppLayout::_GetItemCountOfType(this, 1LL);
    v4 = CAppLayout::_GetItemCountOfType(this, 4LL);
    v5 = CAppLayout::_GetItemCountOfType(this, 2LL);
    Ptr_low = (struct tagSIZE)LODWORD(this[10].Ptr);
    LODWORD(v19[0]) = LODWORD(this[9].Ptr) - LODWORD(this[8].Ptr);
    HIDWORD(v19[0]) = HIDWORD(this[9].Ptr) - HIDWORD(this[8].Ptr);
    v8 = ImmersiveApplicationLayout::ComputeGutterWidth(v19[0], Ptr_low, v7);
    v9 = v4 + ItemCountOfType;
    Ptr = this[14].Ptr;
    v11 = v5 * v8;
    v12 = 0LL;
    v2 = 1;
    v13 = (LODWORD(this[9].Ptr) - v11 - LODWORD(this[8].Ptr)) / v9;
    if ( Ptr )
    {
      do
      {
        if ( !v2 )
          break;
        v14 = (_QWORD **)this[13].Ptr;
        *(_OWORD *)v19 = 0LL;
        (*(void (__fastcall **)(_QWORD *, _QWORD, ImmersiveApplicationLayout **))(*v14[v12] + 56LL))(v14[v12], 0LL, v19);
        v15 = LODWORD(v19[1]) - LODWORD(v19[0]);
        v16 = *((_QWORD *)this[13].Ptr + v12);
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v16 + 24LL))(v16) != 1 )
        {
          v17 = *((_QWORD *)this[13].Ptr + v12);
          if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v17 + 24LL))(v17) != 4 )
            continue;
        }
        if ( v15 != v13 && v15 != v13 + 1 )
          v2 = 0;
        ++v12;
      }
      while ( v12 < (unsigned __int64)Ptr );
    }
  }
  return v2;
}
