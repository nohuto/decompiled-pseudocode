/*
 * XREFs of _lambda_8ea9f2c5e3a9fcb3919d37e759784c23_::operator() @ 0x1800B30C4
 * Callers:
 *     ?GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatcher@@@Z @ 0x1800B3388 (-GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatche.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800517D0 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall lambda_8ea9f2c5e3a9fcb3919d37e759784c23_::operator()(unsigned int **a1, __int64 *a2)
{
  char v4; // si
  int (__fastcall ***v5)(_QWORD, _QWORD, _QWORD); // rbx
  int (__fastcall *v6)(_QWORD, GUID *, __int64 *); // rdi
  unsigned int *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF
  int (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  v12 = 0LL;
  v11 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(a2, (__int64 *)&v12) >= 0 )
  {
    v5 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v12;
    if ( v12 )
    {
      v6 = **v12;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v11);
      if ( v6(v5, &GUID_48da5782_9a1d_444b_b5d2_aa2dee616db4, &v11) >= 0 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v11 + 24LL))(
               v11,
               **a1,
               *a1[1],
               *a1[2]) )
        {
          v7 = a1[3];
          v8 = *(_QWORD *)v7;
          v9 = v11;
          *(_QWORD *)v7 = v11;
          if ( v9 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
          if ( v8 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
          v4 = 1;
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v11);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v12);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(a2);
  return v4;
}
