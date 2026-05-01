/*
 * XREFs of ?ExcludeWindowFromCapture@AccessibilityExperienceManager@@AEAA_NXZ @ 0x18048F094
 * Callers:
 *     ?_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ @ 0x1804904A8 (-_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall AccessibilityExperienceManager::ExcludeWindowFromCapture(
        AccessibilityExperienceManager *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // di
  __int64 v5; // rax
  __int64 v6; // rsi
  int (__fastcall *v7)(__int64, __int64 *); // rbx
  char v8; // si
  int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  __int128 v14; // [rsp+20h] [rbp-30h] BYREF
  __int64 v15; // [rsp+30h] [rbp-20h]
  __int128 v16; // [rsp+38h] [rbp-18h]
  __int64 v17; // [rsp+48h] [rbp-8h]
  int v18; // [rsp+70h] [rbp+20h] BYREF
  __int64 v19; // [rsp+78h] [rbp+28h] BYREF
  __int64 v20; // [rsp+80h] [rbp+30h] BYREF

  v4 = 0;
  v19 = 0LL;
  v5 = 0LL;
  v20 = 0LL;
  v6 = *((_QWORD *)this + 47);
  if ( v6 )
  {
    v7 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 32LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
    if ( v7(v6, &v19) < 0 || (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 24LL))(v19, &v20) < 0 )
      goto LABEL_9;
    v5 = v20;
  }
  v8 = 1;
  v18 = 1;
  *(_QWORD *)&v14 = 25LL;
  *((_QWORD *)&v14 + 1) = &v18;
  v15 = 4LL;
  v9 = SetWindowCompositionAttribute(v5, &v14, a3, a4);
  *(_QWORD *)&v16 = 24LL;
  *((_QWORD *)&v16 + 1) = &v18;
  v17 = 4LL;
  v14 = v16;
  v15 = 4LL;
  v12 = SetWindowCompositionAttribute(v20, &v14, v10, v11);
  if ( !v9 || !v12 )
    v8 = 0;
  v4 = v8;
LABEL_9:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
  return v4;
}
