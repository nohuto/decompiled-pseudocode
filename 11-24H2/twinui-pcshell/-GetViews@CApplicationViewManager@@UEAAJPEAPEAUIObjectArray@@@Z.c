/*
 * XREFs of ?GetViews@CApplicationViewManager@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x18008F650
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x18008FA98 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?RefreshCollection@CApplicationViewManager@@UEAAJXZ @ 0x18008FE20 (-RefreshCollection@CApplicationViewManager@@UEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationViewManager::GetViews(RTL_SRWLOCK *this, struct IObjectArray **a2)
{
  const struct _GUID *v4; // rdx
  int v5; // ecx
  int v6; // eax
  unsigned int v7; // ebx
  char *i; // rdi
  int v9; // eax
  unsigned int v10; // ebp
  void *v11; // rcx
  void *v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v15; // [rsp+48h] [rbp+10h] BYREF
  RTL_SRWLOCK *v16; // [rsp+50h] [rbp+18h]

  *a2 = 0LL;
  v15 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
  v6 = CEnumerableObjectCollection::CreateInstance(v5, v4, &v15);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x91,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v6);
    v13 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 16LL))(v13);
    }
    return v7;
  }
  else
  {
    v16 = this + 49;
    AcquireSRWLockShared(this + 49);
    for ( i = 0LL; i < this[51].Ptr; ++i )
    {
      v9 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v15 + 40LL))(
             v15,
             *((_QWORD *)this[50].Ptr + (_QWORD)i));
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x98,
          (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v9);
        if ( this != (RTL_SRWLOCK *)-392LL )
          ReleaseSRWLockShared(this + 49);
        v11 = v15;
        if ( v15 )
        {
          v15 = 0LL;
          (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
        }
        return v10;
      }
    }
    if ( this != (RTL_SRWLOCK *)-392LL )
      ReleaseSRWLockShared(this + 49);
    CApplicationViewManager::RefreshCollection((CApplicationViewManager *)this);
    *a2 = (struct IObjectArray *)v15;
    return 0LL;
  }
}
