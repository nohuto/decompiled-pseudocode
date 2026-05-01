/*
 * XREFs of ?GetAllApplicationsByHostId@CImmersiveAppArray@@UEAAJ_KPEAPEAUIObjectArray@@@Z @ 0x18008F920
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x18008FA98 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CImmersiveAppArray::GetAllApplicationsByHostId(
        CImmersiveAppArray *this,
        __int64 a2,
        struct IObjectArray **a3)
{
  char v6; // r14
  const struct _GUID *v7; // rdx
  int v8; // ecx
  int v9; // edi
  void *v10; // rcx
  char *v12; // r12
  unsigned int v13; // esi
  int (__fastcall *v14)(char *, _QWORD, GUID *, __int64 *); // rbx
  __int64 v15; // rcx
  __int64 v16; // [rsp+30h] [rbp-10h] BYREF
  void *v17; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v18; // [rsp+90h] [rbp+50h] BYREF
  int v19; // [rsp+98h] [rbp+58h] BYREF

  *a3 = 0LL;
  v6 = 0;
  v17 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
  v9 = CEnumerableObjectCollection::CreateInstance(v8, v7, &v17);
  if ( v9 >= 0 )
  {
    v18 = 0;
    v12 = (char *)this - 8;
    v9 = (*(__int64 (__fastcall **)(char *, unsigned int *))(*((_QWORD *)this - 1) + 24LL))((char *)this - 8, &v18);
    v13 = 0;
    if ( v9 >= 0 )
    {
      while ( v13 < v18 )
      {
        v19 = 0;
        v16 = 0LL;
        v14 = *(int (__fastcall **)(char *, _QWORD, GUID *, __int64 *))(*(_QWORD *)v12 + 32LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
        if ( v14(v12, v13, &GUID_b00297dd_eb90_48c8_99c0_f0b2d68213d3, &v16) >= 0
          && (*(int (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v16 + 32LL))(v16, a2, &v19) >= 0
          && v19 )
        {
          v9 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v17 + 40LL))(v17, v16);
          v6 = 1;
        }
        v15 = v16;
        if ( v16 )
        {
          v16 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
        ++v13;
        if ( v9 < 0 )
          goto LABEL_2;
      }
      if ( v6 )
        v9 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IObjectArray **))v17)(
               v17,
               &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
               a3);
      else
        v9 = -2147319765;
    }
  }
LABEL_2:
  v10 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return (unsigned int)v9;
}
