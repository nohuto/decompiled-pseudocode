/*
 * XREFs of ?Disconnect@SipcEndpoint@@UEAAXXZ @ 0x18010CD60
 * Callers:
 *     ?DispatchNextCallback@SipcServer@@UEAAJXZ @ 0x180062840 (-DispatchNextCallback@SipcServer@@UEAAJXZ.c)
 *     ?DispatchNextCallback@SipcEndpoint@@QEAAJPEAX@Z @ 0x180062D50 (-DispatchNextCallback@SipcEndpoint@@QEAAJPEAX@Z.c)
 *     ?OnDisposePublic@SipcEndpoint@@EEAAXXZ @ 0x18010D900 (-OnDisposePublic@SipcEndpoint@@EEAAXXZ.c)
 *     ?RemoveOwner@SipcEndpoint@@QEAAXXZ @ 0x18010E52C (-RemoveOwner@SipcEndpoint@@QEAAXXZ.c)
 * Callees:
 *     ?Reset@SipcWin32Handle@@QEAAXXZ @ 0x180094CA0 (-Reset@SipcWin32Handle@@QEAAXXZ.c)
 *     ?EnableSectionEvents@SipcPort@@QEAAXXZ @ 0x18010CE40 (-EnableSectionEvents@SipcPort@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall SipcEndpoint::Disconnect(SipcEndpoint *this)
{
  if ( *((_BYTE *)this + 60) )
  {
    SipcPort::EnableSectionEvents(*((SipcPort **)this + 2));
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 8LL))(*((_QWORD *)this + 2));
    SipcWin32Handle::Reset((void **)this + 3);
    SipcWin32Handle::Reset((void **)this + 4);
    *((_DWORD *)this + 16) = 0;
    *((_BYTE *)this + 60) = 0;
  }
}
