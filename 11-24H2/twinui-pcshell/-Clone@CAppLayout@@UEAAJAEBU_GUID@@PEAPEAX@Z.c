/*
 * XREFs of ?Clone@CAppLayout@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800774F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z @ 0x180077634 (-CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayout::Clone(RTL_SRWLOCK *this, const struct _GUID *a2, void **a3)
{
  RTL_SRWLOCK *v6; // rbp
  const struct _GUID *v7; // rdx
  int v8; // ebx
  PVOID Ptr; // r15
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, __int64 *); // rbx
  void *v14; // [rsp+70h] [rbp+8h] BYREF
  __int64 v15; // [rsp+80h] [rbp+18h] BYREF

  *a3 = 0LL;
  v6 = this + 2;
  AcquireSRWLockShared(this + 2);
  v14 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
  v8 = CAppLayout_CreateInstance((const struct LAYOUT_ENVIRONMENT_DETAILS *)&this[3], v7, &v14);
  if ( v8 >= 0 )
  {
    Ptr = this[9].Ptr;
    v11 = 0LL;
    if ( Ptr )
    {
      while ( v8 >= 0 )
      {
        v15 = 0LL;
        v12 = *((_QWORD *)this[8].Ptr + v11);
        v13 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 88LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
        v8 = v13(v12, &v15);
        if ( v8 >= 0 )
          v8 = (*(__int64 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)v14 + 224LL))(v14, v15, 1LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
        if ( ++v11 >= (unsigned __int64)Ptr )
        {
          if ( v8 >= 0 )
            goto LABEL_6;
          break;
        }
      }
    }
    else
    {
LABEL_6:
      v8 = (**(__int64 (__fastcall ***)(void *, const struct _GUID *, void **))v14)(v14, a2, a3);
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return (unsigned int)v8;
}
