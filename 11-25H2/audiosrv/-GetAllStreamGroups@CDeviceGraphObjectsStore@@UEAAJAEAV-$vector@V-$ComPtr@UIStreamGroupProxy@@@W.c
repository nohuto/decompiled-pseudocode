/*
 * XREFs of ?GetAllStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18009FAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18002307C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180023F34 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??$_Construct_in_place@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@AEAV123@@std@@YAXAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@0@Z @ 0x1800A65D4 (--$_Construct_in_place@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@AEAV123@@std@@YAXAEAV-$ComP.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800C61A8 (--$_Emplace_reallocate@AEBV-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UISt.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CDeviceGraphObjectsStore::GetAllStreamGroups(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 *v5; // rdi
  __int64 v7; // rbx
  int v8; // eax
  const char *v9; // r9
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v5 = *(__int64 **)(a1 + 72);
  while ( v5 != *(__int64 **)(a1 + 80) )
  {
    try
    {
      v7 = *v5;
      v14 = v7;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      v12 = 0LL;
      v8 = Microsoft::WRL::WeakRef::As<IInspectable>(&v14, (__int64 *)&v12);
      v10 = v12;
      if ( v8 >= 0 && v12 )
      {
        v13 = 0LL;
        if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v12, &v13) >= 0 )
        {
          if ( *(_QWORD *)(a2 + 8) == *(_QWORD *)(a2 + 16) )
          {
            std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IStreamGroupProxy> const &>(
              a2,
              *(_QWORD *)(a2 + 8),
              &v13);
          }
          else
          {
            std::_Construct_in_place<Microsoft::WRL::ComPtr<IStreamGroupProxy>,Microsoft::WRL::ComPtr<IStreamGroupProxy> &>(
              *(_QWORD *)(a2 + 8),
              &v13);
            *(_QWORD *)(a2 + 8) += 8LL;
          }
        }
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v13);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v12);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v14);
      }
      else
      {
        if ( v12 )
        {
          v12 = 0LL;
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v10)[2])(v10);
        }
        if ( v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      ++v5;
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x26A,
                             (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                             v9);
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
