/*
 * XREFs of ?QueryInterface@VirtualTouchpadControllerProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180136000
 * Callers:
 *     ?QueryInterface@VirtualTouchpadControllerProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801360E0 (-QueryInterface@VirtualTouchpadControllerProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@VirtualTouchpadControllerProxy@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801360F0 (-QueryInterface@VirtualTouchpadControllerProxy@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@VirtualTouchpadControllerProxy@@WII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180136110 (-QueryInterface@VirtualTouchpadControllerProxy@@WII@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall VirtualTouchpadControllerProxy::QueryInterface(
        VirtualTouchpadControllerProxy *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v4; // rax
  unsigned int v6; // ebx
  __int64 v8; // rax
  __int64 v9; // rax
  void *v10; // rdx

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ae83b6cb_def2_49fe_9564_e870d32281a5.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ae83b6cb_def2_49fe_9564_e870d32281a5.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ae83b6cb_def2_49fe_9564_e870d32281a5.Data4;
  v6 = 0;
  if ( !v4 )
  {
    (**((void (__fastcall ***)(char *))this + 2))((char *)this + 16);
    *a3 = (void *)(((unsigned __int64)this + 128) & -(__int64)(this != 0LL));
    return 0LL;
  }
  v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v8 )
    goto LABEL_12;
  v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e1df5cf1_7b02_2923_3169_44209f8d749f.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e1df5cf1_7b02_2923_3169_44209f8d749f.Data1 )
    v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e1df5cf1_7b02_2923_3169_44209f8d749f.Data4;
  if ( v9 )
  {
    *a3 = 0LL;
  }
  else
  {
LABEL_12:
    v10 = (void *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    *a3 = v10;
    if ( v10 )
    {
      (**(void (__fastcall ***)(VirtualTouchpadControllerProxy *))this)(this);
      return v6;
    }
  }
  return (unsigned int)-2147467262;
}
