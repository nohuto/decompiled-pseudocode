/*
 * XREFs of ?RemoveViewClient@LampArrayDevice@@QEAA_NPEAULampArrayEndpoint@@@Z @ 0x1800E50A4
 * Callers:
 *     ?OnSipcEndpointStatus@LampArrayRawInputProvider@@CAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@PEAX@Z @ 0x180086550 (-OnSipcEndpointStatus@LampArrayRawInputProvider@@CAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@P.c)
 * Callees:
 *     ??_GViewClientListEntry@LampArrayDevice@@QEAAPEAXI@Z @ 0x1800E4CC0 (--_GViewClientListEntry@LampArrayDevice@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall LampArrayDevice::RemoveViewClient(LampArrayDevice *this, struct LampArrayEndpoint *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  char v4; // bp
  LampArrayDevice::ViewClientListEntry *i; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  LampArrayDevice::ViewClientListEntry *v11; // rcx
  LampArrayDevice::ViewClientListEntry **v12; // rax

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  v4 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  for ( i = (LampArrayDevice::ViewClientListEntry *)*((_QWORD *)this + 4);
        i != (LampArrayDevice *)((char *)this + 32);
        i = *(LampArrayDevice::ViewClientListEntry **)i )
  {
    v7 = *((_QWORD *)i + 2);
    if ( v7 == *(_QWORD *)a2 )
    {
      v8 = *((_QWORD *)this + 13);
      v9 = *((_QWORD *)i + 2);
      if ( v8 && v7 == *(_QWORD *)(v8 + 16) )
      {
        *((_QWORD *)this + 13) = 0LL;
        v9 = *((_QWORD *)i + 2);
      }
      v10 = *((_QWORD *)this + 12);
      if ( v10 && v9 == *(_QWORD *)(v10 + 16) )
      {
        *((_QWORD *)this + 12) = 0LL;
        v4 = 1;
      }
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)i + 2) + 48LL))(*((_QWORD *)i + 2), *((_QWORD *)i + 4));
      v11 = *(LampArrayDevice::ViewClientListEntry **)i;
      if ( *(LampArrayDevice::ViewClientListEntry **)(*(_QWORD *)i + 8LL) != i
        || (v12 = (LampArrayDevice::ViewClientListEntry **)*((_QWORD *)i + 1), *v12 != i) )
      {
        __fastfail(3u);
      }
      *v12 = v11;
      *((_QWORD *)v11 + 1) = v12;
      --*((_DWORD *)this + 12);
      LampArrayDevice::ViewClientListEntry::`scalar deleting destructor'(i);
      break;
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v4;
}
