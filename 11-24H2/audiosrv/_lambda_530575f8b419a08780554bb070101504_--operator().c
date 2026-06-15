/*
 * XREFs of _lambda_530575f8b419a08780554bb070101504_::operator() @ 0x180017008
 * Callers:
 *     ?ForEachStream@CBaseStreamGroupProxy@@UEAAXV?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x180016E30 (-ForEachStream@CBaseStreamGroupProxy@@UEAAXV-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall lambda_530575f8b419a08780554bb070101504_::operator()(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rdi
  int v5; // eax
  int (__fastcall **v6)(_QWORD *, GUID *, __int64 *); // rax
  _QWORD *v7; // rcx
  int (__fastcall *v9)(_QWORD *, GUID *, __int64 *); // rbx
  __int64 v10; // rbx
  void (__fastcall *v11)(__int64, _BYTE *); // rdi
  __int64 (__fastcall ***v12)(_QWORD, _BYTE *); // rcx
  __int64 v13; // rcx
  _BYTE v14[56]; // [rsp+28h] [rbp-48h] BYREF
  __int64 v15; // [rsp+60h] [rbp-10h]
  _QWORD *v16; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v17; // [rsp+B8h] [rbp+48h] BYREF

  v16 = 0LL;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v16);
  v4 = 0LL;
  v16 = 0LL;
  if ( *a2 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD **))(*(_QWORD *)*a2 + 24LL))(
           *a2,
           &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
           &v16);
    v4 = v16;
  }
  else
  {
    v5 = 0;
  }
  if ( v5 >= 0 && v4 )
  {
    v17 = 0LL;
    v9 = *(int (__fastcall **)(_QWORD *, GUID *, __int64 *))*v4;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v17);
    if ( v9(v4, &GUID_6fa8c0b3_a926_48af_a753_f702dad2b4f0, &v17) < 0 )
    {
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v17);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v16);
      return Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(a2);
    }
    v10 = v17;
    v11 = *(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v17 + 216LL);
    v15 = 0LL;
    v12 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a1 + 56);
    if ( v12 )
      v15 = (**v12)(v12, v14);
    v11(v10, v14);
    v13 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    v7 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      v6 = (int (__fastcall **)(_QWORD *, GUID *, __int64 *))*v7;
      goto LABEL_6;
    }
  }
  else if ( v4 )
  {
    v16 = 0LL;
    v6 = (int (__fastcall **)(_QWORD *, GUID *, __int64 *))*v4;
    v7 = v4;
LABEL_6:
    ((void (__fastcall *)(_QWORD *))v6[2])(v7);
  }
  return Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(a2);
}
