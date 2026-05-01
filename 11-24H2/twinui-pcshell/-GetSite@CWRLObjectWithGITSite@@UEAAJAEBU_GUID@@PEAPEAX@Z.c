/*
 * XREFs of ?GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C9A00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWRLObjectWithGITSite::GetSite(RTL_SRWLOCK *this, const struct _GUID *a2, void **a3)
{
  unsigned int v6; // ebp
  __int64 (__fastcall ***Ptr)(_QWORD, const struct _GUID *, void **); // rcx
  HRESULT v8; // ebx
  struct IGlobalInterfaceTable *v10; // rcx
  LPVOID v11; // rcx
  LPVOID ppv; // [rsp+50h] [rbp+8h] BYREF

  *a3 = 0LL;
  v6 = 0;
  AcquireSRWLockShared(this + 2);
  Ptr = (__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **))this[4].Ptr;
  if ( Ptr )
  {
    v8 = (**Ptr)(Ptr, a2, a3);
  }
  else
  {
    v8 = -2147467259;
    v6 = (unsigned int)this[3].Ptr;
  }
  ReleaseSRWLockShared(this + 2);
  if ( v6 )
  {
    *a3 = 0LL;
    v8 = 0;
    v10 = GlobalInterfaceTable::s_pGlobalInterfaceTable;
    if ( !GlobalInterfaceTable::s_pGlobalInterfaceTable )
    {
      ppv = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
      v8 = CoCreateInstance(&CLSID_StdGlobalInterfaceTable, 0LL, 1u, &GUID_00000146_0000_0000_c000_000000000046, &ppv);
      if ( v8 < 0
        || _InterlockedCompareExchange64(
             (volatile signed __int64 *)&GlobalInterfaceTable::s_pGlobalInterfaceTable,
             (signed __int64)ppv,
             0LL) )
      {
        v11 = ppv;
      }
      else
      {
        v11 = 0LL;
        ppv = 0LL;
      }
      if ( v11 )
      {
        ppv = 0LL;
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v11 + 16LL))(v11);
      }
      v10 = GlobalInterfaceTable::s_pGlobalInterfaceTable;
    }
    if ( v8 >= 0 )
      return ((unsigned int (__fastcall *)(struct IGlobalInterfaceTable *, _QWORD, const struct _GUID *, void **))v10->lpVtbl->GetInterfaceFromGlobal)(
               v10,
               v6,
               a2,
               a3);
  }
  return (unsigned int)v8;
}
