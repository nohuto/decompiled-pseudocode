/*
 * XREFs of ?InitialRegisterForThread@GraphStreamingResourceManager@@EEAAJPEAXPEAU_t@HandleRegistrations@1@@Z @ 0x140044BD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GraphStreamingResourceManager::InitialRegisterForThread(
        GraphStreamingResourceManager *this,
        void *a2,
        struct GraphStreamingResourceManager::HandleRegistrations::_t *a3)
{
  HANDLE CurrentProcess; // rbx
  HANDLE v7; // rax
  signed int LastError; // eax
  signed int v9; // ebx
  __int64 v11; // rcx
  HANDLE v12; // rax
  __int64 v13; // rax
  _QWORD v14[3]; // [rsp+40h] [rbp-18h] BYREF
  HANDLE TargetHandle; // [rsp+78h] [rbp+20h] BYREF

  TargetHandle = 0LL;
  v14[0] = 0LL;
  CurrentProcess = GetCurrentProcess();
  v7 = GetCurrentProcess();
  if ( DuplicateHandle(v7, a2, CurrentProcess, &TargetHandle, 0x400u, 0, 0) )
  {
    v11 = *((_QWORD *)this + 35);
    if ( !v11
      || (v9 = (*(__int64 (__fastcall **)(__int64, HANDLE, _QWORD *))(*(_QWORD *)v11 + 48LL))(v11, TargetHandle, v14),
          v9 >= 0) )
    {
      v12 = TargetHandle;
      TargetHandle = 0LL;
      *(_QWORD *)a3 = v12;
      v13 = v14[0];
      v14[0] = 0LL;
      v9 = 0;
      *((_QWORD *)a3 + 1) = v13;
    }
  }
  else
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
  }
  if ( TargetHandle )
    CloseHandle(TargetHandle);
  return (unsigned int)v9;
}
