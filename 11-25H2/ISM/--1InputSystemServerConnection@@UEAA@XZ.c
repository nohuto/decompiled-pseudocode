/*
 * XREFs of ??1InputSystemServerConnection@@UEAA@XZ @ 0x180112934
 * Callers:
 *     ??_GInputSystemServerConnection@@UEAAPEAXI@Z @ 0x180112EC0 (--_GInputSystemServerConnection@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall InputSystemServerConnection::~InputSystemServerConnection(InputSystemServerConnection *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 31);
  if ( v2 )
  {
    *((_QWORD *)this + 31) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  Microsoft::BamoImpl::BaseBamoConnectionImpl::~BaseBamoConnectionImpl((InputSystemServerConnection *)((char *)this + 8));
}
