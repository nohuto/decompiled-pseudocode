/*
 * XREFs of ?QueryInterface@Win32kInterop@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F1B00
 * Callers:
 *     ?QueryInterface@Win32kInterop@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F1BA0 (-QueryInterface@Win32kInterop@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@Win32kInterop@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F1BB0 (-QueryInterface@Win32kInterop@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Win32kInterop::QueryInterface(Win32kInterop *this, const struct _GUID *a2, void **a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rax

  *a3 = 0LL;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_926e5c0a_e098_4251_b8a0_a0fe0969e75f.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_926e5c0a_e098_4251_b8a0_a0fe0969e75f.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_926e5c0a_e098_4251_b8a0_a0fe0969e75f.Data4;
  if ( !v5 )
  {
    (*(void (__fastcall **)(Win32kInterop *))(*(_QWORD *)this + 8LL))(this);
    v6 = (unsigned __int64)this + 8;
LABEL_9:
    *a3 = (void *)(v6 & -(__int64)(this != 0LL));
    return 0LL;
  }
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v7 )
  {
    (*(void (__fastcall **)(Win32kInterop *))(*(_QWORD *)this + 8LL))(this);
    v6 = (unsigned __int64)this + 16;
    goto LABEL_9;
  }
  return 2147500034LL;
}
