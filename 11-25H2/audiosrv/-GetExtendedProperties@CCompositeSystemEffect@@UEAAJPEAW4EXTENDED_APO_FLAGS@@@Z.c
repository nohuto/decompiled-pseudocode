/*
 * XREFs of ?GetExtendedProperties@CCompositeSystemEffect@@UEAAJPEAW4EXTENDED_APO_FLAGS@@@Z @ 0x1800689C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800A6DDC (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCompositeSystemEffect::GetExtendedProperties(
        CCompositeSystemEffect *this,
        enum EXTENDED_APO_FLAGS *a2)
{
  int (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rbx
  int v5; // ebx
  __int64 v7; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)a2 = 0;
  v8 = 0LL;
  if ( *((int *)this + 24) <= 0 )
  {
    ATL::_AtlRaiseException(0xC000008C, (unsigned int)a2);
    JUMPOUT(0x180068A7BLL);
  }
  v3 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))**((_QWORD **)this + 11);
  v4 = **v3;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v8);
  if ( v4(v3, &GUID_69e1f79f_6eae_4517_be9f_13aa90e30014, &v8) < 0
    || (v5 = (*(__int64 (__fastcall **)(__int64, enum EXTENDED_APO_FLAGS *))(*(_QWORD *)v8 + 24LL))(v8, a2), v5 >= 0) )
  {
    v7 = v8;
    if ( v8 )
    {
      v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    return 0LL;
  }
  else
  {
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v8);
    return (unsigned int)v5;
  }
}
