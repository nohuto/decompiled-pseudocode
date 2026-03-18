/*
 * XREFs of ??0BufferingMessageCallHost@BamoImpl@Microsoft@@QEAA@PEAUIMessageCallSendHost@@@Z @ 0x180278068
 * Callers:
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x1802790B0 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

Microsoft::BamoImpl::BufferingMessageCallHost *__fastcall Microsoft::BamoImpl::BufferingMessageCallHost::BufferingMessageCallHost(
        Microsoft::BamoImpl::BufferingMessageCallHost *this,
        struct IMessageCallSendHost *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi

  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &Microsoft::BamoImpl::BufferingMessageCallHost::`vftable'{for `Microsoft::BamoImpl::BamoImplObject'};
  *((_QWORD *)this + 2) = &Microsoft::BamoImpl::BufferingMessageCallHost::`vftable'{for `IMessageCallSendHost'};
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  *(_QWORD *)v4 = v4;
  *(_QWORD *)(v4 + 8) = v4;
  *(_QWORD *)(v4 + 16) = v4;
  *(_WORD *)(v4 + 24) = 257;
  *((_QWORD *)this + 4) = v4;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_BYTE *)this + 72) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  v5 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IMessageCallSendHost *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return this;
}
