/*
 * XREFs of ?SendDeviceCommand@InputStateManager@@UEAAJKPEAUDeviceCommandMessage@@@Z @ 0x180077F70
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$?RW4_Button@@@?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@QEBA_KAEBW4_Button@@@Z @ 0x180027528 (--$-RW4_Button@@@-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@std@@U-$equal_to@W4_Button@@@3@.c)
 *     ??$_Destroy_range@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@std@@@std@@YAXPEAU?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@0@QEAU10@AEAV?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@0@@Z @ 0x1800383E8 (--$_Destroy_range@V-$allocator@U-$pair@KV-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@std.c)
 *     ??$emplace_back@AEBKAEAPEAUIRawInputProvider@@@?$vector@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@QEAA?A_TAEBKAEAPEAUIRawInputProvider@@@Z @ 0x18008B338 (--$emplace_back@AEBKAEAPEAUIRawInputProvider@@@-$vector@U-$pair@KV-$ComPtr@UIRawInputProvider@@@.c)
 *     ??$_Emplace_reallocate@AEBKAEAPEAUIRawInputProvider@@@?$vector@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@AEAAPEAU?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@1@QEAU21@AEBKAEAPEAUIRawInputProvider@@@Z @ 0x18008B384 (--$_Emplace_reallocate@AEBKAEAPEAUIRawInputProvider@@@-$vector@U-$pair@KV-$ComPtr@UIRawInputProv.c)
 *     ??$_Reallocate@$0A@@?$vector@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@AEAAXAEA_K@Z @ 0x1800CCF18 (--$_Reallocate@$0A@@-$vector@U-$pair@KV-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V-$all.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputStateManager::SendDeviceCommand(RTL_SRWLOCK *this, int a2, struct DeviceCommandMessage *a3)
{
  RTL_SRWLOCK *v6; // rsi
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  _QWORD **v9; // rdi
  _QWORD *i; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *Ptr; // rdx
  _QWORD *v14; // rax
  _QWORD *v15; // rdx
  char *v16; // rbx
  __int128 j; // rdi
  __int128 v19; // [rsp+20h] [rbp-20h] BYREF
  __int64 v20; // [rsp+30h] [rbp-10h]
  unsigned __int64 v21; // [rsp+70h] [rbp+30h] BYREF
  int v22; // [rsp+78h] [rbp+38h] BYREF
  RTL_SRWLOCK *v23; // [rsp+88h] [rbp+48h]

  v22 = a2;
  v19 = 0LL;
  v20 = 0LL;
  v6 = this + 20;
  AcquireSRWLockShared(this + 20);
  v23 = v6;
  if ( a2 )
  {
    v11 = std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>::operator()<enum _Button>(
            v7,
            (__int64)&v22);
    v12 = 2 * (v11 & (__int64)this[18].Ptr);
    Ptr = this[15].Ptr;
    v14 = (_QWORD *)Ptr[2 * (v11 & (__int64)this[18].Ptr) + 1];
    if ( v14 == this[13].Ptr )
    {
LABEL_14:
      v14 = 0LL;
    }
    else
    {
      v15 = (_QWORD *)Ptr[v12];
      while ( a2 != *((_DWORD *)v14 + 4) )
      {
        if ( v14 == v15 )
          goto LABEL_14;
        v14 = (_QWORD *)v14[1];
      }
    }
    if ( !v14 )
      v14 = this[13].Ptr;
    if ( v14 != this[13].Ptr )
      std::vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>::_Emplace_reallocate<unsigned long const &,IRawInputProvider * &>(
        &v19,
        0LL,
        v14 + 2,
        v14 + 3);
  }
  else
  {
    v8 = (unsigned __int64)this[14].Ptr;
    v21 = v8;
    if ( v8 )
    {
      if ( v8 > 0xFFFFFFFFFFFFFFFLL )
        std::_Xlength_error("vector too long");
      std::vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>::_Reallocate<0>(&v19, &v21);
    }
    v9 = (_QWORD **)this[13].Ptr;
    for ( i = *v9; i != v9; i = (_QWORD *)*i )
      std::vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>::emplace_back<unsigned long const &,IRawInputProvider * &>(
        &v19,
        i + 2,
        i + 3);
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  v16 = (char *)v19;
  for ( j = v19; (_QWORD)j != *((_QWORD *)&j + 1); *(_QWORD *)&j = j + 16 )
    (*(void (__fastcall **)(_QWORD, _QWORD, struct DeviceCommandMessage *))(**(_QWORD **)(j + 8) + 24LL))(
      *(_QWORD *)(j + 8),
      *(unsigned int *)j,
      a3);
  if ( v16 )
  {
    std::_Destroy_range<std::allocator<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>>(
      (__int64)v16,
      *((__int64 *)&j + 1));
    std::_Deallocate<16,0>(v16, (const struct std::nothrow_t *)((v20 - (_QWORD)v16) & 0xFFFFFFFFFFFFFFF0uLL));
  }
  return 0LL;
}
