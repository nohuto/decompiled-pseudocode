/*
 * XREFs of ?KeyDown@CMultitaskingViewFrameElement@@UEAA_NIW4ModifierKeys@@@Z @ 0x1804CBD90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_ShouldHandleKey@CMultitaskingViewFrameElement@@AEAA_NI@Z @ 0x1804CD650 (-_ShouldHandleKey@CMultitaskingViewFrameElement@@AEAA_NI@Z.c)
 *     AsyncFrameEvents::_NotifyFrameEvent__lambda_1cc7c4a545a2c54b98f9c323f6c45fc2___ @ 0x1804CDE10 (AsyncFrameEvents--_NotifyFrameEvent__lambda_1cc7c4a545a2c54b98f9c323f6c45fc2___.c)
 *     AsyncFrameEvents::_NotifyFrameEvent__lambda_4c1352802533852b573d4ad647ba047a___ @ 0x1804CDF20 (AsyncFrameEvents--_NotifyFrameEvent__lambda_4c1352802533852b573d4ad647ba047a___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CMultitaskingViewFrameElement::KeyDown(
        CMultitaskingViewFrameElement *a1,
        unsigned int a2,
        unsigned int a3)
{
  __int64 v6; // rcx
  char v8; // bp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // ebx
  __int64 v13; // r9
  __int64 v14; // rcx
  int v15; // [rsp+50h] [rbp+8h] BYREF
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  v6 = *((_QWORD *)a1 + 71);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 80LL))(v6);
    return 1;
  }
  else
  {
    if ( a2 == 9 || a2 - 37 <= 3 )
      (*(void (__fastcall **)(__int64, __int64, __int64))(*((_QWORD *)a1 + 26) + 24LL))((__int64)a1 + 208, 1LL, 1LL);
    v8 = 0;
    if ( CMultitaskingViewFrameElement::_ShouldHandleKey(a1, a2) )
    {
      if ( a2 == 27 )
      {
        AsyncFrameEvents::_NotifyFrameEvent__lambda_1cc7c4a545a2c54b98f9c323f6c45fc2___(*((_QWORD *)a1 + 37));
      }
      else if ( a2 == 9 )
      {
        v11 = *((_QWORD *)a1 + 21);
        v12 = a3 & 4;
        if ( v11 )
          v13 = (unsigned int)(v12 != 0) + 5;
        else
          v13 = (unsigned int)(v12 != 0) + 7;
        (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64, _DWORD))(*(_QWORD *)a1 + 272LL))(
          v10,
          &v16,
          v11,
          v13,
          0);
        (*(void (__fastcall **)(CMultitaskingViewFrameElement *, __int64))(*(_QWORD *)a1 + 288LL))(a1, v16);
        if ( !v16 )
        {
          v15 = (v12 != 0) + 5;
          AsyncFrameEvents::_NotifyFrameEvent__lambda_4c1352802533852b573d4ad647ba047a___(*((_QWORD *)a1 + 37), &v15);
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
      }
      return 1;
    }
    else
    {
      v14 = *((_QWORD *)a1 + 21);
      if ( v14 )
      {
        v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v14 + 240LL))(v14, v9, a3);
        if ( !v8 && a2 == 13 && !a3 )
          AsyncFrameEvents::_NotifyFrameEvent__lambda_1cc7c4a545a2c54b98f9c323f6c45fc2___(*((_QWORD *)a1 + 37));
      }
    }
    return v8;
  }
}
