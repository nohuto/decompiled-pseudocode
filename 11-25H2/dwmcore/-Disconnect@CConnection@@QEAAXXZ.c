/*
 * XREFs of ?Disconnect@CConnection@@QEAAXXZ @ 0x180266FFC
 * Callers:
 *     ?MilCompositionEngine_Uninitialize@@YAJPEAUHMIL_CONNECTION__@@@Z @ 0x180264580 (-MilCompositionEngine_Uninitialize@@YAJPEAUHMIL_CONNECTION__@@@Z.c)
 *     ??1CConnection@@UEAA@XZ @ 0x180266F34 (--1CConnection@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CConnection::Disconnect(CConnection *this)
{
  _QWORD *v1; // rbx
  void *v3; // rax

  v1 = (_QWORD *)((char *)this + 8);
  if ( *((_BYTE *)this + 24) )
  {
    *((_BYTE *)this + 24) = 0;
    v3 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 32LL))(*v1);
    SetEvent(v3);
    WaitForSingleObject(*((HANDLE *)this + 4), 0xFFFFFFFF);
  }
  if ( *v1 )
  {
    (**(void (__fastcall ***)(_QWORD, __int64))*v1)(*v1, 1LL);
    *v1 = 0LL;
  }
}
